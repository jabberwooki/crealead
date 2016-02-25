/**
 * Created by chris on 14/10/15.
 */
jQuery(function($){
  // fait en sorte que les actualités des marques aient la meme hauteur
  $('.group-brand-news .view-id-news .views-row').matchHeight();

  // fait en sorte que le premier item du menu de la marque soit actif
  if ($(".node-type-brand .group-brand-tabs").length) {
    $(".node-type-brand .group-brand-tabs > li:first").addClass("active");
  }
});
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