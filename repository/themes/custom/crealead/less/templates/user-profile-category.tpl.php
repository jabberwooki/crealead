<?php

/**
 * @file
 * Default theme implementation to present profile categories (groups of
 * profile items).
 *
 * Categories are defined when configuring user profile fields for the site.
 * It can also be defined by modules. All profile items for a category will be
 * output through the $profile_items variable.
 *
 * @see user-profile-item.tpl.php
 *      where each profile item is rendered. It is implemented as a definition
 *      list by default.
 * @see user-profile.tpl.php
 *      where all items and categories are collected and printed out.
 *
 * Available variables:
 * - $title: Category title for the group of items.
 * - $profile_items: All the items for the group rendered through
 *   user-profile-item.tpl.php.
 * - $attributes: HTML attributes. Usually renders classes.
 *
 * @see template_preprocess_user_profile_category()
 */
?>

<?php if ($title): ?>
    <?php
dpm($title);
        $titles = array(
            'Profil assistant' => 'Accueil et communication',
            'Profil entrepreneur' => 'Mon profil co-entrepreneur',
            'Profil direction' => 'Direction',
            'Profil pôle gestion' => 'Gestionnaire',
            'Profil entrepreneur prestataire' => 'Entrepreneur prestataire pour Crealead',
            'Profil référent' => 'Référent d\'activités',
            'Profil CA' => 'Membre du conseil d\'administration',
            'Profil CSE' => 'Membre du CSE',
        );
        $title = (array_key_exists($title, $titles) ? $titles[$title]: $title) ;
    ?>
    <h3><?php print $title; ?></h3>
<?php endif; ?>

<dl<?php print $attributes; ?>>
    <?php print $profile_items; ?>
</dl>