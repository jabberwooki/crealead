<?php
/**
 * @file
 * crealead_brands.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_brands_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create achievement content'.
  $permissions['create achievement content'] = array(
    'name' => 'create achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create brand content'.
  $permissions['create brand content'] = array(
    'name' => 'create brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create client content'.
  $permissions['create client content'] = array(
    'name' => 'create client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any achievement content'.
  $permissions['delete any achievement content'] = array(
    'name' => 'delete any achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any brand content'.
  $permissions['delete any brand content'] = array(
    'name' => 'delete any brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any client content'.
  $permissions['delete any client content'] = array(
    'name' => 'delete any client content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own achievement content'.
  $permissions['delete own achievement content'] = array(
    'name' => 'delete own achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own brand content'.
  $permissions['delete own brand content'] = array(
    'name' => 'delete own brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own client content'.
  $permissions['delete own client content'] = array(
    'name' => 'delete own client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any achievement content'.
  $permissions['edit any achievement content'] = array(
    'name' => 'edit any achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any brand content'.
  $permissions['edit any brand content'] = array(
    'name' => 'edit any brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any client content'.
  $permissions['edit any client content'] = array(
    'name' => 'edit any client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own achievement content'.
  $permissions['edit own achievement content'] = array(
    'name' => 'edit own achievement content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own brand content'.
  $permissions['edit own brand content'] = array(
    'name' => 'edit own brand content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own client content'.
  $permissions['edit own client content'] = array(
    'name' => 'edit own client content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
