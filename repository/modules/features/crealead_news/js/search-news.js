jQuery(function($) {
    var currentURL = window.location.href;
    var url_params = currentURL.split("?");

    if (url_params.length > 1) {
        $('html,body').animate({
                scrollTop: $("#block-system-main").offset().top-150},
            'slow');
    }
});