<?php

/**
 * @file
 * Provide diff field functions for the Link module.
 */

/**
 * Diff field callback for parsing link fields comparative values.
 */
function link_field_diff_view($items, $context) {
  $diff_items = array();
  foreach ($items as $delta => $item) {
    if (isset($item['url']) && isset($item['title'])) {
      $diff_items[$delta] = $item['title'] . ' (' . $item['url'] . ')';
    }
    elseif(isset($item['url'])) {
      $diff_items[$delta] = $item['url'];
    }
    else {
      $diff_items[$delta] = $item['title'];
    }
  }
  return $diff_items;
}
