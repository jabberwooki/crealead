/**
 * Created by ubuntu on 10/07/17.
 */

(function ($) {

  Drupal.behaviors.warnings = {
    attach: function (context, settings) {
      // Warning content type handling.
      $('#edit-field-content-type-list').on('change', function () {
        $('#edit-field-content-type-value-und-0-value').val($(this).val());
      });
      $('#edit-field-content-type-value').hide();

      // Control placed on warning keyword field so that
      // only lowercase and uppercase letters, numbers, space and backspace are accepted
      $("#edit-field-warning-keywords-und-0-value").keypress(function(e) {
        if (String.fromCharCode(e.which).match(/[^A-Za-z0-9áàâäãåçéèêëíìîïñóòôöõúùûüýÿæœÁÀÂÄÃÅÇÉÈÊËÍÌÎÏÑÓÒÔÖÕÚÙÛÜÝŸÆŒ\,\.\s\b]/)) {
          e.preventDefault();
        }
      });

      // Selection type handling
      $('#edit-field-selection-type input[type=radio]').change(function () {
        console.log($('#edit-field-selection-type input[type=radio]:checked').val());
        if ($('#edit-field-selection-type input[type=radio]:checked').val() == 1) {
          $('#edit-field-warning-keywords').hide(1000);
        }
        else {
          $('#edit-field-warning-keywords').show(1000);
        }
      });



      // Warning frequency handling
      // Warnings frequency is not yet implemented. We keep the corresponding field in content type but we hide it in add/edit form.
      $("#edit-field-warning-frequency").hide();

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
    }
  };
}(jQuery))
