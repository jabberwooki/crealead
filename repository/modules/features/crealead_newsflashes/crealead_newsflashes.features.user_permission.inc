<?php
/**
 * @file
 * crealead_newsflashes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_newsflashes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer newsflashes'.
  $permissions['administer newsflashes'] = array(
    'name' => 'administer newsflashes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'crealead_newsflashes',
  );

  // Exported permission: 'create newsflash content'.
  $permissions['create newsflash content'] = array(
    'name' => 'create newsflash content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any newsflash content'.
  $permissions['delete any newsflash content'] = array(
    'name' => 'delete any newsflash content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own newsflash content'.
  $permissions['delete own newsflash content'] = array(
    'name' => 'delete own newsflash content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any newsflash content'.
  $permissions['edit any newsflash content'] = array(
    'name' => 'edit any newsflash content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own newsflash content'.
  $permissions['edit own newsflash content'] = array(
    'name' => 'edit own newsflash content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
