<?php
/**
 * @file
 * crealead_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coe_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Annuaire entrepreneurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annuaire des entrepreneurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Profil : Nom commercial */
  $handler->display->display_options['fields']['field_coe_brand_name']['id'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['field'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['label'] = '';
  $handler->display->display_options['fields']['field_coe_brand_name']['element_label_colon'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'annuaire-entrepreneurs';
  $translatables['coe_directory'] = array(
    t('Master'),
    t('Annuaire des entrepreneurs'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['coe_directory'] = $view;

  return $export;
}
