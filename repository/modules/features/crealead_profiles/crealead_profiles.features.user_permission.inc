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

  // Exported permission: 'edit any assistant_page profile'.
  $permissions['edit any assistant_page profile'] = array(
    'name' => 'edit any assistant_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any ca_page profile'.
  $permissions['edit any ca_page profile'] = array(
    'name' => 'edit any ca_page profile',
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

  // Exported permission: 'edit any direction_page profile'.
  $permissions['edit any direction_page profile'] = array(
    'name' => 'edit any direction_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any dup_page profile'.
  $permissions['edit any dup_page profile'] = array(
    'name' => 'edit any dup_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any management_page profile'.
  $permissions['edit any management_page profile'] = array(
    'name' => 'edit any management_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any provider_page profile'.
  $permissions['edit any provider_page profile'] = array(
    'name' => 'edit any provider_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any referent_page profile'.
  $permissions['edit any referent_page profile'] = array(
    'name' => 'edit any referent_page profile',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own assistant_page profile'.
  $permissions['edit own assistant_page profile'] = array(
    'name' => 'edit own assistant_page profile',
    'roles' => array(
      'assistant' => 'assistant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own ca_page profile'.
  $permissions['edit own ca_page profile'] = array(
    'name' => 'edit own ca_page profile',
    'roles' => array(
      'CA' => 'CA',
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

  // Exported permission: 'edit own direction_page profile'.
  $permissions['edit own direction_page profile'] = array(
    'name' => 'edit own direction_page profile',
    'roles' => array(
      'direction' => 'direction',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own dup_page profile'.
  $permissions['edit own dup_page profile'] = array(
    'name' => 'edit own dup_page profile',
    'roles' => array(
      'DUP' => 'DUP',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own management_page profile'.
  $permissions['edit own management_page profile'] = array(
    'name' => 'edit own management_page profile',
    'roles' => array(
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own provider_page profile'.
  $permissions['edit own provider_page profile'] = array(
    'name' => 'edit own provider_page profile',
    'roles' => array(
      'entrepreneur prestataire' => 'entrepreneur prestataire',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own referent_page profile'.
  $permissions['edit own referent_page profile'] = array(
    'name' => 'edit own referent_page profile',
    'roles' => array(
      'référent' => 'référent',
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

  // Exported permission: 'view any assistant_page profile'.
  $permissions['view any assistant_page profile'] = array(
    'name' => 'view any assistant_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any ca_page profile'.
  $permissions['view any ca_page profile'] = array(
    'name' => 'view any ca_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
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

  // Exported permission: 'view any direction_page profile'.
  $permissions['view any direction_page profile'] = array(
    'name' => 'view any direction_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any dup_page profile'.
  $permissions['view any dup_page profile'] = array(
    'name' => 'view any dup_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any management_page profile'.
  $permissions['view any management_page profile'] = array(
    'name' => 'view any management_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any provider_page profile'.
  $permissions['view any provider_page profile'] = array(
    'name' => 'view any provider_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any referent_page profile'.
  $permissions['view any referent_page profile'] = array(
    'name' => 'view any referent_page profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own assistant_page profile'.
  $permissions['view own assistant_page profile'] = array(
    'name' => 'view own assistant_page profile',
    'roles' => array(
      'assistant' => 'assistant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own ca_page profile'.
  $permissions['view own ca_page profile'] = array(
    'name' => 'view own ca_page profile',
    'roles' => array(
      'CA' => 'CA',
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

  // Exported permission: 'view own direction_page profile'.
  $permissions['view own direction_page profile'] = array(
    'name' => 'view own direction_page profile',
    'roles' => array(
      'direction' => 'direction',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own dup_page profile'.
  $permissions['view own dup_page profile'] = array(
    'name' => 'view own dup_page profile',
    'roles' => array(
      'DUP' => 'DUP',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own management_page profile'.
  $permissions['view own management_page profile'] = array(
    'name' => 'view own management_page profile',
    'roles' => array(
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own provider_page profile'.
  $permissions['view own provider_page profile'] = array(
    'name' => 'view own provider_page profile',
    'roles' => array(
      'entrepreneur prestataire' => 'entrepreneur prestataire',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own referent_page profile'.
  $permissions['view own referent_page profile'] = array(
    'name' => 'view own referent_page profile',
    'roles' => array(
      'référent' => 'référent',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
