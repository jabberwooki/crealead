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
      'value' => '<h2>LES CO-ENTREPRENEURS DE CREALEAD</h2>

<p>Crealead, c’est 180 co-entrepreneurs aux compétences complémentaires pour répondre à vos besoins.&nbsp;<br />
Bénéficiez de la proximité et la flexibilité d’entrepreneurs individuels intégrés à une structure <strong>coopérative</strong> <strong>pérenne et solide</strong>.&nbsp;Une garantie de sérieux et de professionnalisme, l’assurance de <strong>prestations de qualité</strong> dans tous nos domaines d’intervention.&nbsp;</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['search_entrepreneur_intro'] = $box;

  return $export;
}
