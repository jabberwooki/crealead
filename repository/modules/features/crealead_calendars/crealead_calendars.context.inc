<?php
/**
 * @file
 * crealead_calendars.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_calendars_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendars_structure';
  $context->description = '';
  $context->tag = 'Calendriers';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/informations' => 'espace-co-entrepreneur/informations',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-structure_calendar-structure' => array(
          'module' => 'views',
          'delta' => 'structure_calendar-structure',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendriers');
  $export['calendars_structure'] = $context;

  return $export;
}
