<?php
/**
 * @file
 * kedition.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kedition_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ckeditor',
  );

  return $permissions;
}
