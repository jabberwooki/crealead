<?php

/**
 * @file
 * crealead_multimedia.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function crealead_multimedia_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_files'.
  $field_bases['field_files'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_files',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  // Exported field_base: 'field_galleries'.
  $field_bases['field_galleries'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_galleries',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  // Exported field_base: 'field_videos'.
  $field_bases['field_videos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_videos',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  return $field_bases;
}
