<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
hide($content['field_paragraph_image_position']);
hide($content['field_paragraph_image_title_head']);
hide($content['field_paragraph_image_title']);
?>
<div class="image-component">
  <?php if (!empty($heading_text)): ?>
    <<?php print $heading_level; ?> class="image-component-title">
      <?php print $heading_text; ?>
    </<?php print $heading_level; ?>>
  <?php endif; ?>

  <div class="img-responsive img-<?php print $paragraph_position; ?>">
    <?php print render($content['field_paragraph_image']); ?>
  </div>

  <?php print render($content); ?>
</div>
