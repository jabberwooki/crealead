<?php
/**
 * @file
 * crealead_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished product content'.
  $permissions['view any unpublished product content'] = array(
    'name' => 'view any unpublished product content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
