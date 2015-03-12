<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="contenu-home-wrapper">
        <div class="item-teaser">
            <?php
        if (!empty($contenu)) {
            $contenu->analytics['localisation'] = $analytics['localisation'];
            $contenu->analytics['type'] = $analytics['type'];
            $contenu->analytics['position'] = $analytics['position'];
            $nodeview = node_view($contenu, 'teaser');
            print drupal_render($nodeview);
        }
        ?>
        </div>
    </div>
</div>