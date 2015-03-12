<?php
/**
 * @file
 * Template for a 6 lines panel layout.
 *
 * This template provides a six lines panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['line1']: Content in the first line.
 *   - $content['line2']: Content in the second line.
 *   - $content['line3']: Content in the third line.
 *   - $content['line4']: Content in the fourth line.
 *   - $content['line5']: Content in the fifth line.
 *   - $content['line6']: Content in the sixth line.
 */
?>
<div class="panel-display panel-6lines clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if($content['line1']): ?>
    <div class="panel-panel panel-line-first">
      <div class="inside"><?php print $content['line1']; ?></div>
    </div>
  <?php endif;?>

  <?php if($content['line2']): ?>
    <div class="panel-panel panel-line-second">
      <div class="inside"><?php print $content['line2']; ?></div>
    </div>
  <?php endif;?>

  <?php if($content['line3']): ?>
    <div class="panel-panel panel-line-third shadow">
      <div class="inside"><?php print $content['line3']; ?></div>
    </div>
  <?php endif;?>

  <?php if($content['line4']): ?>
    <div class="panel-panel panel-line-fourth shadow">
      <div class="inside"><?php print $content['line4']; ?></div>
    </div>
  <?php endif;?>

  <?php if($content['line5']): ?>
    <div class="panel-panel panel-line-fifth">
      <div class="inside"><?php print $content['line5']; ?></div>
    </div>
  <?php endif;?>

  <?php if($content['line6']): ?>
    <div class="panel-panel panel-line-sixth">
      <div class="inside"><?php print $content['line6']; ?></div>
    </div>
  <?php endif;?>
</div>
