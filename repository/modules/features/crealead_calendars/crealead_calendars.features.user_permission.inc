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

  // Exported permission: 'administer structure events'.
  $permissions['administer structure events'] = array(
    'name' => 'administer structure events',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'crealead_calendars',
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

  // Exported permission: 'clear rooms_agenda feeds'.
  $permissions['clear rooms_agenda feeds'] = array(
    'name' => 'clear rooms_agenda feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create room_event content'.
  $permissions['create room_event content'] = array(
    'name' => 'create room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create structure_event content'.
  $permissions['create structure_event content'] = array(
    'name' => 'create structure_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any room_event content'.
  $permissions['delete any room_event content'] = array(
    'name' => 'delete any room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any structure_event content'.
  $permissions['delete any structure_event content'] = array(
    'name' => 'delete any structure_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own room_event content'.
  $permissions['delete own room_event content'] = array(
    'name' => 'delete own room_event content',
    'roles' => array(
      'direction' => 'direction',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own structure_event content'.
  $permissions['delete own structure_event content'] = array(
    'name' => 'delete own structure_event content',
    'roles' => array(
      'direction' => 'direction',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any room_event content'.
  $permissions['edit any room_event content'] = array(
    'name' => 'edit any room_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any structure_event content'.
  $permissions['edit any structure_event content'] = array(
    'name' => 'edit any structure_event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'direction' => 'direction',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own room_event content'.
  $permissions['edit own room_event content'] = array(
    'name' => 'edit own room_event content',
    'roles' => array(
      'direction' => 'direction',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own structure_event content'.
  $permissions['edit own structure_event content'] = array(
    'name' => 'edit own structure_event content',
    'roles' => array(
      'direction' => 'direction',
    ),
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

  // Exported permission: 'import rooms_agenda feeds'.
  $permissions['import rooms_agenda feeds'] = array(
    'name' => 'import rooms_agenda feeds',
    'roles' => array(),
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

  // Exported permission: 'unlock rooms_agenda feeds'.
  $permissions['unlock rooms_agenda feeds'] = array(
    'name' => 'unlock rooms_agenda feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view any unpublished structure_event content'.
  $permissions['view any unpublished structure_event content'] = array(
    'name' => 'view any unpublished structure_event content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
