<?php
/**
 * @file
 * crealead_calendars.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_calendars_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear google_structure_calendar feeds'.
  $permissions['clear google_structure_calendar feeds'] = array(
    'name' => 'clear google_structure_calendar feeds',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import google_structure_calendar feeds'.
  $permissions['import google_structure_calendar feeds'] = array(
    'name' => 'import google_structure_calendar feeds',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock google_structure_calendar feeds'.
  $permissions['unlock google_structure_calendar feeds'] = array(
    'name' => 'unlock google_structure_calendar feeds',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
