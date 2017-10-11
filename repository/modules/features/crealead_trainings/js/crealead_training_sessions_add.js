/**
 * Created by ubuntu on 11/10/17.
 */

(function ($) {

  Drupal.behaviors.training_sessions_add = {
    attach: function (context, settings) {
      $('.form-item-title').hide();
    }
  };
}(jQuery));