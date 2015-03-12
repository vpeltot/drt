<?php
/**
 * @file
 * sondages_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sondages_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sondages_features_node_info() {
  $items = array(
    'sondage' => array(
      'name' => t('sondage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre interne'),
      'help' => '',
    ),
  );
  return $items;
}
