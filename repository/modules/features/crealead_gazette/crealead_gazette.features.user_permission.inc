<?php
/**
 * @file
 * crealead_gazette.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_gazette_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gazette content'.
  $permissions['create gazette content'] = array(
    'name' => 'create gazette content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gazette content'.
  $permissions['delete any gazette content'] = array(
    'name' => 'delete any gazette content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gazette content'.
  $permissions['delete own gazette content'] = array(
    'name' => 'delete own gazette content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gazette content'.
  $permissions['edit any gazette content'] = array(
    'name' => 'edit any gazette content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gazette content'.
  $permissions['edit own gazette content'] = array(
    'name' => 'edit own gazette content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
