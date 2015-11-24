<?php
/**
 * @file
 * crealead_brands.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crealead_brands_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'search_entrepreneur_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Vue : Marque : Recherche : Titre et texte d\'introduction ';
  $box->options = array(
    'body' => array(
      'value' => '<h2 class="block-title">LES CO-ENTREPRENEURS DE CREALEAD</h2><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Maecenas feugiat consequat diam. Maecenas metus. Vivamus diam purus, cursus a, commodo non, facilisis vitae, nulla. Aenean dictum lacinia tortor.&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['search_entrepreneur_intro'] = $box;

  return $export;
}
