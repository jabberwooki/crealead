<?php

/**
 * @file
 * crealead_flashinfos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_flashinfos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'flashinfos_home';
  $context->description = '';
  $context->tag = 'Flash infos';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flashinfos-front_block' => array(
          'module' => 'views',
          'delta' => 'flashinfos-front_block',
          'region' => 'full_content_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Flash infos');
  $export['flashinfos_home'] = $context;

  return $export;
}
