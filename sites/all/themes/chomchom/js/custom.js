(function ($) {
  Drupal.behaviors.chomchom = {
  attach: function (context, settings) {
    jQuery('input[type="checkbox"]').wrap('<div class="input-rc"></div>');
    jQuery('.input-rc').append('<span class="input-rc-span"></span>');
  }
  };
}(jQuery));