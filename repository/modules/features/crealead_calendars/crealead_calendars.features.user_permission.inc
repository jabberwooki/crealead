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

  // Exported permission: 'clear google_rooms_calendar feeds'.
  $permissions['clear google_rooms_calendar feeds'] = array(
    'name' => 'clear google_rooms_calendar feeds',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
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

  // Exported permission: 'create room_event content'.
  $permissions['create room_event content'] = array(
    'name' => 'create room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any room_event content'.
  $permissions['delete any room_event content'] = array(
    'name' => 'delete any room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own room_event content'.
  $permissions['delete own room_event content'] = array(
    'name' => 'delete own room_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any room_event content'.
  $permissions['edit any room_event content'] = array(
    'name' => 'edit any room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own room_event content'.
  $permissions['edit own room_event content'] = array(
    'name' => 'edit own room_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import google_rooms_calendar feeds'.
  $permissions['import google_rooms_calendar feeds'] = array(
    'name' => 'import google_rooms_calendar feeds',
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

  // Exported permission: 'unlock google_rooms_calendar feeds'.
  $permissions['unlock google_rooms_calendar feeds'] = array(
    'name' => 'unlock google_rooms_calendar feeds',
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
