<?php
/**
 * @file
 * crealead_profiles.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crealead_profiles_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'crealead_link_coe_list';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Crealead : Lien liste complète co-E';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/entrepreneurs/liste-complete">Voir la liste complète des entrepreneurs de Crealead</a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['crealead_link_coe_list'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'crealead_links_coe';
  $box->plugin_key = 'simple';
  $box->title = 'Vous recherchez un prestataire';
  $box->description = 'Crealead : Liens Prestataires';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/avantages-entrepreneur-crealead">Découvrez les avantages à faire intervenir un entrepreneur Crealead</a>.</p>

<p><a href="/entrepreneurs">Découvrez l’ensemble des entrepreneurs/prestations</a>.</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['crealead_links_coe'] = $box;

  return $export;
}
