<?php
/**
 * @file
 * kcontextes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function kcontextes_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_headband';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Réseaux sociaux';
  $box->options = array(
    'body' => array(
      'value' => '<div><a target="_blank" class="demo-icon icon-facebook" href="https://www.facebook.com/Crealead/"><span class="sr-only">Facebook Crealead</span></a><a target="_blank" class="demo-icon icon-linkedin" href="https://www.linkedin.com/company/10597004/"><span class="sr-only">linkedin Crealead</span></a><a target="_blank" class="demo-icon icon-twitter" href="https://twitter.com/Crealead_scop"><span class="sr-only">Twitter Crealead</span></a></div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_headband'] = $box;

  return $export;
}
