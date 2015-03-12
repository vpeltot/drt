<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">
    <div id="breadcrumb-wrapper">
        <?php print $breadcrumb; ?>
    </div>
    <div class="zone-header">
        <div class="titre"><h1><?php print $name; ?></h1></div>
        <div class="separation"></div>
        <div class="description"><span><?php print $description; ?></span></div>
        <div class="clear"></div>
    </div>
    <div class="zone-contenu">
        <div id="ajax-sommaire-zone">
            <?php print $firstcontent;?>
        </div>
    </div>

</div>