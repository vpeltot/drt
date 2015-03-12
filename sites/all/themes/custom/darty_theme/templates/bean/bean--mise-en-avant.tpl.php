<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="mise-en-avant-home-wrapper">
        <?php
        if (!empty($contenu)) {
            $contenu->analytics['localisation'] = $analytics['localisation'];
            $contenu->analytics['type'] = $analytics['type'];
            $contenu->analytics['position'] = $analytics['position'];
            $contenu_render = node_view($contenu, 'teaser_home');
            $nodeview = node_view($contenu, 'mise_en_avant');
            print drupal_render($nodeview);
        }
        ?>
    </div>
</div>