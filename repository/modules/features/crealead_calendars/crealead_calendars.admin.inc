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

    $periods = array(0 => 'Une semaine', 1 => '2 semaines', 2 => '1 mois');

    $form['crealead_structure_events_sending_period']['structure_events_manual_sending_period'] = array(
      '#type' => 'radios',
      '#description' => 'Sélectionner la période à couvrir pour l\'envoi des événements Structure.',
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
      '#title' => t('Evénements du mois'),
      '#options' => $options3,
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

function crealead_structure_events_manual_sending_form_submit($form, &$form_state) {dpm($form_state['values']);
  if(reset($form_state['values']['crealead_structure_events_0'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_0'];
  }
  elseif (reset($form_state['values']['crealead_structure_events_1'])) {
    $selected_events_nids = $form_state['values']['crealead_structure_events_1'];
  }
  else {
    $selected_events_nids = $form_state['values']['crealead_structure_events_2'];
  }

  $structure_events = crealead_structure_events_get_next();

  foreach ($structure_events as $event_group=>$events) {
    foreach($events as $key=>$event) {
      if (!in_array($event['nid'], $selected_events_nids)) {
        unset($structure_events[$event_group][$key]);
      }
    }
    if (sizeof($structure_events[$event_group]) == 0) {
      unset($structure_events[$event_group]);
    }
  }

  $structure_events = reset($structure_events);
  $day_grouped_events = array();

  foreach($structure_events as $event) {
    $day_grouped_events[$event['start_date']][] = $event;
  }

  crealead_send_next_structure_events($day_grouped_events, $form_state['values']['structure_events_manual_sending_subject']);
}

// TAB 3 - Test sending functions.
function crealead_structure_events_test_sending_form() {
  $form = array();
  $form['intro'] = array(
    '#markup' => '<p class="structure-events-test-sending-intro">'
      . 'Ce formulaire permet de tester l\'envoi des événements Structure.<br/>'
      . '</p>',
  );


//  $newsflashes_number = crealead_newsflashes_get_latest();
//
//  $form = array();
//  if (!$newsflashes_number) {
//    $disabled = TRUE;
//    $newsflashes_text = '<p class="newsflashes-test-sending-intro">' . 'Il n\'y a actuellement aucune brève à tester. Vous devez créer au moins une brève pour pouvoir faire un test.' . '</p>';
//  }
//  else {
//    $disabled = FALSE;
//
//    $form['intro'] = array(
//      '#markup' => '<p>'. 'Ce formulaire permet de tester l\'envoi des brèves par email.<br/> '
//        . 'Les brèves envoyées dans un test ne sont pas marquées comme envoyées. '
//        . 'Elles sont donc renvoyées à chaque test tant qu\un envoi manuel ou automatique n\a pas eu lieu.'
//        . '</p>',
//    );
//    $form['emails'] = array(
//      '#type' => 'textfield',
//      '#title' => 'Adresses email',
//      '#description' => 'Entrez une ou plusieurs adresses email valides, séparées par une <em><b>virgule</b></em> ou un <em><b>point virgule</b></em>.',
//    );
//
//    $plural = 's';
//    if ($newsflashes_number == 1) {
//      $plural = '';
//    }
//    $newsflashes_text = 'Il y a <span class="newsflashes-number">' . $newsflashes_number . '</span> brève' . $plural . ' à tester.';
//  }
//
//  $form['submit'] = array (
//    '#type' => 'submit',
//    '#value' => t('Envoyer le test'),
//    '#disabled' => $disabled,
//    '#prefix' => '<div class="newsflashes-test-sending-text">' . $newsflashes_text . '</div>',
//  );



  return $form;
}

//function crealead_newsflashes_test_sending_form_validate($form, &$form_state){
//  $addresses = crealead_newsflashes_get_emails_adresses($form_state['values']['emails']);
//  if (empty($addresses)) {
//    form_set_error('newsflashes', 'Vous devez saisir au moins une adresse email.');
//  }
//  else {
//    $wrong_adresses = array();
//    foreach ($addresses as $address) {
//      if (!valid_email_address($address)) {
//        $wrong_adresses[] = $address;
//      }
//    }
//    if (!empty($wrong_adresses)) {
//      form_set_error('newsflashes', t('Une ou plusieurs adresses sont invalides : @addresses.', array('@addresses' => implode(' ', $wrong_adresses))));
//    }
//  }
//}
//
//function crealead_newsflashes_test_sending_form_submit($form, &$form_state) {
//  $test_addresses = crealead_newsflashes_get_emails_adresses($form_state['values']['emails']);
//  crealead_send_latest_newsflashes(FALSE, $test_addresses);
//}
//
//function crealead_newsflashes_get_emails_adresses($adresses_field) {
//  return preg_split('/[\s,;]+/', $adresses_field, -1, PREG_SPLIT_NO_EMPTY);
//}
