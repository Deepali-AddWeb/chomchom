/**
 * @file
 * Javascript behaviors for chomchom theme bootstrap integrations.
 */

(function (jQuery) {

  Drupal.behaviors.chomchomfieldgroup = {
    attach: function (context, settings) {
      jQuery("label[for='edit-locations-0-province']").append( "<span title='This field is required.' class='form-required'>*</span>" );
      setTimeout(function(){
        //call user define function fieldgrouplevel on load pass value
        fieldgrouplevel(jQuery("select[id*='edit-field-category-und-0-tid-select']").val());
      }, 500);

       //call user define function fieldgrouplevel on change pass value
      jQuery("select[id*='edit-field-category-und-0-tid-select']").on('change',function () {
        fieldgrouplevel(jQuery(this).val());
      });

      //on ajax call on change value pass user define function
      jQuery( document ).ajaxComplete(function() {
        jQuery("select[id*='edit-field-category-und-0-tid-select']").on('change',function () {
          fieldgrouplevel(jQuery(this).val());
        });
      });

      /*user define function fieldgrouplevel
       * 1: can tho, 2: can tho nails, 3: can tho toc, 4: sang tiem, 5: sang tiem nails
       * 6: business for sale, 7: Quang Cao & Rao Vat, 8: Business Directory
       */
      function fieldgrouplevel(tid) {
        if(typeof(tid) != "undefined" && tid !== null) {
          switch (tid) {
            case '1':
                jQuery(".group-can-tho").show();
                jQuery("#edit-field-kinh-nghiem").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem-toc").hide();
                jQuery(".group-business-directory").hide();
                break;
            case '2':
                jQuery(".group-can-tho").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem-toc").hide();
                jQuery("#edit-field-kinh-nghiem").show();
                jQuery(".group-business-directory").hide();
                break;
            case '3':
                jQuery(".group-can-tho").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem").hide();
                jQuery("#edit-field-kinh-nghiem-toc").show();
                jQuery(".group-business-directory").hide();
                break;
            case '4':
               jQuery(".group-sang-tiem-nails").show();
               jQuery(".group-can-tho").hide();
               jQuery(".group-business-for-sale").hide();
               jQuery(".group-business-directory").hide();
                break;
            case '5':
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").show();
                jQuery(".group-business-directory").hide();
                break;
            case '6':
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").show();
                jQuery(".group-business-directory").hide(); 
                break;
            case '7':
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-business-directory").hide();
                break;
            case '8':
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-business-directory").show();
                console.log('field not avaliable');
                break;
            default:
                break;
          }
        }
      }
    }
  };
}(jQuery));
