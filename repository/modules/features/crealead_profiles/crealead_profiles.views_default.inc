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
  /* Champ: Profil : Logo */
  $handler->display->display_options['fields']['field_coe_logo']['id'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['table'] = 'field_data_field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['field'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Profil : Nom commercial */
  $handler->display->display_options['fields']['field_coe_brand_name']['id'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['field'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['label'] = '';
  $handler->display->display_options['fields']['field_coe_brand_name']['element_label_colon'] = FALSE;
  /* Champ: Profil : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Filtre contextuel: Profil : Secteur d&#039;activité (field_coe_category) */
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
  /* Critère de filtrage: Profil : Secteur d&#039;activité (field_coe_category) */
  $handler->display->display_options['filters']['field_coe_category_tid']['id'] = 'field_coe_category_tid';
  $handler->display->display_options['filters']['field_coe_category_tid']['table'] = 'field_data_field_coe_category';
  $handler->display->display_options['filters']['field_coe_category_tid']['field'] = 'field_coe_category_tid';
  $handler->display->display_options['filters']['field_coe_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coe_category_tid']['expose']['operator_id'] = 'field_coe_category_tid_op';
  $handler->display->display_options['filters']['field_coe_category_tid']['expose']['operator'] = 'field_coe_category_tid_op';
  $handler->display->display_options['filters']['field_coe_category_tid']['expose']['identifier'] = 'field_coe_category_tid';
  $handler->display->display_options['filters']['field_coe_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_coe_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_coe_category_tid']['vocabulary'] = 'business_sectors';

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Profil : Secteur d&#039;activité (field_coe_category) */
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
  $handler->display->display_options['path'] = 'entrepreneurs/activites';

  /* Display: Compétences/Marques */
  $handler = $view->new_display('page', 'Compétences/Marques', 'page_competencies_brands');
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
  /* Critère de filtrage: Profil : Compétences et spécialités (field_competencies) */
  $handler->display->display_options['filters']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['filters']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['filters']['field_competencies_tid']['value'] = '';
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
  /* Critère de filtrage: Profil : Nom commercial (field_coe_brand_name) */
  $handler->display->display_options['filters']['field_coe_brand_name_value']['id'] = 'field_coe_brand_name_value';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['field'] = 'field_coe_brand_name_value';
  $handler->display->display_options['filters']['field_coe_brand_name_value']['operator'] = 'contains';
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
  $handler = $view->new_display('page_with_page_title', 'Fiche entrepreneur', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_coe_references_target_id']['id'] = 'field_coe_references_target_id';
  $handler->display->display_options['relationships']['field_coe_references_target_id']['table'] = 'field_data_field_coe_references';
  $handler->display->display_options['relationships']['field_coe_references_target_id']['field'] = 'field_coe_references_target_id';
  $handler->display->display_options['relationships']['field_coe_references_target_id']['label'] = 'Client';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Localisation */
  $handler->display->display_options['fields']['field_client_location']['id'] = 'field_client_location';
  $handler->display->display_options['fields']['field_client_location']['table'] = 'field_data_field_client_location';
  $handler->display->display_options['fields']['field_client_location']['field'] = 'field_client_location';
  $handler->display->display_options['fields']['field_client_location']['relationship'] = 'field_coe_references_target_id';
  $handler->display->display_options['fields']['field_client_location']['label'] = '';
  $handler->display->display_options['fields']['field_client_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_coe_references_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_client_location])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Champ: Profil : Logo */
  $handler->display->display_options['fields']['field_coe_logo']['id'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['table'] = 'field_data_field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['field'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Champ: Profil : Nom commercial */
  $handler->display->display_options['fields']['field_coe_brand_name']['id'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['field'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['label'] = '';
  $handler->display->display_options['fields']['field_coe_brand_name']['element_label_colon'] = FALSE;
  /* Champ: Profil : Compétences et spécialités */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
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
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_coe_references_target_id';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nom client';
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
  /* Critère de filtrage: Contenu : Localisation (field_client_location) */
  $handler->display->display_options['filters']['field_client_location_value']['id'] = 'field_client_location_value';
  $handler->display->display_options['filters']['field_client_location_value']['table'] = 'field_data_field_client_location';
  $handler->display->display_options['filters']['field_client_location_value']['field'] = 'field_client_location_value';
  $handler->display->display_options['filters']['field_client_location_value']['relationship'] = 'field_coe_references_target_id';
  $handler->display->display_options['filters']['field_client_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_location_value']['expose']['operator_id'] = 'field_client_location_value_op';
  $handler->display->display_options['filters']['field_client_location_value']['expose']['label'] = 'Localisation';
  $handler->display->display_options['filters']['field_client_location_value']['expose']['description'] = 'Saisir une ville ou un pays';
  $handler->display->display_options['filters']['field_client_location_value']['expose']['operator'] = 'field_client_location_value_op';
  $handler->display->display_options['filters']['field_client_location_value']['expose']['identifier'] = 'field_client_location_value';
  $handler->display->display_options['filters']['field_client_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  /* Critère de filtrage: Contenu : Type de client (field_client_type) */
  $handler->display->display_options['filters']['field_client_type_tid']['id'] = 'field_client_type_tid';
  $handler->display->display_options['filters']['field_client_type_tid']['table'] = 'field_data_field_client_type';
  $handler->display->display_options['filters']['field_client_type_tid']['field'] = 'field_client_type_tid';
  $handler->display->display_options['filters']['field_client_type_tid']['relationship'] = 'field_coe_references_target_id';
  $handler->display->display_options['filters']['field_client_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_client_type_tid']['expose']['operator_id'] = 'field_client_type_tid_op';
  $handler->display->display_options['filters']['field_client_type_tid']['expose']['label'] = 'Type de client';
  $handler->display->display_options['filters']['field_client_type_tid']['expose']['operator'] = 'field_client_type_tid_op';
  $handler->display->display_options['filters']['field_client_type_tid']['expose']['identifier'] = 'field_client_type_tid';
  $handler->display->display_options['filters']['field_client_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    7178059 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_client_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_client_type_tid']['vocabulary'] = 'client_types';
  $handler->display->display_options['path'] = 'entrepreneurs/clients';
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
    t('Tout'),
    t('%1'),
    t('Page recherche'),
    t('Rechercher des co-entrepreneurs de Crealead'),
    t('.'),
    t(','),
    t('Secteurs d\'activité'),
    t('Compétences/Marques'),
    t('Rechercher'),
    t('Expression clé'),
    t('Marque'),
    t('Fiche entrepreneur'),
    t('Référence client'),
    t('Options avancées'),
    t('Client'),
    t('[title] ([field_client_location])'),
    t('Nom client'),
    t('Localisation'),
    t('Saisir une ville ou un pays'),
    t('Type de client'),
  );
  $export['entrepreneurs'] = $view;

  return $export;
}
