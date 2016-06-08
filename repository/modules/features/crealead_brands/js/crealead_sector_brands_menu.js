/**
 * Created by ubuntu on 08/06/16.
 */

(function ($) {
  Drupal.behaviors.sector_brands = {
    attach: function (context, settings) {
      // Make the main menu item "Les marques sectorielles" not clickable.
      $("#navbar ul.menu li.last > a").click(function(e){
        console.log("cliqué");
        e.preventDefault();
      });
    }
  };
}(jQuery));
