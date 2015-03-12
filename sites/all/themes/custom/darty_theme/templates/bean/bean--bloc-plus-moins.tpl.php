<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content">
      <div class="plus-wrapper bloc-wrapper">
          <div class="header"><?php print $title_plus;?></div>
          <ul class="liste">
              <?php foreach($liste_plus as $item){?>
                <li><span><?php print $item;?></span></li>
              <?php }?>
          </ul>
      </div>
      <div class="moins-wrapper bloc-wrapper">
          <div class="header"><?php print $title_moins;?></div>
          <ul class="liste">
              <?php foreach($liste_moins as $item){?>
                <li><span><?php print $item;?></span></li>
              <?php }?>
          </ul>
      </div>
      <div class="clear"></div>
  </div>
</div>