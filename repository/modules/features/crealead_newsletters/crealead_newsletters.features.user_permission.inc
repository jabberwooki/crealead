<?php
/**
 * @file
 * crealead_newsletters.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_newsletters_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create newsletter content'.
  $permissions['create newsletter content'] = array(
    'name' => 'create newsletter content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any newsletter content'.
  $permissions['delete any newsletter content'] = array(
    'name' => 'delete any newsletter content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own newsletter content'.
  $permissions['delete own newsletter content'] = array(
    'name' => 'delete own newsletter content',
    'roles' => array(
      'assistant' => 'assistant',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any newsletter content'.
  $permissions['edit any newsletter content'] = array(
    'name' => 'edit any newsletter content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own newsletter content'.
  $permissions['edit own newsletter content'] = array(
    'name' => 'edit own newsletter content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished newsletter content'.
  $permissions['view any unpublished newsletter content'] = array(
    'name' => 'view any unpublished newsletter content',
    'roles' => array(
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
