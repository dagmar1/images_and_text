<?php

/**
 * Helper to implementation of hook_input_formats_default().
 */
function _images_and_text_input_formats_default() {
  $input_formats = array();

  // Exported input format: images_and_text
  $input_format =   array(
    'name' => 'Images and Text',
    'machine_name' => 'images_and_text',
    'roles' => array(
      12 => 'administrator',
      13 => 'moderator',
      14 => 'editor'
    ),
  
    'order' => array(
      'filter' => array(
        // (Delta => Order) for: URL filter
        '2' => '-10',
        // (Delta => Order) for: Line break converter
        '1' => '-9',
        // (Delta => Order) for: HTML corrector
        '3' => '-6',
      ),
      'image_resize_filter' => array(
        // (Delta => Order) for: Image resize filter
        '0' => '-8',
      ),
      'wysiwyg_filter' => array(
        // (Delta => Order) for: WYSIWYG Filter
        '0' => '-7',
      ),
      'video_filter' => array(
        // (Delta => Order) for: Video Filter
        '0' => '-5',
      ),
    ),
  
    'settings' => array(
      //Settings for: filter
      'filter' => array(
        // Maximum link text length
        'filter_url_length' => '72',
      ),
      //Settings for: image_resize_filter
      'image_resize_filter' => array(
        // Resize images stored
        'image_resize_filter_image_locations' => array(
                'local' => 'local',
                'remote' => 0,
        ),
        // If resized, add a link to the original image.
        'image_resize_filter_link' => 0,
        // Optionally, give it the class
        'image_resize_filter_link_class' => '',
        // and/or a rel attribute
        'image_resize_filter_link_rel' => '',
      ),
      //Settings for: wysiwyg_filter
      'wysiwyg_filter' => array(
        // HTML elements and attributes
        'wysiwyg_filter_valid_elements_raw' => '@[class|style], 
        a[!href|target<_blank|title],
        div[align<center?justify?left?right],
        p[align<center?justify?left?right],
        img[*],
        br,span,em,strong,code,blockquote,ul,ol,li,dl,dt,dd, table, td, tr, th, h1, h2, h3, h4. h5, h6',
        // Color and background properties
        'wysiwyg_filter_styles_color' => array(
                'color' => 'color',
                'background' => 0,
                'background-color' => 0,
                'background-image' => 0,
                'background-repeat' => 0,
                'background-attachment' => 0,
                'background-position' => 0,
        ),
        // Font properties
        'wysiwyg_filter_styles_font' => array(
                'font-family' => 'font-family',
                'font-size' => 'font-size',
                'font-weight' => 'font-weight',
                'font' => 0,
                'font-size-adjust' => 0,
                'font-stretch' => 0,
                'font-style' => 0,
                'font-variant' => 0,
        ),
        // Text properties
        'wysiwyg_filter_styles_text' => array(
                'text-align' => 'text-align',
                'text-decoration' => 'text-decoration',
                'text-indent' => 'text-indent',
                'text-transform' => 0,
                'letter-spacing' => 0,
                'word-spacing' => 0,
                'white-space' => 0,
                'direction' => 0,
                'unicode-bidi' => 0,
        ),
        // Box properties
        'wysiwyg_filter_styles_box' => array(
                'margin' => 'margin',
                'margin-top' => 'margin-top',
                'margin-right' => 'margin-right',
                'margin-bottom' => 'margin-bottom',
                'margin-left' => 'margin-left',
                'padding' => 'padding',
                'padding-top' => 'padding-top',
                'padding-right' => 'padding-right',
                'padding-bottom' => 'padding-bottom',
                'padding-left' => 'padding-left',
        ),
        // Border properties (1)
        'wysiwyg_filter_styles_border-1' => array(
                'border' => 'border',
                'border-top' => 0,
                'border-right' => 0,
                'border-bottom' => 0,
                'border-left' => 0,
                'border-width' => 0,
                'border-top-width' => 0,
                'border-right-width' => 0,
                'border-bottom-width' => 0,
                'border-left-width' => 0,
        ),
        // Border properties (2)
        'wysiwyg_filter_styles_border-2' => array(
                'border-color' => 'border-color',
                'border-top-color' => 0,
                'border-right-color' => 0,
                'border-bottom-color' => 0,
                'border-left-color' => 0,
                'border-style' => 0,
                'border-top-style' => 0,
                'border-right-style' => 0,
                'border-bottom-style' => 0,
                'border-left-style' => 0,
        ),
        // Dimension properties
        'wysiwyg_filter_styles_dimension' => array(
                'height' => 'height',
                'width' => 'width',
                'line-height' => 0,
                'max-height' => 0,
                'max-width' => 0,
                'min-height' => 0,
                'min-width' => 0,
        ),
        // Positioning properties
        'wysiwyg_filter_styles_positioning' => array(
                'bottom' => 0,
                'clip' => 0,
                'left' => 0,
                'overflow' => 0,
                'right' => 0,
                'top' => 0,
                'vertical-align' => 0,
                'z-index' => 0,
        ),
        // Layout properties
        'wysiwyg_filter_styles_layout' => array(
                'float' => 'float',
                'clear' => 0,
                'display' => 0,
                'position' => 0,
                'visibility' => 0,
        ),
        // List properties
        'wysiwyg_filter_styles_list' => array(
                'list-style' => 0,
                'list-style-image' => 0,
                'list-style-position' => 0,
                'list-style-type' => 0,
        ),
        // Table properties
        'wysiwyg_filter_styles_table' => array(
                'border-collapse' => 'border-collapse',
                'border-spacing' => 'border-spacing',
                'caption-side' => 'caption-side',
                'empty-cells' => 'empty-cells',
                'table-layout' => 0,
        ),
        // User interface properties
        'wysiwyg_filter_styles_user' => array(
                'cursor' => 0,
                'outline' => 0,
                'outline-width' => 0,
                'outline-style' => 0,
                'outline-color' => 0,
                'zoom' => 0,
        ),
        // Rules for Class Names
        'wysiwyg_filter_valid_classes' => array(
                '0' => 'inserted-image',
        ),
        // Rules for Element IDs
        'wysiwyg_filter_valid_ids' => array(),
        // Rules for URLs used within inline styles
        'wysiwyg_filter_style_urls' => array(),
        // Policy
        'wysiwyg_filter_nofollow_policy' => 'whitelist',
        // Domains list
        'wysiwyg_filter_nofollow_domains' => array(),
      ),
      //Settings for: video_filter
      'video_filter' => array(
        // Default width setting
        'video_filter_width' => '400',
        // Default height setting
        'video_filter_height' => '400',
        // Default autoplay setting
        'video_filter_autoplay' => '0',
        // Default priority setting
        'video_filter_priority' => 'height',
        // Related videos setting
        'video_filter_related' => '0',
      ),
    ),
  
    'extras' => array(
    ),
  );
  $input_formats['images_and_text'] = $input_format;

  return $input_formats;
}
