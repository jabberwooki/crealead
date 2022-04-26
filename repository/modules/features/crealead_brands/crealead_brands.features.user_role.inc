<?php

/**
 * @file
 * crealead_brands.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function crealead_brands_user_default_roles() {
  $roles = array();

  // Exported role: certifications et labels.
  $roles['certifications et labels'] = array(
    'name' => 'certifications et labels',
    'weight' => 10,
    'machine_name' => 'certifications_labels',
  );

  return $roles;
}
