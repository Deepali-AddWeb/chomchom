(function ($) {
  Drupal.behaviors.chomchom = {
  attach: function (context, settings) {
    jQuery('input[type="checkbox"]').wrap('<div class="input-rc"></div>');
    jQuery('.input-rc').append('<span class="input-rc-span"></span>');
  }
  };
}(jQuery));

(function ($) {
  Drupal.behaviors.chomchom1 = {
  attach: function (context, settings) {
    jQuery('input[type="radio"]').wrap('<div class="radio-rc"></div>');
    jQuery('.radio-rc').append('<span class="radio-rc-span"></span>');
  }
  };
}(jQuery));