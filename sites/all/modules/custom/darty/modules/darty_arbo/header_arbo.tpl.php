<?php
$cpt = 0;
$menuHeader = array();
foreach ($arbo_header as $l1) {
  if ($cpt++ == 4)
    break;
  $level1 = array();
  $level1['url'] = url('taxonomy/term/' . $l1['tid']) . "#darvousclic=MDV_" . ConvertForAnalyticsLink($l1['name']);
  $level1['title'] = $l1['name'];
  $level1['class'] = ($cpt == 4) ? 'last' : '';
  $level1['children'] = array();
  foreach ($l1['children'] as $l2) {
    $level2 = array();
    $level2['url'] = url('taxonomy/term/' . $l2['tid']) . "#darvousclic=MDV_" .ConvertForAnalyticsLink($l1['name'])."_". ConvertForAnalyticsLink($l2['name']);
    $level2['title'] = $l2['name'];
    $level1['children'][] = $level2;
  }
  $menuHeader[] = $level1;
}
?>
var menuJson = '<?php print json_encode($menuHeader); ?>';