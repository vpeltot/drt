<?php

/**
 * @file
 * Code for Darty Theme
 */

/**
 * Implementation of template_preprocess_html
 */
function darty_theme_preprocess_html(&$variables) {
//    $element = array(
//        '#tag' => 'meta',
//        '#attributes' => array(
//            'name' => 'robots',
//            'content' => 'noindex',
//        ),
//    );
//    drupal_add_html_head($element, 'mytheme_noindex');

    //Add a specific html template to the list for each node type.
    //Usefull for the newsletter in order to have a simple HTML with only the content
    if ($node = menu_get_object()) {
        $variables ['theme_hook_suggestions'] [] = 'html__' . $node->type;
    }



//    drupal_add_css('http://fonts.googleapis.com/css?family=PT+Sans:400,700,400italic', array('group' => CSS_THEME));
}

/**
 * Implementation of template_preprocess_page
 */
function darty_theme_preprocess_page(&$variables) {
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', 'DES IDÉES ET DES CONSEILS POUR TOUTES VOS ENVIES'));

    drupal_add_css(drupal_get_path('theme', 'darty_theme') . '/css/dcmegamenu.css', array('scope' => 'header', 'group' => CSS_THEME));
    drupal_add_js(drupal_get_path('theme', 'darty_theme') . '/js/jquery.hoverIntent.minified.js', array('scope' => 'header', 'group' => JS_LIBRARY));
    drupal_add_js(drupal_get_path('theme', 'darty_theme') . '/js/jquery.dcmegamenu.1.3.3.min.js', array('scope' => 'header', 'group' => JS_LIBRARY));

    drupal_add_css(drupal_get_path('theme', 'darty_theme') . '/js/fancybox/jquery.fancybox-1.3.4.css', array('scope' => 'header', 'group' => CSS_THEME));
    
    drupal_add_js(drupal_get_path('theme', 'darty_theme') . '/js/script.js', array('scope' => 'header'));
    drupal_add_js(drupal_get_path('theme', 'darty_theme') . '/js/fancybox/jquery.fancybox-1.3.4.pack.js', array('scope' => 'footer'));
    //Add a specific page template to the list for each node type.
    //Usefull for the newsletter in order to have a simple HTML with only the content
    if ($node = menu_get_object()) {
        $variables ['theme_hook_suggestions'] [] = 'page__' . $node->type;
    }
   drupal_set_title(html_entity_decode(drupal_get_title(), ENT_QUOTES, "utf-8" ).' - Darty & Vous');
}

/**
 * 
 * ACTIVE contextual menu on content full
 */
function darty_theme_menu_local_task($variables) {
    $link = $variables['element']['#link'];
    // remove the view link when viewing the node
//    if ($link['path'] == 'node/%/view')
//        return false;
    $link['localized_options']['html'] = TRUE;
    return '<li>' . l($link['title'], $link['href'], $link['localized_options']) . '</li>' . "\n";
}

function darty_theme_menu_local_tasks($variables) {
    drupal_add_library('contextual', 'contextual-links');

    $output = '';
    $has_access = user_access('access contextual links');
    if (!empty($variables['primary'])) {
        $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';

        // Only display contextual links if the user has the correct permissions enabled.
        // Otherwise, the default primary tabs will be used.   
        $variables['primary']['#prefix'] = '<ul class="tabs primary">';

        $variables['primary']['#suffix'] = '</ul>';
        $output .= drupal_render($variables['primary']);
    }
    if (!empty($variables['secondary'])) {
        $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
        $variables['secondary']['#prefix'] = '<ul class="tabs secondary clearfix">';
        $variables['secondary']['#suffix'] = '</ul>';
        $output .= drupal_render($variables['secondary']);
    }
    return $output;
}

function darty_theme_breadcrumb($variables) {
    $breadcrumb = $variables['breadcrumb'];
    $output = "";
    if (!empty($breadcrumb)) {
        $output .= '<div class="breadcrumb">' . implode('<div class="sep">/</div>', $breadcrumb) . '</div>';
        return $output;
    }
}

function darty_theme_sdl_editor_legend($variables) {
    return "
  
  ";
}