/**
 * Created by ubuntu on 14/12/2020.
 */

(function ($) {
  Drupal.behaviors.structureEvents = {
    attach: function (context, settings) {
      $('#edit-submit-newsflashes').removeClass('btn-info').addClass('btn-primary');
    }
  };
}(jQuery));