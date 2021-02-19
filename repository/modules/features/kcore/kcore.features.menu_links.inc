<?php
/**
 * @file
 * kcore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kcore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_accueil:<front>.
  $menu_links['main-menu_accueil:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_accueil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dcouvrez-loffre-desbrco-entrepreneurs:annuaire-entrepreneurs.
  $menu_links['main-menu_dcouvrez-loffre-desbrco-entrepreneurs:annuaire-entrepreneurs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'annuaire-entrepreneurs',
    'router_path' => 'annuaire-entrepreneurs',
    'link_title' => 'Découvrez l\'offre des<br>co-entrepreneurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dcouvrez-loffre-desbrco-entrepreneurs:annuaire-entrepreneurs',
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_plan-du-site:sitemap.
  $menu_links['menu-footer-menu_plan-du-site:sitemap'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Plan du site',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
      'identifier' => 'menu-footer-menu_plan-du-site:sitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top_contact:eform/submit/site-contact.
  $menu_links['menu-top_contact:eform/submit/site-contact'] = array(
    'menu_name' => 'menu-top',
    'link_path' => 'eform/submit/site-contact',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top_contact:eform/submit/site-contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Contact');
  t('Découvrez l\'offre des<br>co-entrepreneurs');
  t('Plan du site');

  return $menu_links;
}
