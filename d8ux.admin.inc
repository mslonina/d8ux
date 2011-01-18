<?php
// $id$

function d8ux_admin_settings() {

  $form = array();

  // User module
  $form['d8ux_edit_account_vertical_tabs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use vertical tabs on User Account edit page'),
    '#default_value' => variable_get('d8ux_edit_account_vertical_tabs', 0),
    '#description' => t('Use vertical tabs on user account edit page.'),
  );

  // Toolbar module
  $form['d8ux_toolbar_edit_account_link'] = array(
    '#type' => 'checkbox',
    '#title' => 'Show edit account link in toolbar',
    '#default_value' => variable_get('d8ux_toolbar_edit_account_link', 0),
    '#description' => t('Show edit account link in toolbar.'),
  );


  return system_settings_form($form);

}
