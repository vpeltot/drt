<div class="nbquestion-wrapper">
    <div class="nbquestion-div">
        <div class="titre">Question</div>
        <div class="step-question"><span class="current"><?php print sprintf("%02d", ($position + 1)); ?></span>/<?php print sprintf("%02d", $total); ?></div>
    </div>
</div>
<div class="question-wrapper <?php print $type; ?>">
    <?php if ($type == 'image') { ?>
        <div class="image-wrapper"><img src="<?php print $image['uri']; ?>" alt="<?php print $image['alt']; ?>"/></div>
    <?php } ?>
    <div class="textequestion-wrapper">
        <div class="label_question"><?php print $question; ?></div>
        <div class="answer-wrapper">
            <?php
            foreach ($reponses as $key => $reponse) {
                if (!empty($reponse['texte'])) {
                    ?>
                    <div class="reponse-div">
                        <div class="image">
                            <img src="<?php print $reponse['image']['uri']; ?>" alt="<?php print $reponse['image']['alt']; ?>"/>
                        </div>
                        <div class="reponse">
                            <input type='radio' name='reponse_<?php print $bid; ?>' id='reponse_<?php print $bid; ?>_<?php print $key; ?>' value='<?php print $key; ?>'/>
                            <label for='reponse_<?php print $bid; ?>_<?php print $key; ?>'><?php print $reponse['texte']; ?></label>
                        </div>
                    </div>
                    <?php
                }
            }
            ?>
            <div class="clear"></div>
        </div>

    </div>
    <div class="clear"></div>
    <div class="btn-message-wrapper">
        <div class='message'></div>
        <div class='btn-wrapper'><span class="btn-vote">Question suivante</span></div>
        <div class="clear"></div>
    </div>
</div>
<div class="clear"></div>