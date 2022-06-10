/**
 * Created by C.Espiau on 10/06/2022.
 */

(function ($) {
  Drupal.behaviors.coeProfile = {
    attach: function (context, settings) {
      // Ce ficher est chargé dans le formulaire Profil Entrepreneur
      // lorsque le coe n'a pas de référent enregistré dans son compte drupal.
      // Il faut désactiver l'option "Soumettre à la validation par le référent".
      $("#edit-profile-coe-page-field-saving-type-und-1").attr("disabled",true);
      $("#edit-profile-coe-page-field-saving-type-und-1").parent().after("<p><em>Vous ne pouvez pas soumettre à votre référent car vous n'avez pas encore de référent enregistré dans votre compte (onglet Compte).</em></p>");
    }
  };
}(jQuery));