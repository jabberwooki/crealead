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
      /*
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
      */
      // Espace co-entrepreneur : make dropdown menu cliquable

      if ($("#block-menu-menu-coe-area").length){
        $("body").addClass("coe-area");
        $("#block-menu-menu-coe-area ul li.dropdown ul").hide(0);
        $("#block-menu-menu-coe-area ul li.dropdown.active-trail ul").show(0);

        $( "#block-menu-menu-coe-area ul li.dropdown > a" ).click(function(e){
          e.preventDefault();
          var context_li = $(this).closest( "li" );
          $(".dropdown-menu",context_li).toggle();
        });
        $("#block-menu-menu-top ul.menu.nav>li:nth-of-type(3)").click(function(e){
          e.preventDefault();
          $("#block-menu-menu-coe-area ul.nav-pills").slideToggle(600);
        });

        // manage menu coE when coming from top link "espace coE"
        var hash = window.location.hash.substr(1);
        if(hash && hash == "from-top-menu") {
          $( "#block-menu-menu-coe-area .dropdown-menu" ).slideUp(3000);
        }
        // manage menu coE when the screen is small
        if ($( window ).width() < 769) {
          $( "#block-menu-menu-coe-area .dropdown-menu" ).slideUp(3000);
        }
      }
      // if browser width < 1200px we change the label "Découvrez l'offre des co-entrepreneurs"
      changeCoETextLink();
      var original_link = $("header#navbar .navbar-collapse ul.navbar-nav > li:nth-of-type(4) > a").html();
      $( window ).resize(function() {
        changeCoETextLink();
      });
      function changeCoETextLink() {
        console.log("in changeCoETextLink");
        if ($( window ).width() < 1200) {
          $("header#navbar .navbar-collapse ul.navbar-nav > li:nth-of-type(4) > a").html("Voir les <br>co-Entrepreneurs");
        } else {
          $("header#navbar .navbar-collapse ul.navbar-nav > li:nth-of-type(4) > a").html(original_link);
        }
      }

    }
  };
}(jQuery))
