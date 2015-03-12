<?php
/**
 * @file
 * Template for a two lines and one column panel layout.
 *
 * This template provides a two lines and one column panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['line1']: Content in the first line.
 *   - $content['line2']: Content in the second line.
 *   - $content['col1']: Content in the first column.
 */
?>
<div class="panel-display panel-2lines-1col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if($content['line1']): ?>
    <div class="panel-panel panel-line-first">
      <div class="inside"><?php print $content['line1']; ?></div>
    </div>
  <?php endif; ?>
  
  <?php if($content['line2']): ?>
    <div class="panel-panel panel-line-second">
      <div class="inside"><?php print $content['line2']; ?></div>
    </div>
  <?php endif; ?>

  <?php if($content['col1']): ?>
    <div class="panel-panel panel-col-right">
      <div class="inside"><?php print $content['col1']; ?></div>
    </div>
   <?php endif; ?>
</div>
