<?php
/**
 * @file
 * kcore.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kcore_user_default_roles() {
  $roles = array();

  // Exported role: administrateur.
  $roles['administrateur'] = array(
    'name' => 'administrateur',
    'weight' => 7,
    'machine_name' => '',
  );

  // Exported role: canditat.
  $roles['canditat'] = array(
    'name' => 'canditat',
    'weight' => 2,
    'machine_name' => 'canditate',
  );

  // Exported role: entrepreneur.
  $roles['entrepreneur'] = array(
    'name' => 'entrepreneur',
    'weight' => 3,
    'machine_name' => 'entrepreneur',
  );

  // Exported role: pôle gestion.
  $roles['pôle gestion'] = array(
    'name' => 'pôle gestion',
    'weight' => 6,
    'machine_name' => 'pole_gestion',
  );

  // Exported role: rédacteur.
  $roles['rédacteur'] = array(
    'name' => 'rédacteur',
    'weight' => 5,
    'machine_name' => 'redactor',
  );

  // Exported role: référent.
  $roles['référent'] = array(
    'name' => 'référent',
    'weight' => 4,
    'machine_name' => 'referent',
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 6,
    'machine_name' => '',
  );

  return $roles;
}
