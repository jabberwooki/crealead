jQuery(function($) {
  $("form.search-form").on("mouseover", function() {
    $("input.form-text", $(this)).focus();
  });
});