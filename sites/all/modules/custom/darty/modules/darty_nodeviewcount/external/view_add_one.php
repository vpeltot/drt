<?php

/**
 * @file
 * Update node view : add one
 *
 * @param int $nid
 *   Node id.
 *
 */

$db_config = dirname(__FILE__) . '/../../../../../../../default/settings.local.php';
$nid       = isset($_POST['nid']) ? intval($_POST['nid']) : '';

if (file_exists($db_config) && $nid > 0) {
  include $db_config;
  // Connect DB
  $username = $databases['default']['default']['username'];
  $password = $databases['default']['default']['password'];
  $hostname = $databases['default']['default']['host'];
  $database = $databases['default']['default']['database'];
  $dbhandle = mysqli_connect($hostname, $username, $password, $database) or die("Unable to connect to MySQL");
  // Query
  $query = $dbhandle->query("INSERT INTO darty_nodeviewcount (nid, count) VALUES('$nid', 1) ON DUPLICATE KEY UPDATE count=count + 1");

  mysqli_close($dbhandle);
}

?>