<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
  if (isset($metatags_head_title)) {
    $head_title = $metatags_head_title;
  }
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

  <!-- COOKIEPRO BANNER AND PREFERENCES CENTER -->
  <!-- https://app.cookiepro.com/app/#/module/welcome -->
  <?php $host =$_SERVER['HTTP_HOST']; ?>
  <?php if ($host == 'www.crealead.com'): ?>
    <!-- OneTrust Cookies Consent Notice start - PROD VERSION -->
    <script src="https://cookie-cdn.cookiepro.com/scripttemplates/otSDKStub.js"  type="text/javascript" charset="UTF-8" data-domain-script="8584f0eb-1f70-4e85-a344-340ced7c59e1"></script>
    <script type="text/javascript">
      function OptanonWrapper() { }
    </script>
    <!-- OneTrust Cookies Consent Notice end -->
  <?php  else: ?>
    <!-- OneTrust Cookies Consent Notice start - TEST VERSION -->
    <script src="https://cookie-cdn.cookiepro.com/scripttemplates/otSDKStub.js"  type="text/javascript" charset="UTF-8" data-domain-script="8584f0eb-1f70-4e85-a344-340ced7c59e1-test"></script>
    <script type="text/javascript">
      function OptanonWrapper() { }
    </script>
    <!-- OneTrust Cookies Consent Notice end -->
  <?php endif; ?>
  <!-- END OF COOKIEPRO BANNER AND PREFERENCES CENTER -->

  <?php print $scripts; ?>

  <!-- Facebook Pixel Code -->
  <script>
    !function(f,b,e,v,n,t,s){
      if(f.fbq)return;
      n = f.fbq = function(){
        n.callMethod ? n.callMethod.apply(n,arguments) : n.queue.push(arguments)
      };
      if(!f._fbq)f._fbq = n;
      n.push = n;
      n.loaded = !0;
      n.version = '2.0';
      n.queue=[];
      t = b.createElement(e);
      t.async = !0;
      t.src = v;
      s = b.getElementsByTagName(e)[0];
      s.parentNode.insertBefore(t,s)
    }
    (window, document,'script','https://connect.facebook.net/en_US/fbevents.js');
    fbq('init', '1221959847862388');
    fbq('track', 'PageView');
  </script>
  <noscript>
    <img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=1221959847862388&ev=PageView&noscript=1"/>
  </noscript>
  <!-- DO NOT MODIFY -->
  <!-- End Facebook Pixel Code -->
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
