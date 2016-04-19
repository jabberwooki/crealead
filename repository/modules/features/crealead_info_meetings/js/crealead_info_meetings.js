/**
 * Created by ubuntu on 21/03/16.
 */

(function ($) {
  Drupal.behaviors.info_meetings = {
    attach: function (context, settings) {
      ////////// Reorganisation of STATUT checkboxes field + complementary info fields. //////////
      // 1) First, we wrap checkboxes into div and we add a second informational div with the following pattern;
      // <DIV> checkbox </DIV><DIV> area for complementary info </DIV>
      $("#edit-field-registrant-status-und").children().each(function() {
        termId = $(this).children('input').val();
        var content = $(this).html();
        var newContent = '<div id="'
          + settings.crealead_registrant_statuses[termId]
          + '-checkbox">' + content
          + '</div><div id="'
          + settings.crealead_registrant_statuses[termId]
          + '-comp-info"></div>';
        $(this).html(newContent);
      })

      // 2) Then we catch complementary info fields
      // and put them into their respective reserved div.
      rsaNumberField = $("#edit-field-beneficiary-number").wrap('<p>').parent().html();
      $("#edit-field-beneficiary-number").parent().remove();
      $("#rsa-comp-info").html(rsaNumberField);
      unemploymentDateField = $("#edit-field-unemployment-date").wrap('<p>').parent().html();
      $("#edit-field-unemployment-date").parent().remove();
      $("#pol-comp-info").html(unemploymentDateField);
      otherSpecifyField = $("#edit-field-other-specify").wrap('<p>').parent().html();
      $("#edit-field-other-specify").parent().remove();
      $("#aut-comp-info").html(otherSpecifyField);

      // 3) Next, we must hide complementary info fields on first display.
      var checkedValue = $('input[name="field_registrant_status[und]"]:checked').parent().text().charAt(4);
      console.log('value = ' + checkedValue);
      if (checkedValue != 'R') {
        $("div[id^=edit-field-beneficiary-number]").hide();
      }
      if (checkedValue != 'P') {
        $("div[id^=edit-field-unemployment-date]").hide();
      }
      if (checkedValue != 'A') {
        $("div[id^=edit-field-other-specify]").hide();
      }

      // 4) And eventually, we code chechboxes and complementary info fields behavior.
      // We must show complementary info field, if any, when corresponding checkbox is checked.
      // We must empty it and hide it when corresponding checkbox is unchecked.
      $("#edit-field-registrant-status-und input").on('change', function () {
        var parentId = $(this).parent().attr("id");
        var duration = 400;
        if (parentId == 'rsa-checkbox') {
          if ($(this).is(':checked')) {
            $("#edit-field-beneficiary-number").show(duration);
          }
          else {
            $("input[id^=edit-field-beneficiary-number]").val('');
            $("#edit-field-beneficiary-number").hide(duration);
          }
        }
        else if (parentId == 'pol-checkbox') {
          if ($(this).is(':checked')) {
            $("#edit-field-unemployment-date").show(duration);
          }
          else {
            $("input[id^=edit-field-unemployment-date]").val('');
            $("#edit-field-unemployment-date").hide(duration);
          }
        }
        else if (parentId == 'aut-checkbox') {
          if ($(this).is(':checked')) {
            $("#edit-field-other-specify").show(duration);
          }
          else {
            $("input[id^=edit-field-other-specify]").val('');
            $("#edit-field-other-specify").hide(duration);
          }
        }
      });
    }
  };
}(jQuery));