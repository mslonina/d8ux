// $Id: user.js,v 1.25 2010/11/30 23:55:11 webchick Exp $
(function ($) {

Drupal.behaviors.userFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.d8ux-user-form-account-roles-status', context).drupalSetSummary(function (context) {
      var vals = [];

      $('input:checked', context).parent().each(function () {
        vals.push(Drupal.checkPlain($.trim($(this).text())));
      });

      return vals.join(', ');
    });
    $('fieldset.d8ux-user-form-administrative-overlay', context).drupalSetSummary(function (context) {
      return $('.form-item-overlay input', context).is(':checked') ?
        Drupal.t('Enabled') :
        Drupal.t('Disabled');
    }); 
    $('fieldset.d8ux-user-form-personal-contact-form', context).drupalSetSummary(function (context) {
      return $('.form-item-contact input', context).is(':checked') ?
        Drupal.t('Enabled') :
        Drupal.t('Disabled');
    }); 

  }
};

})(jQuery);
