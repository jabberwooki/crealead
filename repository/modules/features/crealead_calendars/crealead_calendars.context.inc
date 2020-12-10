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
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendars_all';
  $context->description = '';
  $context->tag = 'Calendriers';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/calendrier-structure' => 'espace-co-entrepreneur/calendrier-structure',
        'espace-co-entrepreneur/calendrier-salles*' => 'espace-co-entrepreneur/calendrier-salles*',
        'espace-co-entrepreneur/calendrier-formations/*' => 'espace-co-entrepreneur/calendrier-formations/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-calendriers' => array(
          'module' => 'menu',
          'delta' => 'menu-calendriers',
          'region' => 'header',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendriers');
  $export['calendars_all'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendriers');
  $export['calendars_structure'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area_coop_event';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur/evenements-vie-cooperative/liste' => 'espace-co-entrepreneur/evenements-vie-cooperative/liste',
        'espace-co-entrepreneur/evenements-vie-cooperative/calendrier' => 'espace-co-entrepreneur/evenements-vie-cooperative/calendrier',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-calendriers' => array(
          'module' => 'menu',
          'delta' => 'menu-calendriers',
          'region' => 'header',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_area_coop_event'] = $context;

  return $export;
}
