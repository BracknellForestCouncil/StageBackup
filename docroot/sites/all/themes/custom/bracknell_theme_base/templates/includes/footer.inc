<div class="outer-wrap global-footer hide-print">
  <footer class="<?php print $container_class; ?>" role="contentinfo">
    <?php print render($page['footer']); ?>
    <div class="row">
      <div class="col-xs-12 col-sm-8">
        <?php
          $menu = menu_navigation_links('footer-menu');
          print theme('links__footer_menu', array(
            'links' => $menu,
            'attributes' => array(
              'class' => array('global-footer-links')
            )
          ));
          ?>
      </div>
      <div class="col-xs-12 col-sm-4 socials socials-global-footer">
        <ul>
          <li>
            <a href="https://www.instagram.com/bracknellforest" target="_blank">
              <span class="sr-only sr-only-focusable">Instagram</span>
              <span class="icon theme-icon-instagram"></span>
            </a>
          </li>
          <li>
            <a href="https://twitter.com/BracknellForest" target="_blank">
              <span class="sr-only sr-only-focusable">Twitter</span>
              <span class="icon theme-icon-twitter"></span>
            </a>
          </li>
          <li>
            <a href="https://www.facebook.com/bracknellforestcouncil" target="_blank">
              <span class="sr-only sr-only-focusable">Facebook</span>
              <span class="icon theme-icon-facebook"></span>
            </a>
          </li>
          <li>
            <a href="https://www.youtube.com/user/BracknellForestC?gl=GB&hl=en-GB" target="_blank">
              <span class="sr-only sr-only-focusable">Youtube</span>
              <span class="icon theme-icon-youtube"></span>
            </a>
          </li>
        </ul>
      </div>
    </div>
    <div class="row">
      <div class="col-sm-12">
        <p class="copyright"><small>© Bracknell Forest Council</small></p>
      </div>
    </div>
  </footer>
</div>