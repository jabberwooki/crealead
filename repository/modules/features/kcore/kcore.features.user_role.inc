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
    'weight' => 10,
    'machine_name' => '',
  );

  // Exported role: canditat.
  $roles['canditat'] = array(
    'name' => 'canditat',
    'weight' => 2,
    'machine_name' => 'canditate',
  );

  // Exported role: certif LR.
  $roles['certif LR'] = array(
    'name' => 'certif LR',
    'weight' => 7,
    'machine_name' => 'certif_lr',
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
    'weight' => 8,
    'machine_name' => 'pole_gestion',
  );

  // Exported role: rédacteur.
  $roles['rédacteur'] = array(
    'name' => 'rédacteur',
    'weight' => 6,
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
    'weight' => 9,
    'machine_name' => '',
  );

  // Exported role: éditeur gazette.
  $roles['éditeur gazette'] = array(
    'name' => 'éditeur gazette',
    'weight' => 5,
    'machine_name' => 'editeur_gazette',
  );

  return $roles;
}
