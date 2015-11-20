<?php
/**
 * @file
 * crealead_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crealead_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_home';
  $context->description = '';
  $context->tag = 'Actualités';
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
        'views-news-block_news_focus' => array(
          'module' => 'views',
          'delta' => 'news-block_news_focus',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  $export['news_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_list';
  $context->description = '';
  $context->tag = 'Actualités';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'actualites' => 'actualites',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_zoom_actu' => array(
          'module' => 'views',
          'delta' => 'news-block_zoom_actu',
          'region' => 'content_header',
          'weight' => '-10',
        ),
        'views-news-block_news_2_3' => array(
          'module' => 'views',
          'delta' => 'news-block_news_2_3',
          'region' => 'content_header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  $export['news_list'] = $context;

  return $export;
}
