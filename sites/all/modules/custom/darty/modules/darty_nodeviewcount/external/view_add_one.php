<?php

/**
 * @file
 * Update node view : add one
 *
 * @param int $nid
 *   Node id.
 *
 */
define('DRUPAL_ROOT', getcwd() . '/../../../../../../../../');
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

$nid = isset($_POST['nid']) ? htmlspecialchars($_POST['nid'], ENT_QUOTES, 'UTF-8') : 0;
$nid = intval($nid);

if ($nid > 0)
  $query = db_query(
    "INSERT INTO darty_nodeviewcount (nid, count) VALUES(:nid, 1) ON DUPLICATE KEY UPDATE count=count + 1",
    array(
      ':nid' => $nid,
    )
  );

?>