<?php
/**
 * @file
 * crealead_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_ads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annonces/Offres';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annonces - Offres';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'news_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Origine de l'offre */
  $handler->display->display_options['fields']['field_ad_source']['id'] = 'field_ad_source';
  $handler->display->display_options['fields']['field_ad_source']['table'] = 'field_data_field_ad_source';
  $handler->display->display_options['fields']['field_ad_source']['field'] = 'field_ad_source';
  $handler->display->display_options['fields']['field_ad_source']['label'] = 'Origine';
  $handler->display->display_options['fields']['field_ad_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ad_source']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Type d'offre */
  $handler->display->display_options['fields']['field_type_d_offre']['id'] = 'field_type_d_offre';
  $handler->display->display_options['fields']['field_type_d_offre']['table'] = 'field_data_field_type_d_offre';
  $handler->display->display_options['fields']['field_type_d_offre']['field'] = 'field_type_d_offre';
  $handler->display->display_options['fields']['field_type_d_offre']['label'] = 'Type';
  $handler->display->display_options['fields']['field_type_d_offre']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type_d_offre']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ad' => 'ad',
  );
  /* Filter criterion: Content: Date d&#039;expiration (field_display_end_date) */
  $handler->display->display_options['filters']['field_display_end_date_value']['id'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['table'] = 'field_data_field_display_end_date';
  $handler->display->display_options['filters']['field_display_end_date_value']['field'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_display_end_date_value']['default_date'] = 'now';

  /* Display: Bloc espace coes */
  $handler = $view->new_display('block', 'Bloc espace coes', 'ads_list');
  $translatables['ads'] = array(
    t('Master'),
    t('Annonces - Offres'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Date'),
    t('Origine'),
    t('Titre'),
    t('Type'),
    t('Bloc espace coes'),
  );
  $export['ads'] = $view;

  return $export;
}
