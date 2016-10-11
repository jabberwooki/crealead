<?php
/**
 * @file
 * crealead_info_meetings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_info_meetings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'crealead_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Inscriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inscriptions';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'registration_id' => 'registration_id',
    'created' => 'created',
    'field_registrant_lastname' => 'field_registrant_lastname',
    'field_registrant_firstname' => 'field_registrant_lastname',
    'anon_mail' => 'anon_mail',
    'view_registration' => 'view_registration',
    'edit_registration' => 'view_registration',
    'field_registrant_status' => 'field_registrant_status',
    'delete_registration' => 'view_registration',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_registrant_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_registration' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Pied de page: Global : Résumé des résultats */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Nombre total d\'inscriptions : @total';
  /* Relation: Inscription : Registration to Nœud */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['label'] = 'Réunion info';
  /* Relation: Registration Settings : Nœud to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['relationship'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Paramètres inscription';
  /* Champ: Bulk operations : Inscription */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::crealead_check_registrants_as_absent' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crealead_check_registrants_as_present' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Champ: Inscription : Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Champ: Inscription : Date de création */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Inscription : Nom */
  $handler->display->display_options['fields']['field_registrant_lastname']['id'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['table'] = 'field_data_field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['field'] = 'field_registrant_lastname';
  /* Champ: Inscription : Prénom */
  $handler->display->display_options['fields']['field_registrant_firstname']['id'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['table'] = 'field_data_field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['field'] = 'field_registrant_firstname';
  /* Champ: Inscription : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Courriel';
  /* Champ: Inscription : Statut */
  $handler->display->display_options['fields']['field_registrant_status']['id'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['table'] = 'field_data_field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['field'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Inscription : Lien d'affichage */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = 'Actions';
  /* Champ: Inscription : Lien de modification */
  $handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
  /* Champ: Inscription : Lien de suppression */
  $handler->display->display_options['fields']['delete_registration']['id'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['delete_registration']['field'] = 'delete_registration';
  /* Champ: Inscription : Présent à la réunion */
  $handler->display->display_options['fields']['field_attendee']['id'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['table'] = 'field_data_field_attendee';
  $handler->display->display_options['fields']['field_attendee']['field'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['label'] = 'Présent';
  /* Filtre contextuel: Contenu : Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'registrations_list');
  $handler->display->display_options['path'] = 'registrations-list';
  $translatables['crealead_registrations'] = array(
    t('Master'),
    t('Inscriptions'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Nombre total d\'inscriptions : @total'),
    t('Réunion info'),
    t('Paramètres inscription'),
    t('- Choose an operation -'),
    t('.'),
    t(','),
    t('Date de création'),
    t('Nom'),
    t('Prénom'),
    t('Courriel'),
    t('Statut'),
    t('Actions'),
    t('Lien de modification'),
    t('Lien de suppression'),
    t('Présent'),
    t('Tout'),
    t('Page'),
  );
  $export['crealead_registrations'] = $view;

  $view = new view();
  $view->name = 'info_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Réunions d\'information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les réunions d\'information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer info meetings';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
Co-entreprendre en CAE de 9h15 à 12h30

Accueil
Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ? 
A quel moment intégrer la CAE ? Comment se préparer ? 
Le parcours : l\'accompagnement, les formations, le conseil.
Présentation de la plateforme de gestion en ligne, Louty
Combien ça coûte ? Combien de temps cela dure ? 
Quel statut ? Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?
Les animations réseaux de Crealead
Quel intérêt par rapport au statut de l\'autoentrepreneur ?';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Hôtel de la coopération (aile droite)
contact@crealead.com 
55, rue Saint Cléophas 34000 Montpellier 
Téléphone : 04-67-06-96-72';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'info_meeting' => 'info_meeting',
  );

  /* Display: Liste dates réunions */
  $handler = $view->new_display('page_with_page_title', 'Liste dates réunions', 'info_meetings_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3 class="title-info-meeting">Quand? </h3>
<p>Une réunion est organisée tous les dix jours, de 9h15 à 12h15. </p>
<h3 class="title-info-meeting">Où? </h3>
<p>Dans les locaux de Crealead, à l’Hôtel de la Coopération, 55 rue St Cléophas, 34070 Montpellier</p>

<h3 class="title-info-meeting">Au programme :</h3>
<ul class="coche-rouge">
  <li>Accueil & Présentation
    <ul>
      <li>Qu’est-ce qu\'une Coopérative d\'Activités et d\'Emploi (CAE) ?</li>
      <li>Qui peut être co-entrepreneur?</li>
    </ul>
  </li>
  <li>Co-entreprendre chez Crealead
    <ul>
      <li>A quel moment intégrer Crealead ? Comment se préparer ?</li>
      <li>Rejoindre Crealead: l\'accompagnement, les formations, le conseil.</li>
      <li>Le parcours porteur de projet en contrat CAPE</li>
      <li>Le parcours de l’entrepreneur déjà en activité</li>
    </ul>
  </li>
  
  <li>Co-entrepreneur au quotidien : le fonctionnement de Crealead
    <ul>
      <li>Présentation du système de gestion en ligne,</li>
      <li>Combien ça coûte ? Combien de temps cela dure ?</li>
      <li>Le contrat CAPE ? Quelle compatibilité avec mes indemnités Pôle Emploi, mon RSA?</li>
      <li>Le statut d’entrepreneur-salarié : quelle protection sociale ?</li>
      <li>En synthèse : quel intérêt par rapport au statut de l\'autoentrepreneur, des autres statuts ?</li>
    </ul>
   </li>
 
  <li>Les Plus Crealead
    <ul>
      <li>Les animations réseaux de Crealead</li>
      <li>Les marques sectorielles</li>
      <li>Le système d’échange de compétence et de services</li>
    </ul>
  </li>
  
</ul>

';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Inscription : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'Inscriptions';
  /* Relation: Registration Settings : Nœud to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Paramètres inscription';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Inscription : Slots consumed */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'registration';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  /* Champ: Registration Settings : Slots Total */
  $handler->display->display_options['fields']['capacity_total']['id'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['table'] = 'registration_entity';
  $handler->display->display_options['fields']['capacity_total']['field'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['fields']['capacity_total']['exclude'] = TRUE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Global : Expression mathématique */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Places restantes';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[capacity_total] - [count]';
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 's\'inscrire';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
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
    'info_meeting' => 'info_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Registration Settings : Date d'ouverture */
  $handler->display->display_options['filters']['open']['id'] = 'open';
  $handler->display->display_options['filters']['open']['table'] = 'registration_entity';
  $handler->display->display_options['filters']['open']['field'] = 'open';
  $handler->display->display_options['filters']['open']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['filters']['open']['operator'] = '<=';
  $handler->display->display_options['filters']['open']['value']['value'] = 'now';
  $handler->display->display_options['filters']['open']['value']['type'] = 'offset';
  /* Critère de filtrage: Registration Settings : Date de clôture */
  $handler->display->display_options['filters']['close']['id'] = 'close';
  $handler->display->display_options['filters']['close']['table'] = 'registration_entity';
  $handler->display->display_options['filters']['close']['field'] = 'close';
  $handler->display->display_options['filters']['close']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['filters']['close']['operator'] = '>=';
  $handler->display->display_options['filters']['close']['value']['value'] = 'now';
  $handler->display->display_options['filters']['close']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'reunions-information';

  /* Display: Inscriptions */
  $handler = $view->new_display('page', 'Inscriptions', 'registrations_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inscriptions aux réunions d\'information';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer info meetings';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Flitrer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_info_meeting_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_info_meeting_date' => 'field_info_meeting_date',
    'registration_id' => 'registration_id',
    'created' => 'created',
    'field_registrant_lastname' => 'field_registrant_lastname',
    'field_registrant_firstname' => 'field_registrant_lastname',
    'anon_mail' => 'anon_mail',
    'field_registrant_status' => 'field_registrant_status',
    'field_registrant_project_domain' => 'field_registrant_project_domain',
    'field_attendee' => 'field_attendee',
    'field_registrant_city' => 'field_registrant_city',
  );
  $handler->display->display_options['style_options']['default'] = 'field_info_meeting_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_info_meeting_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_registrant_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_project_domain' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attendee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Prochaines réunions';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Résumé des résultats */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3>Total des inscriptions :  @total</h3>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Inscription : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'Inscriptions';
  $handler->display->display_options['relationships']['registration_rel']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_info_meeting_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'info_meeting_medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Inscription : Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['registration_id']['label'] = 'N°';
  /* Champ: Inscription : Date de création */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['created']['label'] = 'Date d\'inscription';
  $handler->display->display_options['fields']['created']['date_format'] = 'info_meeting_medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Inscription : Nom */
  $handler->display->display_options['fields']['field_registrant_lastname']['id'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['table'] = 'field_data_field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['field'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Prénom */
  $handler->display->display_options['fields']['field_registrant_firstname']['id'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['table'] = 'field_data_field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['field'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Courriel';
  /* Champ: Inscription : Statut */
  $handler->display->display_options['fields']['field_registrant_status']['id'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['table'] = 'field_data_field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['field'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_status']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Inscription : Projet d'activité */
  $handler->display->display_options['fields']['field_registrant_project_domain']['id'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['table'] = 'field_data_field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['field'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_project_domain']['label'] = 'Domaine d\'activité';
  /* Champ: Inscription : Ville */
  $handler->display->display_options['fields']['field_registrant_city']['id'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['table'] = 'field_data_field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['field'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Comment avez-vous connu Crealead */
  $handler->display->display_options['fields']['field_registrant_how']['id'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['table'] = 'field_data_field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['field'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_how']['label'] = 'Prescripteur';
  /* Champ: Inscription : Présent à la réunion */
  $handler->display->display_options['fields']['field_attendee']['id'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['table'] = 'field_data_field_attendee';
  $handler->display->display_options['fields']['field_attendee']['field'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_attendee']['label'] = 'Présent';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
  /* Critère de tri: Inscription : Registration ID */
  $handler->display->display_options['sorts']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['table'] = 'registration';
  $handler->display->display_options['sorts']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['relationship'] = 'registration_rel';
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
    'info_meeting' => 'info_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/info_meetings_registrations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Réunions d\'information';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Stats */
  $handler = $view->new_display('page', 'Stats', 'registrations_stats');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistiques réunions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer info meetings';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
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
    'field_attendee_value' => array(
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
    'field_registrant_city_value' => array(
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
    'field_registrant_how_value' => array(
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
    'field_info_meeting_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 1,
        'any_label' => 'dd-mm-yy',
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
    'field_info_meeting_date_value_1' => array(
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
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_info_meeting_date' => 'field_info_meeting_date',
    'registration_id' => 'registration_id',
    'field_registrant_lastname' => 'field_registrant_lastname',
    'field_registrant_firstname' => 'field_registrant_lastname',
    'anon_mail' => 'anon_mail',
    'field_registrant_status' => 'field_registrant_status',
    'field_registrant_dom_activite' => 'field_registrant_dom_activite',
    'field_registrant_project_domain' => 'field_registrant_project_domain',
    'field_registrant_city' => 'field_registrant_city',
    'field_registrant_how' => 'field_registrant_how',
    'field_attendee' => 'field_attendee',
  );
  $handler->display->display_options['style_options']['default'] = 'field_info_meeting_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_info_meeting_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_registrant_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_dom_activite' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_project_domain' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_how' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attendee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Prochaines réunions';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Résumé des résultats */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3>Total des inscriptions :  @total</h3>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Inscription : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'Inscriptions';
  $handler->display->display_options['relationships']['registration_rel']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['label'] = 'Date réunion';
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'news_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Inscription : Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['registration_id']['label'] = 'N°';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  /* Champ: Inscription : Nom */
  $handler->display->display_options['fields']['field_registrant_lastname']['id'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['table'] = 'field_data_field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['field'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Prénom */
  $handler->display->display_options['fields']['field_registrant_firstname']['id'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['table'] = 'field_data_field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['field'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Courriel';
  /* Champ: Inscription : Statut */
  $handler->display->display_options['fields']['field_registrant_status']['id'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['table'] = 'field_data_field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['field'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_status']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Inscription : Domaine d'activité */
  $handler->display->display_options['fields']['field_registrant_dom_activite']['id'] = 'field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['table'] = 'field_data_field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['field'] = 'field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Inscription : Projet d'activité */
  $handler->display->display_options['fields']['field_registrant_project_domain']['id'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['table'] = 'field_data_field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['field'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Ville */
  $handler->display->display_options['fields']['field_registrant_city']['id'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['table'] = 'field_data_field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['field'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Comment avez-vous connu Crealead */
  $handler->display->display_options['fields']['field_registrant_how']['id'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['table'] = 'field_data_field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['field'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_how']['label'] = 'Prescripteur';
  /* Champ: Inscription : Présent à la réunion */
  $handler->display->display_options['fields']['field_attendee']['id'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['table'] = 'field_data_field_attendee';
  $handler->display->display_options['fields']['field_attendee']['field'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_attendee']['label'] = 'Présent';
  $handler->display->display_options['fields']['field_attendee']['empty'] = 'non';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
  /* Critère de tri: Inscription : Registration ID */
  $handler->display->display_options['sorts']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['table'] = 'registration';
  $handler->display->display_options['sorts']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['relationship'] = 'registration_rel';
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
    'info_meeting' => 'info_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Inscription : Présent à la réunion (field_attendee) */
  $handler->display->display_options['filters']['field_attendee_value']['id'] = 'field_attendee_value';
  $handler->display->display_options['filters']['field_attendee_value']['table'] = 'field_data_field_attendee';
  $handler->display->display_options['filters']['field_attendee_value']['field'] = 'field_attendee_value';
  $handler->display->display_options['filters']['field_attendee_value']['relationship'] = 'registration_rel';
  $handler->display->display_options['filters']['field_attendee_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attendee_value']['expose']['operator_id'] = 'field_attendee_value_op';
  $handler->display->display_options['filters']['field_attendee_value']['expose']['label'] = 'Présent';
  $handler->display->display_options['filters']['field_attendee_value']['expose']['operator'] = 'field_attendee_value_op';
  $handler->display->display_options['filters']['field_attendee_value']['expose']['identifier'] = 'field_attendee_value';
  $handler->display->display_options['filters']['field_attendee_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_attendee_value']['expose']['remember_roles'] = array(
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
  /* Critère de filtrage: Inscription : Ville (field_registrant_city) */
  $handler->display->display_options['filters']['field_registrant_city_value']['id'] = 'field_registrant_city_value';
  $handler->display->display_options['filters']['field_registrant_city_value']['table'] = 'field_data_field_registrant_city';
  $handler->display->display_options['filters']['field_registrant_city_value']['field'] = 'field_registrant_city_value';
  $handler->display->display_options['filters']['field_registrant_city_value']['relationship'] = 'registration_rel';
  $handler->display->display_options['filters']['field_registrant_city_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_registrant_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['operator_id'] = 'field_registrant_city_value_op';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['label'] = 'Ville (ex : mont|sete|sète)';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['description'] = 'La barre verticale "|" signifie "ou".';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['operator'] = 'field_registrant_city_value_op';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['identifier'] = 'field_registrant_city_value';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_field'] = 'field_registrant_city';
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_registrant_city_value']['expose']['autocomplete_dependent'] = 0;
  /* Critère de filtrage: Inscription : Comment avez-vous connu Crealead (field_registrant_how) */
  $handler->display->display_options['filters']['field_registrant_how_value']['id'] = 'field_registrant_how_value';
  $handler->display->display_options['filters']['field_registrant_how_value']['table'] = 'field_data_field_registrant_how';
  $handler->display->display_options['filters']['field_registrant_how_value']['field'] = 'field_registrant_how_value';
  $handler->display->display_options['filters']['field_registrant_how_value']['relationship'] = 'registration_rel';
  $handler->display->display_options['filters']['field_registrant_how_value']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['field_registrant_how_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['operator_id'] = 'field_registrant_how_value_op';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['label'] = 'Prescripteur';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['description'] = 'Ex : bouche|connaiss|ami|col|relation|perso';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['operator'] = 'field_registrant_how_value_op';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['identifier'] = 'field_registrant_how_value';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_field'] = 'field_registrant_how';
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_registrant_how_value']['expose']['autocomplete_dependent'] = 0;
  /* Critère de filtrage: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['filters']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_info_meeting_date_value']['expose']['operator_id'] = 'field_info_meeting_date_value_op';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['expose']['label'] = 'Après le';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['expose']['operator'] = 'field_info_meeting_date_value_op';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['expose']['identifier'] = 'field_info_meeting_date_value';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_info_meeting_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_info_meeting_date_value']['default_date'] = '1 year ago';
  /* Critère de filtrage: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['id'] = 'field_info_meeting_date_value_1';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['field'] = 'field_info_meeting_date_value';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['expose']['operator_id'] = 'field_info_meeting_date_value_1_op';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['expose']['label'] = 'Avant le';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['expose']['operator'] = 'field_info_meeting_date_value_1_op';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['expose']['identifier'] = 'field_info_meeting_date_value_1';
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_info_meeting_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'admin/info_meetings_registrations_stats';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Statistiques réunions';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'registration_export');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Inscription : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'inscriptions';
  /* Relation: Registration Settings : Nœud to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Paramètres inscription';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date_1']['id'] = 'field_info_meeting_date_1';
  $handler->display->display_options['fields']['field_info_meeting_date_1']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date_1']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date_1']['label'] = 'Date réunion';
  $handler->display->display_options['fields']['field_info_meeting_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Inscription : Nom */
  $handler->display->display_options['fields']['field_registrant_lastname']['id'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['table'] = 'field_data_field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['field'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_registrant_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registrant_lastname']['element_label_colon'] = FALSE;
  /* Champ: Inscription : Prénom */
  $handler->display->display_options['fields']['field_registrant_firstname']['id'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['table'] = 'field_data_field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['field'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_firstname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_registrant_firstname']['alter']['text'] = '[field_registrant_lastname] [field_registrant_firstname]';
  /* Champ: Inscription : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Courriel';
  /* Champ: Inscription : Statut */
  $handler->display->display_options['fields']['field_registrant_status']['id'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['table'] = 'field_data_field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['field'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_registrant_status']['delta_offset'] = '0';
  /* Champ: Inscription : Domaine d'activité */
  $handler->display->display_options['fields']['field_registrant_dom_activite']['id'] = 'field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['table'] = 'field_data_field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['field'] = 'field_registrant_dom_activite';
  $handler->display->display_options['fields']['field_registrant_dom_activite']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Projet d'activité */
  $handler->display->display_options['fields']['field_registrant_project_domain']['id'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['table'] = 'field_data_field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['field'] = 'field_registrant_project_domain';
  $handler->display->display_options['fields']['field_registrant_project_domain']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Ville */
  $handler->display->display_options['fields']['field_registrant_city']['id'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['table'] = 'field_data_field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['field'] = 'field_registrant_city';
  $handler->display->display_options['fields']['field_registrant_city']['relationship'] = 'registration_rel';
  /* Champ: Inscription : Comment avez-vous connu Crealead */
  $handler->display->display_options['fields']['field_registrant_how']['id'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['table'] = 'field_data_field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['field'] = 'field_registrant_how';
  $handler->display->display_options['fields']['field_registrant_how']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['field_registrant_how']['label'] = 'Prescripteur';
  /* Champ: Inscription : Présent à la réunion */
  $handler->display->display_options['fields']['field_attendee']['id'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['table'] = 'field_data_field_attendee';
  $handler->display->display_options['fields']['field_attendee']['field'] = 'field_attendee';
  $handler->display->display_options['fields']['field_attendee']['relationship'] = 'registration_rel';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'info_meetings_registrations_stats/csv';
  $handler->display->display_options['displays'] = array(
    'registrations_stats' => 'registrations_stats',
    'default' => 0,
    'info_meetings_list' => 0,
    'registrations_list' => 0,
  );
  $translatables['info_meetings'] = array(
    t('Master'),
    t('Les réunions d\'information'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('
Co-entreprendre en CAE de 9h15 à 12h30

Accueil
Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ? 
A quel moment intégrer la CAE ? Comment se préparer ? 
Le parcours : l\'accompagnement, les formations, le conseil.
Présentation de la plateforme de gestion en ligne, Louty
Combien ça coûte ? Combien de temps cela dure ? 
Quel statut ? Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?
Les animations réseaux de Crealead
Quel intérêt par rapport au statut de l\'autoentrepreneur ?'),
    t('Hôtel de la coopération (aile droite)
contact@crealead.com 
55, rue Saint Cléophas 34000 Montpellier 
Téléphone : 04-67-06-96-72'),
    t('Liste dates réunions'),
    t('<h3 class="title-info-meeting">Quand? </h3>
<p>Une réunion est organisée tous les dix jours, de 9h15 à 12h15. </p>
<h3 class="title-info-meeting">Où? </h3>
<p>Dans les locaux de Crealead, à l’Hôtel de la Coopération, 55 rue St Cléophas, 34070 Montpellier</p>

<h3 class="title-info-meeting">Au programme :</h3>
<ul class="coche-rouge">
  <li>Accueil & Présentation
    <ul>
      <li>Qu’est-ce qu\'une Coopérative d\'Activités et d\'Emploi (CAE) ?</li>
      <li>Qui peut être co-entrepreneur?</li>
    </ul>
  </li>
  <li>Co-entreprendre chez Crealead
    <ul>
      <li>A quel moment intégrer Crealead ? Comment se préparer ?</li>
      <li>Rejoindre Crealead: l\'accompagnement, les formations, le conseil.</li>
      <li>Le parcours porteur de projet en contrat CAPE</li>
      <li>Le parcours de l’entrepreneur déjà en activité</li>
    </ul>
  </li>
  
  <li>Co-entrepreneur au quotidien : le fonctionnement de Crealead
    <ul>
      <li>Présentation du système de gestion en ligne,</li>
      <li>Combien ça coûte ? Combien de temps cela dure ?</li>
      <li>Le contrat CAPE ? Quelle compatibilité avec mes indemnités Pôle Emploi, mon RSA?</li>
      <li>Le statut d’entrepreneur-salarié : quelle protection sociale ?</li>
      <li>En synthèse : quel intérêt par rapport au statut de l\'autoentrepreneur, des autres statuts ?</li>
    </ul>
   </li>
 
  <li>Les Plus Crealead
    <ul>
      <li>Les animations réseaux de Crealead</li>
      <li>Les marques sectorielles</li>
      <li>Le système d’échange de compétence et de services</li>
    </ul>
  </li>
  
</ul>

'),
    t('Inscriptions'),
    t('Paramètres inscription'),
    t('Slots consumed'),
    t('.'),
    t(','),
    t('Slots Total'),
    t('Date'),
    t('Places restantes'),
    t('s\'inscrire'),
    t('Inscriptions aux réunions d\'information'),
    t('Flitrer'),
    t('Select any filter and click on Apply to see results'),
    t('<h3>Total des inscriptions :  @total</h3>'),
    t('N°'),
    t('Date d\'inscription'),
    t('Nom'),
    t('Prénom'),
    t('Courriel'),
    t('Statut'),
    t('Domaine d\'activité'),
    t('Ville'),
    t('Prescripteur'),
    t('Présent'),
    t('Stats'),
    t('Statistiques réunions'),
    t('Options avancées'),
    t('dd-mm-yy'),
    t('Date réunion'),
    t('Projet d\'activité'),
    t('non'),
    t('Ville (ex : mont|sete|sète)'),
    t('La barre verticale "|" signifie "ou".'),
    t('Ex : bouche|connaiss|ami|col|relation|perso'),
    t('Après le'),
    t('Avant le'),
    t('Data export'),
    t('inscriptions'),
    t('[field_registrant_lastname] [field_registrant_firstname]'),
    t('Présent à la réunion'),
  );
  $export['info_meetings'] = $view;

  return $export;
}
