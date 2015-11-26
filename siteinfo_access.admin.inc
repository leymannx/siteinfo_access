<?php

/**
 * @file
 * Admin settings for Siteinfo Access.
 */

/**
 * Siteinfo Access settings form.
 */
function siteinfo_access_settings() {
  $form['site_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Site name'),
    '#default_value' => variable_get('site_name'),
  );
  $form['site_slogan'] = array(
    '#type' => 'textfield',
    '#title' => t('Slogan'),
    '#default_value' => variable_get('site_slogan'),
  );
  return system_settings_form($form);
}
