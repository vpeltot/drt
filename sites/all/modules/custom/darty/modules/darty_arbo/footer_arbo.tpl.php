<?php
$cpt = 1;
$col = 1;
$max_by_col = 32;
print '<div class="col1 col">';
foreach ($arbo_footer as $l1) {
  if ($cpt > $max_by_col) {
    $col++;
    $cpt = 0;
    print '</div><div class="col' . $col . ' col">';
  }
  $cpt+=4;
  ?>
  <div class="h2"><a href="<?php print url('taxonomy/term/' . $l1['tid']); ?>#darvousclic=FDV_<?php print ConvertForAnalyticsLink($l1['name']);?>"><?php print $l1['name']; ?></a></div>
  <?php
  foreach ($l1['children'] as $l2) {

    if ($cpt > $max_by_col) {
      $col++;
      $cpt = 0;
      print '</div><div class="col' . $col . ' col">';
    }
    $cpt+= 3;
    ?>
    <div class="h3"><a href="<?php print url('taxonomy/term/' . $l2['tid']); ?>#darvousclic=FDV_<?php print ConvertForAnalyticsLink($l1['name']);?>_<?php print ConvertForAnalyticsLink($l2['name']);?>"><?php print $l2['name']; ?></a></div>
    <?php print (!empty($l2['children'])) ? '<ul>' : ''; ?>
    <?php
    foreach ($l2['children'] as $l3) {
      $cpt++;
      ?>
      <li><div class="h4"><a href="<?php print url('taxonomy/term/' . $l3['tid']); ?>#darvousclic=FDV_<?php print ConvertForAnalyticsLink($l1['name']);?>_<?php print ConvertForAnalyticsLink($l2['name']);?>_<?php print ConvertForAnalyticsLink($l3['name']);?>"><?php print $l3['name']; ?></a></div></li>
    <?php } ?>
    <?php print (!empty($l2['children'])) ? '</ul>' : ''; ?>
  <?php } ?>
  <?php } ?>
<div class="h2">
<?php print l('FORUM', 'http://www.36000solutions.com/questions', array('attributes' => array('target' => '_blank'))); ?>
</div>
<?php print '</div><div class="clear"></div>'; ?>