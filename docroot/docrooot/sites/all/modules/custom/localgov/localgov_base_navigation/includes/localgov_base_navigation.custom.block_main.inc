<?php
/**
 * @file
 * localgov_base_navigation.inc
 * Mark-up for the main menu navigation block.
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /*
 * Returns block content for the "navigation_main" block.
 */
function localgov_base_navigation_block_content_navigation_main() {
  $tree = menu_tree_all_data('main-menu');

  $content = '<nav id="main-nav" role="navigation"><ul>';
  $content .= '<li class="visible-sm-inline-block visible-xs-inline-block nav-tools__account nav-item nav-item-my-account"><a href="https://bracknell-forest.achieveservice.com/module/home"><span class="icon theme-icon-user"></span> <span>My Account</span></a></li><li class=" nav-item nav-item-home"><a href="/">Home</a></li>';
  foreach ($tree as $item) {
    $menu_item_disabled = !empty($item['link']['hidden']) ? $item['link']['hidden'] : NULL;
    $url = $item['link']['href'];
    $name = $item['link']['link_title'];
    $name_safe =  str_replace(',', '', str_replace(' ', '-', strtolower($name)));

    if (!$menu_item_disabled) {
      $content .= '<li class="nav-item nav-item-' . $name_safe . '"><a href="' . $url . '">' . $name . '</a></li>';
    }
  }

  $content .= '<li class="nav-item nav-item-contact-us"><a href="/contact-us">Contact us</a></li>';
  $content .= '</ul></nav>';

  return $content;
}