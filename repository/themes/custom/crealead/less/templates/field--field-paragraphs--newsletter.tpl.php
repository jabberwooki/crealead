<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used by Drupal core, which uses theme functions instead for
 * performance reasons. The markup is the same, though, so if you want to use
 * template files rather than functions to extend field theming, copy this to
 * your custom theme. See theme_field() for a discussion of performance.
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<!--
This file is not used by Drupal core, which uses theme functions instead.
See http://api.drupal.org/api/function/theme_field/7 for details.
After copying this file to your theme's folder and customizing it, remove this
HTML comment.
-->
<?php
//dpm(sizeof($items));
if (reset(end($items)['entity']['paragraphs_item'])['#bundle'] == 'nl_footer') {
  $footer_delta = sizeof($items) - 1;
  $footer_item = array_pop($items);
}
else {
  $footer_delta = 0;
  $footer_item = [];
}
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field-items col-md-10 col-md-offset-1"<?php print $content_attributes; ?>>

      <div class="items-wrapper col-md-10 col-md-offset-1">
        <?php foreach ($items as $delta => $item): ?>
        <?php //dpm($delta); ?>
          <div class="field-item col-md-12 <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
        <?php endforeach; ?>
      </div>

      <?php if (!empty($footer_item)): ?>
        <div class="footer-item-wrapper col-md-10 col-md-offset-1">
          <div class="field-item col-md-12"<?php print $item_attributes[$footer_delta]; ?>><?php print render($footer_item); ?></div>
        </div>
      <?php endif; ?>

  </div>
</div>
