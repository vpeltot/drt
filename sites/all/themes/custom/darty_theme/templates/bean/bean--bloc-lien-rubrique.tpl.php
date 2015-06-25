<?php
?><div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="lien-rubrique-wrapper">
    <?php foreach ($rubrique_info as $key => $item) {
    if (isset($item['image']) && $item['image'] !== false){?>
      <div class='image'><?php print $item['image'];?></div>
    <?php }?>
      <div class='separation'></div>
      <div class="item-rub<?php print ($key==0)?' first':'';?><?php print ($key == count($rubrique_info)-1)?' last':'';?>">
        <div class="title">
          <?php 
            print l($item['title'], $item['url'], array());
          ?>
        </div>
        <div class="nb"><?php print $item['count'] . " " . format_plural($item['count'], 'modèle', 'modèles'); ?></div>
        <div class="montant">de <span class="prix"><?php print number_format($item['minPrice'] / 100, 2, ',', ' '); ?> €</span> à <span class="prix"><?php print number_format($item['maxPrice'] / 100, 2, ',', ' '); ?> €</span></div>
        <div class="decouvrir"><a href="<?php print $item['url'];?>" title="<?php print $item['title']; ?>">Découvrir</a></div>
      </div>
    <?php } ?>

  </div>
</div>