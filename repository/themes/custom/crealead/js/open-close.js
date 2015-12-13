/**
 * Created by yvan on 24/11/15.
 */
jQuery(function($) {
  /**
   * link with class "read-more" will hide next text and paragraphes
   */

  var
    cpt = 0,
    array_read_more = [];

  /* toutes les variables sont traitées comme des propriétés d'un objet. On crée
   un objet par lien ".read-more" et on stocke chaque objet dans le tableau
   array_read_more */

  $('.read-more').each(function(){
    // instanciation d'un objet littéral vide
    array_read_more[cpt] = {};

    // lien pour fermer les paragraphes
    array_read_more[cpt].link_close = $( '<a id="link-close-txt-' + cpt + '" href="." class="link-close-txt">Cacher le texte</a>' );

    // lien pour ouvrir les paragraphes
    array_read_more[cpt].link_open = $( '<a id="link-open-txt-' + cpt + '" class="read-more" href=".">Lire la suite</a>' );

    // récupération du node paragraphe qui comprend le lien lire la suite
    array_read_more[cpt].p_with_link_read_more = $(this).closest('p');

    // récupération du parent du paragraphe qui comprend le lien lire la suite
    array_read_more[cpt].wrapper = array_read_more[cpt].p_with_link_read_more.parent();

    // récupération du texte avant et après le lien lire la suite ainsi que de l'intitulé du lien
    array_read_more[cpt].text_before_link = array_read_more[cpt].p_with_link_read_more.html().replace(/<a [^>]*class="read-more".*>(.*)<\/a>(.*)/g, "");
    array_read_more[cpt].label_link = RegExp.$1;
    array_read_more[cpt].text_after_link = $('<span class="span-after" id="span-after' +cpt+ '">' + RegExp.$2 + '</span>');
    array_read_more[cpt].text_before_link = $('<span class="span-before" id="span-before' +cpt+ '">' + array_read_more[cpt].text_before_link + '</span>');

    // remplacement du label de base du lien par celui choisi par le rédacteur
    array_read_more[cpt].link_open.text(array_read_more[cpt].label_link);

    // Récupération et dissimulation des paragraphes après le paragraphe contenant le lien "read-more"
    array_read_more[cpt].next_paragraphes = array_read_more[cpt].p_with_link_read_more.nextAll();
    array_read_more[cpt].next_paragraphes.hide();

    // remplacement du contenu du paragraphe en enlevant ce qu'il y a après le lien
    array_read_more[cpt].p_with_link_read_more.empty();
    array_read_more[cpt].text_before_link.appendTo(array_read_more[cpt].p_with_link_read_more);
    array_read_more[cpt].link_open.appendTo(array_read_more[cpt].p_with_link_read_more);

    // positionnement du texte après le lien lire la suite ainsi que le lien de fermeture
    // Attention : ne pas être fait avant...
    array_read_more[cpt].text_after_link.appendTo(array_read_more[cpt].p_with_link_read_more).hide();
    array_read_more[cpt].link_close.appendTo(array_read_more[cpt].wrapper).hide();

    // Gestion du click sur le lien "Lire la suite"
    // Il est important de donner cpt comme paramètre à la fonction anonyme
    // afin de ne pas perdre le contexte de la variable cpt
    (function(compteur){
      array_read_more[compteur].link_open.click(function(){
        array_read_more[compteur].link_open.hide();
        array_read_more[compteur].text_after_link.slideDown(800);
        array_read_more[compteur].link_close.slideDown(800);
        array_read_more[compteur].next_paragraphes.slideDown(800);
        return false;
      });
    })(cpt);

    // Gestion du click sur le lien "Fermer"
    (function(compteur){
      array_read_more[compteur].link_close.click(function(){
        array_read_more[compteur].link_close.hide();
        array_read_more[compteur].text_after_link.slideUp(800);
        array_read_more[compteur].link_open.slideDown(800);
        array_read_more[compteur].next_paragraphes.slideUp(800);
        return false;
      });
    })(cpt);

    cpt ++;
  });
});
