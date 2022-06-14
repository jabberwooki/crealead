/**
 * Created by ubuntu on 08/06/16.
 */

(function ($) {
  Drupal.behaviors.sector_brands_manager_role = {
    attach: function (context, settings) {
      //////////// GESTION DU ROLE GESTIONNAIRE DE POLE DANS LE FORMULAIRE UTILISATEUR /////////////////////////////////
      let poleManagerRoleId = settings.crealead_pole_manager.role_id;

      // 1 - Si un pole est déjà sélectionné et que le role Responsable de pole ne l'est pas encore
      // (situation antérieure à la mise en place des controles ci-dessous)
      // il faut cocher ce role.
      let isPoleSelected = false;
      $('#edit-field-pole-manager input[type="radio"]').each(function () {
        if ($(this).prop('checked')) {
          isPoleSelected = true;
        }
      });
      if(isPoleSelected) {
          $('#edit-roles-' + poleManagerRoleId).prop('checked', true);
      }

      // 2 - Gestion du clic sur le champ Responsable de pole.
      $('#edit-field-pole-manager input[type="checkbox"]').click(function () {
        // let value = $(this).val();
        if ($('#edit-field-pole-manager input[type="checkbox"]:checked').length == 0) {
          $('#edit-roles-' + poleManagerRoleId).prop('checked', false);
        }
        else {
          $('#edit-roles-' + poleManagerRoleId).prop('checked', true);
          $('.pole-manager-message').remove();
          $('#edit-submit').removeAttr('disabled');
        }
      });

      // 3 - Gestion du clic sur la case à cocher Responsable de pole du champ Roles.
      $('#edit-roles-' + poleManagerRoleId).click(function (){
        if ($(this).prop('checked')) {
          let attributes = '';

          let checkboxMsg = '<span class="pole-manager-message" style="padding-left: 20px; font-size: 120%; color : red;">'
            + 'ATTENTION ! Vous devez sélectionner un pôle d\'activité plus haut dans ce formulaire, ou déchocher cette case, pour pouvoir soumettre le formulaire.'
            + '</span>';
          let submitButtonMsg = '<p class="pole-manager-message" style="font-size: 120%; color : red;">'
            + 'Vous devez sélectionner un pôle d\'activité plus haut dans ce formulaire, ou déchocher le rôle <b><i>Responsable de pôle</i></b>, pour pouvoir soumettre le formulaire.'
            + '</p>';


          $('.form-item-roles-' + poleManagerRoleId + ' label').after(checkboxMsg);
          $('#edit-submit').before(submitButtonMsg);
          $('#edit-submit').attr('disabled', 'disabled');
        }
        else {
          $('#edit-field-pole-manager input[type="checkbox"]').each(function() {
            $(this).prop('checked', false);
          });
          $('.pole-manager-message').remove();
          $('#edit-submit').removeAttr('disabled');
        }
      });
      //////////// FIN DE GESTION DU ROLE GESTIONNAIRE DE POLE DANS LE FORMULAIRE UTILISATEUR //////////////////////////

    }
  };
}(jQuery));
