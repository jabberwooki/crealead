<?php
/**
 * @file
 * crealead_coopins.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_coopins_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_coopins';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/coopins' => 'espace-co-entrepreneur/coopins',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c9f520769147a89c50f59edfc06ebf18' => array(
          'module' => 'views',
          'delta' => 'c9f520769147a89c50f59edfc06ebf18',
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
  $export['entrepreneur_area_coopins'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_coopins_solutions';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/coopins/solutions' => 'espace-co-entrepreneur/coopins/solutions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b09444b0d8be381134e477ac72bd3a43' => array(
          'module' => 'views',
          'delta' => 'b09444b0d8be381134e477ac72bd3a43',
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
  $export['entrepreneur_area_coopins_solutions'] = $context;

  return $export;
}
