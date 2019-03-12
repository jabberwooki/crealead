jQuery(function ($) {
  var tab_newsflashes, tab_event_calendar;

  /* Page d'accueil de l'intranet *************************************************************************************/

  //if ($("#block-views-newsflashes-coes-area-block h2.block-title").length) {
  //  tab_newsflashes = $("<a></a>", {
  //    "text": $("#block-views-newsflashes-coes-area-block h2.block-title").text(),
  //    "class": "tab-intra-crealead tab-intra-crealead-first",
  //    "href": "#block-views-newsflashes-coes-area-block",
  //  }).appendTo("#block-menu-menu-coe-area h2.block-title").click(function() {
  //
  //    $(".tab-intra-crealead").removeClass("tab-intra-crealead-selected");
  //    $(this).addClass("tab-intra-crealead-selected");
  //    $("html, body").animate( { scrollTop: ($("#block-views-newsflashes-coes-area-block h2.block-title").offset().top) - 180 }, 1500);
  //    return false;
  //  });
  //}
  if ($("#block-views-structure-calendar-structure h2.block-title").length) {
    tab_event_calendar = $("<a></a>", {
      "text": $("#block-views-structure-calendar-structure h2.block-title").text(),
      "class": "tab-intra-crealead",
      "href": "#block-views-structure-calendar-structure",
    }).appendTo("#block-menu-menu-coe-area h2.block-title").click(function() {

      $(".tab-intra-crealead").removeClass("tab-intra-crealead-selected");
      $(this).addClass("tab-intra-crealead-selected");
      $("html, body").animate( { scrollTop: ($("#block-views-structure-calendar-structure h2.block-title").offset().top) - 180 }, 1500);
      return false;

    });
  }

  /* Page échanges de l'intranet **************************************************************************************/
  if ($("#block-views-needs-needs-list h2.block-title").length) {
    tab_newsflashes = $("<a></a>", {
      "text": $("#block-views-needs-needs-list h2.block-title").text(),
      "class": "tab-intra-crealead tab-intra-crealead-first",
      "href": "#block-views-newsflashes-coes-area-block",
    }).appendTo("#block-menu-menu-coe-area h2.block-title").click(function() {

      $(".tab-intra-crealead").removeClass("tab-intra-crealead-selected");
      $(this).addClass("tab-intra-crealead-selected");
      $("html, body").animate( { scrollTop: ($("#block-views-needs-needs-list h2.block-title").offset().top) - 180 }, 1500);
      return false;
    });
  }
  if ($("#block-views-offers-offers-list h2.block-title").length) {
    tab_newsflashes = $("<a></a>", {
      "text": $("#block-views-offers-offers-list h2.block-title").text(),
      "class": "tab-intra-crealead",
      "href": "#block-views-newsflashes-coes-area-block",
    }).appendTo("#block-menu-menu-coe-area h2.block-title").click(function() {

      $(".tab-intra-crealead").removeClass("tab-intra-crealead-selected");
      $(this).addClass("tab-intra-crealead-selected");
      $("html, body").animate( { scrollTop: ($("#block-views-offers-offers-list h2.block-title").offset().top) - 180 }, 1500);
      return false;
    });
  }

});