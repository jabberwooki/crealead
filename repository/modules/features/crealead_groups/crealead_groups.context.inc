<?php
/**
 * @file
 * crealead_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_business_groups';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/collectifs' => 'espace-co-entrepreneur/collectifs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-business_groups-bg_block' => array(
          'module' => 'views',
          'delta' => 'business_groups-bg_block',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_area_business_groups'] = $context;

  return $export;
}
