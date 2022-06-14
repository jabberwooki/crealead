<?php

/**
 * @file
 * crealead_flashinfos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_flashinfos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create flashinfo content'.
  $permissions['create flashinfo content'] = array(
    'name' => 'create flashinfo content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'redacteur flashinfos' => 'redacteur flashinfos',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any flashinfo content'.
  $permissions['delete any flashinfo content'] = array(
    'name' => 'delete any flashinfo content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'redacteur flashinfos' => 'redacteur flashinfos',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own flashinfo content'.
  $permissions['delete own flashinfo content'] = array(
    'name' => 'delete own flashinfo content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'redacteur flashinfos' => 'redacteur flashinfos',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any flashinfo content'.
  $permissions['edit any flashinfo content'] = array(
    'name' => 'edit any flashinfo content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'redacteur flashinfos' => 'redacteur flashinfos',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own flashinfo content'.
  $permissions['edit own flashinfo content'] = array(
    'name' => 'edit own flashinfo content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'redacteur flashinfos' => 'redacteur flashinfos',
    ),
    'module' => 'node',
  );

  return $permissions;
}
