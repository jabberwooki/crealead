jQuery(function($) {
  $('.group-training-data > div').matchHeight();
  $('.page-formations .group-sub-wrapper-teaser').matchHeight();
  $('.page-formations .group-wrapper-teaser').matchHeight();
  $( document ).ajaxComplete(function() {
    $('.group-training-data > div').matchHeight();
    $('.page-formations .group-wrapper-teaser').matchHeight();
  });
});