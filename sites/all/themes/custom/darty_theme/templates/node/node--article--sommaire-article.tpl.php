<div class="item-teaser">
    <div id="node-<?php print $node->nid; ?>" class="teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
            <?php print render($title_suffix); ?>
        <div class="visuel">
            <a href="<?php print url('node/' . $node->nid); ?><?php print $analyticsLinks;?>" title="<?php print $titre; ?>"><?php print $image_teaser; ?></a>
        </div>
        <div class="format"><?php print $format_article; ?> <span class="arrow">></span></div>
        <div class="zone_texte">
            <div class="titre"><a href="<?php print url('node/' . $node->nid); ?><?php print $analyticsLinks;?>" title="<?php print $titre; ?>"><?php print $titre; ?></a></div>
            <div class="accroche"><?php print $accroche; ?></div>
        </div>
    </div>
</div>