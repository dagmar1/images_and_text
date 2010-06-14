<?php

/**
 * Helper to implementation of hook_wysiwyg_defaults().
 */
function _images_and_text_wysiwyg_defaults() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->format = 3;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'image' => 1,
        'forecolor' => 1,
      ),
      'font' => array(
        'fontsizeselect' => 1,
      ),
      'paste' => array(
        'pasteword' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'videofilter' => array(
        'videofilter' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'none',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->format = 'images_and_text';

  $export[$wysiwyg->format] = $wysiwyg;
  return $export;
}
