/**
 * Created by ubuntu on 08/06/16.
 */

(function ($) {
  Drupal.behaviors.sector_brands = {
    attach: function (context, settings) {
      // Make the main menu item "Les marques sectorielles" not clickable.
      $("ul.menu.navbar-nav > li.last > a").click(function(e){
        e.preventDefault();
      });

      if ($(".view-sector-brands .views-field-description .field-content").length){
        // add class to main container to manage top margin and padding
        $("body > .main-container").addClass("main-container-sector-brands");

        var description = $(".view-sector-brands .views-field-description .field-content");
        var desc_height = description.height();
        if (desc_height > 182){

          /* mecanisme open-close set-up */
          // Creation of a div with arrow in background to slide down and slide up introduction
          console.log("creation du bouton");
          var $arrow_down = $('<div id="open-close-sector-brand"></div>');
          $arrow_down.css({
            'display' : 'block',
            'height': '33px',
            'cursor': 'pointer'
          });
          $arrow_down.insertAfter('#introduction.sector-brands-header');
          // show the headband after a click on the div by adding or removing class sector-brands-desc-open
          $arrow_down.click(function(){
            $('#introduction.sector-brands-header .views-field-description').toggleClass( "sector-brands-desc-open" );
            $('#introduction.sector-brands-header').toggleClass( "sector-brands-desc-open" );
            $('#open-close-sector-brand').toggleClass( "sector-brands-desc-open" );
          });
        }


      }
    }
  };
}(jQuery));
