<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _images_and_text_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "wysiwyg" && $api == "wysiwyg_defaults") {
    return array("version" => 2);
  }
}
