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
						<div class='type-of-business'>
							<?php print $row['field_type_of_business'];?>
						</div>
						<div class='monthly-income_'>
							<?php print $row['field_monthly_income_'];?>
						</div>
						<div class='monthly-rent'>
							<?php print $row['field_monthly_rent'];?>
						</div>
						<div class='how-many-sq-ft'>
							<?php print $row['field_how_many_sq_ft'];?>
						</div>
						<div class='sale-price'>
							<?php print $row['field_sale_price'];?>
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
