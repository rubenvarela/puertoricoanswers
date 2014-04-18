<?php

/**
 * @file
 * template.php
 */

function bootstrap_pranswers_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Satisfy|Open+Sans+Condensed:300|Oswald', array('type' => 'external'));
}

//https://api.drupal.org/api/drupal/includes%21common.inc/function/drupal_add_js/6
//https://drupal.org/node/766974
//https://drupal.org/project/better_exposed_filters
drupal_add_js("(function($) {
  Drupal.behaviors.bef_live_filter = {
    attach: function(context, settings) {
      // Hide the apply button.
      $('.views-exposed-form input:submit', context).hide();
      // When the change event fires, run the submit handler
      $('.views-exposed-form input, .views-exposed-form select', context).change(function(event) {
        $(this).parents('form').find('.views-exposed-form input:submit').click();
      });
    }
  }
})(jQuery);", 'inline');
