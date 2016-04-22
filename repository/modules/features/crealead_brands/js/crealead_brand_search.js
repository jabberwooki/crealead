/**
 * Created by ubuntu on 21/04/16.
 */

(function ($) {

  Drupal.behaviors.brand_search = {
    attach: function (context, settings) {
    	// Handling of brand search launch when an Activity Sector picto is clicked.
    	// 1- Creation of div containing the form submission widget.
    	// 1.1 - A new div containing image widget is inserted right after the header div (containing search form).
    	featurePath = settings.creaelad_brands_search.brand_feature_path;
      $("div.content-header").after('<div id="submission-widget"><img src="' + featurePath + '/img/clock.gif"></div>');
      
      // 1.2 - New div layout settings
    	$("#submission-widget").css('text-align','center');
    	var height = $("div.content-header").height()
				+ parseInt($("div.content-header").css('padding-top').replace('px',''))
				+ parseInt($("div.content-header").css('padding-bottom').replace('px',''));
    	$("#submission-widget").css('height', height);
    	$("#submission-widget").css('position', 'absolute');
    	$("#submission-widget").css('z-index', '1000');
    	var searchFormOffset = $("div.content-header").offset();
    	$("#submission-widget").css('top', searchFormOffset.top);
    	$("#submission-widget").css('width', '100%');
    	
    	// 1.3 - Widget image positioning
    	var imgHeight = parseInt($("#submission-widget img").height());
    	$("#submission-widget img").css('margin-top', height/2 - imgHeight/2);
    	
      // 1.4 Then, everything is hidden.
      $("#submission-widget").hide();
      
      // 2 - Search form behavior settings.
      // When an Activity sector picto is clicked :
      // - submission form is opacified,
      // - widget div is shown,
      // - and form is submitted.
      $("#edit-field-business-sector-tid").change(function() {
      	$("div.content-header").css('opacity','0.2');
      	$("#submission-widget").show();
        $("#views-exposed-form-brands-brands-list").submit();
      });
      
    }
  };
}(jQuery));