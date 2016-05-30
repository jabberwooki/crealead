<?php
/**
 * @file
 * crealead_gazette.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function crealead_gazette_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gazette_date_envoi'.
  $field_bases['field_gazette_date_envoi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gazette_date_envoi',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  return $field_bases;
}
