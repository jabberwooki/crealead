<?php
/**
 * @file
 * crealead_warnings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_warnings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'warnings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alertes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mes alertes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_warning_contenttype',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_warning_contenttype' => 'field_warning_contenttype',
    'title' => 'title',
    'field_warning_keywords' => 'field_warning_keywords',
    'field_recipient_email' => 'field_recipient_email',
    'field_warning_when' => 'field_warning_when',
    'field_warning_frequency' => 'field_warning_frequency',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_warning_contenttype' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warning_keywords' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_recipient_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warning_when' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_warning_frequency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Intitulé';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Mots-clés */
  $handler->display->display_options['fields']['field_warning_keywords']['id'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['table'] = 'field_data_field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['field'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_warning_keywords']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email de réception de l'alerte */
  $handler->display->display_options['fields']['field_recipient_email']['id'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['table'] = 'field_data_field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['field'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_recipient_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: M'avertir en cas de */
  $handler->display->display_options['fields']['field_warning_when']['id'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['table'] = 'field_data_field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['field'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['label'] = 'Quand';
  $handler->display->display_options['fields']['field_warning_when']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Fréquence des alertes */
  $handler->display->display_options['fields']['field_warning_frequency']['id'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['table'] = 'field_data_field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['field'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['label'] = 'Fréquence';
  $handler->display->display_options['fields']['field_warning_frequency']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Lien de suppression';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'warning' => 'warning',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Alertes utilisateur */
  $handler = $view->new_display('block', 'Alertes utilisateur', 'user_warnings');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Intitulé';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '300';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Mots-clés */
  $handler->display->display_options['fields']['field_warning_keywords']['id'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['table'] = 'field_data_field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['field'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_warning_keywords']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email de réception de l'alerte */
  $handler->display->display_options['fields']['field_recipient_email']['id'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['table'] = 'field_data_field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['field'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_recipient_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: M'avertir en cas de */
  $handler->display->display_options['fields']['field_warning_when']['id'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['table'] = 'field_data_field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['field'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['label'] = 'Quand';
  $handler->display->display_options['fields']['field_warning_when']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Fréquence des alertes */
  $handler->display->display_options['fields']['field_warning_frequency']['id'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['table'] = 'field_data_field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['field'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['label'] = 'Fréquence';
  $handler->display->display_options['fields']['field_warning_frequency']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Lien de suppression';

  /* Display: Liste des alertes */
  $handler = $view->new_display('page', 'Liste des alertes', 'full_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Liste de toutes les alertes';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    193262079 => '193262079',
    231346920 => '231346920',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
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
    'uid' => array(
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
    'field_content_type_value_value' => array(
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
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'auteur';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type de contenu (valeur) */
  $handler->display->display_options['fields']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['fields']['field_content_type_value']['table'] = 'field_data_field_content_type_value';
  $handler->display->display_options['fields']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['fields']['field_content_type_value']['label'] = 'Sur';
  $handler->display->display_options['fields']['field_content_type_value']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Intitulé';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Nom';
  /* Field: Content: M'avertir en cas de */
  $handler->display->display_options['fields']['field_warning_when']['id'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['table'] = 'field_data_field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['field'] = 'field_warning_when';
  $handler->display->display_options['fields']['field_warning_when']['label'] = 'Quand';
  $handler->display->display_options['fields']['field_warning_when']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Fréquence des alertes */
  $handler->display->display_options['fields']['field_warning_frequency']['id'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['table'] = 'field_data_field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['field'] = 'field_warning_frequency';
  $handler->display->display_options['fields']['field_warning_frequency']['label'] = 'Fréquence';
  $handler->display->display_options['fields']['field_warning_frequency']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Mots-clés */
  $handler->display->display_options['fields']['field_warning_keywords']['id'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['table'] = 'field_data_field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['field'] = 'field_warning_keywords';
  $handler->display->display_options['fields']['field_warning_keywords']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_warning_keywords']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email de réception de l'alerte */
  $handler->display->display_options['fields']['field_recipient_email']['id'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['table'] = 'field_data_field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['field'] = 'field_recipient_email';
  $handler->display->display_options['fields']['field_recipient_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_recipient_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'warning' => 'warning',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Nom de l\'auteur des alertes';
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
  $handler->display->display_options['path'] = 'liste-alertes';
  $translatables['warnings'] = array(
    t('Master'),
    t('Mes alertes'),
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
    t('Intitulé'),
    t('Mots-clés'),
    t('Email de réception de l\'alerte'),
    t('Quand'),
    t('Fréquence'),
    t('Action'),
    t('Lien de suppression'),
    t('Tout'),
    t('Alertes utilisateur'),
    t('Liste des alertes'),
    t('Liste de toutes les alertes'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Options avancées'),
    t('Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats'),
    t('auteur'),
    t('Sur'),
    t('Nom'),
    t('Type'),
    t('Nom de l\'auteur des alertes'),
  );
  $export['warnings'] = $view;

  return $export;
}
