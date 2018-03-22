<?php
/**
 * @file
 * crealead_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create business_group content'.
  $permissions['create business_group content'] = array(
    'name' => 'create business_group content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any business_group content'.
  $permissions['delete any business_group content'] = array(
    'name' => 'delete any business_group content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own business_group content'.
  $permissions['delete own business_group content'] = array(
    'name' => 'delete own business_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any business_group content'.
  $permissions['edit any business_group content'] = array(
    'name' => 'edit any business_group content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own business_group content'.
  $permissions['edit own business_group content'] = array(
    'name' => 'edit own business_group content',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
      'référent' => 'référent',
    ),
    'module' => 'node',
  );

  return $permissions;
}
