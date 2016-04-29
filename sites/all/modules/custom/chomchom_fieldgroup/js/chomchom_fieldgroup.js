/**
 * @file
 * Javascript behaviors for chomchom theme bootstrap integrations.
 */

(function (jQuery) {

  Drupal.behaviors.chomchomfieldgroup = {
    attach: function (context, settings) {

      

      jQuery("label[for='edit-locations-0-province']").append( "<span title='This field is required.' class='form-required'>*</span>" );
      jQuery("label[for='edit-field-contact-name-und-0-value']").append( "<span title='This field is required.' class='form-required'>*</span>" );
     
      /*setTimeout(function(){  
        alert('test');
        //call user define function fieldgrouplevel on load pass value
        fieldgrouplevel(jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val());
      }, 5000);*/
      jQuery( window ).load(function() {
        setTimeout(function(){  
        test= jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val();
        check = jQuery("#edit-field-category-und-0-tid-select-1").val();
        check2 = jQuery("#edit-field-category-und-0-tid-select-2").val();
        //alert('check'+check);
        //alert('check2'+check2);
        if (typeof test === 'undefined' || test === null) {
          console.log('yes'+test);
          if(typeof check2 === 'undefined' || check2 === null) { 
            fieldgrouplevel(check);
          }else{
            fieldgrouplevel(check2);
          }
            fieldgrouplevel(2);
          
        }else{
          console.log('no'+test);
          fieldgrouplevel(jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val());
        }
        //call user define function fieldgrouplevel on load pass value
        //jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val();
      }, 500);

       /* test= jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val();
        check = jQuery("#edit-field-category-und-0-tid-select-1").val();
        check2 = jQuery("#edit-field-category-und-0-tid-select-1").val();
        if (typeof test === 'undefined' || test === null) {
          console.log('yes'+test);
          if(check == '8'){
            fieldgrouplevel(8);
          }elseif(check == '7'){
            fieldgrouplevel(7);
          }elseif(check == '7'){
            fieldgrouplevel(7);
          }
          fieldgrouplevel(2);
        }else{
          console.log('no'+test);
          fieldgrouplevel(jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val());
        }*/
      //fieldgrouplevel(jQuery("select[id*='edit-field-category-und-0-tid-select']:last-child").val());
      });


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
          console.log('tid='+tid);
          tid = Number(tid);
          switch (tid) {
            case 0:
                console.log('0 value');
                jQuery(".group-can-tho").show();
                jQuery("#edit-field-kinh-nghiem").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem-toc").hide();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 1:
                jQuery(".group-can-tho").show();
                jQuery("#edit-field-kinh-nghiem").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem-toc").hide();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 2:
                jQuery(".group-can-tho").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem-toc").hide();
                jQuery("#edit-field-kinh-nghiem").show();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 3:
                jQuery(".group-can-tho").show();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery("#edit-field-kinh-nghiem").hide();
                jQuery("#edit-field-kinh-nghiem-toc").show();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 4:
               jQuery(".group-sang-tiem-nails").show();
               jQuery(".group-can-tho").hide();
               jQuery(".group-business-for-sale").hide();
               jQuery(".group-business-directory").hide();
               jQuery(".group-quang-cao-rao-vat").hide();
               jQuery("label[for='edit-title']").text('Title');
               jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 5:
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").show();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 6:
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").show();
                jQuery(".group-business-directory").hide(); 
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                break;
            case 7:
                jQuery("label[for='edit-title']").text('Title');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").hide();
                jQuery(".group-business-directory").hide();
                jQuery(".group-quang-cao-rao-vat").show();
                jQuery("#edit-field-khu-vuc").show();
                break;
            case 8:
                jQuery(".group-can-tho").hide();
                jQuery(".group-sang-tiem-nails").hide();
                jQuery(".group-business-for-sale").hide();
                jQuery("#edit-body").hide();
                jQuery("#edit-field-contact-name").hide();
                jQuery(".group-quang-cao-rao-vat").hide();
                jQuery("label[for='edit-title']").text('Business Name');
                jQuery("label[for='edit-title']").append( "<span title='This field is required.' class='form-required'>*</span>" );
                jQuery(".group-business-directory").show();
                //console.log('field not avaliable');
                break;
            default:
                break;
          }
        }
      }
    }
  };
}(jQuery));
