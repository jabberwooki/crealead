<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">
      <?php print $central; ?>

      <!-- Custom code -->
      <?php
        $url_parts = explode($_SERVER['HTTP_HOST'] .'/', $_SERVER['HTTP_REFERER']);
        $destination = $url_parts[1];

        if(!strpos($url_parts[1], '?mini=')) {
          $year_month = substr($variables['field_gclal_date'][0]['value'], 0, 7);
          $destination = $url_parts[1] . '?mini=' . $year_month;
        }

        $edit_allowed = false;

        $links = '<div class="structure-events-links">';
        if (user_access('edit any structure_event content')) {
          $links .= '<span class="edit-link"><a href="/node/' . $nid . '/edit">Modifier</a></span>';
          $edit_allowed = true;
        }
        if (user_access('delete any structure_event content')) {
          if($edit_allowed) {
            $links .= ' - ';
          }
          $links .= '<span class="delete-link"><a href="/node/' . $nid . '/delete?destination=' . $destination . '">Supprimer</a></span>';
        }
        $links .= '</div>';

        print $links;
      ?>
      <!-- End of custom code -->

    </<?php print $central_wrapper; ?>>

  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
