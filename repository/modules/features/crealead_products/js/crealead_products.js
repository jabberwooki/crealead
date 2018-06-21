(function ($) {

  Drupal.behaviors.product = {
    attach: function (context, settings) {
      // Test if a brand is checked. If not, check the first one.
      if ($(".form-radio").length && !$(".form-radio").is(':checked')) {
        $(".form-radio:first").attr('checked', true);
      }

    }
  };
}(jQuery));