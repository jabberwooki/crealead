/**
 * Created by ubuntu on 13/10/17.
 */


(function ($) {

  Drupal.behaviors.trainingSessionPopup = {
    attach: function (context, settings) {
      $('.add-to-session-open-close').click(function () {
        $(this).hide();
        $('#session-switch-wrapper .user-details').slideDown(1000);
      });
    }
  };
}(jQuery));