<?php

/**
 * @file
 * crealead_info_meetings.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crealead_info_meetings_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'crealead_link_info_meetings';
  $box->plugin_key = 'simple';
  $box->title = 'Réunions d\'information';
  $box->description = 'Crealead : Lien Réunions d\'info';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/reunions-information">Inscription à la réunion d\'information</a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['crealead_link_info_meetings'] = $box;

  return $export;
}
