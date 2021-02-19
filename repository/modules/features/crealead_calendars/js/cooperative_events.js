/**
 * Created by ubuntu on 17/11/19.
 */

(function ($) {
  Drupal.behaviors.structureEvents = {
    attach: function (context, settings) {
      $('#edit-submit-structure-calendar').removeClass('btn-info').addClass('btn-primary');
    }
  };
}(jQuery));