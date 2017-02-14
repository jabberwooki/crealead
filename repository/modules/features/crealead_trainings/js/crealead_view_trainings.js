jQuery(function($) {
  $('.group-training-data .col-md-3').matchHeight();
  $('.page-formations .group-wrapper-teaser').matchHeight();
  $( document ).ajaxComplete(function() {
    $('.group-training-data .col-md-3').matchHeight();
    $('.page-formations .group-wrapper-teaser').matchHeight();
  });
});