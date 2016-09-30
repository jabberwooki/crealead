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
    ),
    'module' => 'filedepot',
  );

  // Exported permission: 'administer filedepot'.
  $permissions['administer filedepot'] = array(
    'name' => 'administer filedepot',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'filedepot',
  );

  return $permissions;
}
