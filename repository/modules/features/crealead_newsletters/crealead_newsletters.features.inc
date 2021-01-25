<?php
/**
 * @file
 * crealead_newsletters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_newsletters_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_newsletters_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_newsletters_node_info() {
  $items = array(
    'newsletter' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('Newsletters Structure, Gouvernance...'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function crealead_newsletters_paragraphs_info() {
  $items = array(
    'banner' => array(
      'name' => 'Bannière',
      'bundle' => 'banner',
      'locked' => '1',
    ),
    'date' => array(
      'name' => 'Date',
      'bundle' => 'date',
      'locked' => '1',
    ),
    'dg_words' => array(
      'name' => 'Le mot du DG',
      'bundle' => 'dg_words',
      'locked' => '1',
    ),
    'events' => array(
      'name' => 'Evénements',
      'bundle' => 'events',
      'locked' => '1',
    ),
    'idea' => array(
      'name' => 'Idée',
      'bundle' => 'idea',
      'locked' => '1',
    ),
    'ideas_box' => array(
      'name' => 'Boîte à idées',
      'bundle' => 'ideas_box',
      'locked' => '1',
    ),
    'infos' => array(
      'name' => 'Informations',
      'bundle' => 'infos',
      'locked' => '1',
    ),
    'infos_flash_3_cols' => array(
      'name' => 'Infos flash (3 colonnes)',
      'bundle' => 'infos_flash_3_cols',
      'locked' => '1',
    ),
    'member' => array(
      'name' => 'Membre équipe',
      'bundle' => 'member',
      'locked' => '1',
    ),
    'news_focus' => array(
      'name' => 'Focus actualités',
      'bundle' => 'news_focus',
      'locked' => '1',
    ),
    'nl_footer' => array(
      'name' => 'Pied de page',
      'bundle' => 'nl_footer',
      'locked' => '1',
    ),
    'person' => array(
      'name' => 'Personne',
      'bundle' => 'person',
      'locked' => '1',
    ),
    'spacer' => array(
      'name' => 'Séparateur',
      'bundle' => 'spacer',
      'locked' => '1',
    ),
    'team' => array(
      'name' => 'Equipe',
      'bundle' => 'team',
      'locked' => '1',
    ),
    'techcom' => array(
      'name' => 'Comité technique',
      'bundle' => 'techcom',
      'locked' => '1',
    ),
    'techcoms' => array(
      'name' => 'Comités techniques',
      'bundle' => 'techcoms',
      'locked' => '1',
    ),
    'thanks' => array(
      'name' => 'Merci réseau',
      'bundle' => 'thanks',
      'locked' => '1',
    ),
    'thanks_item' => array(
      'name' => 'Remerciement',
      'bundle' => 'thanks_item',
      'locked' => '1',
    ),
    'whatsnew' => array(
      'name' => 'Quoi de neuf',
      'bundle' => 'whatsnew',
      'locked' => '1',
    ),
    'zoom' => array(
      'name' => 'Zoom sur',
      'bundle' => 'zoom',
      'locked' => '1',
    ),
  );
  return $items;
}
