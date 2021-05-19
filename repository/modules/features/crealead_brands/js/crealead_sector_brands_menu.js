/**
 * Created by ubuntu on 08/06/16.
 */

(function ($) {
  Drupal.behaviors.sector_brands = {
    attach: function (context, settings) {
      // Make the main menu item "Les marques sectorielles" not clickable.
      // $("ul.menu.navbar-nav > li.last > a").click(function(e){
      //   e.preventDefault();
      // });

      // manage open-close mecanism on sector brands
      // if ($(".view-sector-brands .views-field-description .field-content").length){
      //   // add class to main container to manage top margin and padding
      //   $("body > .main-container").addClass("main-container-sector-brands");
      //
      //   var description = $(".view-sector-brands .views-field-description .field-content");
      //   var desc_height = description.height();
      //   if (desc_height > 182){
      //
      //     /* mecanisme open-close set-up */
      //     // Creation of a div with arrow in background to slide down and slide up introduction
      //     if(!$("#open-close-sector-brandopen-close-sector-brand").length) {
      //       var $arrow_down = $('<div id="open-close-sector-brand"></div>');
      //       $arrow_down.css({
      //         'display' : 'block',
      //         'height': '33px',
      //         'cursor': 'pointer'
      //       });
      //       $arrow_down.insertAfter('#introduction.sector-brands-header');
      //       // show the headband after a click on the div by adding or removing class sector-brands-desc-open
      //       $arrow_down.click(function(){
      //         $('#introduction.sector-brands-header .views-field-description').toggleClass( "sector-brands-desc-open");
      //         $('#introduction.sector-brands-header').toggleClass( "sector-brands-desc-open", 1000);
      //       });
      //     }
      //
      //   }
      // }

      // Manage the height of news
      // if ($(".view-display-id-sector_brand_news .views-row .field-name-body").length) {
      //   $('.view-display-id-sector_brand_news .views-row .field-name-body').matchHeight();
      // }


      ////////////// Gestion des ancres HTML dans la barre de navigation d'un pole d'activité //////////////////////////
      //* S'il n'y a pas d'ancre dans l'url, ajout de l'ancre du premier onglet (c'est pas toujours A LA UNE) à l'url de la page */
      if (!window.location.hash) {
        let firstNavbarAnchor = $('ul.group-pole-tabs li:first-child').find('a').attr('href');
        firstNavbarAnchor = firstNavbarAnchor.substr(1); // suppression du caractère '#' en début de chaine.
        window.location.hash = firstNavbarAnchor;
        $("html, body").animate({ scrollTop: 0 }, "fast");
      }

      // Ajout de l'ancre à l'historique de navigation quand on clique sur un des onglet
      $('ul.group-pole-tabs > li > a').click(function(){
        history.pushState(null, null, $(this).attr("href"));
      });
      // mais aussi quand on clique sur le lien 'Envoyer un message aux co-entrepreneurs' situé dans la page de l'onglet 'Envoyer un message' (onglet caché en CSS).
      $('#coes-message-form-link').click(function () {
        // history.pushState(null, null, $(this).attr("href"));
        $('ul.group-pole-tabs > li.group-pole-email-tab a').click();

        // pour mettre le focus sur le champ Sujet du formulaire, mais à la fin du texte déjà présent dans ce champ.
        let focusedInput = $('#edit-field-pole-coes-subject-und-0-value');
        let focusedInputVal = focusedInput.val();
        focusedInput.val('');
        focusedInput.val(focusedInputVal);
        focusedInput.focus();
      });

      let coesEmails = $('#edit-field-pole-coes-emails input').val();
      $('#edit-field-pole-coes-emails input').after('<div class="coes-emails">' + coesEmails + '</div>');
    }
  };
}(jQuery));
