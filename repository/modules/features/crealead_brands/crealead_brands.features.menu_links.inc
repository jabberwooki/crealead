<?php
/**
 * @file
 * crealead_brands.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_brands_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_nos-prestatairesbret-artisans:annuaire-entrepreneurs.
  $menu_links['main-menu_nos-prestatairesbret-artisans:annuaire-entrepreneurs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'annuaire-entrepreneurs',
    'router_path' => 'annuaire-entrepreneurs',
    'link_title' => 'Nos prestataires<br/>et artisans',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'identifier' => 'main-menu_nos-prestatairesbret-artisans:annuaire-entrepreneurs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dcouvrez-loffre-desbrco-entrepreneurs:annuaire-entrepreneurs',
  );
  // Exported menu link: main-menu_thmatiques:thematiques.
  $menu_links['main-menu_thmatiques:thematiques'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'thematiques',
    'router_path' => 'thematiques',
    'link_title' => 'Thématiques',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_thmatiques:thematiques',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 40,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Nos prestataires<br/>et artisans');
  t('Thématiques');

  return $menu_links;
}
