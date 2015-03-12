<div id="user-profile-wrapper" class="<?php print $classes; ?>">
    <div id="breadcrumb-wrapper">
        <?php print $breadcrumb; ?>
    </div>
    <div class="zone-header">
        <div class="titre">
        </div>
        <div class="separation"><?php if ($photo != ''){?><img src="<?php print $photo;?>" alt="Photo de <?php print $user_name;?>"/><?php }?></div>
        <div class="description"><h1><?php print $user_name;?></h1><span><?php print $pres; ?></span></div>
        <div class="clear"></div>
    </div>
    <div class="zone-contenu">
        <div id="ajax-sommaire-zone"> 
            <?php print $firstcontent;?>
        </div>
    </div>

</div>