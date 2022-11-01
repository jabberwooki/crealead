<?php

/**
 * @file
 * crealead_calendars.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_calendars_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rooms_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendrier des salles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Critère de tri: Contenu : Date - date de début (field_gclal_date) */
  $handler->display->display_options['sorts']['field_gclal_date_value']['id'] = 'field_gclal_date_value';
  $handler->display->display_options['sorts']['field_gclal_date_value']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['sorts']['field_gclal_date_value']['field'] = 'field_gclal_date_value';
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );

  /* Display: Evénements salles */
  $handler = $view->new_display('page', 'Evénements salles', 'rooms_month');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendrier des salles';
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
    'field_room_tid' => array(
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'news' => '#ffffff',
    'warning' => '#ffffff',
    'article' => '#ffffff',
    'book' => '#ffffff',
    'newsflash' => '#ffffff',
    'client' => '#ffffff',
    'business_group' => '#ffffff',
    'report' => '#ffffff',
    'need' => '#ffffff',
    'diapositive' => '#ffffff',
    'filedepot_folder' => '#ffffff',
    'event' => '#ffffff',
    'room_event' => '#ffffff',
    'structure_event' => '#ffffff',
    'faq' => '#ffffff',
    'flashinfo' => '#ffffff',
    'training' => '#ffffff',
    'gazette' => '#ffffff',
    'link_to_doc' => '#ffffff',
    'brand' => '#ffffff',
    'multichoice' => '#ffffff',
    'offer' => '#ffffff',
    'page' => '#ffffff',
    'product' => '#ffffff',
    'quiz' => '#ffffff',
    'achievement' => '#ffffff',
    'info_meeting' => '#ffffff',
    'training_session' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_room';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_room' => '32',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    3567 => '#3e50b4',
    2106 => '#bf0e38',
    2107 => '#7db700',
    2108 => '#f2cc2b',
    3569 => '#02a8f4',
    3570 => '#fef207',
    3571 => '#795549',
    2109 => '#009aa0',
    2110 => '#44059c',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/room_event">LIEN_AJOUTER</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'structure_calendar_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Salle */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_room']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '300';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator_id'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['label'] = 'Salle';
  $handler->display->display_options['filters']['field_room_tid']['expose']['operator'] = 'field_room_tid_op';
  $handler->display->display_options['filters']['field_room_tid']['expose']['identifier'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    157083709 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/calendrier-salles';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['block_description'] = 'Evénements Structure';

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Date : Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );

  /* Display: iCal Tout */
  $handler = $view->new_display('feed', 'iCal Tout', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Salle */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/all-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal A distance */
  $handler = $view->new_display('feed', 'iCal A distance', 'feed_11');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    3567 => '3567',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/distance-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Auberge */
  $handler = $view->new_display('feed', 'iCal Auberge', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    3587 => '3587',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/auberge-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Don Camillo */
  $handler = $view->new_display('feed', 'iCal Don Camillo', 'feed_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    2106 => '2106',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/don-camillo-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Placard */
  $handler = $view->new_display('feed', 'iCal Placard', 'feed_4');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    2107 => '2107',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/placard-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Bureau Urscoop */
  $handler = $view->new_display('feed', 'iCal Bureau Urscoop', 'feed_5');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    2108 => '2108',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/bureau-urscoop-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Grande salle Urscoop */
  $handler = $view->new_display('feed', 'iCal Grande salle Urscoop', 'feed_6');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    3569 => '3569',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/grande-salle-urscoop-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Petite salle Urscoop */
  $handler = $view->new_display('feed', 'iCal Petite salle Urscoop', 'feed_7');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    3570 => '3570',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/petite-salle-urscoop-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Realis */
  $handler = $view->new_display('feed', 'iCal Realis', 'feed_8');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    3571 => '3571',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/realis-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Grand Saut */
  $handler = $view->new_display('feed', 'iCal Grand Saut', 'feed_9');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    2109 => '2109',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/grand-saut-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );

  /* Display: iCal Playtime */
  $handler = $view->new_display('feed', 'iCal Playtime', 'feed_10');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_room';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'room_event' => 'room_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Salle (field_room) */
  $handler->display->display_options['filters']['field_room_tid']['id'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['table'] = 'field_data_field_room';
  $handler->display->display_options['filters']['field_room_tid']['field'] = 'field_room_tid';
  $handler->display->display_options['filters']['field_room_tid']['value'] = array(
    2110 => '2110',
  );
  $handler->display->display_options['filters']['field_room_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_room_tid']['vocabulary'] = 'crealead_rooms';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/playtime-room-events.ics';
  $handler->display->display_options['displays'] = array(
    'rooms_month' => 'rooms_month',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $translatables['rooms_calendar'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Evénements salles'),
    t('Calendrier des salles'),
    t('Options avancées'),
    t('<a href="/node/add/room_event">LIEN_AJOUTER</a>'),
    t('Tout'),
    t('Salle'),
    t('Month'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Evénements Structure'),
    t('Upcoming'),
    t('Upcoming events block'),
    t('iCal Tout'),
    t('iCal A distance'),
    t('iCal Auberge'),
    t('iCal Don Camillo'),
    t('iCal Placard'),
    t('iCal Bureau Urscoop'),
    t('iCal Grande salle Urscoop'),
    t('iCal Petite salle Urscoop'),
    t('iCal Realis'),
    t('iCal Grand Saut'),
    t('iCal Playtime'),
  );
  $export['rooms_calendar'] = $view;

  $view = new view();
  $view->name = 'structure_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendrier Structure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Critère de tri: Contenu : Date - date de début (field_gclal_date) */
  $handler->display->display_options['sorts']['field_gclal_date_value']['id'] = 'field_gclal_date_value';
  $handler->display->display_options['sorts']['field_gclal_date_value']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['sorts']['field_gclal_date_value']['field'] = 'field_gclal_date_value';
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'structure_event' => 'structure_event',
  );

  /* Display: Evénements Structure (bloc) */
  $handler = $view->new_display('block', 'Evénements Structure (bloc)', 'structure');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendrier Vie Coopérative';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/structure_event">LIEN_AJOUTER</a> ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'structure_calendar_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '300';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );

  /* Display: Evénements Structure (page) */
  $handler = $view->new_display('page', 'Evénements Structure (page)', 'structure_month');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendrier Vie Coopérative';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/structure_event">LIEN_AJOUTER</a> ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'structure_calendar_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/evenements-vie-cooperative/calendrier';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-gclal-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Date : Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  $handler->display->display_options['block_description'] = 'Evénements Structure';

  /* Display: Bloc espace coes */
  $handler = $view->new_display('block', 'Bloc espace coes', 'cob');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evénements Vie Coopérative';
  $handler->display->display_options['display_comment'] = 'coes area block (cob)';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-views-structure-calendar-coes-area';
  $handler->display->display_options['display_description'] = 'Bloc des événements Structure à venir';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_gclal_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gclal_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date_1']['id'] = 'field_gclal_date_1';
  $handler->display->display_options['fields']['field_gclal_date_1']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date_1']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date_1']['settings'] = array(
    'format_type' => 'structure_calendar_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
    'structure_event' => 'structure_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Date : Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  /* Critère de filtrage: Contenu : Thème (field_theme_breve) */
  $handler->display->display_options['filters']['field_theme_breve_tid']['id'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['filters']['field_theme_breve_tid']['field'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator_id'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['label'] = 'Thème';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['identifier'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_theme_breve_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_breve_tid']['vocabulary'] = 'th_mes_br_ve';

  /* Display: Page espace coes */
  $handler = $view->new_display('page_with_page_title', 'Page espace coes', 'cop');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Événements Vie Coopérative';
  $handler->display->display_options['display_comment'] = 'coes area page (cop)';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_gclal_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date_1']['id'] = 'field_gclal_date_1';
  $handler->display->display_options['fields']['field_gclal_date_1']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date_1']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gclal_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date_1']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'structure_calendar_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
    'structure_event' => 'structure_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Date : Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_gclal_date.field_gclal_date_value' => 'field_data_field_gclal_date.field_gclal_date_value',
  );
  /* Critère de filtrage: Contenu : Thème (field_theme_breve) */
  $handler->display->display_options['filters']['field_theme_breve_tid']['id'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['filters']['field_theme_breve_tid']['field'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator_id'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['label'] = 'Thème';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['identifier'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember_roles'] = array(
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
    1936756 => 0,
  );
  $handler->display->display_options['filters']['field_theme_breve_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_breve_tid']['vocabulary'] = 'th_mes_br_ve';
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/evenements-vie-cooperative/liste';

  /* Display: iCal Tout */
  $handler = $view->new_display('feed', 'iCal Tout', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_theme_breve';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Thème */
  $handler->display->display_options['fields']['field_theme_breve']['id'] = 'field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['field'] = 'field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['label'] = '';
  $handler->display->display_options['fields']['field_theme_breve']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_breve']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
    'structure_event' => 'structure_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/all-structure-events.ics';
  $handler->display->display_options['displays'] = array(
    'structure_month' => 'structure_month',
    'default' => 0,
    'structure' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'cob' => 0,
    'cop' => 0,
  );

  /* Display: iCal Depuis 2022 */
  $handler = $view->new_display('feed', 'iCal Depuis 2022', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_gclal_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_gcal_description';
  $handler->display->display_options['row_options']['location_field'] = 'field_gcal_location';
  $handler->display->display_options['row_options']['categories_field'] = 'field_theme_breve';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_gclal_date']['id'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['field'] = 'field_gclal_date';
  $handler->display->display_options['fields']['field_gclal_date']['label'] = '';
  $handler->display->display_options['fields']['field_gclal_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_gclal_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gclal_date']['delta_offset'] = '0';
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_gcal_location']['id'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['table'] = 'field_data_field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['field'] = 'field_gcal_location';
  $handler->display->display_options['fields']['field_gcal_location']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_location']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['field_gcal_description']['id'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['table'] = 'field_data_field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['field'] = 'field_gcal_description';
  $handler->display->display_options['fields']['field_gcal_description']['label'] = '';
  $handler->display->display_options['fields']['field_gcal_description']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Thème */
  $handler->display->display_options['fields']['field_theme_breve']['id'] = 'field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['field'] = 'field_theme_breve';
  $handler->display->display_options['fields']['field_theme_breve']['label'] = '';
  $handler->display->display_options['fields']['field_theme_breve']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_breve']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Published status */
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
    'structure_event' => 'structure_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Date - date de début (field_gclal_date) */
  $handler->display->display_options['filters']['field_gclal_date_value']['id'] = 'field_gclal_date_value';
  $handler->display->display_options['filters']['field_gclal_date_value']['table'] = 'field_data_field_gclal_date';
  $handler->display->display_options['filters']['field_gclal_date_value']['field'] = 'field_gclal_date_value';
  $handler->display->display_options['filters']['field_gclal_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_gclal_date_value']['value']['min'] = '2022';
  $handler->display->display_options['filters']['field_gclal_date_value']['value']['value'] = '2022';
  $handler->display->display_options['filters']['field_gclal_date_value']['granularity'] = 'year';
  $handler->display->display_options['path'] = 'calendar/calendar-events-export/from-2022-structure-events.ics';
  $handler->display->display_options['displays'] = array(
    'structure_month' => 'structure_month',
    'default' => 0,
    'structure' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'cob' => 0,
    'cop' => 0,
  );
  $translatables['structure_calendar'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Evénements Structure (bloc)'),
    t('Calendrier Vie Coopérative'),
    t('<a href="/node/add/structure_event">LIEN_AJOUTER</a> '),
    t('Tout'),
    t('Evénements Structure (page)'),
    t('Month'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Evénements Structure'),
    t('Bloc espace coes'),
    t('Evénements Vie Coopérative'),
    t('Bloc des événements Structure à venir'),
    t('Rechercher'),
    t('Éléments par page'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Thème'),
    t('Page espace coes'),
    t('Événements Vie Coopérative'),
    t('iCal Tout'),
    t('iCal Depuis 2022'),
  );
  $export['structure_calendar'] = $view;

  return $export;
}
