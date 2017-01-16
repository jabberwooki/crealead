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
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
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

  /* Display: Catalogue des formations */
  $handler = $view->new_display('page', 'Catalogue des formations', 'list_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nos formations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'training_type' => 'training_type',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'news_authors' => 0,
    'entrepreneur_categories' => 0,
    'target_groups' => 0,
    'competencies' => 0,
    'domaine_activite' => 0,
    'training_domains' => 0,
    'business_groups' => 0,
    'sector_brands' => 0,
    'entrepreneur_tags' => 0,
    'brand_tags' => 0,
    'sectors' => 0,
    'business_sectors' => 0,
    'registrant_statuses' => 0,
    'themes' => 0,
    'news_types' => 0,
    'client_types' => 0,
    'achievement_types' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['id'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['table'] = 'field_data_field_training_related_brands';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['field'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['label'] = 'Marque référencée';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Auteur';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_training_type']['id'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['fields']['field_training_type']['field'] = 'field_training_type';
  $handler->display->display_options['fields']['field_training_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_training_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Identifiant universel unique (UUID)';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['user_seed_type'] = 'diff_per_user';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '9f2f5f9a-ed19-44bb-8e59-9ae9bc685162';
  /* Filter criterion: Content: Domaine (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Domaine';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';
  $handler->display->display_options['filters']['field_training_domain_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Marque';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Co-entrepreneur';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Champ de recherche (field_training_search) */
  $handler->display->display_options['filters']['field_training_search_value']['id'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['table'] = 'field_data_field_training_search';
  $handler->display->display_options['filters']['field_training_search_value']['field'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_training_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator_id'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['label'] = 'Mots-clés';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['operator'] = 'field_training_search_value_op';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['identifier'] = 'field_training_search_value';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_training_search_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_training_search_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_training_search_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'formations';

  /* Display: Catalogue test */
  $handler = $view->new_display('page', 'Catalogue test', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nos formations';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'training_type' => 'training_type',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'news_authors' => 0,
    'entrepreneur_categories' => 0,
    'target_groups' => 0,
    'competencies' => 0,
    'domaine_activite' => 0,
    'training_domains' => 0,
    'business_groups' => 0,
    'sector_brands' => 0,
    'entrepreneur_tags' => 0,
    'brand_tags' => 0,
    'sectors' => 0,
    'business_sectors' => 0,
    'registrant_statuses' => 0,
    'themes' => 0,
    'news_types' => 0,
    'client_types' => 0,
    'achievement_types' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['id'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['table'] = 'field_data_field_training_related_brands';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['field'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['relationships']['field_training_related_brands_target_id']['label'] = 'Marque référencée';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Coe';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Marque';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '9f2f5f9a-ed19-44bb-8e59-9ae9bc685162';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Domaine (field_training_domain) */
  $handler->display->display_options['filters']['field_training_domain_tid']['id'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['table'] = 'field_data_field_training_domain';
  $handler->display->display_options['filters']['field_training_domain_tid']['field'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_training_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator_id'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['label'] = 'Domaine';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['operator'] = 'field_training_domain_tid_op';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['identifier'] = 'field_training_domain_tid';
  $handler->display->display_options['filters']['field_training_domain_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_training_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_domain_tid']['vocabulary'] = 'training_domains';
  $handler->display->display_options['filters']['field_training_domain_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_training_related_brands_target_id';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Marque';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Nom';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['path'] = 'formations-test';

  /* Display: Formations d'une certif/label */
  $handler = $view->new_display('entity_view', 'Formations d\'une certif/label', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Produits et formations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'pagerer';
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
  $handler->display->display_options['pager']['options']['preset'] = 'pagerer_mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'certifications_labels_block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'certifications_labels_block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Nos formations et produits</h3>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Certification(s) ou label(s) concerné(s) (field_related_certifs_labels) */
  $handler->display->display_options['relationships']['field_related_certifs_labels_tid']['id'] = 'field_related_certifs_labels_tid';
  $handler->display->display_options['relationships']['field_related_certifs_labels_tid']['table'] = 'field_data_field_related_certifs_labels';
  $handler->display->display_options['relationships']['field_related_certifs_labels_tid']['field'] = 'field_related_certifs_labels_tid';
  $handler->display->display_options['relationships']['field_related_certifs_labels_tid']['label'] = 'terme à partir de field_related_certifs_labels';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_related_certifs_labels_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'certifications_labels',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 0;
  $translatables['trainings'] = array(
    t('Master'),
    t('Formations'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Formations d\'une marque'),
    t('more'),
    t('Thématique'),
    t('Durée'),
    t('Tarif'),
    t('Objectifs'),
    t('Formations d\'une thématique'),
    t('Produits et formations'),
    t('<h3>Nos formations et produits</h3>'),
    t('Formations d\'une marque sectorielle'),
    t('<h3>Produits<br />et formations</h3>'),
    t('term from field_related_sector_brands'),
    t('Catalogue des formations'),
    t('Nos formations'),
    t('term'),
    t('Marque référencée'),
    t('Auteur'),
    t('Type'),
    t('Identifiant universel unique (UUID)'),
    t('Domaine'),
    t('Marque'),
    t('Co-entrepreneur'),
    t('Mots-clés'),
    t('Catalogue test'),
    t('Coe'),
    t('Name'),
    t('Nom'),
    t('Formations d\'une certif/label'),
    t('terme à partir de field_related_certifs_labels'),
  );
  $export['trainings'] = $view;

  return $export;
}
