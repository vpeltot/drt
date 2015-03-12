<?php

function darty_sondage_deliver_cache($page_callback_result) {
    drupal_add_http_header('Cache-Control', 'public, max-age=' . variable_get('page_cache_maximum_age', 0));
    $content = is_string($page_callback_result) ? $page_callback_result : drupal_render($page_callback_result);
    print $content;
    ajax_footer();
}

function darty_sondage_deliver($page_callback_result) {
    drupal_add_http_header('Cache-Control', 'public, max-age=0');
    $content = is_string($page_callback_result) ? $page_callback_result : drupal_render($page_callback_result);
    print $content;
    ajax_footer();
}

function list_sondage_encours() {
    $query = db_select('node', 'n');
    $query->leftjoin('field_data_field_sondage_archive', 'sa', 'n.nid = sa.entity_id');
    $query->condition(db_or()->condition('sa.field_sondage_archive_value', '0', '=')->isNull('sa.field_sondage_archive_value'));

    $query->join('field_data_field_sondage_datedeb', 'db', 'n.nid = db.entity_id');
    $query->join('field_data_field_sondage_datefin', 'df', 'n.nid = df.entity_id');

    $query->condition('n.type', 'sondage', '='); // 2592000
    $query->condition('db.field_sondage_datedeb_value', time(), '<=');
    $query->condition('df.field_sondage_datefin_value', time(), '>=');
    $query->fields('n', array('nid'));
    $query->fields('sa', array('field_sondage_archive_value'));

    $query->condition('status', 1, '=');
    $query->range(0, variable_get('sondages_tls_sondage_encours_par_page', 6));
    $query->orderBy('db.field_sondage_datedeb_value', 'DESC');
    $result = $query->execute();

    $idsNode = array();
    while (
    $record = $result->fetchAssoc()) {
        $idsNode[] = $record['nid'];
    }
    $nodes = node_load_multiple($idsNode);
    return $nodes;
}

function list_sondage_termines_count() {
    $query = db_select('node', 'n');
    $query->join('field_data_field_sondage_datedeb', 'db', 'n.nid = db.entity_id');
    $query->join('field_data_field_sondage_datefin', 'df', 'n.nid = df.entity_id');
    $query->leftjoin('field_data_field_sondage_archive', 'sa', 'n.nid = sa.entity_id');
    $query->condition(db_or()->condition('sa.field_sondage_archive_value', '0', '=')->isNull('sa.field_sondage_archive_value'));
    $query->condition('n.type', 'sondage', '=');
    $query->condition('db.field_sondage_datedeb_value', time(), '<');
    $query->condition('df.field_sondage_datefin_value', time(), '<');
    $query->fields('n', array('nid'));

    $query->condition('status', 1, '=');
    $result = $query->execute();
    return $result->rowCount();
}

function list_sondage_termines($page) {
    $query = db_select('node', 'n');
    $query->join('field_data_field_sondage_datedeb', 'db', 'n.nid = db.entity_id');
    $query->join('field_data_field_sondage_datefin', 'df', 'n.nid = df.entity_id');
    $query->leftjoin('field_data_field_sondage_archive', 'sa', 'n.nid = sa.entity_id');
    $query->condition(db_or()->condition('sa.field_sondage_archive_value', '0', '=')->isNull('sa.field_sondage_archive_value'));
    $query->condition('n.type', 'sondage', '=');
    $query->condition('db.field_sondage_datedeb_value', time(), '<');
    $query->condition('df.field_sondage_datefin_value', time(), '<');

    $query->fields('n', array('nid'));

    $query->condition('status', 1, '=');
    $nb_sondage_max = variable_get('sondages_tls_sondage_termine_par_page', 9);
    $query->range($nb_sondage_max * ($page - 1), $nb_sondage_max);

    $query->orderBy('df.field_sondage_datefin_value', 'DESC');
    $result = $query->execute();

    $idsNode = array();
    while (
    $record = $result->fetchAssoc()) {
        $idsNode[] = $record['nid'];
    }
    $nodes = node_load_multiple($idsNode);
    return $nodes;
}

function sondages_termines_paginate($page) {
    global $base_path;
    $output = "<div class='pagination-wrapper'><div class='pagination'>";
    $total = list_sondage_termines_count();
    $nb_sondage_max = variable_get('sondages_tls_sondage_termine_par_page', 9);
    $last_page = ceil($total / $nb_sondage_max);
    if ($last_page == 1)
        return '';
    if ($last_page <= 5) {
        for ($i = 1; $i <= $last_page; $i++)
            $output .= "<span data='" . $i . "' class='" . (($i == $page) ? 'active' : '') . "'>" . $i . "</span>";
    } else {
        if ($page != 1) {
            $output .= "<span data='1' class='arrow arrow2 left'><<</span><span data='" . ($page - 1) . "' class='arrow arrow1 left'><</span>";
        }
        if ($page < 3) {
            $output .= "<span data='1' class='" . ((1 == $page) ? 'active' : '') . "'>1</span><span data='2' class='" . ((2 == $page) ? 'active' : '') . "'>2</span><span data='3' class='" . ((3 == $page) ? 'active' : '') . "'>3</span><span data='4' class='" . ((4 == $page) ? 'active' : '') . "'>4</span><span data='5' class='" . ((5 == $page) ? 'active' : '') . "'>5</span>";
        } elseif ($page == ($last_page - 1)) {
            $output .= "<span data='" . ($page - 3) . "'>" . ($page - 3) . "</span><span data='" . ($page - 2) . "'>" . ($page - 2) . "</span><span data='" . ($page - 1) . "'>" . ($page - 1) . "</span><span data='" . ($page) . "' class='active'>" . $page . "</span><span data='" . ($page + 1) . "'>" . ($page + 1) . "</span>";
        } elseif ($page == $last_page) {

            $output .= "<span data='" . ($page - 4) . "'>" . ($page - 4) . "</span><span data='" . ($page - 3) . "'>" . ($page - 3) . "</span><span data='" . ($page - 2) . "'>" . ($page - 2) . "</span><span data='" . ($page - 1) . "'>" . ($page - 1) . "</span><span data='" . ($page) . "' class='active'>" . $page . "</span>";
        } else {
            $output .= "<span data='" . ($page - 2) . "'>" . ($page - 2) . "</span><span data='" . ($page - 1) . "'>" . ($page - 1) . "</span><span data='" . ($page) . "' class='active'>" . $page . "</span><span data='" . ($page + 1) . "'>" . ($page + 1) . "</span><span data='" . ($page + 2) . "'>" . ($page + 2) . "</span>";
        }
        if ($page != $last_page) {
            $output .= "<span data='" . ($page + 1) . "' class='arrow arrow1 right'>></span> <span data='" . $last_page . "' class='arrow arrow2 right'>>></span>";
        }
    }
    $output .= '</div></div>';
    $output .= "<script type='text/javascript'>sondage_tls_paginate('" . $base_path . "');</script>";
    return $output;
}

function getAnswerSondageForUser($nid, $uid) {
    if ($uid == 0) {
        $sid = $_COOKIE['sid_dv'];
//        if (isset($_COOKIE['sid_dv'])) {
//            $sid = $_COOKIE['sid_dv'];
//            if ($nid == 631)
//            echo 'recup'.$sid;
//        } else {
//            $sid = uniqid();
//            if ($nid == 631)
//            echo 'generate'.$sid;
//            setcookie('sid_dv', $sid, 32536000);
//            $_COOKIE['sid_dv'] = $sid;
//        }
        $result = db_query('SELECT nid,uid,value,date FROM sondage where sid = :sid and nid=:nid', array(':sid' => $sid, ':nid' => $nid));
    } else {
        $result = db_query('SELECT nid,uid,value,date FROM sondage where uid=:uid and nid=:nid', array(':uid' => $uid, ':nid' => $nid));
    }
    return $result->rowCount();
}

function isQuestionCurrent($nid) {
    $query = db_select('node', 'n');
    $query->leftjoin('field_data_field_sondage_archive', 'sa', 'n.nid = sa.entity_id');
    $query->condition(db_or()->condition('sa.field_sondage_archive_value', '0', '=')->isNull('sa.field_sondage_archive_value'));

    $query->join('field_data_field_sondage_datedeb', 'db', 'n.nid = db.entity_id');
    $query->join('field_data_field_sondage_datefin', 'df', 'n.nid = df.entity_id');

    $query->condition('n.type', 'sondage', '='); // 2592000
    $query->condition('db.field_sondage_datedeb_value', time(), '<=');
    $query->condition('df.field_sondage_datefin_value', time(), '>=');
    $query->fields('n', array('nid'));

    $query->condition('status', 1, '=');
    $query->condition('n.nid', $nid, '=');
    $result = $query->execute();
    return $result->rowCount();
}

function getResultSondage($nid) {
    $query = db_select('sondage', 's');
    $query->addExpression('COUNT(value)', 'count');
    //$query->condition('n.type', 'sondage', '='); // 2592000

    $query->fields('s', array('value'));
    $query->groupBy('value');
    $query->condition('s.nid', $nid, '=');
    $query->orderBy('value', 'ASC');
    $result = $query->execute();
    $result_tab = $result->fetchAll();
    $total = 0;
    $out = array();
    foreach ($result_tab as $r) {
        $out['result'][$r->value] = $r->count;
        $total += $r->count;
    }
    $out['total'] = $total;
    return $out;
}