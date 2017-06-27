<?php
/**
 * @file
 * crealead_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'formation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0e8c4084-d9fd-4b8f-9752-3cee0d23111c',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'animation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '707a1348-3fc9-4cff-a1da-aec011008686',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'sport',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8d1e166e-eead-47da-9672-d29351cb9fdb',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'conférence',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8ffec054-b4ed-479c-bfa2-e11545d5d724',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'salon',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9ae8b999-ff98-4b20-8c6e-94192f28f49c',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'soirée',
    'description' => '
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b9026b48-b3c8-4c52-9bcb-49147ec3d062',
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
