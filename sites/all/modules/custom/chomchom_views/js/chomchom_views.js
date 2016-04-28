/**
 * @file
 * Javascript behaviors for chomchom theme bootstrap integrations.
 */

(function (jQuery) {

  Drupal.behaviors.chomchomfieldgroup = {
    attach: function (context, settings) {
      jQuery(".form-item-attributes-field-featured select.5").parent().hide();
      //on ajax call on change value pass user define function
      jQuery( document ).ajaxComplete(function() {
        if(jQuery(".form-item-attributes-field-featured select").hasClass("5"))
        {
          jQuery(".form-item-attributes-field-featured select").parent().hide();
        }
     }); 
    }
  };
}(jQuery));
