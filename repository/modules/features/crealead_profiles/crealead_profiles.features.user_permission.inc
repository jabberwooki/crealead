<?php
/**
 * @file
 * crealead_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any coe_page profile'.
  $permissions['edit any coe_page profile'] = array(
    'name' => 'edit any coe_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own coe_page profile'.
  $permissions['edit own coe_page profile'] = array(
    'name' => 'edit own coe_page profile',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any coe_page profile'.
  $permissions['view any coe_page profile'] = array(
    'name' => 'view any coe_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own coe_page profile'.
  $permissions['view own coe_page profile'] = array(
    'name' => 'view own coe_page profile',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  return $permissions;
}