<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 26/11/17
 * Time: 16:53
 */
?>

<?php
  $funded = 0;
  $funded_logo_markup = '';

  if ($row->_field_data['nid']['entity']->field_funded_session) {
    $funded = $row->_field_data['nid']['entity']->field_funded_session['und'][0]['value'];
  }
?>
<?php if($funded): ?>
<?php print '<span class="funded-session funded-session-title">' . $output . '</span>'; ?>
<?php else: ?>
<?php print $output; ?>
<?php endif; ?>
