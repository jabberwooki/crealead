<?php

/**
 * @file
 * kcore.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcore_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrepreneur_area';
  $context->description = '';
  $context->tag = 'Entrepreneurs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-co-entrepreneur*' => 'espace-co-entrepreneur*',
        'breves/*' => 'breves/*',
        'demandes/*' => 'demandes/*',
        'offres/*' => 'offres/*',
        'collectifs/*' => 'collectifs/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-coe-area' => array(
          'module' => 'menu',
          'delta' => 'menu-coe-area',
          'region' => 'header',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');
  $export['entrepreneur_area'] = $context;

  return $export;
}
