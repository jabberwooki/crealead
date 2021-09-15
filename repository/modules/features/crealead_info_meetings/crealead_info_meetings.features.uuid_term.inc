<?php

/**
 * @file
 * crealead_info_meetings.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function crealead_info_meetings_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Pôle Emploi',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '0065017f-b512-400a-88d6-8c3737de0399',
    'vocabulary_machine_name' => 'registrant_statuses',
  );
  $terms[] = array(
    'name' => 'RSA',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '122c98cb-ecb9-42fb-99d8-b0d0a572ba4a',
    'vocabulary_machine_name' => 'registrant_statuses',
  );
  $terms[] = array(
    'name' => 'Autre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '42b12c54-3efa-4d98-b988-6a22d39f3c96',
    'vocabulary_machine_name' => 'registrant_statuses',
  );
  $terms[] = array(
    'name' => 'Salarié',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '988ff63e-98c1-4b5e-a84f-89bf72043f3e',
    'vocabulary_machine_name' => 'registrant_statuses',
  );
  $terms[] = array(
    'name' => 'Entrepreneur immatriculé',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'd98320d5-2d28-4b2e-8acf-ee5f157cd314',
    'vocabulary_machine_name' => 'registrant_statuses',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Portage',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'ebdcd28d-cbce-4d20-87e6-5c6a7374d41e',
    'vocabulary_machine_name' => 'registrant_statuses',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
