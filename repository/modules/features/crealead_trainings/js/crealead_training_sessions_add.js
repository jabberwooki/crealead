/**
 * Created by ubuntu on 11/10/17.
 */

(function ($) {

  Drupal.behaviors.training_sessions_add = {
    attach: function (context, settings) {
      // Hide title (which is auto-generated).
      $('.form-item-title').hide();

      // Training/Session funding handling.
      var trainingsFunding = settings.creaeladTrainingsFunding;
      $('#edit-field-related-training-und').change(function () {
        var selectedTrainingId = $('#edit-field-related-training-und option:selected').val();
        var selectedTrainingFundingStatus = trainingsFunding[selectedTrainingId];
        if (typeof(selectedTrainingFundingStatus) === 'undefined') {
          selectedTrainingFundingStatus = 0;
        }
        $('#edit-field-funded-session input[name="field_funded_session[und]"]').removeAttr('checked');
        $('#edit-field-funded-session input[name="field_funded_session[und]"][value=' + selectedTrainingFundingStatus + ']').attr('checked', 'checked');
      });
    }
  };
}(jQuery));
