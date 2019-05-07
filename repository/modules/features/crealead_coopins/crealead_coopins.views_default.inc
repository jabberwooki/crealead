<?php
/**
 * @file
 * crealead_coopins.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_coopins_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coopins_solutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Solutions COOPINs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dernières solutions payables en COOP\'INs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introduction']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_introduction']['settings'] = array(
    'trim_length' => '200',
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
    'training' => 'training',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Payable en Coop&#039;in (field_coopins) */
  $handler->display->display_options['filters']['field_coopins_value']['id'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['table'] = 'field_data_field_coopins';
  $handler->display->display_options['filters']['field_coopins_value']['field'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coopins_value']['group'] = 1;

  /* Display: Dernières solutions */
  $handler = $view->new_display('block', 'Dernières solutions', 'latest_solutions');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/espace-co-entrepreneur/coopins/solutions">Voir toutes les solutions pour profiter de ses COOP\'INs</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';

  /* Display: Toutes les solutions */
  $handler = $view->new_display('page', 'Toutes les solutions', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Toutes les solutions pour profiter de ses COOP\'INs';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introduction']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_introduction']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'training' => 'training',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Payable en Coop&#039;in (field_coopins) */
  $handler->display->display_options['filters']['field_coopins_value']['id'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['table'] = 'field_data_field_coopins';
  $handler->display->display_options['filters']['field_coopins_value']['field'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coopins_value']['group'] = 1;
  /* Filter criterion: Content: Solution structure (field_is_structure) */
  $handler->display->display_options['filters']['field_is_structure_value']['id'] = 'field_is_structure_value';
  $handler->display->display_options['filters']['field_is_structure_value']['table'] = 'field_data_field_is_structure';
  $handler->display->display_options['filters']['field_is_structure_value']['field'] = 'field_is_structure_value';
  $handler->display->display_options['filters']['field_is_structure_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_is_structure_value']['group'] = 2;
  /* Filter criterion: Content: Solution structure (field_is_structure) */
  $handler->display->display_options['filters']['field_is_structure_value_1']['id'] = 'field_is_structure_value_1';
  $handler->display->display_options['filters']['field_is_structure_value_1']['table'] = 'field_data_field_is_structure';
  $handler->display->display_options['filters']['field_is_structure_value_1']['field'] = 'field_is_structure_value';
  $handler->display->display_options['filters']['field_is_structure_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_is_structure_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/coopins/solutions';

  /* Display: Toutes les solutions Structure */
  $handler = $view->new_display('block', 'Toutes les solutions Structure', 'structure_solutions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Toutes les solutions Structure';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'training' => 'training',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Payable en Coop&#039;in (field_coopins) */
  $handler->display->display_options['filters']['field_coopins_value']['id'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['table'] = 'field_data_field_coopins';
  $handler->display->display_options['filters']['field_coopins_value']['field'] = 'field_coopins_value';
  $handler->display->display_options['filters']['field_coopins_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coopins_value']['group'] = 1;
  /* Filter criterion: Content: Solution structure (field_is_structure) */
  $handler->display->display_options['filters']['field_is_structure_value']['id'] = 'field_is_structure_value';
  $handler->display->display_options['filters']['field_is_structure_value']['table'] = 'field_data_field_is_structure';
  $handler->display->display_options['filters']['field_is_structure_value']['field'] = 'field_is_structure_value';
  $handler->display->display_options['filters']['field_is_structure_value']['value'] = array(
    1 => '1',
  );
  $translatables['coopins_solutions'] = array(
    t('Master'),
    t('Dernières solutions payables en COOP\'INs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Dernières solutions'),
    t('<a href="/espace-co-entrepreneur/coopins/solutions">Voir toutes les solutions pour profiter de ses COOP\'INs</a>'),
    t('Toutes les solutions'),
    t('Toutes les solutions pour profiter de ses COOP\'INs'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Toutes les solutions Structure'),
  );
  $export['coopins_solutions'] = $view;

  return $export;
}
