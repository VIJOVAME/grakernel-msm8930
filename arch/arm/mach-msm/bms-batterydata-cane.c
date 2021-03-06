/* Copyright (c) 2011-2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/mfd/pm8xxx/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {1948, 1960, 1968, 1961, 1941},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 29,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40,
		35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.sf		= {
				{741, 280, 100, 80, 73},
				{705, 280, 100, 80, 73},
				{679, 281, 101, 81, 74},
				{680, 289, 104, 83, 75},
				{647, 303, 109, 85, 76},
				{643, 335, 118, 92, 78},
				{645, 319, 119, 92, 80},
				{648, 327, 133, 97, 84},
				{659, 302, 142, 107, 89},
				{677, 261, 129, 107, 93},
				{702, 252, 100, 81, 75},
				{731, 251, 100, 81, 75},
				{766, 253, 101, 83, 76},
				{820, 257, 101, 85, 78},
				{902, 271, 103, 84, 77},
				{1006, 291, 103, 81, 74},
				{1142, 310, 102, 81, 74},
				{1339, 332, 101, 81, 74},
				{806, 350, 99, 83, 76},
				{904, 365, 102, 84, 77},
				{998, 384, 106, 86, 78},
				{1109, 410, 109, 88, 79},
				{1248, 446, 112, 90, 80},
				{1419, 492, 113, 88, 79},
				{1672, 523, 111, 85, 78},
				{2114, 567, 115, 90, 81},
				{4411, 664, 132, 102, 92},
				{4411, 881, 227, 798, 242},
				{4411, 881, 227, 798, 242},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 29,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40,
		35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4340, 4340, 4335, 4330, 4322},
				{4209, 4261, 4263, 4260, 4256},
				{4125, 4203, 4204, 4202, 4198},
				{4070, 4150, 4149, 4147, 4143},
				{3975, 4099, 4097, 4094, 4090},
				{3925, 4054, 4052, 4046, 4042},
				{3878, 3978, 3989, 3993, 3997},
				{3844, 3936, 3958, 3959, 3956},
				{3827, 3900, 3920, 3922, 3920},
				{3815, 3861, 3875, 3879, 3879},
				{3805, 3832, 3837, 3837, 3836},
				{3795, 3810, 3814, 3814, 3813},
				{3784, 3794, 3796, 3796, 3795},
				{3772, 3782, 3782, 3782, 3780},
				{3758, 3774, 3772, 3769, 3763},
				{3741, 3765, 3763, 3755, 3741},
				{3722, 3746, 3746, 3737, 3722},
				{3701, 3714, 3711, 3703, 3694},
				{3678, 3691, 3687, 3680, 3669},
				{3670, 3688, 3686, 3680, 3668},
				{3661, 3686, 3685, 3678, 3667},
				{3649, 3684, 3683, 3677, 3666},
				{3634, 3679, 3680, 3674, 3662},
				{3611, 3669, 3668, 3662, 3647},
				{3580, 3640, 3634, 3624, 3605},
				{3536, 3585, 3574, 3564, 3546},
				{3474, 3505, 3488, 3480, 3463},
				{3371, 3375, 3352, 3349, 3333},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data Samsung_8930_Serrano_1900mAh_data = {
	.fcc				= 1900,
	.fcc_temp_lut		= &fcc_temp,
	.fcc_sf_lut			= &fcc_sf,
	.pc_temp_ocv_lut	= &pc_temp_ocv,
	.rbatt_sf_lut		= &rbatt_sf,
	.default_rbatt_mohm		= 177,
	.rbatt_capacitive_mohm	= 160,
};
