/**
 * Created by ubuntu on 21/04/16.
 */

(function ($) {

  Drupal.behaviors.brand_search = {
    attach: function (context, settings) {
			// Activity sectors tooltip removal.
			$(".form-type-radios").removeAttr("title");
      
    	// Handling of brand search launch when an Activity Sector picto is clicked.
    	// 1- Creation of div containing the form submission widget.
    	// 1.1 - A new div containing image widget is inserted right after the header div (containing search form).
    	featurePath = settings.creaelad_brands_search.brand_feature_path;
      $("div.content-header").after('<div id="submission-widget"><img src="' + featurePath + '/img/clock.gif" alt=""></div>');
      
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
	  // check the referrer
	  var referrer =  document.referrer;
	  if(referrer.indexOf('annuaire-entrepreneurs') != -1) {
		$('#boxes-box-search_entrepreneur_intro').slideUp(0);
		//console.log('oui');
	  } else {
		//console.log('non');
		setTimeout(function(){
		  // hide the headband after 1.5 s
		  $('#boxes-box-search_entrepreneur_intro').slideUp(1500);
		}, 1500);
	  }
      // Creation of a div with arrow in background to slide down and slide up introduction
	  $arrow_down = $('<div id="arrow-down-headband"></div>');
	  $arrow_down.css({
		'display' : 'block',
		'width': '72px',
		'height': '33px',
		'position': 'absolute',
		'cursor': 'pointer',
		'left': '50%'
	  });
	  $arrow_down.insertAfter('#boxes-box-search_entrepreneur_intro');

	  // show the headband after a click on the div
	  $arrow_down.click(function(){
		$('#boxes-box-search_entrepreneur_intro').slideToggle(1500);
		setTimeout(function(){
			$('#arrow-down-headband').toggleClass('expanded');}, 1400);
	  });

    }
  };
}(jQuery));
