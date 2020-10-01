<?php

function crealead_profiles_entries_leavings_settings_form() {
    $form['crealead_entries_leavings'] = array(
        '#type' => 'fieldset',
        '#title' => t('Paramétrage de l\'affichage des entrees/sorties des coes'),
    );

    // Entries
    $options = array();
    for ($i=1; $i < 25; $i++) {
        $options[$i] = $i . ' mois';
    }
    $form['crealead_entries_leavings']['crealead_entries_range'] = array(
        '#type' => 'select',
        '#title' => t('Nombre de mois entrants'),
        '#description' => 'Nombre de mois à prendre en compte pour lister les nouveaux coes.',
        '#options' => $options,
        '#default_value' => variable_get('crealead_entries_range', 3),
      );

    // Leavings
    $form['crealead_entries_leavings']['crealead_leavings_range'] = array(
        '#type' => 'select',
        '#title' => t('Nombre de mois sortants'),
        '#description' => 'Nombre de mois à prendre en compte pour lister les coes partis.',
        '#options' => $options,
        '#default_value' => variable_get('crealead_leavings_range', 3),
    );

    return system_settings_form($form);
}