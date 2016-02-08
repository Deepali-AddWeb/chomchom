<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php //print $row; ?>
    
    <div class='main'>
		<div class='main-sub-top'>
			<div class='main-sub-left'>
				<?php print $row['field_image_1'];?>
			</div>
			<div class='main-sub-right'>
				<div class='main-sub-right-top'>
					<div class='main-sub-right-top-title'>
						<?php print $row['title'];?>
					</div>
					<div class='main-sub-right-top-save'>
						<?php print $row['nothing'];?>
					</div>
				</div>
				<div class='main-sub-right-bottom'>
					<div class='main-sub-right-bottom-left'>
						<div class='category'>
							<?php print $row['field_category'];?>
						</div>
						<div class='khu-vuc-sang-tiem-nails'>
							<?php print $row['field_khu_vuc_sang_tiem_nails'];?>
						</div>
						<div class='ghe'>
							<?php print $row['field_ghe'];?>
						</div>
						<div class='monthly-rent-sang-tiem'>
							<?php print $row['field_monthly_rent_sang_tiem'];?>
						</div>
						<div class='tiem-sq-ft'>
							<?php print $row['field_tiem_sq_ft'];?>
						</div>
						<div class='ban'>
							<?php print $row['field_ban'];?>
						</div>
						<div class='tho'>
							<?php print $row['field_tho'];?>
						</div>
						<div class='phong-wax'>
							<?php print $row['field_phong_wax'];?>
						</div>
						<div class='phong-massage'>
							<?php print $row['field_phong_massage'];?>
						</div>
						<div class='phong_facial'>
							<?php print $row['field_phong_facial'];?>
						</div>
						<div class='phong-tan'>
							<?php print $row['field_phong_tan'];?>
						</div>
						<div class='trong-khu-shopping-center'>
							<?php print $row['field_trong_khu_shopping_center'];?>
						</div>
						<div class='price-gia-ban_'>
							<?php print $row['field_price_gia_ban_'];?>
						</div>
					</div>
					<div class='main-sub-right-bottom-right'>
						<div class='main-sub-right-bottom-right-contact-name'>
							<?php print $row['field_contact_name'];?>
						</div>
						<div class='main-sub-right-bottom-right-contact-phone'>
							<?php print $row['field_contact_phone'];?>
						</div>
						<div class='main-sub-right-bottom-right-province'>
							<?php print $row['province'];?>
						</div>
						<div class='main-sub-right-bottom-right-created'>
							<?php print $row['created'];?>
						</div>
						<div class='main-sub-right-bottom-right-count-image'>
							<?php print $row['field_image'];?>
						</div>
					</div>
				</div>
			</div>
		</div>
		<div class='main-sub-bottom'>
		<?php print $row['body'];?>
		</div>
	</div>

  </div>
<?php endforeach; ?>
