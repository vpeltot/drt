<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="service-wrapper">
        <div class="header-wrapper bloc-wrapper">
             <?php 
             if (!isset($bool_titre) || !$bool_titre){?>
            <h2 class="titre noimage"><?php print $titre; ?></h2>
             <?php }?>
            <div class="clear"></div>
            <div class="image"><?php print $image; ?></div>
        </div>
        <div class="texte-wrapper bloc-wrapper">
            <div class="texte"><?php print $texte; ?></div>
        </div>
        
        <?php
        if (!empty($lien)){?>
        <div class="lien_bloc"><?php print $lien; ?></div>
        <?php }?>
    </div>
</div> 