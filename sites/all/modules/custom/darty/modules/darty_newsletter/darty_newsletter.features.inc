<?php
/**
 * @file
 * darty_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function darty_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function darty_newsletter_node_info() {
  $items = array(
    'newsletter' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre pour l\'administration'),
      'help' => '',
    ),
    'newsletter_menu' => array(
      'name' => t('Menu de la newsletter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre pour l\'administration'),
      'help' => '',
    ),
  );
  return $items;
}
