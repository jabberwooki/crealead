/**
 * Created by ubuntu on 17/11/19.
 */

(function ($) {
  Drupal.behaviors.structureEvents = {
    attach: function (context, settings) {
      // Gestion de l'affichage du formulaire d'envoi manuel des événements Structure //////////////////////////////////
      // 1 - On récupére les trois champs de type case à cocher (1 semaine, 2 semaines, 4 semaines, le mois en cours)
      var period0 = $('.form-item-crealead-structure-events-0');
      var period1 = $('.form-item-crealead-structure-events-1');
      var period2 = $('.form-item-crealead-structure-events-2');
      var period3 = $('.form-item-crealead-structure-events-3');
      var period4 = $('.form-item-crealead-structure-events-4');

      var initialSubject = $('#edit-structure-events-manual-sending-subject').val();
      var currentMonthLabel = $("[for=edit-structure-events-manual-sending-period-3]").text();
      var nextMonthLabel = $("[for=edit-structure-events-manual-sending-period-4]").text();

      $(window).on('beforeunload', function(){
        $('#edit-structure-events-manual-sending-subject').val(initialSubject);
        $('input:radio[name=structure_events_manual_sending_period]')[0].checked = true;
      });

      // 2 - On stocke les sélecteurs dans le tableau periods
      var periods = [period0, period1, period2, period3, period4];
      // et le contenu HTML de chaque champ dans le tableau periodMarkups
      var periodMarkups = [period0.html(), period1.html(), period2.html(), period3.html(), period4.html()];

      // 3 - Au premier affichage du formulaire, on récupère la période cochée
      var checkedPeriod = $('#edit-structure-events-manual-sending-period input:checked').val();
      // et on affiche cette péridoe
      showSelectedPeriod(periods, periodMarkups, checkedPeriod);

      // 4 - A la sélection d'une période (boutons radio)...
      $('#edit-structure-events-manual-sending-period .form-type-radio').click(function () {
        // on récupère la période cochée
        checkedPeriod = $('#edit-structure-events-manual-sending-period .form-type-radio input:checked').val();
        // et on affiche cette période.
        showSelectedPeriod(periods, periodMarkups, checkedPeriod);

        // si l'option 4 (mois en cours) ou si l'option 5 (mois suivant) est sélectionné,
        // changement de l'objet du message.
        // si les options 1, 2 ou 3 sont sélectionnées, on remet l'objet initial.
        if (checkedPeriod == 3) {
          $('#edit-structure-events-manual-sending-subject').val(currentMonthLabel);
        }
        else if (checkedPeriod == 4){
          $('#edit-structure-events-manual-sending-subject').val(nextMonthLabel);
        }
        else {
          $('#edit-structure-events-manual-sending-subject').val(initialSubject);
        }
      });

      // Fonction d'affichage de la période sélectionnée.
      function showSelectedPeriod(periods, periodMarkups, checkedPeriod) {
        periods.forEach(function(period) {
          period.html('');
        });
        periods[checkedPeriod].html(periodMarkups[checkedPeriod]);
        periods[checkedPeriod].find('.form-checkboxes input.checkbox').css('border', '1px solid red');
        periods[checkedPeriod].find('.form-checkboxes input.checkbox').prop('checked', true);

      }
      // Fin de Gestion de l'affichage du formulaire d'envoi manuel des événements Structure ///////////////////////////

    }
  };
}(jQuery));