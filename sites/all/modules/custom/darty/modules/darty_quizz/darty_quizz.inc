<?php

function darty_quizz_deliver_cache($page_callback_result) {
    drupal_add_http_header('Cache-Control', 'public, max-age=' . variable_get('page_cache_maximum_age', 0));
    $content = is_string($page_callback_result) ? $page_callback_result : drupal_render($page_callback_result);
    print $content;
    ajax_footer();
}

function darty_quizz_deliver($page_callback_result) {
    drupal_add_http_header('Cache-Control', 'public, max-age=0');
    $content = is_string($page_callback_result) ? $page_callback_result : drupal_render($page_callback_result);
    print $content;
    ajax_footer();
}
function getBidsQuestions($node){
    $tab = array();
    if (isset($node->field_quizz_questions) && !empty($node->field_quizz_questions[LANGUAGE_NONE])){
        foreach($node->field_quizz_questions[LANGUAGE_NONE] as $item){
            $tab[] = $item['target_id'];
        }
    }
    return $tab;
}
function getStepForUser($nid, $uid) {
    if ($uid == 0) {
        $sid = $_COOKIE['sid_dv'];
        $result = db_query('SELECT bid FROM quizz_result where sid = :sid and nid=:nid', array(':sid' => $sid, ':nid' => $nid));
    } else {
        $result = db_query('SELECT bid FROM quizz_result where uid=:uid and nid=:nid', array(':uid' => $uid, ':nid' => $nid));
    }
    $tab = array();
    while($bid = $result->fetchField()){
        $tab[] = $bid; 
    }
    return $tab;
}
function getValueForUser($nid, $uid) {
    if ($uid == 0) {
        $sid = $_COOKIE['sid_dv'];
        $result = db_query('SELECT bid,value FROM quizz_result where sid = :sid and nid=:nid', array(':sid' => $sid, ':nid' => $nid));
    } else {
        $result = db_query('SELECT bid,value FROM quizz_result where uid=:uid and nid=:nid', array(':uid' => $uid, ':nid' => $nid));
    }
    $tab = array();
    while($item = $result->fetchAssoc()){
        $tab[$item['bid']] = $item['value']; 
    }
    return $tab;
}