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

  // Exported permission: 'add terms in competencies'.
  $permissions['add terms in competencies'] = array(
    'name' => 'add terms in competencies',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in entrepreneur_tags'.
  $permissions['add terms in entrepreneur_tags'] = array(
    'name' => 'add terms in entrepreneur_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

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

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'delete terms in competencies'.
  $permissions['delete terms in competencies'] = array(
    'name' => 'delete terms in competencies',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in entrepreneur_tags'.
  $permissions['delete terms in entrepreneur_tags'] = array(
    'name' => 'delete terms in entrepreneur_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: 'edit own coe_page profile'.
  $permissions['edit own coe_page profile'] = array(
    'name' => 'edit own coe_page profile',
    'roles' => array(
      'entrepreneur' => 'entrepreneur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit terms in competencies'.
  $permissions['edit terms in competencies'] = array(
    'name' => 'edit terms in competencies',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in entrepreneur_tags'.
  $permissions['edit terms in entrepreneur_tags'] = array(
    'name' => 'edit terms in entrepreneur_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any coe_page profile'.
  $permissions['view any coe_page profile'] = array(
    'name' => 'view any coe_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
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

  return $permissions;
}
