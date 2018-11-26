/**
 * Created by ubuntu on 19/11/18.
 */

(function ($) {
  Drupal.behaviors.structureProfiles = {
    attach: function (context, settings) {
      // Gestion des onglets profils dans la page Equipe Structure
      $('#tabs > div:gt(0)').each(function() {
        $(this).hide();
      });
      $('#tabs ul > li').click(function() {
        var clickedTabId = $(this).attr('id');
        $('#tabs > div').each(function() {
          $(this).hide();
        });

        $('#tabs > div[id=' + clickedTabId + ']').show();
        $('#tabs ul > li').removeClass("group-structure-selected");
        $(this).addClass("group-structure-selected");
      });
      // au chargement, c'est le premier lien qui est sélectionné
      $('#tabs ul > li:first').addClass("group-structure-selected");
    }
  };
}(jQuery));
