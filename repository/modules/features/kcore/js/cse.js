/**
 * Created by ubuntu on 17/11/19.
 */

(function ($) {
  Drupal.behaviors.structureEvents = {
    attach: function (context, settings) {
      $('form.webform-client-form .webform-submit').removeClass('button-primary').addClass('btn-primary');
    }
  };
}(jQuery));