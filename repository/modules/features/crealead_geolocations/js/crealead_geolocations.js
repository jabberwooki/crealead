/**
 * Created by christophe espiau on 25/05/22.
 */

(function ($) {

  Drupal.behaviors.coe_geolocation = {
    attach: function (context, settings) {

      // Gestion du clic sur le bouton Géocoder l'adresse (formulaire Profil entrepreneur)
      $("#edit-profile-coe-page-field-coordinates-und-0-osm-geobutton").click(function () {
        console.log('clic sur le bouton geoloc');
        var city = $("#edit-profile-coe-page-field-coordinates-und-0-city").val().replaceAll(' ', '+');
        var postalCode = $("#edit-profile-coe-page-field-coordinates-und-0-postal-code").val();
        var country = $("#edit-profile-coe-page-field-coordinates-und-0-country").val().replaceAll(' ', '+');;

        msg = "";
        if (!city.length) {
          msg = msg + "- Le champ Ville est vide.\n";
        }
        if (!postalCode.length) {
          msg = msg + "- Le champ Code Postal est vide.\n";
        }
        if (!country.length) {
          msg = msg + "- Aucun pays n'est sélectionné.";
        }

        if (msg.length) {
          alert("Impossible de géocoder l'adresse : \n" + msg);
        }
        else {
          var baseUrl = "https://nominatim.openstreetmap.org/search?format=json";
          var query = "&city=" + city + "&postalcode=" + postalCode + "&country=" + country;
          var url = baseUrl + query;

          $.get(url, function(data, status){
            if (status === "success") {
              dataObject = data[0];

              $("#edit-profile-coe-page-field-coordinates-und-0-latitude").val(dataObject.lat);
              $("#edit-profile-coe-page-field-coordinates-und-0-longitude").val(dataObject.lon);
            }
            else {
              console.log("La requête vers Nominatim a échoué.");
            }
          });
        }
      });

      // Gestion du clic sur le bouton Géocoder l'adresse (formulaire Profil entrepreneur)
      $("#edit-profile-coe-page-field-coordinates-und-0-osm-clearbutton").click(function () {

        $("#edit-profile-coe-page-field-coordinates-und-0-city").val('');
        $("#edit-profile-coe-page-field-coordinates-und-0-postal-code").val('');
        $("#edit-profile-coe-page-field-coordinates-und-0-country").val('');
        $("#edit-profile-coe-page-field-coordinates-und-0-latitude").val('');
        $("#edit-profile-coe-page-field-coordinates-und-0-longitude").val('');

      });
    }
  };
}(jQuery))