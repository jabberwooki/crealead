<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 19/11/18
 * Time: 09:21
 */

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php
/**
 * C.Espiau
 * Affichage des profils de l'équipe Structure sous forme d'onglets à l'aide de jQuery UI.
 * Partie 1.2 - Nom d'un onglet.
 *
 * Pour la partie 1.1 (liste des onglets), voir le fichier :
 * - views-view-unformatted--structure-team--profile-tabs.tpl.php
 * Pour la partie 2 (contenu d'un onglet), voir le fichier :
 * - views-view-unformatted--structure-team--structure-profiles.tpl.php
 *
 * Ce template est dérivé de views-view-fields.tpl.php qui sert à afficher tous les champs d'une ligne de la vue.
 * On le réécrit pour :
 * - inclure le nom du profil dans une balise <a> pointant sur le <div> contentant les utilisateurs de ce profil.
 * - Modifier l'étiquette du profil en utilisant un nom plus concis à l'aide du tableau $altered_profile_labels.
 * (ex: Référents au lieu de Profil référent).
 */
$profile_machine_name = $fields['type']->raw;
$altered_profile_labels = array (
  'direction_page' => 'Directeur.rices',
  'referent_page' => 'Référent.e.s',
  'management_page' => 'Gestionnaires',
  'assistant_page' => 'Assistant.e.s',
  'provider_page' => 'Entrepreneur.e.s prestataires',
  'ca_page' => 'Conseil d\'administration',
  'dup_page' => 'DUP',
);

// print '<a href="#' . $profile_machine_name . '">' . $altered_profile_labels[$profile_machine_name] . '</a>';
print $altered_profile_labels[$profile_machine_name];
?>

