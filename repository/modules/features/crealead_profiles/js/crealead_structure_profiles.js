/**
 * Created by ubuntu on 19/11/18.
 */

(function ($) {
  Drupal.behaviors.profiles = {
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
      });

      // Gestion des onglets profils dans le formlulaire de modification d'un utilisateur.
      // Il ne faut afficher à l'admin que les profils auquels l'utilisateur a droit.
      userAllowedProfiles = settings.crealead_profiles.user_allowed_profiles;
      console.log(userAllowedProfiles);

      $('.page-user div#navigation div ul ul.secondary li:gt(0) a').each(function() {
        var hrefParts = $(this).attr('href').split("/");
        var profile = hrefParts.pop();
        console.log(profile);

        if (profile !== 'edit' && userAllowedProfiles.indexOf(profile) === -1) {
          $(this).parent().hide();
        }
      });
    }
  };
}(jQuery));
