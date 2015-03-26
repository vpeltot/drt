/**
 * @file
 * A JavaScript file for the darty_nodeviewcount module.
 *
 */

(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.darty_nodeviewcount = {
  attach: function(context, settings) {
  	var nid = settings.darty_nodeviewcount.currentNid;
  	var url = settings.darty_nodeviewcount.post_url;
  	$.post( url, { nid: nid } );
  }
};


})(jQuery, Drupal, this, this.document);
