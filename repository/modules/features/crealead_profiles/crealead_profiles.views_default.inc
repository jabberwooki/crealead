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
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
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
  $handler->display->display_options['path'] = 'annuaire-entrepreneurs2';
  $translatables['coe_directory'] = array(
    t('Master'),
    t('Annuaire des entrepreneurs'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Identifiant de Profil'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['coe_directory'] = $view;

  $view = new view();
  $view->name = 'entrepreneurs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Entrepreneurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entrepreneurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  /* Entête: Global : Résumé des résultats */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total personnes à votre service.';
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Champ: Profil : Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Utilisateur : Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Champ: Champ : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Filtre contextuel: Gestionnaire défectueux/manquant */
  $handler->display->display_options['arguments']['field_coe_category_tid']['id'] = 'field_coe_category_tid';
  $handler->display->display_options['arguments']['field_coe_category_tid']['table'] = 'field_data_field_coe_category';
  $handler->display->display_options['arguments']['field_coe_category_tid']['field'] = 'field_coe_category_tid';
  $handler->display->display_options['arguments']['field_coe_category_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_coe_category_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_coe_category_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_coe_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary_options']['items_per_page'] = '25';
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );

  /* Display: Page recherche */
  $handler = $view->new_display('page', 'Page recherche', 'search_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rechercher des co-entrepreneurs de Crealead';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Identifiant de Profil */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'entrepreneurs';

  /* Display: Secteurs d'activité */
  $handler = $view->new_display('page', 'Secteurs d\'activité', 'page_business_sector');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_competencies_tid' => array(
      'bef_format' => 'bef_links',
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Critère de filtrage: Champ : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['filters']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['filters']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_competencies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator_id'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['identifier'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_competencies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_competencies_tid']['vocabulary'] = 'competencies';
  $handler->display->display_options['path'] = 'entrepreneurs/activites';

  /* Display: Compétences/Marques */
  $handler = $view->new_display('page', 'Compétences/Marques', 'comp_brands');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Critère de filtrage: Champ : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['filters']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['filters']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['value'] = '';
  $handler->display->display_options['filters']['field_competencies_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_competencies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator_id'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['label'] = 'Expression clé';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['identifier'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_competencies_tid']['vocabulary'] = 'competencies';
  /* Critère de filtrage: Gestionnaire défectueux/manquant */
  $handler->display->display_options['filters']['field_coe_brand_name_value']['id'] = 'field_coe_brand_name_value';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['field'] = 'field_coe_brand_name_value';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_coe_brand_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coe_brand_name_value']['expose']['operator_id'] = 'field_coe_brand_name_value_op';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['expose']['label'] = 'Marque';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['expose']['operator'] = 'field_coe_brand_name_value_op';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['expose']['identifier'] = 'field_coe_brand_name_value';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['path'] = 'entrepreneurs/competences-marques';

  /* Display: Fiche entrepreneur */
  $handler = $view->new_display('page_with_page_title', 'Fiche entrepreneur', 'page_coe_profile');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fiche entrepreneur';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Champ: Profil : Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Utilisateur : Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Champ: Champ : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Identifiant de Profil */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['argument'] = '-1';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'entrepreneurs/profil';

  /* Display: Référence client */
  $handler = $view->new_display('page_with_page_title', 'Référence client', 'page_clients');
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
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_client_location_value' => array(
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
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_client_type_tid' => array(
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
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Utilisateur : Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Champ: Champ : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  $handler->display->display_options['path'] = 'entrepreneurs/clients';

  /* Display: Pages thématiques */
  $handler = $view->new_display('page_with_page_title', 'Pages thématiques', 'page_themes');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_landing_pages_tid' => array(
      'bef_format' => 'bef_links',
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Pages thématiques (field_landing_pages) */
  $handler->display->display_options['arguments']['field_landing_pages_tid']['id'] = 'field_landing_pages_tid';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['table'] = 'field_data_field_landing_pages';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['field'] = 'field_landing_pages_tid';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_landing_pages_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Critère de filtrage: Contenu : Pages thématiques (field_landing_pages) */
  $handler->display->display_options['filters']['field_landing_pages_tid']['id'] = 'field_landing_pages_tid';
  $handler->display->display_options['filters']['field_landing_pages_tid']['table'] = 'field_data_field_landing_pages';
  $handler->display->display_options['filters']['field_landing_pages_tid']['field'] = 'field_landing_pages_tid';
  $handler->display->display_options['filters']['field_landing_pages_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_landing_pages_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_landing_pages_tid']['expose']['operator_id'] = 'field_landing_pages_tid_op';
  $handler->display->display_options['filters']['field_landing_pages_tid']['expose']['operator'] = 'field_landing_pages_tid_op';
  $handler->display->display_options['filters']['field_landing_pages_tid']['expose']['identifier'] = 'field_landing_pages_tid';
  $handler->display->display_options['filters']['field_landing_pages_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_landing_pages_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_landing_pages_tid']['vocabulary'] = 'themes';
  $handler->display->display_options['path'] = 'entrepreneurs/themes';

  /* Display: Compétences d'un secteur d'activité */
  $handler = $view->new_display('page', 'Compétences d\'un secteur d\'activité', 'page_business_sector_competencies_terms');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_competencies_tid' => array(
      'bef_format' => 'bef_links',
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
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Champ : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Gestionnaire défectueux/manquant */
  $handler->display->display_options['arguments']['field_coe_category_tid']['id'] = 'field_coe_category_tid';
  $handler->display->display_options['arguments']['field_coe_category_tid']['table'] = 'field_data_field_coe_category';
  $handler->display->display_options['arguments']['field_coe_category_tid']['field'] = 'field_coe_category_tid';
  $handler->display->display_options['arguments']['field_coe_category_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_coe_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_coe_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'entrepreneurs/activites';

  /* Display: Coordonnées entrepreneur */
  $handler = $view->new_display('block', 'Coordonnées entrepreneur', 'block_coe_contact');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_coe_phone']['id'] = 'field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['table'] = 'field_data_field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['field'] = 'field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['label'] = 'Tél';
  $handler->display->display_options['fields']['field_coe_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_coe_phone']['element_label_type'] = 'span';
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_coe_email']['id'] = 'field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['table'] = 'field_data_field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['field'] = 'field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['label'] = '';
  $handler->display->display_options['fields']['field_coe_email']['element_label_colon'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_coe_website']['id'] = 'field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['table'] = 'field_data_field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['field'] = 'field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['label'] = '';
  $handler->display->display_options['fields']['field_coe_website']['element_label_colon'] = FALSE;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="contact-org">Crealead</div>
<div id="contac-addr1">Hôtel de la Coopération</div>
<div id="contact-addr2">55 rue Saint Cléophas</div>
<div id="contact-postal-code-city">34070 Montpellier</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Identifiant de Profil */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Liste des noms des coe */
  $handler = $view->new_display('entityreference', 'Liste des noms des coe', 'coe_names');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Utilisateur : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Recommandations */
  $handler = $view->new_display('block', 'Recommandations', 'block_coe_reco');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = ' vous recommande';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_competencies_tid' => array(
      'bef_format' => 'bef_links',
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '0';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relation: Gestionnaire défectueux/manquant */
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['id'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['field'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['ui_name'] = 'FCI Entrepreneur du profil recommandeur';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['label'] = 'FCI référençant Profil depuis field_reco_entrepreneur';
  /* Relation: Gestionnaire défectueux/manquant */
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['id'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['field'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['label'] = 'field_coe_recommandations';
  /* Relation: Champ : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['relationships']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['relationships']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_coe_logo']['id'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['table'] = 'field_data_field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['field'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_coe_logo']['alter']['path'] = 'entrepreneurs/profil/[pid]';
  $handler->display->display_options['fields']['field_coe_logo']['element_label_colon'] = FALSE;
  /* Champ: Gestionnaire défectueux/manquant */
  $handler->display->display_options['fields']['field_coe_brand_name']['id'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['field'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['label'] = '';
  $handler->display->display_options['fields']['field_coe_brand_name']['element_label_colon'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_competencies_tid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Identifiant de Profil */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Champ : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['filters']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['filters']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator_id'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['label'] = 'Autres compétences recommandées';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['operator'] = 'field_competencies_tid_op';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['identifier'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_competencies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_competencies_tid']['vocabulary'] = 'competencies';
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Compétences recommandées par 1 coe */
  $handler = $view->new_display('block', 'Compétences recommandées par 1 coe', 'block_recom_comp');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_competencies_tid' => array(
      'bef_format' => 'bef_links',
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
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relation: Gestionnaire défectueux/manquant */
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['id'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['field'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['ui_name'] = 'FCI Entrepreneur du profil recommandeur';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['label'] = 'FCI référençant Profil depuis field_reco_entrepreneur';
  /* Relation: Gestionnaire défectueux/manquant */
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['id'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['field'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['label'] = 'field_coe_recommandations';
  /* Relation: Champ : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['relationships']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['relationships']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_competencies_tid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Identifiant de Profil */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Entrepreneurs d'un client */
  $handler = $view->new_display('block', 'Entrepreneurs d\'un client', 'block_client_coes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Entrepreneurs ayant travaillé pour cette référence';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Profil : Utilisateur uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Profil : Identifiant de Profil */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Champ: Profil : Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Liste complète */
  $handler = $view->new_display('page_with_page_title', 'Liste complète', 'page_coe_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tous les entrepreneurs';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'entrepreneurs/liste-complete';
  $translatables['entrepreneurs'] = array(
    t('Master'),
    t('Entrepreneurs'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('@total personnes à votre service.'),
    t('Utilisateur'),
    t('.'),
    t(','),
    t('Tout'),
    t('%1'),
    t('Page recherche'),
    t('Rechercher des co-entrepreneurs de Crealead'),
    t('Secteurs d\'activité'),
    t('Options avancées'),
    t('Compétences/Marques'),
    t('Rechercher'),
    t('Expression clé'),
    t('Marque'),
    t('Fiche entrepreneur'),
    t('Compétences et spécialités'),
    t('Référence client'),
    t('Pages thématiques'),
    t('Compétences d\'un secteur d\'activité'),
    t('Coordonnées entrepreneur'),
    t('Contact'),
    t('Tél'),
    t('<div id="contact-org">Crealead</div>
<div id="contac-addr1">Hôtel de la Coopération</div>
<div id="contact-addr2">55 rue Saint Cléophas</div>
<div id="contact-postal-code-city">34070 Montpellier</div>'),
    t('Liste des noms des coe'),
    t('Recommandations'),
    t(' vous recommande'),
    t('FCI référençant Profil depuis field_reco_entrepreneur'),
    t('field_coe_recommandations'),
    t('terme à partir de field_competencies'),
    t('Autres compétences recommandées'),
    t('Compétences recommandées par 1 coe'),
    t('Entrepreneurs d\'un client'),
    t('Entrepreneurs ayant travaillé pour cette référence'),
    t('Liste complète'),
    t('Tous les entrepreneurs'),
  );
  $export['entrepreneurs'] = $view;

  return $export;
}
