<?php
/**
 * @file
 * kcontextes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcontextes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Core');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page only';
  $context->tag = 'Core';
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
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'kcore-crealead_coes_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_coes_number',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'kcore-crealead_refs_number' => array(
          'module' => 'kcore',
          'delta' => 'crealead_refs_number',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'crealead_brands-crealead_brands_number' => array(
          'module' => 'crealead_brands',
          'delta' => 'crealead_brands_number',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'views-news-block_news_focus' => array(
          'module' => 'views',
          'delta' => 'news-block_news_focus',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-brands-block_2' => array(
          'module' => 'views',
          'delta' => 'brands-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'boxes-crealead_link_advantages' => array(
          'module' => 'boxes',
          'delta' => 'crealead_link_advantages',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-crealead_link_info_meetings' => array(
          'module' => 'boxes',
          'delta' => 'crealead_link_info_meetings',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Front page only');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'All pages but front';
  $context->tag = 'Core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but front');
  t('Core');
  $export['not-front'] = $context;

  return $export;
}
