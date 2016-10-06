/**
 * Created by ubuntu on 29/09/16.
 */
(function ($) {

  Drupal.behaviors.documents = {
    attach: function (context, settings) {
      // Filedepot layout fixing.
      $('#filedepottoolbar').children().first('div').css('padding-left','5px');

      $('#filedepottoolbar .filedepottoolbar_searchbox').css('width', '400px');
      $('#filedepottoolbar .filedepottoolbar_searchform').css('width', 'auto');
      $('#filedepottoolbar .filedepottoolbar_searchform table td').css('width', 'auto');
      $('#filedepottoolbar .tagsearchboxcontainer').css('width', 'auto');
      
      $('#reportheadercontainer').css('float', 'none');

    }
  };
}(jQuery))
