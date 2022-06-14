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

  // Exported role: CA.
  $roles['CA'] = array(
    'name' => 'CA',
    'weight' => 13,
    'machine_name' => 'ca',
  );

  // Exported role: DUP.
  $roles['DUP'] = array(
    'name' => 'DUP',
    'weight' => 14,
    'machine_name' => 'dup',
  );

  // Exported role: administrateur.
  $roles['administrateur'] = array(
    'name' => 'administrateur',
    'weight' => 19,
    'machine_name' => '',
  );

  // Exported role: assistant.
  $roles['assistant'] = array(
    'name' => 'assistant',
    'weight' => 11,
    'machine_name' => 'assistant',
  );

  // Exported role: associé.
  $roles['associé'] = array(
    'name' => 'associé',
    'weight' => 6,
    'machine_name' => 'associe',
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
    'weight' => 9,
    'machine_name' => 'certif_lr',
  );

  // Exported role: direction.
  $roles['direction'] = array(
    'name' => 'direction',
    'weight' => 15,
    'machine_name' => 'direction',
  );

  // Exported role: entrepreneur.
  $roles['entrepreneur'] = array(
    'name' => 'entrepreneur',
    'weight' => 4,
    'machine_name' => 'entrepreneur',
  );

  // Exported role: entrepreneur prestataire.
  $roles['entrepreneur prestataire'] = array(
    'name' => 'entrepreneur prestataire',
    'weight' => 5,
    'machine_name' => 'provider',
  );

  // Exported role: pôle gestion.
  $roles['pôle gestion'] = array(
    'name' => 'pôle gestion',
    'weight' => 12,
    'machine_name' => 'pole_gestion',
  );

  // Exported role: responsable de pôle.
  $roles['responsable de pôle'] = array(
    'name' => 'responsable de pôle',
    'weight' => 17,
    'machine_name' => 'pole_manager',
  );

  // Exported role: référent.
  $roles['référent'] = array(
    'name' => 'référent',
    'weight' => 10,
    'machine_name' => 'referent',
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 18,
    'machine_name' => '',
  );

  // Exported role: éditeur gazette.
  $roles['éditeur gazette'] = array(
    'name' => 'éditeur gazette',
    'weight' => 8,
    'machine_name' => 'editeur_gazette',
  );

  return $roles;
}
