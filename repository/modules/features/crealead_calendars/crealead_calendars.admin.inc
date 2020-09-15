<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 17/11/19
 * Time: 15:51
 */

// TAB 1 - Automatic sending settings functions.
function crealead_structure_events_settings_form() {
  // Email automatic sending settings
  $form['crealead_structure_events_emails'] = array(
    '#type' => 'fieldset',
    '#title' => t('Jours d\'envoi'),
  );
  $form['crealead_structure_events_emails']['structure_events_sending_days'] = array(
    '#type' => 'checkboxes',
    '#description' => 'Cocher le ou les jours ou vous souhaitez envoyer un email des prochains événements Structure à tous les utilisateurs.',
    '#options' => array(
      1 => 'lundi',
      2 => 'mardi',
      3 => 'mercredi',
      4 => 'jeudi',
      5 => 'vendredi',
      6 => 'samedi',
      7 => 'dimanche',
    ),
    '#default_value' => variable_get('structure_events_sending_days', array()),
  );

  return system_settings_form($form);
}

// TAB 2 - Manual sending functions.
function crealead_structure_events_manual_sending_form() {
  drupal_add_css(drupal_get_path('module','crealead_calendars') . '/css/crealead_structure_events.css');
  drupal_add_js(drupal_get_path('module','crealead_calendars') . '/js/crealead_structure_events.js');

  $form = array();
  $structure_events = crealead_structure_events_get_next();
  $current_month_events = crealead_structure_events_get_month_events('current');
  $next_month_events = crealead_structure_events_get_month_events('next');

  if(empty($structure_events)) {
    $form['intro'] = array(
      '#markup' => '<p class="structure-events-manual-sending-intro">'
        . 'Il n\'y a actuellement aucun événement Structure à venir.'
        . '</p>',
    );
  }
  else {
    $form['intro'] = array(
      '#markup' => '<p class="structure-events-manual-sending-intro">'
        . 'Vous pouvez envoyer manuellement les prochaines événements Structure à tous les utilisateurs.'
        . '</p>',
    );

    $form['structure_events_manual_sending_subject'] = array(
      '#type' => 'textfield',
      '#title' => 'Objet du message',
      '#size' => 100,
      '#field_prefix' => '[Crealead]',
      '#default_value' => 'Evénements à venir',
    );

    $form['crealead_structure_events_sending_period'] = array(
      '#type' => 'fieldset',
      '#title' => t('Période à couvrir'),
    );


    $current_month_name =  format_date(time(), 'custom', 'F Y');
    $current_month_number = format_date(time(), 'custom', 'n');
    $current_month_article = in_array($current_month_number, array(4, 8, 10)) ? 'd\'' : 'de ';

    $next_month_name = format_date(strtotime('first day of next month'), 'custom', 'F Y');
    $next_month_number = format_date(strtotime('first day of next month'), 'custom', 'n');
    $next_month_article = in_array($next_month_number, array(4, 8, 10)) ? 'd\'' : 'de ';

    $today_date = format_date(time(), 'custom', 'd F Y');

    $periods = array(
        0 => 'Une semaine',
        1 => '2 semaines',
        2 => '4 semaines',
        3 => 'Tous les événements du mois en cours (' . $current_month_name . ')',
        4 => 'Tous les événéments du mois suivant (' . $next_month_name . ')',
    );

    $form['crealead_structure_events_sending_period']['structure_events_manual_sending_period'] = array(
      '#type' => 'radios',
      '#description' => 'Sélectionner la période à couvrir pour l\'envoi des événements Structure. Nous sommes aujourd\'hui le <b>' . $today_date . '</b>.',
      '#options' => $periods,
      '#default_value' => variable_get('structure_events_manual_sending_period', 0),
    );

    $options1 = array();
    $default_value = array();
    foreach ($structure_events as $event_group=>$events) {
      if ($event_group == 'group1') {
        foreach ($events as $event) {
          $options1[$event['nid']] = $event['start_date']
            . ' --- ' . $event['start_time'] . ' - ' . $event['end_time']
            . ' --- ' . $event['title']
            . ($event['location'] ? ' (' . $event['location'] . ')' : '');

          array_push($default_value, $event['nid']);
        }
      }
    }
    $form['crealead_structure_events_0'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Evénements de la semaine.'),
      '#options' => $options1,
      '#default_value' => $default_value,
    );

    $options2 = array();
    foreach ($structure_events as $event_group=>$events) {
      if ($event_group == 'group1' || $event_group == 'group2') {
        foreach ($events as $event) {
          $options2[$event['nid']] = $event['start_date']
            . ' --- ' . $event['start_time'] . ' - ' . $event['end_time']
            . ' --- ' . $event['title']
            . ($event['location'] ? ' (' . $event['location'] . ')' : '');

          array_push($default_value, $event['nid']);
        }
      }
    }
    $form['crealead_structure_events_1'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Evénements des 2 prochaines semaines'),
      '#options' => $options2,
      '#default_value' => $default_value,
    );

    $options3 = array();
    foreach ($structure_events as $event_group) {
      foreach ($event_group as $event) {
        $options3[$event['nid']] = $event['start_date']
          . ' --- ' . $event['start_time'] . ' - ' . $event['end_time']
          . ' --- ' . $event['title']
          . ($event['location'] ? ' (' . $event['location'] . ')' : '');

        array_push($default_value, $event['nid']);
        ;
      }
    }
    $form['crealead_structure_events_2'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Evénements des 4 prochaines semaines'),
      '#options' => $options3,
      '#default_value' => $default_value,
    );

    $options4 = array();
    foreach ($current_month_events as $event) {
        $options4[$event['nid']] = $event['start_date']
          . ' --- ' . $event['start_time'] . ' - ' . $event['end_time']
          . ' --- ' . $event['title']
          . ($event['location'] ? ' (' . $event['location'] . ')' : '');

        array_push($default_value, $event['nid']);
      }
    $form['crealead_structure_events_3'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Evénements du mois ' .$current_month_article . $current_month_name),
      '#options' => $options4,
      '#default_value' => $default_value,
    );

    $options5 = array();
    foreach ($next_month_events as $event) {
      $options5[$event['nid']] = $event['start_date']
          . ' --- ' . $event['start_time'] . ' - ' . $event['end_time']
          . ' --- ' . $event['title']
          . ($event['location'] ? ' (' . $event['location'] . ')' : '');

      array_push($default_value, $event['nid']);
    }
    $form['crealead_structure_events_4'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Evénements du mois ' .$next_month_article . $next_month_name),
      '#options' => $options5,
      '#default_value' => $default_value,
    );

    $form['submit-container'] = array(
      '#type' => 'container',
    );
    $form['submit-container']['submit'] = array (
      '#type' => 'submit',
      '#value' => t('Envoyer'),
    );
  }

  return $form;
}

function crealead_structure_events_manual_sending_form_submit($form, &$form_state) {
  $is_current_month_wanted = $is_next_month_wanted = $is_a_month_wanted = FALSE;

  if(reset($form_state['values']['crealead_structure_events_0'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_0'];
  }
  elseif (reset($form_state['values']['crealead_structure_events_1'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_1'];
  }
  elseif (reset($form_state['values']['crealead_structure_events_2'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_2'];
  }
  elseif (reset($form_state['values']['crealead_structure_events_3'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_3'];
    $is_current_month_wanted = TRUE;
  }
  else {
    $selected_events_nids = $form_state['values']['crealead_structure_events_4'];
    $is_next_month_wanted = TRUE;
  }

  if ($is_current_month_wanted) {
    $structure_events = crealead_structure_events_get_month_events('current');
    $is_a_month_wanted = TRUE;
  }
  elseif ($is_next_month_wanted) {
    $structure_events = crealead_structure_events_get_month_events('next');
    $is_a_month_wanted = TRUE;
  }
  else {
    $structure_events = crealead_structure_events_get_next();
  }

  $events = crealead_get_day_grouped_events($structure_events, $selected_events_nids, $is_a_month_wanted);
  crealead_send_next_structure_events($events, $form_state['values']['structure_events_manual_sending_subject'], TRUE);

  // Ligne ci-dessous à conserver pour tests.
  //crealead_send_next_structure_events($events, $form_state['values']['structure_events_manual_sending_subject'], FALSE, array('christophe.espiau@gmail.com'));
}

function crealead_get_day_grouped_events($structure_events, $selected_events_nids=NULL, $is_a_month_wanted=FALSE) {
  $day_grouped_events = array();
  $days_grouped_selected_events = array();

  if ($is_a_month_wanted) {
    foreach ($structure_events as $event) {
        if (isset($selected_events_nids) && in_array($event['nid'], $selected_events_nids)) {
            $days_grouped_selected_events[$event['start_date']][] = $event;
        }
        else {
            $day_grouped_events[$event['start_date']][] = $event;
        }
    }
  }
  else {
    foreach ($structure_events as $event_group=>$events) {
      foreach($events as $key=>$event) {
          if (isset($selected_events_nids) && in_array($event['nid'], $selected_events_nids)) {
              $days_grouped_selected_events[$event['start_date']][] = $event;
          }
          else {
              $day_grouped_events[$event['start_date']][] = $event;
          }
      }
    }
  }

  if (isset($selected_events_nids)) {
    return $days_grouped_selected_events;
  }

  return $day_grouped_events;
}

// TAB 3 - Test sending functions.
function crealead_structure_events_test_sending_form() {
  $form = array();
  $structure_events = crealead_structure_events_get_next();
  $events_number = crealead_structure_events_number($structure_events);

  if ($events_number == 0) {
    $disabled = TRUE;
    $text = '<p class="events-test-sending-intro">' . 'Il n\'y a actuellement aucun événement Structure à venir ..' . '</p>';
  }
  else {
    $disabled = FALSE;

    $form['intro'] = array(
      '#markup' => '<p>'. 'Ce formulaire permet de tester l\'envoi des événements Structure par email.' . '</p>',
    );

    $form['emails'] = array(
      '#type' => 'textfield',
      '#title' => 'Adresses email',
      '#description' => 'Entrez une ou plusieurs adresses email valides, séparées par une <em><b>virgule</b></em> ou un <em><b>point virgule</b></em>.',
    );

    $plural = 's';
    if ($events_number == 1) {
      $plural = '';
    }
    $text = 'Il y a <span class="newsflashes-number">' . $events_number . '</span> événement' . $plural . ' à tester.';
  }

  $form['submit'] = array (
    '#type' => 'submit',
    '#value' => t('Envoyer le test'),
    '#disabled' => $disabled,
    '#prefix' => '<div class="events-test-sending-text">' . $text . '</div>',
  );

  return $form;
}

function crealead_structure_events_number($structure_events) {
  $number = 0;
  foreach ($structure_events as $event_group) {
    foreach ($event_group as $events) {
      $number++;
    }
  }

  return $number;
}

function crealead_structure_events_test_sending_form_validate($form, &$form_state){
  $addresses = crealead_calendars_get_emails_adresses($form_state['values']['emails']);

  if (empty($addresses)) {
    form_set_error('Structure events', 'Vous devez saisir au moins une adresse email.');
  }
  else {
    $wrong_addresses = array();
    foreach ($addresses as $address) {
      if (!valid_email_address($address)) {
        $wrong_addresses[] = $address;
      }
    }

    if (!empty($wrong_addresses)) {
      form_set_error('Structure events', t('Une ou plusieurs adresses sont invalides : @addresses.', array('@addresses' => implode(' ', $wrong_addresses))));
    }
  }
}

function crealead_structure_events_test_sending_form_submit($form, &$form_state) {
  $structure_events = crealead_structure_events_get_next();
  $day_grouped_events = crealead_get_day_grouped_events($structure_events);
  $test_addresses = crealead_calendars_get_emails_adresses($form_state['values']['emails']);

  crealead_send_next_structure_events($day_grouped_events, FALSE, FALSE, $test_addresses);
}

function crealead_calendars_get_emails_adresses($adresses_field) {
  return preg_split('/[\s,;]+/', $adresses_field, -1, PREG_SPLIT_NO_EMPTY);
}
