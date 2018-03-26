/**
 * Created by ubuntu on 26/03/18.
 */

(function ($) {

  Drupal.behaviors.faqs = {
    attach: function (context, settings) {
      allOptionTermId = settings.crealeadFaqs.allOptionTermId;

      originalPopulationCheckboxesValues = [];
      $('#edit-field-related-population input[type=checkbox]').each(function () {
        originalPopulationCheckboxesValues[$(this).val()] = $(this).prop('checked');
      });

      $('#edit-field-public-faq input[type=radio]').change(function () {
        if ($('#edit-field-public-faq input[type=radio]:checked').val() == 2) { // faq is public
          $('#edit-field-related-population input[type=checkbox]').each(function () {
            if ($(this).val() == allOptionTermId) {
              $(this).prop('checked', true);
            }
            else {
              $(this).prop('checked', false);
            }
          });
        }
        else { // faq is private
          $('#edit-field-related-population input[type=checkbox]').each(function () {
            $(this).prop('checked', originalPopulationCheckboxesValues[$(this).val()]);
          });
        }
      });
    }
  };
}(jQuery))
