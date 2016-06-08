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
    }
  };
}(jQuery));
