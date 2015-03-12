<?php
global $base_path;
$theme_path = $base_path . drupal_get_path('theme', 'darty_theme');
?>
<div id="user-profile-wrapper" class="<?php print $classes; ?>">
    <div id="breadcrumb-wrapper">
        <?php print $breadcrumb; ?>
    </div>
    <div class="zone-header">
        <div class="titre">
        </div>
        <div class="separation"><?php if ($photo != '') { ?><img src="<?php print $photo; ?>" alt="Photo de <?php print $user_name; ?>"/><?php } ?></div>
        <div class="description">
            <!--<div class="rss"><a href="<?php print $base_path;?>auteur/<?php print $uid_auteur;?>/1/50" title="Flux RSS de <?php print $user_name;?>" target='_blank'><img src="<?php print $theme_path; ?>/images/css/rss.png"/></a></div>-->
            <div class="clear"></div>
            <h1><?php print $user_name; ?></h1>
            <span><?php print $pres; ?></span>
        </div>
        <div class="clear"></div>
    </div>
    <div class="sociaux">

        <div class="pinterest"><a href="https://www.pinterest.com/dartyfrance/" title="Pinterest de Darty" target="_blank"><img src="<?php print $theme_path; ?>/images/css/icon_pinterest.png"/></a></div>
        <div class="googleplus"><a href="https://plus.google.com/+darty/posts" title="Google Plus de Darty" target="_blank"><img src="<?php print $theme_path; ?>/images/css/icon_googleplus.png"/></a></div>
        <div class="twitter"><a href="https://twitter.com/Darty_Officiel" title="Twitter de Darty" target="_blank"><img src="<?php print $theme_path; ?>/images/css/icon_twitter.png"/></a></div>
        <div class="facebook"><a href="https://fr-fr.facebook.com/darty" title="Facebook de Darty" target="_blank"><img src="<?php print $theme_path; ?>/images/css/icon_facebook.png"/></a></div>
        <div class="clear"></div>
    </div>
    <div class="zone-contenu">
        <div id="ajax-sommaire-zone"> 
            <?php print $firstcontent; ?>
        </div>
    </div>

</div>