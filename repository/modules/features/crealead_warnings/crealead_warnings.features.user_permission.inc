<?php

/**
 * @file
 * crealead_warnings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_warnings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create warning content'.
  $permissions['create warning content'] = array(
    'name' => 'create warning content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any warning content'.
  $permissions['delete any warning content'] = array(
    'name' => 'delete any warning content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own warning content'.
  $permissions['delete own warning content'] = array(
    'name' => 'delete own warning content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any warning content'.
  $permissions['edit any warning content'] = array(
    'name' => 'edit any warning content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own warning content'.
  $permissions['edit own warning content'] = array(
    'name' => 'edit own warning content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  return $permissions;
}
