<?php
/**
 * @file
 * crealead_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'coe_default_logo';
  $strongarm->value = 46;
  $export['coe_default_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'coe_default_picture';
  $strongarm->value = 47;
  $export['coe_default_picture'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_image_ft_state';
  $strongarm->value = array(
    'node' => array(
      'info_meeting' => array(
        'field_info_meeting_photo' => 'info_meetings_default_image',
      ),
    ),
    'profile2' => array(
      'coe_page' => array(
        'field_coe_logo' => 'coe_default_logo',
        'field_coe_photo' => 'coe_default_picture',
      ),
    ),
  );
  $export['default_image_ft_state'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__coe_page';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'page' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '15',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__coe_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'info_meetings_default_image';
  $strongarm->value = 40;
  $export['info_meetings_default_image'] = $strongarm;

  return $export;
}
