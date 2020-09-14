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
  $view->human_name = 'Profils';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trombinoscope des co-entrepreneurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'Utilisateur';
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'photo_utilisateur',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: User: Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: User: Prénom (field_user_firstname) */
  $handler->display->display_options['sorts']['field_user_firstname_value']['id'] = 'field_user_firstname_value';
  $handler->display->display_options['sorts']['field_user_firstname_value']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['sorts']['field_user_firstname_value']['field'] = 'field_user_firstname_value';
  $handler->display->display_options['sorts']['field_user_firstname_value']['relationship'] = 'user';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Trombinoscope */
  $handler = $view->new_display('page', 'Trombinoscope', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Chercher';
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
    'field_user_firstname_value' => array(
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
    'field_user_lastname_value' => array(
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
    'field_coe_status_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_competencies_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Introduction';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Seuls apparaissent ici les co-entrepreneurs dont la fiche individuelle a été validée par leur référent.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Prénom (field_user_firstname) */
  $handler->display->display_options['filters']['field_user_firstname_value']['id'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['filters']['field_user_firstname_value']['field'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_user_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['operator_id'] = 'field_user_firstname_value_op';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['label'] = 'Prénom';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['operator'] = 'field_user_firstname_value_op';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['identifier'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['remember_roles'] = array(
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
    155486910 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_field'] = 'field_user_firstname';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Nom (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Nom';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
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
    155486910 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_field'] = 'field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Profile: Statut (field_coe_status) */
  $handler->display->display_options['filters']['field_coe_status_value']['id'] = 'field_coe_status_value';
  $handler->display->display_options['filters']['field_coe_status_value']['table'] = 'field_data_field_coe_status';
  $handler->display->display_options['filters']['field_coe_status_value']['field'] = 'field_coe_status_value';
  $handler->display->display_options['filters']['field_coe_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_coe_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coe_status_value']['expose']['operator_id'] = 'field_coe_status_value_op';
  $handler->display->display_options['filters']['field_coe_status_value']['expose']['label'] = 'Statut';
  $handler->display->display_options['filters']['field_coe_status_value']['expose']['operator'] = 'field_coe_status_value_op';
  $handler->display->display_options['filters']['field_coe_status_value']['expose']['identifier'] = 'field_coe_status_value';
  $handler->display->display_options['filters']['field_coe_status_value']['expose']['remember_roles'] = array(
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
    155486910 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    'all' => 'all',
    157083709 => '157083709',
  );
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Rôles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
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
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/trombinoscope';

  /* Display: Entrées */
  $handler = $view->new_display('page', 'Entrées', 'coes_entries');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les Entrées et Sorties dans Crealead';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Chercher';
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
    'field_user_firstname_value' => array(
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
    'field_user_lastname_value' => array(
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
    'field_coe_status_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_competencies_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Introduction';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Ils viennent d\'arriver</h3>
<p class="coes-entries-intro">Seuls apparaissent ici les co-entrepreneurs dont la fiche individuelle a été validée par leur référent.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Profile: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'profile';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '- 12 months';
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/entrees-sorties';

  /* Display: Sorties */
  $handler = $view->new_display('attachment', 'Sorties', 'coes_leavings');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Ils viennent de partir</h3>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Date de départ de Crealead (field_leaving_date) */
  $handler->display->display_options['sorts']['field_leaving_date_value']['id'] = 'field_leaving_date_value';
  $handler->display->display_options['sorts']['field_leaving_date_value']['table'] = 'field_data_field_leaving_date';
  $handler->display->display_options['sorts']['field_leaving_date_value']['field'] = 'field_leaving_date_value';
  $handler->display->display_options['sorts']['field_leaving_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '0';
  /* Filter criterion: Profile: Date de départ de Crealead (field_leaving_date) */
  $handler->display->display_options['filters']['field_leaving_date_value']['id'] = 'field_leaving_date_value';
  $handler->display->display_options['filters']['field_leaving_date_value']['table'] = 'field_data_field_leaving_date';
  $handler->display->display_options['filters']['field_leaving_date_value']['field'] = 'field_leaving_date_value';
  $handler->display->display_options['filters']['field_leaving_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_leaving_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_leaving_date_value']['default_date'] = '- 6 months';
  $handler->display->display_options['displays'] = array(
    'coes_entries' => 'coes_entries',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['coe_directory'] = array(
    t('Master'),
    t('Trombinoscope des co-entrepreneurs'),
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
    t('Utilisateur'),
    t('Trombinoscope'),
    t('more'),
    t('Chercher'),
    t('Options avancées'),
    t('Select any filter and click on Apply to see results'),
    t('Introduction'),
    t('Seuls apparaissent ici les co-entrepreneurs dont la fiche individuelle a été validée par leur référent.'),
    t('Prénom'),
    t('Nom'),
    t('Statut'),
    t('Rôles'),
    t('Entrées'),
    t('Les Entrées et Sorties dans Crealead'),
    t('<h3>Ils viennent d\'arriver</h3>
<p class="coes-entries-intro">Seuls apparaissent ici les co-entrepreneurs dont la fiche individuelle a été validée par leur référent.</p>'),
    t('Sorties'),
    t('<h3>Ils viennent de partir</h3>
'),
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
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
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
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total personnes à votre service.';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Profile: Photo */
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
  /* Field: User: Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: User: Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Field: Compétences */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Contextual filter: Broken/missing handler */
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
  /* Filter criterion: Profile: Type */
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
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
  /* Filter criterion: Profile: Type */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Filter criterion: Field: Compétences (field_competencies) */
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Filter criterion: Field: Compétences (field_competencies) */
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
  /* Filter criterion: Broken/missing handler */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Profile: Photo */
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
  /* Field: User: Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: User: Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Field: Compétences */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
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
  /* Filter criterion: Profile: Type */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
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
  /* Field: User: Prénom */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: User: Nom */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Field: Compétences */
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
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Contextual filter: Content: Thématique(s) concernée(s) (field_landing_pages) */
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
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_coe_pub_status_value']['group'] = 1;
  /* Filter criterion: Content: Thématique(s) concernée(s) (field_landing_pages) */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Compétences */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
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
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_coe_phone']['id'] = 'field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['table'] = 'field_data_field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['field'] = 'field_coe_phone';
  $handler->display->display_options['fields']['field_coe_phone']['label'] = 'Tél';
  $handler->display->display_options['fields']['field_coe_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_coe_phone']['element_label_type'] = 'span';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_coe_email']['id'] = 'field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['table'] = 'field_data_field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['field'] = 'field_coe_email';
  $handler->display->display_options['fields']['field_coe_email']['label'] = '';
  $handler->display->display_options['fields']['field_coe_email']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_coe_website']['id'] = 'field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['table'] = 'field_data_field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['field'] = 'field_coe_website';
  $handler->display->display_options['fields']['field_coe_website']['label'] = '';
  $handler->display->display_options['fields']['field_coe_website']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
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
  /* Contextual filter: Profile: Profile ID */
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
  /* Filter criterion: Profile: Type */
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['id'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['field'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['ui_name'] = 'FCI Entrepreneur du profil recommandeur';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['label'] = 'FCI référençant Profil depuis field_reco_entrepreneur';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['id'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['field'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['label'] = 'field_coe_recommandations';
  /* Relationship: Field: Compétences (field_competencies) */
  $handler->display->display_options['relationships']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['relationships']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_coe_logo']['id'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['table'] = 'field_data_field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['field'] = 'field_coe_logo';
  $handler->display->display_options['fields']['field_coe_logo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_coe_logo']['alter']['path'] = 'entrepreneurs/profil/[pid]';
  $handler->display->display_options['fields']['field_coe_logo']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_coe_brand_name']['id'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['table'] = 'field_data_field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['field'] = 'field_coe_brand_name';
  $handler->display->display_options['fields']['field_coe_brand_name']['label'] = '';
  $handler->display->display_options['fields']['field_coe_brand_name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_competencies_tid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
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
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Compétences (field_competencies) */
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
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Compétences recommandées par 1 coe */
  $handler = $view->new_display('block', 'Compétences recommandées par 1 coe', 'block_recom_comp');
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['id'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['field'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['ui_name'] = 'FCI Entrepreneur du profil recommandeur';
  $handler->display->display_options['relationships']['reverse_field_reco_entrepreneur_field_collection_item']['label'] = 'FCI référençant Profil depuis field_reco_entrepreneur';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['id'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['field'] = 'field_coe_recommandations_profile2';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['relationships']['field_coe_recommandations_profile2']['label'] = 'field_coe_recommandations';
  /* Relationship: Field: Compétences (field_competencies) */
  $handler->display->display_options['relationships']['field_competencies_tid']['id'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['relationships']['field_competencies_tid']['field'] = 'field_competencies_tid';
  $handler->display->display_options['relationships']['field_competencies_tid']['relationship'] = 'reverse_field_reco_entrepreneur_field_collection_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_competencies_tid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
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
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Statut de publication (field_coe_pub_status) */
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Profile: Photo */
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
  /* Field: User: Name */
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
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
    t('Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('@total personnes à votre service.'),
    t('User'),
    t('.'),
    t(','),
    t('%1'),
    t('Page recherche'),
    t('Rechercher des co-entrepreneurs de Crealead'),
    t('more'),
    t('Secteurs d\'activité'),
    t('Options avancées'),
    t('Select any filter and click on Apply to see results'),
    t('Compétences/Marques'),
    t('Rechercher'),
    t('Expression clé'),
    t('Marque'),
    t('Fiche entrepreneur'),
    t('Compétences'),
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
    t('term from field_competencies'),
    t('Autres compétences recommandées'),
    t('Compétences recommandées par 1 coe'),
    t('Entrepreneurs d\'un client'),
    t('Entrepreneurs ayant travaillé pour cette référence'),
    t('Liste complète'),
    t('Tous les entrepreneurs'),
  );
  $export['entrepreneurs'] = $view;

  $view = new view();
  $view->name = 'instances';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Instances';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instances';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  /* Field: Profil: Type --- caché */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type --- caché';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: (Utilisateur) Utilisateur: Prénom --- caché */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['ui_name'] = '(Utilisateur) Utilisateur: Prénom --- caché';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field:  (Utilisateur) Utilisateur : Nom --- caché */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['ui_name'] = ' (Utilisateur) Utilisateur : Nom --- caché';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Champ: Compétences --- caché */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['ui_name'] = 'Champ: Compétences --- caché';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'photo_utilisateur',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_page' => 'ca_page',
    'dup_page' => 'dup_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page Instances */
  $handler = $view->new_display('page', 'Page Instances', 'instances_profiles');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'Utilisateur';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Type --- caché */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type --- caché';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Prénom --- caché */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['ui_name'] = 'Prénom --- caché';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: Nom --- caché */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['ui_name'] = 'Nom --- caché';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Champ: Compétences --- caché */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['ui_name'] = 'Champ: Compétences --- caché';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'photo_utilisateur',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile type: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'profile_type';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['relationship'] = 'type';
  $handler->display->display_options['path'] = 'instances';

  /* Display: Onglets Instances */
  $handler = $view->new_display('attachment', 'Onglets Instances', 'instance_tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Poids --- caché */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'profile_type';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['relationship'] = 'type';
  $handler->display->display_options['fields']['weight']['ui_name'] = 'Poids --- caché';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile type: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'profile_type';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['relationship'] = 'type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_page' => 'ca_page',
    'dup_page' => 'dup_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'instances_profiles' => 'instances_profiles',
    'default' => 0,
  );
  $translatables['instances'] = array(
    t('Master'),
    t('Instances'),
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
    t('Type de profil'),
    t('<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>'),
    t('Page Instances'),
    t('more'),
    t('Utilisateur'),
    t('Onglets Instances'),
    t('.'),
    t(','),
  );
  $export['instances'] = $view;

  $view = new view();
  $view->name = 'structure_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Equipe Structure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Equipe Support';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  /* Field: Profil: Type --- caché */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type --- caché';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: (Utilisateur) Utilisateur: Prénom --- caché */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['ui_name'] = '(Utilisateur) Utilisateur: Prénom --- caché';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field:  (Utilisateur) Utilisateur : Nom --- caché */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['ui_name'] = ' (Utilisateur) Utilisateur : Nom --- caché';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Champ: Compétences --- caché */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['ui_name'] = 'Champ: Compétences --- caché';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'photo_utilisateur',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assistant_page' => 'assistant_page',
    'direction_page' => 'direction_page',
    'management_page' => 'management_page',
    'provider_page' => 'provider_page',
    'referent_page' => 'referent_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page Structure */
  $handler = $view->new_display('page', 'Page Structure', 'structure_profiles');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'Utilisateur';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Type --- caché */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type --- caché';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Prénom --- caché */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_firstname']['ui_name'] = 'Prénom --- caché';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  /* Field: Nom --- caché */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_user_lastname']['ui_name'] = 'Nom --- caché';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  /* Field: Champ: Compétences --- caché */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['ui_name'] = 'Champ: Compétences --- caché';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_coe_photo']['id'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['table'] = 'field_data_field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['field'] = 'field_coe_photo';
  $handler->display->display_options['fields']['field_coe_photo']['label'] = '';
  $handler->display->display_options['fields']['field_coe_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_coe_photo']['settings'] = array(
    'image_style' => 'photo_utilisateur',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile type: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'profile_type';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['relationship'] = 'type';
  $handler->display->display_options['path'] = 'equipe-support';

  /* Display: Onglets page Structure */
  $handler = $view->new_display('attachment', 'Onglets page Structure', 'profile_tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'profile';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['label'] = 'Type de profil';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'Utilisateur';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Profil: Type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Poids --- caché */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'profile_type';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['relationship'] = 'type';
  $handler->display->display_options['fields']['weight']['ui_name'] = 'Poids --- caché';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile type: Label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'profile_type';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['relationship'] = 'type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assistant_page' => 'assistant_page',
    'direction_page' => 'direction_page',
    'management_page' => 'management_page',
    'provider_page' => 'provider_page',
    'referent_page' => 'referent_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'structure_profiles' => 'structure_profiles',
    'default' => 0,
  );
  $translatables['structure_team'] = array(
    t('Master'),
    t('Equipe Support'),
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
    t('Type de profil'),
    t('<div class="username">[field_user_firstname] [field_user_lastname]</div>
<div class="competencies">[field_competencies]</div>'),
    t('Page Structure'),
    t('more'),
    t('Utilisateur'),
    t('Onglets page Structure'),
    t('.'),
    t(','),
  );
  $export['structure_team'] = $view;

  return $export;
}
