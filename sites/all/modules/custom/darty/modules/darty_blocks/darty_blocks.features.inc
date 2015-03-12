<?php
/**
 * @file
 * darty_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function darty_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
