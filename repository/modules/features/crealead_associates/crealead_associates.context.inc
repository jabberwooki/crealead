<?php

/**
 * @file
 * crealead_associates.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_associates_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_associates';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/espace-associes' => 'espace-co-entrepreneur/espace-associes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-reports-asso_area' => array(
          'module' => 'views',
          'delta' => 'reports-asso_area',
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
  $export['entrepreneur_area_associates'] = $context;

  return $export;
}
