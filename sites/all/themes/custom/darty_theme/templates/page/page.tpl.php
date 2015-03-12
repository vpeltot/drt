<div id="page-wrapper">
    <div id="link-sitemap-wrapper-header">
        <?php print $arbo_footer; ?>
    </div>
    <div id="page">

        <div id="header">
            <?php print render($page['header']); ?>
        </div>
        <?php
        if (user_access('view message')) {
            print $messages;
        }
        ?>

        <div id="main-wrapper" class="darty_content_drupal">
            <div id="main">
                <div id="content" class="contextual-links-region">
                    <div class="section">
                        <a id="main-content"></a>
                        <?php print render($title_prefix); ?>

                        <?php print render($title_suffix); ?>
                        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
                        <?php print render($page['help']); ?>
                        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                        <div id="content-wrapper">
                            <div id="baseline-site-wrapper">
                                <?php if (!$is_front) { ?>
                                    <a href="<?php print $base_path; ?>"><img src="<?php
                                        global $base_path;
                                        print $base_path . path_to_theme();
                                        ?>/images/css/site_title.png" alt="Darty & vous" /></a>
                                        <?php print $site_slogan; ?>
                                        <?php
                                    } else {
                                        ?>
                                    <h1>
                                        <a href="<?php print $base_path; ?>"><img src="<?php
                                            global $base_path;
                                            print $base_path . path_to_theme();
                                            ?>/images/css/site_title.png" alt="Darty & vous" /></a>
                                            <?php print $site_slogan; ?>
                                    </h1>

                                <?php } ?>
                            </div>

                            <div id="menu-wrapper">
                                <div class="left_bg"></div>
                                <ul id="megamenu_header"  class="mega-menu"></ul>
                                <div class="forum_lien"><a href="http://www.36000solutions.com/questions" target="_blank">Forum</a></div>
                                <div class="right_bg"></div>
                                <div class="clear"></div>
                            </div>

                            <div id="contenu-wrapper">
                                <?php print render($page['content']); ?>
                            </div>
                        </div>
                        <?php print $feed_icons; ?>
                    </div>
                </div>
            </div>
        </div>
        <a id="sitemap"></a>
        <div id="footer_sitemap" class="close">
            <div class="header">
                <div class="title_footer">Toutes les thématiques</div>
                <div class="logo_footer"><img src="<?php
                    global $base_path;
                    print $base_path . path_to_theme();
                    ?>/images/css/dartyetvous_logo_footer.png" alt="Darty & vous" /></div>
                <div class="arrow_footer"></div>

                <div class="clear"></div>
            </div>
            <div class="link-sitemap-wrapper" id="link-sitemap-wrapper">

            </div>
        </div>
    </div>
</div>
<div id="footer">
    <?php print render($page['footer']); ?>
</div>