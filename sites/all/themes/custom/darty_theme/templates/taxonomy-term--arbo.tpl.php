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
        <div class="zone-top mode-<?php print $nb_affichage_top; ?>">
            <?php
            if ($nb_affichage_top == 1) {
                foreach ($nodesIntro as $node) {
                    $node->analytics['localisation'] = "liste";
                    $node->analytics['type'] = "LDV";
                    $node->analytics['position'] = "bandeau";
                    $node_view = node_view($node, 'sommaire_top_alone');
                    print drupal_render($node_view);
                }
            } else {
                $cpt = 0;
                print '<div class="first-elem">';
                foreach ($nodesIntro as $node) {
                    if ($cpt == 0) {
                        $node->analytics['localisation'] = "liste";
                        $node->analytics['type'] = "LDV";
                        $node->analytics['position'] = "vignhaut1";
                        $node_view = node_view($node, 'sommaire_top_first');
                        print drupal_render($node_view);
                        print '</div><div class="others-elem">';
                    } else {
                        $node->analytics['localisation'] = "liste";
                        $node->analytics['type'] = "LDV";

                        $node->analytics['position'] = "vignhaut" . ($cpt + 1);
                        $node_view = node_view($node, 'sommaire_top_other');
                        print drupal_render($node_view);
                    }

                    $cpt++;
                }
                print '<div class="clear"></div></div><div class="clear"></div>';
            }
            ?>
            <div class="clear"></div>
        </div>
        <div id="ajax-sommaire-zone">
            <?php print $firstcontent;?>
        </div>
    </div>

</div>