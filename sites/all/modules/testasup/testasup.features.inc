<?php
/**
 * @file
 * testasup.features.inc
 */

/**
 * Implements hook_node_info().
 */
function testasup_node_info() {
  $items = array(
    'test' => array(
      'name' => t('test'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
