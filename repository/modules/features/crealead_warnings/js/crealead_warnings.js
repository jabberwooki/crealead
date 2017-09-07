/**
 * Created by ubuntu on 10/07/17.
 */

(function ($) {

  Drupal.behaviors.warnings = {
    attach: function (context, settings) {
      // console.log($('#edit-field-warning-frequency input[type=radio]:checked').val());
      if ($('#edit-field-warning-frequency input[type=radio]:checked').val() != 3) {
        $('#edit-field-warning-day').hide();
      }

      $('#edit-field-warning-frequency input[type=radio]').click(function () {
        console.log('plip');
        if ($('#edit-field-warning-frequency input[type=radio]:checked').val() == 3) {
          $('#edit-field-warning-day').show(300);
        }
        else {
          $('#edit-field-warning-day').hide();
        }
      });

      $('#edit-field-content-type-list').on('change', function () {
        $('#edit-field-content-type-value-und-0-value').val($(this).val());
      });

      // $('#edit-field-content-type-value').hide();
    }
  };
}(jQuery))