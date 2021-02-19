<?php
/**
 * @file
 * crealead_offers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_offers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offres';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Offres';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Les Offres listées ci-dessous sont des promotions et offres temporaires visibles uniquement par les co-entrepreneurs. 
Les produits et formations publics et permanents proposés par les marques co-entrepreneurs se trouvent dans les fiches marques.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'code du bouton Ajouter
voir crealead_offers_views_pre_render()';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Il n\'y a actuellement aucune offre.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  /* Field: Content: Offre proposée par */
  $handler->display->display_options['fields']['field_offer_origin']['id'] = 'field_offer_origin';
  $handler->display->display_options['fields']['field_offer_origin']['table'] = 'field_data_field_offer_origin';
  $handler->display->display_options['fields']['field_offer_origin']['field'] = 'field_offer_origin';
  $handler->display->display_options['fields']['field_offer_origin']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_origin']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Type d'offre */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'news_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'offer' => 'offer',
  );
  /* Filter criterion: Content: Date de fin d&#039;affichage (field_display_end_date) */
  $handler->display->display_options['filters']['field_display_end_date_value']['id'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['table'] = 'field_data_field_display_end_date';
  $handler->display->display_options['filters']['field_display_end_date_value']['field'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_display_end_date_value']['default_date'] = 'now';

  /* Display: Bloc espace coes */
  $handler = $view->new_display('block', 'Bloc espace coes', 'offers_list');

  /* Display: Page espace coes */
  $handler = $view->new_display('page_with_page_title', 'Page espace coes', 'offers_page');
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/offres';
  $translatables['offers'] = array(
    t('Master'),
    t('Offres'),
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
    t('Les Offres listées ci-dessous sont des promotions et offres temporaires visibles uniquement par les co-entrepreneurs. 
Les produits et formations publics et permanents proposés par les marques co-entrepreneurs se trouvent dans les fiches marques.'),
    t('code du bouton Ajouter
voir crealead_offers_views_pre_render()'),
    t('Il n\'y a actuellement aucune offre.'),
    t('Titre'),
    t('Offre proposée par'),
    t('Type d\'offre'),
    t('Date'),
    t('Bloc espace coes'),
    t('Page espace coes'),
  );
  $export['offers'] = $view;

  return $export;
}
