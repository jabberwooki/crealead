jQuery(function ($) {


  $.extend({
    alert: function (message, title) {
      $("<div></div>").dialog({
        buttons: {
          "Ok": function () {
            $(this).dialog("close");
          }
        },
        close: function (event, ui) {
          $(this).remove();
        },
        resizable: false,
        title: title,
        modal: true
      }).html(message);
    }
  });
  $('body').on('contextmenu', '#h1-logo img', function (e) {
    /*alert("La fonctionnalité de téléchargement du logo a été supprimée pour inciter les co-entrepreneurs de Crealead à " +
     "utiliser le logo en haute définitition qui se trouve dans la rubrique " +
     "<a href=\"/espace-co-entrepreneur/documentsEspace co-entrepreneur\">" +
     " Espace co-entrepreneurs > Documents.</a>");*/
    $.alert("La fonctionnalité de téléchargement du logo a été supprimée pour inciter les co-entrepreneurs de Crealead à " +
      "utiliser le logo en haute définitition qui se trouve dans la rubrique " +
      "<a style=\"color:#A00C2F;\" href=\"/espace-co-entrepreneur/documents\">" +
      " Espace co-entrepreneurs > Documents.</a>", "Logo Crealead pour le web");
    return false;
  });
});