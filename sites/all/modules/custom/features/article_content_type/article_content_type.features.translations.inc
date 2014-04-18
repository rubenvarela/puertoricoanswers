<?php
/**
 * @file
 * article_content_type.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function article_content_type_translations_defaults() {
  $translations = array();
  $translations['es:field']['18206c5add24b8898426959c811b779b'] = array(
    'source' => 'More Information',
    'context' => 'field_article_more_information:articles:label',
    'location' => 'field:field_article_more_information:articles:label',
    'translation' => 'Más Información',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:field']['3adbdb3ac060038aa0e6e6c138ef9873'] = array(
    'source' => 'Category',
    'context' => 'field_article_category:articles:label',
    'location' => 'field:field_article_category:articles:label',
    'translation' => 'Categoría',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:field']['51af9e18d5a9f2d16831b8ee9d209019'] = array(
    'source' => 'Quick Top',
    'context' => 'field_article_top:articles:label',
    'location' => 'field:field_article_top:articles:label',
    'translation' => 'Parte Superior',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:field']['a7d5ccac5e873609bb7cb091a782a876'] = array(
    'source' => 'Quick Bottom',
    'context' => 'field_article_quick_bottom:articles:label',
    'location' => 'field:field_article_quick_bottom:articles:label',
    'translation' => 'Parte baja',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:field']['ac101b32dda4448cf13a93fe283dddd8'] = array(
    'source' => 'Body',
    'context' => 'field_article_body:articles:label',
    'location' => 'field:field_article_body:articles:label',
    'translation' => 'Contenido',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:node']['7978b606e7f71e42ee8f9c1b3326fe58'] = array(
    'source' => 'Articles',
    'context' => 'type:articles:name',
    'location' => 'node:type:articles:name',
    'translation' => 'Artículo',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['es:node']['b78a3223503896721cca1303f776159b'] = array(
    'source' => 'Title',
    'context' => 'type:articles:title_label',
    'location' => 'node:type:articles:title_label',
    'translation' => 'Título',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
