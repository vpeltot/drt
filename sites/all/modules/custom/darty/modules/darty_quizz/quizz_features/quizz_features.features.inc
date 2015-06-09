<?php
/**
 * @file
 * quizz_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quizz_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function quizz_features_node_info() {
  $items = array(
    'quizz' => array(
      'name' => t('Quizz'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre du Quizz (seo)'),
      'help' => '',
    ),
  );
  return $items;
}
