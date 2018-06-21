<?php
/**
 * @file
 * crealead_faqs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_faqs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faqs_page';
  $context->description = '';
  $context->tag = 'FAQs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faqs' => 'faqs',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');
  $export['faqs_page'] = $context;

  return $export;
}
