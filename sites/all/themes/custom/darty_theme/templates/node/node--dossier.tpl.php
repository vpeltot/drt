<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> <?php print $couleur; ?> clearfix"<?php print $attributes; ?>>
    <div id="breadcrumb-wrapper">
        <?php print $breadcrumb; ?>
    </div>
    <div class="zone-header">
        <div class="texte">
            <div class="format"><?php print $format_article; ?></div>
            <h1 class="titre"><?php print $titre; ?></h1>
            <div class="accroche"><?php print $accroche; ?></div>
        </div>
        <div class="visuel">
            <?php print $image; ?>
        </div>

        <div class="clear"></div> 
    </div>
    <div class="zone-partage">
        <div class="left">
            <?php
            if ($user_clickable === true){?>
            <a class='prenom' href="<?php print url('user/' . $node->uid); ?>"><?php print $prenom; ?></a> -
            <?php }else{?>
            <span class='prenom'><?php print $prenom;?></span>
            <?php }?>
            <span class="creation_date"><?php print date('d/m/y', $date_crea); ?></span>
            <?php if (!empty($date_modif)) { ?>
                <span class="maj_date">Mis à jour le <?php print date('d/m/y', $date_modif); ?></span>
            <?php } ?>
        </div>
        <div class="right">
                         <span class="page_view"><span class="number"><?php print number_format($viewCount, 0, '.', ' '); ?></span> vue<?php print ($viewCount > 1) ? 's' : ''; ?></span>  
            <span class="separateur_share">|</span> <span class="page_share"><span class="number"></span> <span class="label">partage</span></span>
           <span class="separateur_comment">|</span> <span class="page_comment"><span class="number"></span><span class="label"></span></span>
        </div>
        <div class="clear"></div>
    </div>
    <div class='share-wrapper header'>
        <div class='print-icon'></div>
        <div id="darty_share_bar" class='share-bar'></div>
        <div class='clear'></div>
    </div>
    <?php if ((!empty($contenu) && trim($contenu) != '') || (!empty($exergue) && trim($exergue) != '')) { ?>
        <div class="zone-contenu">
            <div class="col_left">
                <?php if ($bool_archive) { ?>
                    <div class="archive"><?php print $label_archive; ?></div>
                <?php } ?>
                <div class="contenu wysiwyg">
                    <?php print $contenu; ?>
                </div>

            </div>
            <div class="col_right">
                <?php if (!(empty($exergue))) { ?>
                    <div class="exergue wysiwyg">
                        <blockquote> <?php print $exergue; ?></blockquote>
                    </div>
    <?php } ?>
            </div>

            <div class="clear"></div>
        </div>
<?php } ?>
    <?php
    if ((!empty($contenu_associes))) {
        ?>
        <div class="sommaire_dossier">
            <div class="header"><?php print $sommaire_dossier_title; ?></div>
            <div class="contenus">
    <?php foreach ($contenu_associes as $contenu) { ?>
                    <div class="item-associe"><?php $contenu_render = node_view($contenu, 'teaser');
        print drupal_render($contenu_render);
        ?></div>
                    <?php } ?>
                <div class="clear"></div>
            </div>
        </div>
    <?php } ?>
    <div class="zone-contenu">
        <div class="col_left">
            <div class='share-wrapper footer'>
                <div id="darty_share_bar_footer" class='share-bar'></div>
                <div class='print-icon'></div>
                <div class='clear'></div>
            </div>
            <div class="comment-wrapper" id="comment-wrapper">
                <?php print render($content['comments']); ?>
            </div>
        </div>
        <div class="clear"></div>
    </div>
    <?php if ($plusde_mode != 'none' && count($plusde_attaches) > 0) { ?>
        <div class="zone_plusde">
            <div class="header"><?php print $plusde_titre; ?></div>
            <div class="contenu">
                <?php foreach ($plusde_attaches as $contenu) { ?>
                    <div class="item-teaser"><?php $contenu_render = node_view($contenu, 'teaser2');
                    print drupal_render($contenu_render);
                    ?></div>
                <?php } ?>
            </div>
            <?php if (!empty($plusde_lien)) { ?>
                <div class="link"><?php print l($plusde_lien['title'], $plusde_lien['url'], array('attributes' => $plusde_lien['attributes'])); ?></div>
            <?php } ?>
        </div>
    <?php } ?>
</div>