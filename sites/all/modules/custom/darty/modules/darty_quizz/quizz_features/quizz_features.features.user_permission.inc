<?php
/**
 * @file
 * quizz_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function quizz_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create quizz content'.
  $permissions['create quizz content'] = array(
    'name' => 'create quizz content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any quizz content'.
  $permissions['delete any quizz content'] = array(
    'name' => 'delete any quizz content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own quizz content'.
  $permissions['delete own quizz content'] = array(
    'name' => 'delete own quizz content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any quizz content'.
  $permissions['edit any quizz content'] = array(
    'name' => 'edit any quizz content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own quizz content'.
  $permissions['edit own quizz content'] = array(
    'name' => 'edit own quizz content',
    'roles' => array(
      'Editeur' => 'Editeur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
