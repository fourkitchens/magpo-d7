<?php

/**
 * @file
 * Page callbacks for fk_magpo.
 */

/**
 * Returns the admin settings form for fk_magpo.
 */
function fk_magpo_settings() {
  $form = array();

  $form['fk_magpo_endpoint'] = array(
    '#type' => 'textfield',
    '#title' => t('API Endpoint'),
    '#default_value' => variable_get('fk_magpo_endpoint', FK_MAGPO_ENDPOINT),
    '#description' => t('The URL for the MagPo API endpoint.'),
    '#required' => TRUE
  );

  return system_settings_form($form);
}

