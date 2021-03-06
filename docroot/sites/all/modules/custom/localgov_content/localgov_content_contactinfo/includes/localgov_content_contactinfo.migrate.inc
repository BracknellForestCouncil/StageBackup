<?php
/**
 * @file
 * localgov_content_contactinfo.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_migrate_api()
 */
function localgov_content_contactinfo_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
    ),
    'migrations' => array(
      'NodeContactinfo' => array(
        'class_name' => 'NodeContactinfoMigration',
        'group_name' => 'base_content',
      ),
    ),
  );
  return $api;
}
