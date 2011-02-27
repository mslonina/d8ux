<?php

function d8ux_admin_settings() {

  $form = array();

  // Toolbar module
  $form['d8ux_toolbar'] = array(
    '#type' => 'fieldset',
    '#title' => t('Toolbar module'),
    '#collapsible' => TRUE,
  );

  // Edit account link
  $form['d8ux_toolbar']['d8ux_toolbar_edit_account_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show edit account link in toolbar'),
    '#default_value' => variable_get('d8ux_toolbar_edit_account_link', 0),
  );

  // User module
  $form['d8ux_user'] = array(
    '#type' => 'fieldset',
    '#title' => t('User Account Edit Page'),
    '#collapsible' => TRUE,
  );

  // Consistent fieldset for user account edit page
  $form['d8ux_user']['d8ux_consistent_fieldsets'] = array(
    '#type' => 'checkbox',
    '#title' => t('Consistent fieldsets (collapsible)'),
    '#default_value' => variable_get('d8ux_consistent_fieldsets', 0),
    '#description' => t('Some fieldsets are collapsible and some not. Use this setting to make all fieldsets on User Account Edit page collapsible.'),
  );

  // User account edit page fieldsets collapsed
  $form['d8ux_user']['d8ux_fieldsets_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Collapse fieldsets by default'),
    '#default_value' => variable_get('d8ux_fieldsets_collapsed', 0),
  );

/*  $form['d8ux_user']['d8ux_edit_account_vertical_tabs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use vertical tabs on User Account edit page'),
    '#default_value' => variable_get('d8ux_edit_account_vertical_tabs', 0),
    '#description' => t('Use vertical tabs on user account edit page.'),
  );
 */
  return system_settings_form($form);

}
