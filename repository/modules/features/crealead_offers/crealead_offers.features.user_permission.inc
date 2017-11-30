<?php
/**
 * @file
 * crealead_offers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_offers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create offer content'.
  $permissions['create offer content'] = array(
    'name' => 'create offer content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offer content'.
  $permissions['delete any offer content'] = array(
    'name' => 'delete any offer content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offer content'.
  $permissions['delete own offer content'] = array(
    'name' => 'delete own offer content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any offer content'.
  $permissions['edit any offer content'] = array(
    'name' => 'edit any offer content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offer content'.
  $permissions['edit own offer content'] = array(
    'name' => 'edit own offer content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  return $permissions;
}
