<?php
/**
 * @file
 * crealead_trainings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_trainings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Formations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Formations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  );

  /* Display: Liste formations */
  $handler = $view->new_display('page', 'Liste formations', 'trainings_list');
  $handler->display->display_options['path'] = 'formations';

  /* Display: Formations d'une marque */
  $handler = $view->new_display('entity_view', 'Formations d\'une marque', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_training_type']['id'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['fields']['field_training_type']['field'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['label'] = '';
  $handler->display->display_options['fields']['field_training_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Thématique(s) concernée(s) */
  $handler->display->display_options['fields']['field_training_theme']['id'] = 'field_training_theme';
  $handler->display->display_options['fields']['field_training_theme']['table'] = 'field_data_field_training_theme';
  $handler->display->display_options['fields']['field_training_theme']['field'] = 'field_training_theme';
  $handler->display->display_options['fields']['field_training_theme']['label'] = 'Thématique';
  $handler->display->display_options['fields']['field_training_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_theme']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_training_theme']['delta_offset'] = '0';
  /* Field: Content: Durée */
  $handler->display->display_options['fields']['field_training_duration']['id'] = 'field_training_duration';
  $handler->display->display_options['fields']['field_training_duration']['table'] = 'field_data_field_training_duration';
  $handler->display->display_options['fields']['field_training_duration']['field'] = 'field_training_duration';
  $handler->display->display_options['fields']['field_training_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_duration']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Tarif */
  $handler->display->display_options['fields']['field_training_price']['id'] = 'field_training_price';
  $handler->display->display_options['fields']['field_training_price']['table'] = 'field_data_field_training_price';
  $handler->display->display_options['fields']['field_training_price']['field'] = 'field_training_price';
  $handler->display->display_options['fields']['field_training_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_price']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Objectifs pédagogiques */
  $handler->display->display_options['fields']['field_training_aims']['id'] = 'field_training_aims';
  $handler->display->display_options['fields']['field_training_aims']['table'] = 'field_data_field_training_aims';
  $handler->display->display_options['fields']['field_training_aims']['field'] = 'field_training_aims';
  $handler->display->display_options['fields']['field_training_aims']['label'] = 'Objectifs';
  $handler->display->display_options['fields']['field_training_aims']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_aims']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Marque(s) concernée(s) (field_training_related_brands) */
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['id'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['table'] = 'field_data_field_training_related_brands';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['field'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_related_brands_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'brand',
  );
  $handler->display->display_options['argument_mode'] = 'none';

  /* Display: Formations d'une thématique */
  $handler = $view->new_display('entity_view', 'Formations d\'une thématique', 'landing_page_trainings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Produits et formations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['preset'] = 'pagerer_mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'landing_page_block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'landing_page_block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Nos formations et produits</h3>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Thématique(s) concernée(s) (field_training_theme) */
  $handler->display->display_options['arguments']['field_training_theme_tid']['id'] = 'field_training_theme_tid';
  $handler->display->display_options['arguments']['field_training_theme_tid']['table'] = 'field_data_field_training_theme';
  $handler->display->display_options['arguments']['field_training_theme_tid']['field'] = 'field_training_theme_tid';
  $handler->display->display_options['arguments']['field_training_theme_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_theme_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_training_theme_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_training_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_theme_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'themes',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 0;

  /* Display: Formations d'une marque sectorielle */
  $handler = $view->new_display('entity_view', 'Formations d\'une marque sectorielle', 'sector_brand_trainings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Produits et formations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['preset'] = 'pagerer_mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'sector_brand_block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'sector_brand_block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Produits<br />et formations</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Marque(s) sectorielle(s) concernée(s) (field_related_sector_brands) */
  $handler->display->display_options['relationships']['field_related_sector_brands_tid']['id'] = 'field_related_sector_brands_tid';
  $handler->display->display_options['relationships']['field_related_sector_brands_tid']['table'] = 'field_data_field_related_sector_brands';
  $handler->display->display_options['relationships']['field_related_sector_brands_tid']['field'] = 'field_related_sector_brands_tid';
  $handler->display->display_options['relationships']['field_related_sector_brands_tid']['label'] = 'terme à partir de field_related_sector_brands';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_related_sector_brands_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'sector_brands',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 0;
  $translatables['trainings'] = array(
    t('Master'),
    t('Formations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Liste formations'),
    t('Formations d\'une marque'),
    t('Thématique'),
    t('Durée'),
    t('Tarif'),
    t('Objectifs'),
    t('Tout'),
    t('Formations d\'une thématique'),
    t('Produits et formations'),
    t('Éléments par page'),
    t('Décalage'),
    t('<h3>Nos formations et produits</h3>'),
    t('Formations d\'une marque sectorielle'),
    t('<h3>Produits<br />et formations</h3>'),
    t('terme à partir de field_related_sector_brands'),
  );
  $export['trainings'] = $view;

  return $export;
}
