<?php

/**
 * @file
 * darty_nodeviewcount.inc
 * Darty node view count module custom functions.
 */

/**
 * Get node view
 *
 * @param int $nid
 *   Node id.
 *
 * @return int $count
 *   Node view.
 */
function _darty_nodeviewcount_get_node_view($nid) {
  $count = 0;
  $cache = cache_get('dartynodeviewcount_' . $nid);
  if ($cache && $cache->expire > time()) {
    $count = $cache->data;
  } 
  else {
    $get_count = db_select('darty_nodeviewcount', 'd')
               ->fields('d', array('count'))
               ->condition('nid', $nid)
               ->execute()
               ->fetchAssoc();
    if (isset($get_count['count'])) {
      $count = $get_count['count'];
      cache_set('dartynodeviewcount_' . $nid, $count, 'cache', time() + 300);
    }
  }
  return $count;
}