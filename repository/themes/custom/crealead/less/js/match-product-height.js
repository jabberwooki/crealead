(function ($) {

  Drupal.behaviors.sector_brands_products = {
    attach: function (context, settings) {
      console.log('hi there !')
      $('.view-display-id-sector_brands_products .node-product').matchHeight();
    }
  };

}(jQuery));