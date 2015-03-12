<div class='sondage-wrapper full'>
    <div class='sondage-div form'>
        <div class="question" id='question_<?php print $nid; ?>'><div class='titre_question'><?php print $question; ?></div></div>

        <div class="reponses">
            <?php foreach ($reponses as $key => $reponse) { ?>
                <div class="reponse">
                    <input type='radio' name='reponse_<?php print $nid; ?>' id='reponse_<?php print $nid; ?>_<?php print $key; ?>' value='<?php print $key; ?>'/>
                    <label for='reponse_<?php print $nid; ?>_<?php print $key; ?>'><?php print $reponse['value']; ?></label>
                </div>
            <?php } ?>
            <div class='btn-wrapper'><span class="btn-vote">Je vote</span></div>
            <div class='message'></div>
        </div>
    </div>
</div>
<div class='sondage-wrapper full'>
    <div class='sondage-div result'>
        <div class="question" id='question_<?php print $nid; ?>'><div class='titre_question'><?php print $question; ?></div></div>

        <div class="reponses">
            <?php foreach ($reponses as $key => $reponse) { ?>
                <div class="reponse">
                    <div class='reponse_label'><?php print $reponse['value']; ?></div>
                    <div class='progress_wrapper'>
                        <div class='progress_real' style='width:<?php print (isset($node->result) && $node->result['total'] != 0 && isset($node->result['result'][$key])) ? (ceil($node->result['result'][$key] / $node->result['total'] * 80)) : '0'; ?>%'></div>
                        <div class='pourcent_label'><?php print (isset($node->result) && $node->result['total'] != 0 && isset($node->result['result'][$key])) ? (ceil($node->result['result'][$key] / $node->result['total'] * 100)) : '0'; ?>%</div>
                    </div>
                    <div class='clear'></div>
                </div>
            <?php } ?>
            <?php if (isset($info) && !empty($info)) { ?>
                <div class='info_sondage'><?php print $info; ?></div>
            <?php } ?>
            <div class="info-wrapper">
                <div class='nb_vote'>
                    <?php
                    if (isset($node->result['total']))
                        print '<span class="number">' . number_format(intval($node->result['total']), 0, '.', ' ') . '</span> ' . format_plural($node->result['total'], 'votant', 'votants');
                    else
                        print '<span class="number">0</span> votant';
                    ?>
                </div>
                <div class='date'>du <?php print date('d/m/Y', $datedeb); ?> au <?php print date('d/m/Y', $datefin); ?></div>
            </div>
        </div>
    </div>
</div>
<div class='clear'></div>