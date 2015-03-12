<?php if (!isset($error) || $error === FALSE) { ?>
    <div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
        <div class="forum-home-wrapper <?php print $type;?>">
            <?php if ($type == 'user') { ?>
            <div class="image"><img src="<?php print $user['avatar'];?>" alt="image de <?php print $user['pseudo'];?>"/></div>
                <div class="pseudo"><?php print $user['pseudo'];?></div>
                <div class="expertise">Expert Darty</div>
                <div class="nbreponses">
                    <?php
                    $arrayNb = str_split($user['nbreponses']);
                    foreach($arrayNb as $nb){
                        echo '<span class="chiffre">'.$nb.'</span>';
                    }?>
                </div>
                <div class="label_reponse"><?php print format_plural($user['nbreponses'], 'réponse apportée', 'réponses apportées');?></div>
                <div class="lien"><?php print l('Plus d\'infos',$user['lienprofil'],array('attributes'=>array('target'=>'_blank')));?></div>
                <?php
            }elseif($type == 'post'){?>
                <div class="titre">Forum</div>
                <div class="cote_gauche"></div>
                <div class="zone-sujet">
                <div class="sujet"><?php print $contenu;?></div>
                <div class="link"><?php print l('Lire la réponse',$link,array('attributes'=>array('target'=>'_bank')));?></div>
                </div>
            <?php }?>
        </div>
    </div>
<?php } else {
    ?>
    <div></div>
<?php } ?>
