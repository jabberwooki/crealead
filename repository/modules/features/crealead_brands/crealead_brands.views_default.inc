<?php
/**
 * @file
 * crealead_brands.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_brands_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'brands';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les co-entrepreneurs de Crealead';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_business_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  /* Critère de filtrage: Contenu : Secteur d&#039;activité (field_business_sector) */
  $handler->display->display_options['filters']['field_business_sector_tid']['id'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['table'] = 'field_data_field_business_sector';
  $handler->display->display_options['filters']['field_business_sector_tid']['field'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['operator_id'] = 'field_business_sector_tid_op';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['label'] = 'Secteur d\'activité';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['operator'] = 'field_business_sector_tid_op';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['identifier'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_business_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_sector_tid']['vocabulary'] = 'business_sectors';

  /* Display: Marques */
  $handler = $view->new_display('page_with_page_title', 'Marques', 'brands_list');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_brand_search_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_business_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Absence de résultat';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucune résultat ne correspond à vos critères de recherche.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_brand_logo']['id'] = 'field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['table'] = 'field_data_field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['field'] = 'field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['label'] = '';
  $handler->display->display_options['fields']['field_brand_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brand_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brand_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Phrase d'accroche */
  $handler->display->display_options['fields']['field_brand_baseline']['id'] = 'field_brand_baseline';
  $handler->display->display_options['fields']['field_brand_baseline']['table'] = 'field_data_field_brand_baseline';
  $handler->display->display_options['fields']['field_brand_baseline']['field'] = 'field_brand_baseline';
  $handler->display->display_options['fields']['field_brand_baseline']['label'] = '';
  $handler->display->display_options['fields']['field_brand_baseline']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Champ de recherche (field_brand_search) */
  $handler->display->display_options['filters']['field_brand_search_value']['id'] = 'field_brand_search_value';
  $handler->display->display_options['filters']['field_brand_search_value']['table'] = 'field_data_field_brand_search';
  $handler->display->display_options['filters']['field_brand_search_value']['field'] = 'field_brand_search_value';
  $handler->display->display_options['filters']['field_brand_search_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_brand_search_value']['group'] = 1;
  $handler->display->display_options['filters']['field_brand_search_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['operator_id'] = 'field_brand_search_value_op';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['label'] = 'Mots-clés';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['operator'] = 'field_brand_search_value_op';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['identifier'] = 'field_brand_search_value';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_brand_search_value']['expose']['autocomplete_dependent'] = 0;
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Critère de filtrage: Contenu : Secteur d&#039;activité (field_business_sector) */
  $handler->display->display_options['filters']['field_business_sector_tid']['id'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['table'] = 'field_data_field_business_sector';
  $handler->display->display_options['filters']['field_business_sector_tid']['field'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_business_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['operator_id'] = 'field_business_sector_tid_op';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['label'] = 'Secteur d\'activité';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['operator'] = 'field_business_sector_tid_op';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['identifier'] = 'field_business_sector_tid';
  $handler->display->display_options['filters']['field_business_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_business_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_sector_tid']['vocabulary'] = 'business_sectors';
  $handler->display->display_options['path'] = 'annuaire-entrepreneurs';

  /* Display: Marques d'un coe */
  $handler = $view->new_display('block', 'Marques d\'un coe', 'coe_brands');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marques';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Co-entrepreneurs (field_brand_coes) */
  $handler->display->display_options['relationships']['field_brand_coes_value']['id'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['table'] = 'field_data_field_brand_coes';
  $handler->display->display_options['relationships']['field_brand_coes_value']['field'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['delta'] = '-1';
  /* Relation: Contenu : Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Champ: Utilisateur : Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Field collection item : Entrepreneur (field_brand_coe) */
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['id'] = 'field_brand_coe_target_id';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['table'] = 'field_data_field_brand_coe';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['field'] = 'field_brand_coe_target_id';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['relationship'] = 'field_brand_coes_value';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_coe_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Marques d'un client */
  $handler = $view->new_display('block', 'Marques d\'un client', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entrepreneurs ayant travaillé pour cette référence';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'block';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'block';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_brand_references_target_id']['id'] = 'field_brand_references_target_id';
  $handler->display->display_options['relationships']['field_brand_references_target_id']['table'] = 'field_data_field_brand_references';
  $handler->display->display_options['relationships']['field_brand_references_target_id']['field'] = 'field_brand_references_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_brand_references_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Marques d'une actu */
  $handler = $view->new_display('entityreference', 'Marques d\'une actu', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Marque à afficher dans le formulaire de création/modification d\'une actu.';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Co-entrepreneurs (field_brand_coes) */
  $handler->display->display_options['relationships']['field_brand_coes_value']['id'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['table'] = 'field_data_field_brand_coes';
  $handler->display->display_options['relationships']['field_brand_coes_value']['field'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['delta'] = '-1';
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['id'] = 'field_brand_coe_target_id';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['table'] = 'field_data_field_brand_coe';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['field'] = 'field_brand_coe_target_id';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['relationship'] = 'field_brand_coes_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Utilisateur : Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_brand_coe_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Marques d'une thématique */
  $handler = $view->new_display('entity_view', 'Marques d\'une thématique', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marques associées';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Pages thématiques (field_landing_pages) */
  $handler->display->display_options['relationships']['field_landing_pages_tid']['id'] = 'field_landing_pages_tid';
  $handler->display->display_options['relationships']['field_landing_pages_tid']['table'] = 'field_data_field_landing_pages';
  $handler->display->display_options['relationships']['field_landing_pages_tid']['field'] = 'field_landing_pages_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Terme de taxonomie : Identifiant (ID) du terme */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_landing_pages_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'themes',
  );
  $handler->display->display_options['argument_mode'] = 'none';

  /* Display: Grandes marques */
  $handler = $view->new_display('block', 'Grandes marques', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les grandes marques de Crealead';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_brand_logo']['id'] = 'field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['table'] = 'field_data_field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['field'] = 'field_brand_logo';
  $handler->display->display_options['fields']['field_brand_logo']['label'] = '';
  $handler->display->display_options['fields']['field_brand_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brand_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brand_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Type de marque (field_brand_type) */
  $handler->display->display_options['filters']['field_brand_type_value']['id'] = 'field_brand_type_value';
  $handler->display->display_options['filters']['field_brand_type_value']['table'] = 'field_data_field_brand_type';
  $handler->display->display_options['filters']['field_brand_type_value']['field'] = 'field_brand_type_value';
  $handler->display->display_options['filters']['field_brand_type_value']['value'] = array(
    3 => '3',
  );

  /* Display: Marques d'un article */
  $handler = $view->new_display('entityreference', 'Marques d\'un article', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Marque à afficher dans le formulaire de création/modification d\'une actu.';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Co-entrepreneurs (field_brand_coes) */
  $handler->display->display_options['relationships']['field_brand_coes_value']['id'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['table'] = 'field_data_field_brand_coes';
  $handler->display->display_options['relationships']['field_brand_coes_value']['field'] = 'field_brand_coes_value';
  $handler->display->display_options['relationships']['field_brand_coes_value']['delta'] = '-1';
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['id'] = 'field_brand_coe_target_id';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['table'] = 'field_data_field_brand_coe';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['field'] = 'field_brand_coe_target_id';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['relationship'] = 'field_brand_coes_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Utilisateur : Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_brand_coe_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Type de marque (field_brand_type) */
  $handler->display->display_options['filters']['field_brand_type_value']['id'] = 'field_brand_type_value';
  $handler->display->display_options['filters']['field_brand_type_value']['table'] = 'field_data_field_brand_type';
  $handler->display->display_options['filters']['field_brand_type_value']['field'] = 'field_brand_type_value';
  $handler->display->display_options['filters']['field_brand_type_value']['value'] = array(
    3 => '3',
  );
  $translatables['brands'] = array(
    t('Master'),
    t('Les co-entrepreneurs de Crealead'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Options avancées'),
    t('Select any filter and click on Apply to see results'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Secteur d\'activité'),
    t('Marques'),
    t('Rechercher'),
    t('Absence de résultat'),
    t('Aucune résultat ne correspond à vos critères de recherche.'),
    t('Mots-clés'),
    t('Marque'),
    t('Marques d\'un coe'),
    t('field collection item from field_brand_coes'),
    t('auteur'),
    t('Nom'),
    t('Uid'),
    t('Tout'),
    t('Marques d\'un client'),
    t('Entrepreneurs ayant travaillé pour cette référence'),
    t('Entité Contenu réferencée par field_brand_references'),
    t('Marques d\'une actu'),
    t('Marque à afficher dans le formulaire de création/modification d\'une actu.'),
    t('Entité Utilisateur réferencée par field_brand_coe'),
    t('Marques d\'une thématique'),
    t('Marques associées'),
    t('terme à partir de field_landing_pages'),
    t('Grandes marques'),
    t('Les grandes marques de Crealead'),
    t('Marques d\'un article'),
  );
  $export['brands'] = $view;

  $view = new view();
  $view->name = 'field_collection_coes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'field_collection_coes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['id'] = 'field_brand_coe_target_id';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['table'] = 'field_data_field_brand_coe';
  $handler->display->display_options['relationships']['field_brand_coe_target_id']['field'] = 'field_brand_coe_target_id';
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_brand_coe_target_id';
  /* Champ: Profil : Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['alter']['path'] = 'users/[user]';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Champ: Field collection item : Entrepreneur */
  $handler->display->display_options['fields']['field_brand_coe']['id'] = 'field_brand_coe';
  $handler->display->display_options['fields']['field_brand_coe']['table'] = 'field_data_field_brand_coe';
  $handler->display->display_options['fields']['field_brand_coe']['field'] = 'field_brand_coe';
  $handler->display->display_options['fields']['field_brand_coe']['label'] = '';
  $handler->display->display_options['fields']['field_brand_coe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brand_coe']['settings'] = array(
    'link' => 1,
  );
  /* Champ: Profil : Statut */
  $handler->display->display_options['fields']['field_coe_status']['id'] = 'field_coe_status';
  $handler->display->display_options['fields']['field_coe_status']['table'] = 'field_data_field_coe_status';
  $handler->display->display_options['fields']['field_coe_status']['field'] = 'field_coe_status';
  $handler->display->display_options['fields']['field_coe_status']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_coe_status']['label'] = '';
  $handler->display->display_options['fields']['field_coe_status']['element_label_colon'] = FALSE;
  /* Champ: Champ : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_limit'] = '10';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Filtre contextuel: Field collection item : Identifiant de Field collection item */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;

  /* Display: Coes fiche marque */
  $handler = $view->new_display('block', 'Coes fiche marque', 'brand_coes');
  $translatables['field_collection_coes'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Entité Utilisateur réferencée par field_brand_coe'),
    t('Profil'),
    t('Tout'),
    t('Coes fiche marque'),
  );
  $export['field_collection_coes'] = $view;

  $view = new view();
  $view->name = 'themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Thématiques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Thématiques';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'block';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'block';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'themes' => 'themes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'thematiques';
  $translatables['themes'] = array(
    t('Master'),
    t('Thématiques'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['themes'] = $view;

  return $export;
}
