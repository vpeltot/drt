<?php
/**
 * @file
 * darty_content_type_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function darty_content_type_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function darty_content_type_features_node_info() {
  $items = array(
    'article_sans_sommaire' => array(
      'name' => t('Article sans sommaire'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre de l\'article'),
      'help' => '',
    ),
  );
  return $items;
}
