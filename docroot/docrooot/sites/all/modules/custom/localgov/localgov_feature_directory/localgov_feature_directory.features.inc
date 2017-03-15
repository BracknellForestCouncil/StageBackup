<?php
/**
 * @file
 * localgov_feature_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_feature_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function localgov_feature_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}