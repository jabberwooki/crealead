<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 29/01/18
 * Time: 12:04
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

        $edit_allowed = false;

        $links = '<div class="structure-events-links">';
        if (user_access('edit any room_event content')) {
          $links .= '<span class="edit-link"><a href="/node/' . $nid . '/edit">Modifier</a></span>';
          $edit_allowed = true;
        }
        if (user_access('delete any room_event content')) {
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
