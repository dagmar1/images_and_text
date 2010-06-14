<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function images_and_text_ctools_plugin_api() {
  module_load_include('inc', 'images_and_text', 'images_and_text.defaults');
  $args = func_get_args();
  return call_user_func_array('_images_and_text_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_input_formats_default().
 */
function images_and_text_input_formats_default() {
  module_load_include('inc', 'images_and_text', 'images_and_text.features.input_formats');
  $args = func_get_args();
  return call_user_func_array('_images_and_text_input_formats_default', $args);
}

/**
 * Implementation of hook_wysiwyg_defaults().
 */
function images_and_text_wysiwyg_defaults() {
  module_load_include('inc', 'images_and_text', 'images_and_text.features.wysiwyg');
  $args = func_get_args();
  return call_user_func_array('_images_and_text_wysiwyg_defaults', $args);
}
