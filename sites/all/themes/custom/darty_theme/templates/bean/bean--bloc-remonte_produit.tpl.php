<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="push-products-wrapper">
    <?php foreach ($products as $product): ?>

      <div class="product">
        <div class="image <?php print (!empty($product->pictures[0]->horizontal)) ? 'horizontal' : 'vertical'; ?>"><img src="<?php print $product->pictures[0]->medium; ?>" alt="<?php print $product->brand; ?> <?php print $product->reference; ?>"/></div>
        <div class="bottom-wrapper">
          <div class="famille"><?php print $product->family->name; ?></div>

          <div class="titre">
            <a href="http://www.darty.com/nav/codic/<?php print $product->codic; ?>" title="<?php print $product->reference; ?>">
              <span class="brand"><?php print $product->brand; ?></span> 
              <span class="ref"><?php print $product->reference; ?></span>
            </a>
          </div>

          <div></div>

          <?php if (in_array($product->avail->stock, array('epuise', 'rupture'))): ?>
            <div class="nonstock"><?php print ($product->avail->stock == 'epuise') ? 'épuisé' : 'Temporairement indisponible'; ?></div>
          <?php else: ?>
            <!-- Prix barre -->
            <?php if ( isset($product->stripedPrice->amount) && isset($product->stripedPrice->discount) ): ?>
              <div class='push-products-prix-barre'>
                <span class='prix_init'><?php print number_format($product->stripedPrice->amount / 100, 2, ',', ' '); ?> €</span>
                <span class='discount'>- <?php print $product->stripedPrice->discount; ?>%</span>
              </div>
            <?php endif; ?>

            <div class="montant"><?php print number_format($product->webSalePrice / 100, 2, ',', ' '); ?> €<?php print (!empty($product->ecopartPrice)) ? '<sup>*</sup>' : ''; ?></div>

            <!-- condition eco -->
            <?php if (!empty($product->ecopartPrice)): ?>
              <div class="eco"><sup>*</sup>dont <?php print number_format($product->ecopartPrice / 100, 2, ',', ' '); ?> € d'éco-part. DEEE</div>
            <?php elseif (!empty($product->ecomobPrice)): ?>
              <div class="eco">dont <?php print number_format($product->ecomobPrice / 100, 2, ',', ' '); ?> € d'éco-part. mobilier</div>
            <?php endif; ?>
          <?php endif; ?> 

          <!-- Pre commande -->
          <?php if (isset($product->avail->precommandeDate)): ?>
            <div class='push-products-precommande'>
              En pré-commande Sortie le <?php echo date('d/m', strtotime($product->avail->precommandeDate)); ?>
            </div>
          <?php endif; ?>

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
          <?php if ($product->avail->stock == 'dispo' && !empty($product->avail->storeCount) && isset($product->avail->precommandeDate) && $empty($product->avail->precommandeDate)) { ?>
            <div class="stock_label">En précommande</div>
          <?php } ?>
          <?php if ($product->avail->stock == 'appro') { ?>
            <div class="stock_label">En stock dans <?php print $product->avail->stockDelay; ?> <?php print format_plural($product->avail->stockDelay, 'jour', 'jours'); ?></div>
          <?php } ?>

          <div class="decouvrir"><a href="http://www.darty.com/nav/codic/<?php print $product->codic; ?>" title="<?php print $product->reference; ?>">Découvrir</a></div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>