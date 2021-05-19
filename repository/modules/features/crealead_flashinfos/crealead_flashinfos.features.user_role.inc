<?php
/**
 * @file
 * crealead_flashinfos.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function crealead_flashinfos_user_default_roles() {
  $roles = array();

  // Exported role: redacteur flashinfos.
  $roles['redacteur flashinfos'] = array(
    'name' => 'redacteur flashinfos',
    'weight' => 16,
    'machine_name' => 'redacteur_flashinfos',
  );

  return $roles;
}
