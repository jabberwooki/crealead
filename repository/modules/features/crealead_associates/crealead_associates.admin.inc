<?php

function crealead_associates_settings_form() {
    $form['crealead_associates'] = array(
        '#type' => 'fieldset',
        '#title' => t('Texte de description de la page Espace associés'),
    );

    $associates_description_text_default_value = variable_get('associates_description_text', null);
    if ($associates_description_text_default_value) {
        $associates_description_text_default_value = $associates_description_text_default_value['value'];
    }
    else {
        $associates_description_text_default_value = 'Le descriptif de la page Espace associés est à rédiger.';
    }

    $form['crealead_associates']['associates_description_text'] = array(
        '#type' => 'text_format',
        '#title' => t('Texte'),
        '#description' => 'Texte d\'introduction affiché dans la rubrique Espace associés.',
        '#default_value' => $associates_description_text_default_value,
    );

    return system_settings_form($form);
}