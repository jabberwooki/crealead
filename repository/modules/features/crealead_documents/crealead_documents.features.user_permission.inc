<?php
/**
 * @file
 * crealead_documents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_documents_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access filedepot'.
  $permissions['access filedepot'] = array(
    'name' => 'access filedepot',
    'roles' => array(
      'administrateur' => 'administrateur',
      'associé' => 'associé',
      'certif LR' => 'certif LR',
      'entrepreneur' => 'entrepreneur',
      'pôle gestion' => 'pôle gestion',
      'rédacteur' => 'rédacteur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
      'éditeur gazette' => 'éditeur gazette',
    ),
    'module' => 'filedepot',
  );

  // Exported permission: 'administer filedepot'.
  $permissions['administer filedepot'] = array(
    'name' => 'administer filedepot',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filedepot',
  );

  // Exported permission: 'create filedepot_folder content'.
  $permissions['create filedepot_folder content'] = array(
    'name' => 'create filedepot_folder content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'certif LR' => 'certif LR',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any filedepot_folder content'.
  $permissions['delete any filedepot_folder content'] = array(
    'name' => 'delete any filedepot_folder content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own filedepot_folder content'.
  $permissions['delete own filedepot_folder content'] = array(
    'name' => 'delete own filedepot_folder content',
    'roles' => array(
      'certif LR' => 'certif LR',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any filedepot_folder content'.
  $permissions['edit any filedepot_folder content'] = array(
    'name' => 'edit any filedepot_folder content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own filedepot_folder content'.
  $permissions['edit own filedepot_folder content'] = array(
    'name' => 'edit own filedepot_folder content',
    'roles' => array(
      'certif LR' => 'certif LR',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished filedepot_folder content'.
  $permissions['view any unpublished filedepot_folder content'] = array(
    'name' => 'view any unpublished filedepot_folder content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
