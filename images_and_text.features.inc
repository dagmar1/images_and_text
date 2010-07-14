<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function images_and_text_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "wysiwyg" && $api == "wysiwyg_defaults") {
    return array("version" => 2);
  }
}
