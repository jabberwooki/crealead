/**
 * Created by ubuntu on 29/09/16.
 */

(function ($) {

  Drupal.behaviors.kcore = {
    attach: function (context, settings) {
      // Make the main menu item "Découvrez l'offre..." not clickable.
      $("ul.menu.navbar-nav > li:nth-child(4) > a").click(function(e){
        e.preventDefault();
      });

      // Espace co-entrepreneur menu turned as bootstrap tabs.
      $('#block-menu-menu-coe-area ul').addClass('nav-tabs');

      // Trainings Calendar Month/Week/Day/Year nav menu turned as bootstrap tabs.
      $('#block-menu-menu-trainings-calendar ul').addClass('nav-tabs');

      // Listing/Calendar switcher turned as bootstrap tabs.
      $('#block-menu-menu-calendar-listing-switcher ul').addClass('nav-tabs');

      // If user is not logged in, coe area tabs menu is not displayed.
      if (!Drupal.settings.creaeleadCoeArea.userLoggedIn) {
        $('#block-menu-menu-coe-area ul.menu').remove();
      }
    }
  };
}(jQuery))
