<?php

/**
 * @file
 * Migrate node view count data.
 *
 */

define('DRUPAL_ROOT', getcwd() . '/../../');
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

// Migrate Node View Count Data
if (db_table_exists('nodeviewcount') && db_table_exists('darty_nodeviewcount')) {
  // If table is empty
  $result = db_select('darty_nodeviewcount', 'dn')
            ->fields('dn')
            ->execute();
  $count  = $result->rowCount();

  // do migrate 
  if ($count === 0) {
    $migrate_insert = db_query(
      "
      INSERT INTO
      {darty_nodeviewcount} (nid, count)
      SELECT DISTINCT nid, COUNT(nid) AS count
      FROM {nodeviewcount}
      GROUP BY nid
      "
    );
  }
}

?>