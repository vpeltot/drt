<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> <?php print $couleur; ?> clearfix"<?php print $attributes; ?>>


    <div class="zone-contenu">
        <div class="alaune-wrapper">
            <?php
            if (!empty($contenu_alaune)) {
                foreach ($contenu_alaune as $key => $contenu) {
                    ?>
                    <div class="item-teaser <?php print ($key == 0) ? 'une' : ''; ?> <?php print ((count($contenu_alaune) - 1) == $key) ? 'last' : ''; ?>"><?php
                        $contenu->analytics['localisation'] = "bloc-haut";
                        $contenu->analytics['type'] = "HDV";
                        if ($key == 0)
                            $contenu->analytics['position'] = "bandeau";
                        else
                            $contenu->analytics['position'] = "vign" . $key;
                        $contenu_render = node_view($contenu, ($key == 0) ? 'teaser_une_home' : 'teaser_home');
                        print drupal_render($contenu_render);
                        ?></div>
                    <?php
                }
            }
            ?>
            <div class="clear"></div>
            <?php if (!empty($lien_alaune)) { ?>
                <div class="lien-wrapper">
                    <div class="lien"><a href="<?php print url($lien_alaune['url']); ?><?php print generateLinkForAnalytics('HDV', 'bloc-haut', 'liste', $lien_alaune['title']); ?>" title="<?php print $lien_alaune['title']; ?>"><span class="icon"></span><?php print $lien_alaune['title']; ?></a></div>
                </div>
            <?php } ?>
        </div>
        <?php if ($bool_profile && count($contenu_profile) > 0) { ?>
            <div class="profile-wrapper">
                <div class="title"><?php print $profile_label; ?></div>
                <?php
                $key = 0;
                foreach ($contenu_profile as $contenu) {
                    ?>
                    <div class="item-teaser <?php print ($key == 0) ? 'une' : ''; ?> <?php print ((count($contenu_profile) - 1) == $key) ? 'last' : ''; ?>">
                        <?php
                        $contenu->analytics['localisation'] = "bloc-centre";
                        $contenu->analytics['type'] = "HDV";
                        $contenu->analytics['position'] = "vign" . ($key + 1);
                        $contenu_render = node_view($contenu, 'teaser_home');
                        print drupal_render($contenu_render);
                        ?></div>
                    <?php
                    $key++;
                }
                ?>
                <div class="clear"></div>
            </div>
        <?php } ?>

        <?php print drupal_render($bloc_sondage); ?>

        <?php if ((!empty($contenu_remonte))) { ?>
            <div class="remonte-wrapper">
                <div class="title"><?php print $remonte_label; ?></div>
                <?php
                foreach ($contenu_remonte as $key => $contenu) {
                    ?>
                    <div class="bloc-remonte <?php print ($key == 0) ? 'une' : ''; ?> <?php print ((count($contenu_remonte) - 1) == $key) ? 'last' : ''; ?>">
                        <?php
                        print $contenu;
                        ?></div>
                    <?php
                }
                ?>
                <div class="clear"></div>
            </div>
        <?php } ?>
    </div>
</div>
