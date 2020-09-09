<?php

/**
 * Form constructor for the profile deletion confirmation form.
 *
 * @see profile_delete_confirm_submit()
 */
function kcore_profile2_delete_confirm($form, &$form_state, $pid) {
    $profile = profile2_load($pid);
    $form_state += array('profile2' => $profile);
    $user = user_load($profile->uid);
    //$form_state += array('profile2_username' => $user->name);

    // Always provide entity id in the same form key as in the entity edit form.
    $form['pid'] = array('#type' => 'value', '#value' => $profile->pid);
    $short_profile_label = str_replace('Profil ', '',$profile->label);
    $desc = '<div class="confirm-form-description">';
    $desc .= '<p>Ce profil, de type <span class="profile-type">' . $short_profile_label . '</span>, appartient à <span class="profile-user">' . $user->name .'</span></br>';
    $desc .= 'Êtes-vous sûr de vouloir le supprimer ?</p>';
    $desc .= '<p>Cette action est irréversible.</p>';
    $desc .= '</div>';

    drupal_add_css(drupal_get_path('module','kcore') . '/css/confirm_form.css');
    return confirm_form(
        $form,
        //t('Etes-vous sure de vouloir supprimer le profil \'%type\' appartenant à %username ?', array('%type' => $profile->label, '%username' => $user->name)),
        'Suppression d\'un profil',
        'user/' . $user->uid . '/edit/' . $profile->type,
        $desc,
        t('Delete'),
        t('Cancel')
    );
}

function kcore_profile2_delete_confirm_submit($form, &$form_state) {
    // 1) Profile deletion
    $profile = $form_state['profile2'];
    $short_profile_label = str_replace('Profil ', '',$profile->label);
    $corresponding_role_name = kcore_get_profile2_role_name($profile->type);
    $user = user_load($profile->uid);
    $username = $user->name;

    $profile->delete();
    drupal_set_message(t('Profil %label supprimé pour %username.', array('%label' => $short_profile_label, '%username' => $username)));

    // 2) Corresponding role removal
    $user_roles = $user->roles;
    $key = array_search($corresponding_role_name, $user_roles);
    unset($user_roles[$key]);
    $user->roles = $user_roles;
    if (user_save($user)) {
        drupal_set_message(t('Role %role_name retiré à %username.', array('%role_name' => $corresponding_role_name, '%username' => $username)));
    }
    else {
        dpm('marche po !');
    }

    $form_state['redirect'] = 'user/' . $profile->uid . '/edit';
}



