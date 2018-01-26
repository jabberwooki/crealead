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
      $("#edit-field-warning-keywords-und-0-value")
        .keypress(function(e) {
          if (String.fromCharCode(e.which).match(/[^A-Za-z0-9áàâäãåçéèêëíìîïñóòôöõúùûüýÿæœÁÀÂÄÃÅÇÉÈÊËÍÌÎÏÑÓÒÔÖÕÚÙÛÜÝŸÆŒ\,\.\s\b]/)) {
            e.preventDefault();
          }
        })
        .keyup(function () {
          if ($(this).val().length > 2 && $('#edit-submit').is(':disabled')) {
            unlockSubmitButton();
          }
          else if ($(this).val().length <= 2 && !$('#edit-submit').is(':disabled')) {
            lockSubmitButton();
          }
        });

      // Selection type handling
      if ($('#edit-field-selection-type input[type=radio]:checked').val() == 1) {
        $('#edit-field-warning-keywords').hide();
      }

      // Submit button help text (displayed on hovering when button is disabled).
      $disabled_button_help_text =
        '<div class="field-help-emphasis">'
        + 'Vous ne pouvez pas enregistrer tant que vous avez choisi le type de sélection "Par mots clés"<br/>'
        + ' et que vous n\'avez pas saisi de mots-clés.'
        + '</div>'
      $('.form-actions').append($disabled_button_help_text);
      $('.form-actions .field-help-emphasis').hide();

      $('#edit-field-selection-type input[type=radio]').change(function () {
        // console.log($('#edit-field-selection-type input[type=radio]:checked').val());
        if ($('#edit-field-selection-type input[type=radio]:checked').val() == 1) {
          $('#edit-field-warning-keywords').hide(700);
          // $('#edit-field-warning-keywords-und-0-value').val('');
          $("#field-warning-keywords-add-more-wrapper label span").remove();
          $("#field-warning-keywords-add-more-wrapper div.description span.keywords-required").remove();
          unlockSubmitButton();
        }
        else {
          $("#field-warning-keywords-add-more-wrapper label").append('<span class="form-required" title="Ce champ est requis.">*</span>');

          $required_info_text =
            '<span class="keywords-required">'
              + '<span class="field-help-emphasis">Si vous sélectionnez l\'option </span>'
              + '<b><em>Par mots-clés</em></b>'
              + '<span class="field-help-emphasis">, le champ </span>'
              + '<b><em>Mots-clés</em></b>'
              + '<span class="field-help-emphasis"> ci-dessus devient obligatoire.</span>'
              + '<br/><br/>'
            + '</span>';
          $("#field-warning-keywords-add-more-wrapper div.description").prepend($required_info_text);

          lockSubmitButton();
          $('#edit-field-warning-keywords').show(700);
        }
      });

      function lockSubmitButton() {
        $('#edit-submit').prop('disabled',true);
        $('.form-actions .field-help-emphasis').show();
      }

      function unlockSubmitButton() {
        $('#edit-submit').prop('disabled', false);
        $('.form-actions .field-help-emphasis').hide();
      }



      // Warning frequency handling
      // Warnings frequency is not yet implemented. We keep the corresponding field in content type but we hide it in add/edit form.
      $("#edit-field-warning-frequency").hide();

      if ($('#edit-field-warning-frequency input[type=radio]:checked').val() != 3) {
        $('#edit-field-warning-day').hide();
      }

      $('#edit-field-warning-frequency input[type=radio]').click(function () {
        // console.log('plip');
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
