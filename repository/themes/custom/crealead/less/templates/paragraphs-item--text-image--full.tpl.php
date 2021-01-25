<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
//dpm($content['field_textimage_position']['#items'][0]['value']);
$text_positioning_class = $image_positioning_class = '';
$image_position = $content['field_textimage_position']['#items'][0]['value'];

if ($image_position == 'right') {
  $image_positioning_class = 'col-md-3 col-md-push-9 img-right';
  $text_positioning_class = 'col-md-9 col-md-pull-3 txt-left';
}
elseif ($image_position == 'left') {
    $image_positioning_class = 'col-md-3 img-left';
    $text_positioning_class = 'col-md-9 txt-right';
}
?>

<div class="<?php print $classes; ?> "<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

      <?php //print render($content); ?>

      <div class="<?php print $image_positioning_class?>">
        <?php print render($content['field_textimage_image']); ?>
      </div>
      <div class="<?php print $text_positioning_class?>">
          <?php print render($content['field_textimage_text']); ?>
      </div>
      <div class="clearfix visible-md-block visible-lg-block"></div>

  </div>
</div>

