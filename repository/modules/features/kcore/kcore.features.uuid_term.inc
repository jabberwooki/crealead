<?php
/**
 * @file
 * kcore.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function kcore_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Com',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '04a8bb60-91fa-4aa4-9b40-9abe73c02c4c',
    'vocabulary_machine_name' => 'sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Formation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '93764853-f279-48c7-8e03-616654e82ee0',
    'vocabulary_machine_name' => 'sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bâtiment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b071b55d-368f-4059-84c8-5f5875bfd05c',
    'vocabulary_machine_name' => 'sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Conseil',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c365762c-01dd-4d05-9ea8-e394b0505e5e',
    'vocabulary_machine_name' => 'sectors',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'TIC',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e2bfd5ef-2707-4761-b72e-92448a122bfe',
    'vocabulary_machine_name' => 'sectors',
    'metatags' => array(),
  );
  return $terms;
}
