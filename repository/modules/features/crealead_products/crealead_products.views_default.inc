<?php

/**
 * @file
 * crealead_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Produits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Produits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Nœud: Marque(s) concernée(s) (field_product_related_brands) */
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['id'] = 'field_product_related_brands_target_id';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['table'] = 'field_data_field_product_related_brands';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['field'] = 'field_product_related_brands_target_id';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_related_brands_target_id']['summary_options']['items_per_page'] = '25';
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
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['id'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['table'] = 'field_data_field_allowed_brands';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['field'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['label'] = 'Entité Contenu réferencée par field_allowed_brands';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'produits';

  /* Display: Produits d'une marque */
  $handler = $view->new_display('entity_view', 'Produits d\'une marque', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'brand',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: Produits partagés avec une marque */
  $handler = $view->new_display('entity_view', 'Produits partagés avec une marque', 'allowed_products');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'brand_name vous conseille ces produits de marques partenaires';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['id'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['table'] = 'field_data_field_allowed_brands';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['field'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['relationships']['field_allowed_brands_target_id']['label'] = 'Entité Contenu réferencée par field_allowed_brands';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Nœud: Marques qui peuvent utiliser ce produit (field_allowed_brands) */
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['id'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['table'] = 'field_data_field_allowed_brands';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['field'] = 'field_allowed_brands_target_id';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_allowed_brands_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'brand',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Produits d'un coe */
  $handler = $view->new_display('entityreference', 'Produits d\'un coe', 'user_products');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Produits d'un pôle d'activités */
  $handler = $view->new_display('entity_view', 'Produits d\'un pôle d\'activités', 'sector_brands_products');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_product_search_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'sector_brand_block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'sector_brand_block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nœud: Marque(s) sectorielle(s) concernée(s) (field_related_sector_brands) */
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
    'product' => 'product',
  );
  /* Filter criterion: Nœud: Champ de recherche (field_product_search) */
  $handler->display->display_options['filters']['field_product_search_value']['id'] = 'field_product_search_value';
  $handler->display->display_options['filters']['field_product_search_value']['table'] = 'field_data_field_product_search';
  $handler->display->display_options['filters']['field_product_search_value']['field'] = 'field_product_search_value';
  $handler->display->display_options['filters']['field_product_search_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_product_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_search_value']['expose']['operator_id'] = 'field_product_search_value_op';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['label'] = 'Mots-clés';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['operator'] = 'field_product_search_value_op';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['identifier'] = 'field_product_search_value';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    199363405 => 0,
    103860121 => 0,
    227964678 => 0,
    157083709 => 0,
    7178059 => 0,
    259028912 => 0,
    157297110 => 0,
    191976793 => 0,
    8998634 => 0,
    31497918 => 0,
    65237971 => 0,
    58920180 => 0,
    155486910 => 0,
    1936756 => 0,
    36071687 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_product_search_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_product_search_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_product_search_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_product_search_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'sector_brands',
  );
  $handler->display->display_options['show_title'] = 0;
  $translatables['products'] = array(
    t('Master'),
    t('Produits'),
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
    t('Tout'),
    t('Page'),
    t('Entité Contenu réferencée par field_allowed_brands'),
    t('Produits d\'une marque'),
    t('Produits partagés avec une marque'),
    t('brand_name vous conseille ces produits de marques partenaires'),
    t('Produits d\'un coe'),
    t('Produits d\'un pôle d\'activités'),
    t('Rechercher'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Options avancées'),
    t('Éléments par page'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('terme à partir de field_related_sector_brands'),
    t('Mots-clés'),
  );
  $export['products'] = $view;

  return $export;
}
