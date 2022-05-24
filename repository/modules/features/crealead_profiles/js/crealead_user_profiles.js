/**
 * Created by ubuntu on 29/11/18.
 */

(function ($) {
  Drupal.behaviors.userProfiles = {
    attach: function (context, settings) {
      // Gestion des onglets profils dans le formlulaire de modification d'un utilisateur.
      // Il ne faut afficher à l'admin que les profils auquels l'utilisateur a droit.
        userAllowedProfiles = settings.crealead_profiles.user_allowed_profiles;

        $('.page-user div#navigation div ul ul.secondary li:gt(0) a').each(function() {
          var hrefParts = $(this).attr('href').split("/");
          var profile = hrefParts.pop();

          if (profile !== 'edit' && userAllowedProfiles.indexOf(profile) === -1) {
            $(this).parent().hide();
          }
        });
      }
  };
}(jQuery));