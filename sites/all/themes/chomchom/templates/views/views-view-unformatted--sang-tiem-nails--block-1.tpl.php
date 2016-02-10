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
					<?php if(isset($row['title']) && !empty($row['title'])) { ?>
						<div class='main-sub-right-top-title'>
							<label for="title">Posting Title :</label>
							<?php print $row['title'];?>
						</div>
					<?php } ?>	
					<div class='main-sub-right-top-save'>
						<?php print $row['nothing'];?>
					</div>
				</div>
				<div class='main-sub-right-bottom'>
					<div class='main-sub-right-bottom-left'>
						<div class='category'>
							<?php print $row['field_category'];?>
						</div>
						<?php if(isset($row['field_khu_vuc_sang_tiem_nails']) && !empty($row['field_khu_vuc_sang_tiem_nails'])) { ?>
							<div class='khu-vuc-sang-tiem-nails'>
								<label for="khu-vuc">khu-vuc:</label>
								<?php print $row['field_khu_vuc_sang_tiem_nails'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_ghe']) && !empty($row['field_ghe'])) { ?>
							<div class='ghe'>
								<label for="ghe">#Ghe : </label>
								<?php print $row['field_ghe'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_monthly_rent_sang_tiem']) && !empty($row['field_monthly_rent_sang_tiem'])) { ?>
							<div class='monthly-rent-sang-tiem'>
								<label for="monthly_rent_sang_tiem">Monthly Rent : </label>
								<?php print $row['field_monthly_rent_sang_tiem'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_tiem_sq_ft']) && !empty($row['field_tiem_sq_ft'])) { ?>
							<div class='tiem-sq-ft'>
								<label for="tiem_sq_ft">Tiem_SQ/FT : </label>
								<?php print $row['field_tiem_sq_ft'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_ban']) && !empty($row['field_ban'])) { ?>
							<div class='ban'>
								<label for="ban"># Ban : </label>
								<?php print $row['field_ban'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_tho']) && !empty($row['field_tho'])) { ?>
							<div class='tho'>
								<label for="tho"># Tho : </label>
								<?php print $row['field_tho'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_phong_wax']) && !empty($row['field_phong_wax'])) { ?>
							<div class='phong-wax'>
								<label for="phong_wax">Phong Wax : </label>
								<?php print $row['field_phong_wax'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_phong_massage']) && !empty($row['field_phong_massage'])) { ?>
							<div class='phong-massage'>
								<label for="phong_massage">Phong Message : </label>
								<?php print $row['field_phong_massage'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_phong_facial']) && !empty($row['field_phong_facial'])) { ?>
							<div class='phong_facial'>
								<label for="phong_facial">Phong Facial : </label>
								<?php print $row['field_phong_facial'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_phong_tan']) && !empty($row['field_phong_tan'])) { ?>
						<div class='phong-tan'>
							<label for="phong_tan">Phong Tan : </label>
							<?php print $row['field_phong_tan'];?>
						</div>
						<?php } ?>
						<?php if(isset($row['field_trong_khu_shopping_center']) && !empty($row['field_trong_khu_shopping_center'])) { ?>
							<div class='trong-khu-shopping-center'>
								<label for="trong-khu-shopping-center">Trong Khu Shopping Center : </label>
								<?php print $row['field_trong_khu_shopping_center'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_price_gia_ban_']) && !empty($row['field_price_gia_ban_'])) { ?>
							<div class='price-gia-ban_'>
								<label for="price_gia_ban_">Price Gia Ban : </label>
								<?php print $row['field_price_gia_ban_'];?>
							</div>
						<?php } ?>
					</div>
					<div class='main-sub-right-bottom-right'>
						<label for="contact_name">Contact Information:</label>
						<div class='main-sub-right-bottom-right-contact-name'>
							<?php print $row['field_contact_name'];?>
						</div>
						<div class='main-sub-right-bottom-right-contact-phone'>
							<?php print $row['field_contact_phone'];?>
						</div>
						<div class='main-sub-right-bottom-right-province'>
							<?php print $row['province_1'];?>
						</div>
						<?php if(isset($row['created']) && !empty($row['created'])) { ?>
							<div class='main-sub-right-bottom-right-created'>
								<label for="created">Posted:</label>
								<?php print $row['created'];?>
							</div>
						<?php } ?>
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
