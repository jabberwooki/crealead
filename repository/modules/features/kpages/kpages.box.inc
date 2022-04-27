<?php

/**
 * @file
 * kpages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function kpages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'crealead_link_advantages';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Crealead : Lien Avantages';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/la-cooperative/les-avantages-de-crealead">Les avantages de Crealead</a></p>
',
      'format' => 'full_html',
    ),
  );
  $export['crealead_link_advantages'] = $box;

  return $export;
}
