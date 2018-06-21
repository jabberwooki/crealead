/**
 * Created by chris on 14/10/15.
 */
jQuery(function($){
  // fait en sorte que les actualités des marques aient la meme hauteur
  //$('.group-brand-news .view-id-news .views-row').matchHeight();
});
(function ($) {

  Drupal.behaviors.brands = {
    attach: function (context, settings) {

      // Achievements carousel counter
      var totalItems = $('.view-display-id-brand_achievements .carousel-inner .item').length;
      var currentIndex = $('.view-display-id-brand_achievements .carousel-inner .item.active').index() + 1;
      $('.slide-counter').html(''+currentIndex+'/'+totalItems+'');

      if (totalItems > 0) {
        $('#views-bootstrap-carousel-1').on('slid.bs.carousel', function () {
          currentIndex = $('.view-display-id-brand_achievements .carousel-inner .item.active').index() + 1;
          $('.slide-counter').html('' + currentIndex + '/' + totalItems + '');
        });
      }

      // Default coe while creating brand
      if (settings.crealead_brands_default_coe) {
        var coeValue = settings.crealead_brands_default_coe.name + ' (' + settings.crealead_brands_default_coe.uid + ')';
        $("#edit-field-brand-coes-und-0-field-brand-coe-und-0-target-id").val(coeValue);
      }

      // first menu brand item activated by default 
      if ($(".node-type-brand .group-brand-tabs").length) {
        //console.log('code de yvan');
        $(".node-type-brand .group-brand-tabs > li:first").addClass("active");
      }
      // Manage titles for small screens
      if ($('.group-brand-tabs > li').length) {
        $context_brand_tab = $('.group-brand-tabs');
        var id_anchor = '';
        $('>li > a',$context_brand_tab).each(function(index){
          id_anchor = $(this).attr('href');
          $('<h3 class="subtitle-brand">' +$(this).text()+ '</h3>').prependTo(id_anchor);
        });
      }
      // if url has #hash, we add the presentation one
      if (!window.location.hash) {
        location.hash = 'bootstrap-fieldgroup-nav-item--prsentation';
        $("html, body").animate({ scrollTop: 0 }, "slow");
      }
      //add anchor to history each time user click on a brand tab
      $('.group-brand-tabs > li > a').click(function(){
        history.pushState(null, null, $(this).attr("href"));
      });
      // manage width's col of solutions (products and trainings
      var nb_trainings = 0;
      var nb_products = 0;
      var cols_training, cols_product;
      if ($(".group-solution-col1 div.trainings-in-brand").length) {
        cols_training = $(".group-solution-col1 div.trainings-in-brand");
        nb_trainings = $(".group-solution-col1 div.trainings-in-brand").length;
      }
      if ($(".group-solution-col2 div.products-in-brand").length) {
        cols_product = $(".group-solution-col2 div.products-in-brand");
        nb_products = $(".group-solution-col2 div.products-in-brand").length;
      }
      console.log("formations produits : " + nb_trainings + " - " + nb_products);
      if (nb_trainings && nb_products ) {
        if((nb_products / nb_trainings) <= 0.5){
          $(".group-solution-col1").removeClass("col-lg-6").addClass("col-lg-8");
          $(".group-solution-col2").removeClass("col-lg-6").addClass("col-lg-4");
          cols_training.removeClass("col-lg-4").addClass("col-lg-6");
          cols_product.removeClass("col-lg-4").addClass("col-lg-12");
        } else if((nb_products / nb_trainings) > 0.5 && (nb_products / nb_trainings) <= 1.5) {
          cols_training.removeClass("col-lg-4").addClass("col-lg-6");
          cols_product.removeClass("col-lg-4").addClass("col-lg-6");
        } else {
          $(".group-solution-col1").removeClass("col-lg-6").addClass("col-lg-4");
          $(".group-solution-col2").removeClass("col-lg-6").addClass("col-lg-8");
          cols_training.removeClass("col-lg-4").addClass("col-lg-12");
          cols_product.removeClass("col-lg-4").addClass("col-lg-6");
        }
      } else if(nb_trainings){
        $(".group-solution-col1").removeClass("col-lg-6").addClass("col-lg-12");
      } else if(nb_products){
        $(".group-solution-col2").removeClass("col-lg-6").addClass("col-lg-12");
      }
    }
  };
}(jQuery))
