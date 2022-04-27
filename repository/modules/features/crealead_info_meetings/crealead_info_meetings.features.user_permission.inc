<?php

/**
 * @file
 * crealead_info_meetings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crealead_info_meetings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in registrant_statuses'.
  $permissions['add terms in registrant_statuses'] = array(
    'name' => 'add terms in registrant_statuses',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer default image node:info_meeting:field_info_meeting_photo'.
  $permissions['administer default image node:info_meeting:field_info_meeting_photo'] = array(
    'name' => 'administer default image node:info_meeting:field_info_meeting_photo',
    'roles' => array(),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer info meetings'.
  $permissions['administer info meetings'] = array(
    'name' => 'administer info meetings',
    'roles' => array(
      'administrateur' => 'administrateur',
      'pôle gestion' => 'pôle gestion',
      'référent' => 'référent',
      'webmaster' => 'webmaster',
    ),
    'module' => 'crealead_info_meetings',
  );

  // Exported permission: 'administer info_meeting_registration registration'.
  $permissions['administer info_meeting_registration registration'] = array(
    'name' => 'administer info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own info_meeting_registration registration'.
  $permissions['administer own info_meeting_registration registration'] = array(
    'name' => 'administer own info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create info_meeting content'.
  $permissions['create info_meeting content'] = array(
    'name' => 'create info_meeting content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create info_meeting_registration registration'.
  $permissions['create info_meeting_registration registration'] = array(
    'name' => 'create info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create info_meeting_registration registration other anonymous'.
  $permissions['create info_meeting_registration registration other anonymous'] = array(
    'name' => 'create info_meeting_registration registration other anonymous',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create info_meeting_registration registration other users'.
  $permissions['create info_meeting_registration registration other users'] = array(
    'name' => 'create info_meeting_registration registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete any info_meeting content'.
  $permissions['delete any info_meeting content'] = array(
    'name' => 'delete any info_meeting content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any info_meeting_registration registration'.
  $permissions['delete any info_meeting_registration registration'] = array(
    'name' => 'delete any info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own info_meeting content'.
  $permissions['delete own info_meeting content'] = array(
    'name' => 'delete own info_meeting content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own info_meeting_registration registration'.
  $permissions['delete own info_meeting_registration registration'] = array(
    'name' => 'delete own info_meeting_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete terms in registrant_statuses'.
  $permissions['delete terms in registrant_statuses'] = array(
    'name' => 'delete terms in registrant_statuses',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any info_meeting content'.
  $permissions['edit any info_meeting content'] = array(
    'name' => 'edit any info_meeting content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit info_meeting_registration registration state'.
  $permissions['edit info_meeting_registration registration state'] = array(
    'name' => 'edit info_meeting_registration registration state',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit own info_meeting content'.
  $permissions['edit own info_meeting content'] = array(
    'name' => 'edit own info_meeting content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in registrant_statuses'.
  $permissions['edit terms in registrant_statuses'] = array(
    'name' => 'edit terms in registrant_statuses',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'update any info_meeting_registration registration'.
  $permissions['update any info_meeting_registration registration'] = array(
    'name' => 'update any info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own info_meeting_registration registration'.
  $permissions['update own info_meeting_registration registration'] = array(
    'name' => 'update own info_meeting_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view info_meeting_registration registration'.
  $permissions['view info_meeting_registration registration'] = array(
    'name' => 'view info_meeting_registration registration',
    'roles' => array(
      'administrateur' => 'administrateur',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own info_meeting_registration registration'.
  $permissions['view own info_meeting_registration registration'] = array(
    'name' => 'view own info_meeting_registration registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'assistant' => 'assistant',
      'pôle gestion' => 'pôle gestion',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
