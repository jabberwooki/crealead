/**
 * Created by ubuntu on 29/04/16.
 */

(function ($) {

  Drupal.behaviors.brand_search = {
    attach: function (context, settings) {
      // Move "Tarif" field description from below text input to right after field label.
      var desc = $("#edit-field-training-price .description").wrap('<p>').parent().html();
      $("#edit-field-training-price .description").remove();
      $("#edit-field-training-price label").after(desc);

      // Move "Public visé" field description from below text input to right after field label.
      var desc = $("#edit-field-training-public .description").wrap('<p>').parent().html();
      $("#edit-field-training-public .description").remove();
      $("#edit-field-training-public label").after(desc);
    }
  };
}(jQuery));