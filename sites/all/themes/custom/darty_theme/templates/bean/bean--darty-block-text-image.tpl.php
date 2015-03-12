<?php if($display == 0): ?>
<div class="block_text_image shadow <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="left"><?php print $image; ?></div>
    <div class="right">
      <h2><?php print $block_title; ?></h2>
      <?php print $text; ?>
    </div>
  </div>
</div>
<?php else: ?>
<div class="block_text_image block_text_image_large shadow <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="left"><?php print $image; ?></div>
    <div class="right">
      <h2 class="gradient"><?php print $block_title; ?></h2>
      <div class="content">
        <?php print $text; ?>
        <?php if($link): ?>
        <div class="button">
          <?php print $link; ?>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>
<?php endif; ?>