<?php
/**
 * @file
 * crealead_needs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_needs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_exchanges';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/echanges' => 'espace-co-entrepreneur/echanges',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-needs-needs_list' => array(
          'module' => 'views',
          'delta' => 'needs-needs_list',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_area_exchanges'] = $context;

  return $export;
}
