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
            <?php if ($user_clickable === true) { ?>
                <a class='prenom' href="<?php print url('user/' . $node->uid); ?>"><?php print $prenom; ?></a> -
            <?php } else { ?>
                <span class='prenom'><?php print $prenom; ?></span>
            <?php } ?>
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

        <?php if ($bool_archive) { ?>
            <div class="archive"><?php print $label_archive; ?></div>
        <?php } ?>
        <div class="diaporama-wrapper">
            <div class="diaporama">
                <div class="photos-wrapper">
                    <div class="photos">
                        <div class="arrow_left"></div>
                        <div class="arrow_right"></div>
                        <?php foreach ($item_diapos as $key => $item_diapo) { ?>
                            <div class="photo<?php print ($key == 0) ? ' first active' : ''; ?><?php print ($key == count($item_diapos) - 1) ? ' last' : ''; ?>" style="background-image: url('<?php print $item_diapo['photo']; ?>')">
                                <div class="zone-legende">
                                    <div class="pagination"><span class="current">1</span>/<?php print count($item_diapos); ?></div>
                                    <div class="legende"><?php print $item_diapo['legende']; ?></div>
                                </div>
                            </div>
                        <?php } ?>
                    </div>
                </div>
                <div class="contenus-wrapper">
                    <div class="contenus">
                        <?php foreach ($item_diapos as $key => $item_diapo) { ?>
                            <div class="contenu<?php print ($key == 0) ? ' first active' : ''; ?><?php print ($key == count($item_diapos) - 1) ? ' last' : ''; ?><?php print (!empty($item_diapo['codic'])) ? ' codic' : ' noncodic'; ?>">
                                <div class="titre"><?php print $item_diapo['titre']; ?></div>
                                <div class="texte"><?php print $item_diapo['texte']; ?></div>
                                <?php if ((!empty($item_diapo['codic'])) && isset($item_diapo['product']->avail->stock) && !empty($item_diapo['product']->avail->stock)) { ?>
                                    <div class="montant-stock">
                                        <?php
                                        if (!in_array($item_diapo['product']->avail->stock, array('epuise', 'rupture'))) {
                                            ?><div class="montant"><?php print number_format($item_diapo['product']->webSalePrice / 100, 2, ',', ' '); ?> €<?php print (!empty($item_diapo['product']->ecopartPrice)) ? '<sup>*</sup>' : ''; ?></div>
                                        <?php }
                                        ?>
                                        <?php if ($item_diapo['product']->avail->stock == 'stock') { ?>
                                            <div class="statut_stock stock_label">En stock</div>
                                        <?php } ?>
                                        <?php if ($item_diapo['product']->avail->stock == 'dispo' && !empty($item_diapo['product']->avail->storeCount) && !isset($item_diapo['product']->avail->precommandeDate)) { ?>
                                            <div class="statut_stock stock_label">En stock dans <?php print $item_diapo['product']->avail->storeCount; ?> <?php print format_plural($item_diapo['product']->avail->storeCount, 'magasin', 'magasins'); ?></div>
                                        <?php } ?>
                                        <?php if ($item_diapo['product']->avail->stock == 'dispo' && !empty($item_diapo['product']->avail->storeCount) && isset($item_diapo['product']->avail->precommandeDate) && $empty($item_diapo['product']->avail->precommandeDate)) { ?>
                                            <div class="statut_stock stock_label">En précommande</div>
                                        <?php } ?>
                                        <?php if ($item_diapo['product']->avail->stock == 'appro') { ?>
                                            <div class="statut_stock stock_label">En stock dans <?php print $item_diapo['product']->avail->stockDelay; ?> <?php print format_plural($item_diapo['product']->avail->stockDelay, 'jour', 'jours'); ?></div>
                                        <?php } ?>
                                        <?php if (in_array($item_diapo['product']->avail->stock, array('epuise', 'rupture'))) { ?>
                                            <div class="statut_stock nonstock-label"><?php print ($item_diapo['product']->avail->stock == 'epuise') ? 'épuisé' : 'Temporairement indisponible'; ?></div>
                                        <?php } ?>
                                        <div class="clear"></div>
                                        <?php   
                                            if (isset($item_diapo['product']->stripedPrice)) {
                                                ?>
                                                <div class="montant montant-barre"><span class='barre'><?php print number_format($item_diapo['product']->stripedPrice->amount / 100, 2, ',', ' '); ?> €</span> <span class='pourcent'> (-<?php print number_format($item_diapo['product']->stripedPrice->discount, 0, ',', ' '); ?>%)</span></div>
                                            <?php }
                                ?>
                                    </div>
                                    <?php if (!empty($item_diapo['product']->reviewCount)) { ?>
                                        <div class="notation">
                                            <div class="star_bg"><div class="star_vote" style="width:<?php print floor(($item_diapo['product']->avgReviewRating / 5)); ?>%"></div></div>
                                            <div class="vote">
                                                <span class="note"><?php print number_format(floor(round($item_diapo['product']->avgReviewRating / 10, 1, PHP_ROUND_HALF_DOWN)) / 10, ($item_diapo['product']->avgReviewRating % 100 == 0) ? 0 : 1, ',', ' '); ?>/5</span>
                                                <span class="nbvote"> (<?php print $item_diapo['product']->reviewCount; ?> avis)</span>
                                            </div>
                                            <div class="clear"></div>
                                        </div>
                                    <?php } ?>

                                <?php } ?>
                                <div class="lien"><?php print $item_diapo['lien']; ?></div>
                            </div>
                        <?php } ?>
                    </div>
                </div>
                <div class="clear"></div>

                <div class="liste-vignette-wrapper">
                    <div class="arrow_left"></div>
                    <div class="arrow_right"></div>
                    <?php print '<div class="group active">'; ?>
                    <?php
                    foreach ($item_diapos as $key => $item_diapo) {
                        if ($key != 0 && $key % 5 == 0)
                            print '<div class="group">';
                        ?>
                        <div class="vignette<?php print ($key == 0) ? ' first active' : ''; ?><?php print ($key % 5 == 0) ? ' first_line' : ''; ?><?php print ($key == count($item_diapos) - 1) ? ' last' : ''; ?><?php print (!empty($item_diapo['codic'])) ? ' codic' : ' noncodic'; ?>">
                            <div class="bg_black"></div>
                            <div class="photo <?php print (empty($item_diapo['product']->pictures[0]->horizontal) && !empty($item_diapo['product']) && $item_diapo['productPhoto'] == true) ? 'vertical' : ''; ?>"><img src="<?php print $item_diapo['photo']; ?>" /></div>
                            <div class="legende"><?php print $item_diapo['legende']; ?></div>
                        </div>
                        <?php
                        if ($key != 0 && ($key + 1) % 5 == 0 && $key != count($item_diapos) - 1)
                            print '</div>';
                    }
                    ?>
                </div>
            </div>
        </div>

    </div>
    <div class="choixdarty-wrapper">
        <?php if (!empty($products_choix)) { ?>
            <?php if ($choix_titre != '') { ?>
                <h3 class="title_choix"><?php print $choix_titre; ?></h3>
            <?php } ?>

            <div class="selection-wrapper">
                <?php
                foreach ($products_choix as $product) {
                    ?>
                    <div class="item product">
                        <div class="image <?php print (!empty($product->pictures[0]->horizontal)) ? 'horizontal' : 'vertical'; ?>"><img src="<?php print $product->pictures[0]->medium; ?>" alt="<?php print $product->brand; ?> <?php print $product->reference; ?>"/></div>
                        <div class="bottom-wrapper">
                            <div class="texte-wrapper">
                                <div class="famille"><?php print $product->family->name; ?></div>

                                <div class="titre"><span class="brand"><?php print $product->brand; ?></span> <span class="ref"><?php print $product->reference; ?></span></div>
                                <div></div>
                                <?php if (in_array($product->avail->stock, array('epuise', 'rupture'))) { ?>
                                    <div class="nonstock"><?php print ($product->avail->stock == 'epuise') ? 'épuisé' : 'Temporairement indisponible'; ?></div>
                                <?php
                                } else {
                                    if (isset($product->stripedPrice)) {
                                        ?>
                                        <div class="montant"><?php print number_format($product->webSalePrice / 100, 2, ',', ' '); ?> €<?php print (!empty($product->ecopartPrice)) ? '<sup>*</sup>' : ''; ?> <span class='barre'><?php print number_format($product->stripedPrice->amount / 100, 2, ',', ' '); ?> €</span><span class='pourcent'> (-<?php print number_format($product->stripedPrice->discount, 0, ',', ' '); ?>%)</span></div>
            <?php } else { ?>
                                        <div class="montant"><?php print number_format($product->webSalePrice / 100, 2, ',', ' '); ?> €<?php print (!empty($product->ecopartPrice)) ? '<sup>*</sup>' : ''; ?></div>

                                        <?php
                                    }
                                    ?>

                                    <!-- condition eco -->
                                    <?php if (!empty($product->ecopartPrice)) { ?>
                                        <div class="eco"><sup>*</sup>dont <?php print number_format($product->ecopartPrice / 100, 2, ',', ' '); ?> € d'éco-part. DEEE</div>
                                    <?php } elseif (!empty($product->ecomobPrice)) {
                                        ?>
                                        <div class="eco">dont <?php print number_format($product->ecomobPrice / 100, 2, ',', ' '); ?> € d'éco-part. mobilier</div>
                                    <?php } ?>

                                <?php } ?> 

        <?php if (!empty($product->reviewCount)) { ?>
                                    <div class="notation">
                                        <div class="star_bg"><div class="star_vote" style="width:<?php print floor(($product->avgReviewRating / 5)); ?>%"></div></div>
                                        <div class="vote">
                                            <span class="note"><?php print number_format(floor(round($product->avgReviewRating / 10, 1, PHP_ROUND_HALF_DOWN)) / 10, ($product->avgReviewRating % 100 == 0) ? 0 : 1, ',', ' '); ?>/5</span>
                                            <span class="nbvote"> (<?php print $product->reviewCount; ?> avis)</span>
                                        </div>
                                        <div class="clear"></div>
                                    </div>
                                <?php } ?>
                                <?php if ($product->avail->stock == 'stock') { ?>
                                    <div class="stock_label">En stock</div>
                                <?php } ?>
                                <?php if ($product->avail->stock == 'dispo' && !empty($product->avail->storeCount) && !isset($product->avail->precommandeDate)) { ?>
                                    <div class="stock_label">En stock dans <?php print $product->avail->storeCount; ?> <?php print format_plural($product->avail->storeCount, 'magasin', 'magasins'); ?></div>
                                <?php } ?>
                                <?php if ($product->avail->stock == 'dispo' && isset($product->avail->precommandeDate) && !empty($product->avail->precommandeDate)) { ?>
                                    <div class="stock_label">En précommande</div>
                                <?php } ?>
                                <?php if ($product->avail->stock == 'appro') { ?>
                                    <div class="stock_label">En stock dans <?php print $product->avail->stockDelay; ?> <?php print format_plural($product->avail->stockDelay, 'jour', 'jours'); ?></div>
        <?php } ?>
                            </div>
                            <div class="decouvrir"><a href="http://www.darty.com/nav/codic/<?php print $product->codic; ?>" target="_blank" title="<?php print $product->reference; ?>">Découvrir</a></div>
                        </div>
                    </div>
                    <?php } ?>
                <div class="categories-wrapper">
                    <?php foreach ($categories_choix as $key => $categorie) { ?>
        <?php if ($key % 2 == 0) print '<div class="item">'; ?>
                        <div class="item-rub<?php if ($key % 2 == 0) print ' first'; ?><?php if ($key % 2 == 1) print ' last'; ?>">
                            <div class="texte-wrapper">
                                <div class="title"><?php print $categorie['titre']; ?></div>
                                <div class="nb"><?php print $categorie['count'] . " " . format_plural($categorie['count'], 'modèle', 'modèles'); ?></div>
                                <div class="montant">de <span class="prix"><?php print number_format($categorie['minPrice'] / 100, 2, ',', ' '); ?> €</span> à <span class="prix"><?php print number_format($categorie['maxPrice'] / 100, 2, ',', ' '); ?> €</span></div>
                            </div>
                            <div class="decouvrir"><a href="<?php print $categorie['lien']['url']; ?>" target="<?php print (isset($categorie['lien']['attributes']['target'])) ? $categorie['lien']['attributes']['target'] : ''; ?>" title="<?php print $categorie['lien']['title']; ?>"><?php print $categorie['lien']['title']; ?></a></div>

                        </div>
                        <?php if ($key % 2 == 1) print '</div>'; ?>
                    <?php } ?>
    <?php if (count($categories_choix) % 2 == 1) print '</div>'; ?>
                </div>
                <div class="clear"></div>
            </div>
<?php } ?>
    </div>
    <div class="col_left">

        <div class="comment-wrapper" id="comment-wrapper">
<?php print render($content['comments']); ?>
        </div>
    </div>
    <div class="clear"></div>
<?php if ($plusde_mode != 'none' && count($plusde_attaches) > 0) { ?>
        <div class="zone_plusde">
            <div class="header"><?php print $plusde_titre; ?></div>
            <div class="contenu">
                    <?php foreach ($plusde_attaches as $contenu) { ?>
                    <div class="item-teaser"><?php
                        $contenu_render = node_view($contenu, 'teaser2');
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
