<?php
/**
 * @file
 * sondages_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sondages_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'admin tous sondages config'.
  $permissions['admin tous sondages config'] = array(
    'name' => 'admin tous sondages config',
    'roles' => array(
      'Administrateur de site' => 'Administrateur de site',
      'Administrateur global' => 'Administrateur global',
      'Editeur' => 'Editeur',
    ),
    'module' => 'darty_sondage',
  );

  // Exported permission: 'create sondage content'.
  $permissions['create sondage content'] = array(
    'name' => 'create sondage content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sondage content'.
  $permissions['delete any sondage content'] = array(
    'name' => 'delete any sondage content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sondage content'.
  $permissions['delete own sondage content'] = array(
    'name' => 'delete own sondage content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sondage content'.
  $permissions['edit any sondage content'] = array(
    'name' => 'edit any sondage content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sondage content'.
  $permissions['edit own sondage content'] = array(
    'name' => 'edit own sondage content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
