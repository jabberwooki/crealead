/**
 * Created by chris on 14/10/15.
 */

(function ($) {
  Drupal.behaviors.brands = {
    attach: function (context, settings) {

      var totalItems = $('.view-display-id-brand_achievements .carousel-inner .item').length;
      var currentIndex = $('.view-display-id-brand_achievements .carousel-inner .item.active').index() + 1;
      $('.slide-counter').html(''+currentIndex+'/'+totalItems+'');

      $('#views-bootstrap-carousel-1').on('slid.bs.carousel', function() {
        currentIndex = $('.view-display-id-brand_achievements .carousel-inner .item.active').index() + 1;
        $('.slide-counter').html(''+currentIndex+'/'+totalItems+'');
      });
    }
  };
}(jQuery));