jQuery(function($) {
  $('.red-title').matchHeight();
  $('.line-bottom-red').matchHeight();
  $('.view-display-id-page_news_list .node-news').matchHeight();
  $( document ).ajaxComplete(function() {
    $('.red-title').matchHeight();
    $('.line-bottom-red').matchHeight();
    $('.view-display-id-page_news_list .node-news').matchHeight();
  });

});
