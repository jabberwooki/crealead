jQuery(function ($) {
  console.log("alert-logo");
  var msg =
    "La fonctionnalité de téléchargement du logo a été supprimée pour inciter les co-entrepreneurs de Crealead à " +
    "utiliser le logo en haute définitition qui se trouve dans la rubrique " +
    "<a style=\"color:#A00C2F;\" href=\"/espace-co-entrepreneur/documents\">" +
    " Espace co-entrepreneurs > Documents.</a>";
  var close_logo = $('<div />', {
    id: 'close-logo',
    click: function (e) {
      e.preventDefault();
      $("#alert-logo").hide(0);
    }
  });

  var alert_logo = $('<div />', {
    id: 'alert-logo',
    html: msg
  });
  alert_logo.prependTo('body');
  close_logo.prependTo('#alert-logo');
  alert_logo.hide();
  $('body').on('contextmenu', '#h1-logo img', function (e) {
    alert_logo.show();
    return false;
  });
});

