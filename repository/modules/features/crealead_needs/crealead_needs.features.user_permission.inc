<?php
/**
 * @file
 * crealead_needs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_needs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create need content'.
  $permissions['create need content'] = array(
    'name' => 'create need content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any need content'.
  $permissions['delete any need content'] = array(
    'name' => 'delete any need content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own need content'.
  $permissions['delete own need content'] = array(
    'name' => 'delete own need content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any need content'.
  $permissions['edit any need content'] = array(
    'name' => 'edit any need content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own need content'.
  $permissions['edit own need content'] = array(
    'name' => 'edit own need content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  return $permissions;
}
