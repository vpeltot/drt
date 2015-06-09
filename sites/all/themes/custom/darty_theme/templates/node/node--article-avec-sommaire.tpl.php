<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div id="breadcrumb-wrapper">
        <?php print $breadcrumb; ?>
    </div>
    <div class="zone-header">
        <div class="visuel">
            <?php print $image; ?>
        </div>
        <div class="texte">
            <div class="format"><?php print $format_article; ?> <span class="arrow">></span></div>
            <h1 class="titre"><?php print $titre; ?></h1>
            <div class="accroche"><?php print $accroche; ?></div>
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
    <div class="zone-contenu">
        <div class="col_left">
            <?php if ($bool_archive) { ?>
                <div class="archive"><?php print $label_archive; ?></div>
            <?php } ?>
            <div id="sommaire-wrapper" class="sommaire close">
                <div class="head">
                    <div class="h3">SOMMAIRE</div>
                    <ul>
                        <?php foreach ($chapitres as $key=>$chapitre) { ?>
                            <li><a href="#<?php print $chapitre['id']; ?>" class="<?php print ($key == 0)?'active':'';?>"><?php print $chapitre['titre']; ?></a></li>
                        <?php } ?>
                    </ul>
                </div>
                <div id="sommaire_separator">
                    <div class="sommaire_btn_deploy elem-close"><div class="icon"></div><span>Tout afficher</span></div>
                    <div class="sommaire_btn_deploy elem-open"><div class="icon"></div><span>Réduire</span></div>
                </div>
                
                <?php
                foreach ($chapitres as $chapitre) {
                    print drupal_render($chapitre['render']);
                }
                ?>
            </div>
            <?php print drupal_render($bloc_bas); ?>
                <div class='share-wrapper footer'>
                <div id="darty_share_bar_footer" class='share-bar'></div>
                <div class='print-icon'></div>
                <div class='clear'></div>
            </div>
            <div class="comment-wrapper" id="comment-wrapper">
               
            </div>
        </div>
        <div class="col_right">
            <?php foreach ($blocs_droit as $bloc_droit) { ?>
                <?php print drupal_render($bloc_droit); ?>
            <?php } ?>
        </div>
        <div class="clear"></div>
    </div>
    <?php if ($plusde_mode != 'none' && count($plusde_attaches) > 0) { ?>
        <div class="zone_plusde">
            <div class="header"><?php print $plusde_titre; ?></div>
            <div class="contenu">
                <?php foreach ($plusde_attaches as $contenu) { ?>
                    <div class="item-teaser"><?php $contenu_render = node_view($contenu, 'teaser2');
                    print drupal_render($contenu_render); ?></div>
                <?php } ?>
            </div>
            <?php if (!empty($plusde_lien)){?>
            <div class="link"><?php print l($plusde_lien['title'], $plusde_lien['url'], array('attributes' => $plusde_lien['attributes'])); ?></div>
            <?php }?>
        </div>
    <?php } ?>
</div>