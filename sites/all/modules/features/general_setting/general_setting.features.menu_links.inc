<?php
/**
 * @file
 * general_setting.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function general_setting_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_business-for-sale:business-for-sale.
  $menu_links['main-menu_business-for-sale:business-for-sale'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'business-for-sale',
    'router_path' => 'business-for-sale',
    'link_title' => 'BUSINESS FOR SALE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_business-for-sale:business-for-sale',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sang-tiem:<nolink>',
  );
  // Exported menu link: main-menu_can-tho-nails:can-tho-nails.
  $menu_links['main-menu_can-tho-nails:can-tho-nails'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'can-tho-nails',
    'router_path' => 'can-tho-nails',
    'link_title' => 'CAN THO NAILS',
    'options' => array(
      'attributes' => array(
        'title' => 'ADDITION',
      ),
      'identifier' => 'main-menu_can-tho-nails:can-tho-nails',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_can-tho:<nolink>',
  );
  // Exported menu link: main-menu_can-tho-toc:can-tho-toc.
  $menu_links['main-menu_can-tho-toc:can-tho-toc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'can-tho-toc',
    'router_path' => 'can-tho-toc',
    'link_title' => 'CAN THO TOC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_can-tho-toc:can-tho-toc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_can-tho:<nolink>',
  );
  // Exported menu link: main-menu_can-tho:<nolink>.
  $menu_links['main-menu_can-tho:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'CAN-THO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_can-tho:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_quang-cao-rao-vat:quang-cao-rao-vat.
  $menu_links['main-menu_quang-cao-rao-vat:quang-cao-rao-vat'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'quang-cao-rao-vat',
    'router_path' => 'quang-cao-rao-vat',
    'link_title' => 'QUANG CAO &RAO VAT',
    'options' => array(
      'attributes' => array(
        'title' => 'DEMO TEXT HERE',
      ),
      'identifier' => 'main-menu_quang-cao-rao-vat:quang-cao-rao-vat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sang-tiem-nails:sang-tiem-nails.
  $menu_links['main-menu_sang-tiem-nails:sang-tiem-nails'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sang-tiem-nails',
    'router_path' => 'sang-tiem-nails',
    'link_title' => 'SANG TIEM NAILS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sang-tiem-nails:sang-tiem-nails',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sang-tiem:<nolink>',
  );
  // Exported menu link: main-menu_sang-tiem:<nolink>.
  $menu_links['main-menu_sang-tiem:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'SANG TIEM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sang-tiem:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_can-tho:can-tho-nails.
  $menu_links['menu-footer-menu_can-tho:can-tho-nails'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'can-tho-nails',
    'router_path' => 'can-tho-nails',
    'link_title' => 'can-tho',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_can-tho:can-tho-nails',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_quang-cao--rao-vat:quang-cao-rao-vat.
  $menu_links['menu-footer-menu_quang-cao--rao-vat:quang-cao-rao-vat'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'quang-cao-rao-vat',
    'router_path' => 'quang-cao-rao-vat',
    'link_title' => 'quang cao & rao vat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_quang-cao--rao-vat:quang-cao-rao-vat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_sang-tiem:sang-tiem-nails.
  $menu_links['menu-footer-menu_sang-tiem:sang-tiem-nails'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'sang-tiem-nails',
    'router_path' => 'sang-tiem-nails',
    'link_title' => 'sang tiem',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_sang-tiem:sang-tiem-nails',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_contact-us:node/2.
  $menu_links['user-menu_contact-us:node/2'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'CONTACT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_contact-us:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_faq:node/1.
  $menu_links['user-menu_faq:node/1'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_faq:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'LOGIN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_sign-up:user/register.
  $menu_links['user-menu_sign-up:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'SIGN UP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_sign-up:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('BUSINESS FOR SALE');
  t('CAN THO NAILS');
  t('CAN THO TOC');
  t('CAN-THO');
  t('CONTACT US');
  t('FAQ');
  t('Home');
  t('LOGIN');
  t('Log out');
  t('QUANG CAO &RAO VAT');
  t('SANG TIEM');
  t('SANG TIEM NAILS');
  t('SIGN UP');
  t('User account');
  t('can-tho');
  t('quang cao & rao vat');
  t('sang tiem');

  return $menu_links;
}
