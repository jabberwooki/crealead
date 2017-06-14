/**
 * Created by ubuntu on 14/06/17.
 */

(function ($) {

  Drupal.behaviors.needs = {
    attach: function (context, settings) {
      // Fields 'Demandeur' and 'Demandeur externe' are built as non required field.
      // If chosen type = external, only 'Demandeur externe' field is displayed,
      // otherwise 'Demandeur' field is displayed.
      // But we need to display the red star on each field's label
      // to make user to understand that the displayed field is required.

      // First, we add a red star on the label of these 2 fields.
      var redStarCode = '<span class="form-required" title="Ce champ est requis.">*</span>';
      $('#edit-field-enquirer label').append(redStarCode);
      $('#edit-field-external-enquirer label').append(redStarCode);

      // Then we catch value of Type field (value if not yet selected, and text if selected).
      var initialTypeValue = $('#edit-field-need-type-und').val();
      var selectedTYpe = $('#edit-field-need-type-und option:selected').text();

      // We hide one of the 2 fields, or both, conditionally.
      if (initialTypeValue == '_none') {
        $('#edit-field-enquirer').hide();
        $('#edit-field-external-enquirer').hide();
      }
      else {
        if (selectedTYpe == 'externe') {
          $('#edit-field-enquirer').hide();
        }
        else {
          $('#edit-field-external-enquirer').hide();
        }
      }

      // In any case, we hide field Action (only technical field).
      $('#edit-field-need-action').hide();


      // We show or hide fields on Type change conditionally.
      $('#edit-field-need-type-und').change(function() {
        if ($('#edit-field-need-type-und option:selected').text() == 'externe') {
          $('#edit-field-enquirer').hide();
          $('#edit-field-external-enquirer').show();
          $('#edit-field-enquirer-und-0-target-id').val('');
        }
        else {
          $('#edit-field-enquirer').show();
          $('#edit-field-external-enquirer').hide();
          $('#edit-field-external-enquirer-und-0-value').val('');
        }
      });
    }
  };
}(jQuery))
