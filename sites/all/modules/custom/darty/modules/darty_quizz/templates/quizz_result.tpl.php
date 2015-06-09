<div class="resultpage-wrapper">
    <div class="result-wrapper">
        <div class="nbresult-wrapper">
            <div class="youhave">Vous avez</div>
            <div class="nbgoodanswer">
                <div class="nb"><?php print $nb_good_answer; ?></div>
                <div class="goodanswer"><?php print format_plural($nb_good_answer, 'bonne réponse', 'bonnes réponses'); ?></div>
                <div class="clear"></div>
            </div>
        </div>
        <div class="excla"></div>
        <div class="clear"></div>
        <div class="titre"><?php print $result['titre']; ?></div>
        <div class="text">
            <?php print $result['text']; ?>
        </div>
    </div>
    <div class="questions-wrapper">
        <?php foreach ($questions as $question) { ?>
            <div class="question-wrapper  <?php print $question['type']; ?> <?php print ($question['total'] == ($question['position'] + 1)) ? 'last' : ''; ?>">
                <div class="label-question">Question <span class='nb'><?php print ($question['position'] + 1); ?></span></div>
                <?php if (!empty($question['image'])) { ?>
                    <div class="image-wrapper"><img src="<?php print $question['image']['uri']; ?>" alt="<?php print $question['image']['alt']; ?>"/></div>
                <?php } ?>
                <div class="question-div">
                    <div class="titre"><?php print $question['question']; ?></div>
                    <div class="reponses">
                        <div class="reponse-wrapper">
                            <?php foreach ($question['reponses'] as $key => $reponse) { 
                                if (!empty($reponse['texte'])) {?>
                                <div class="answer-wrapper">     
                                    <div class="image">
                                        <?php if (!empty($reponse['image'])) { ?>
                                            <img src="<?php print $reponse['image']['uri']; ?>" alt="<?php print $reponse['image']['alt']; ?>"/>
                                        <?php } ?>
                                    </div>
                                    <?php
                                    $answer_user = $answers[$question['bid']];
                                    $answer_good = $question['answer'];
//                                    echo '<pre>', print_r($key, true), '</pre>';
                                    ?>
                                    <div class="reponse <?php print ($key == $answer_good) ? 'vert' : (($key == $answer_user) ? 'rouge' : ''); ?>"><?php print $reponse['texte']; ?></div>
                                </div>                           
                            <?php } 
                            }?>
                            <div class="clear"></div>
                        </div>
                    </div>
                </div>
                <div class="clear"></div>
                <div class="explication <?php print ($answer_user == $answer_good) ? 'vert' : 'rouge'; ?>"><?php print $question['explication']['safe_value']; ?></div>
            </div>
        <?php } ?>
    </div>
    <div class="clear"></div>
</div>
<script type="text/javascript">
    jQuery(document).ready(function($) {
        $('.darty_content_drupal .node-quizz .zone_plusde').show();
    });
</script>