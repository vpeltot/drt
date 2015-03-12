<div class="block_menu_image shadow <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <h2 class="gradient"><?php print $block_title; ?></h2>
  <div class="content"<?php print $content_attributes; ?>>
  <?php for($i=1; $i<=4; $i++): ?>
    <div class="item <?php print ${"item_class".$i}; ?>">
      <?php if(${"image".$i}): ?>
        <div class="left">
          <?php print ${"image".$i}; ?>
        </div>
      <?php endif; ?>
      <div class="right">
        <?php print ${"link".$i}; ?>
      </div>
    </div>
  <?php endfor; ?>
  </div>
</div>