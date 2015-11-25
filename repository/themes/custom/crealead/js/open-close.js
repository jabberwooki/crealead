/**
 * Created by yvan on 24/11/15.
 */
jQuery(function($) {
  /**
   * link with class "read-more" will hide next text in the same contenair
   */

  // lien pour fermer le paragraphe
  var link_close = $( '<a id="link-close-txt" href=".">Cacher le texte</a>' );

  // lien pour ouvrir le paragraphe
  var link_open = $( '<a id="link-open-txt" class="read-more" href=".">Lire la suite</a>' );

  // récupération du node paragraphe qui comprend le lien lire la suite
  var p_with_link_read_more = $('.read-more').closest('p');
  // récupération du parent du paragraphe qui comprend le lien lire la suite
  var wrapper = p_with_link_read_more.parent();

  // récupération du contenu de ce paragraphe
  var p_with_link_read_more_text = p_with_link_read_more.html();

  // récupération du texte avant et après le lien lire la suite ainsi que de l'intitulé du lien
  var text_before_link = p_with_link_read_more_text.replace(/<a [^>]*class="read-more".*>(.*)<\/a>(.*)/g, "");
  var label_link= RegExp.$1;
  var text_after_link = $('<span id="span-after">' + RegExp.$2 + '</span>');
  text_before_link = $('<span id="span-before">' + text_before_link + '</span>');

  link_open.text(label_link);


  // Récupération et dissimulation des paragraphes après le paragraphe contenant le lien "read-more"
  var next_paragraphes = p_with_link_read_more.nextAll();
  next_paragraphes.hide();

  // remplacement du contenu du paragraphe en enlevant ce qu'il y a après le lien
  p_with_link_read_more.empty();
  text_before_link.appendTo(p_with_link_read_more);
  link_open.appendTo(p_with_link_read_more);

  // positionnement du texte après le lien lire la suite ainsi que le lien de fermeture
  // Attention : ne pas être fait avant...
  text_after_link.appendTo(p_with_link_read_more).hide();
  link_close.appendTo(wrapper).hide();

  // Gestion du click sur le lien Lire la suite
  link_open.click(function(){
    link_open.hide();
    text_after_link.slideDown(800);
    link_close.slideDown(800);
    next_paragraphes.slideDown(800);
    return false;
  });

  // Gestion du click sur le lien Fermer
  link_close.click(function(){
    link_close.hide();
    text_after_link.slideUp(800);
    link_open.slideDown(800);
    next_paragraphes.slideUp(800);
    return false;
  });


});
