#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {1653, 1654, 1660, 1662, 1663},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{913, 306, 100, 78, 77},
				{901, 312, 101, 79, 78},
				{902, 312, 101, 79, 78},
				{884, 313, 103, 80, 78},
				{868, 312, 105, 82, 80},
				{861, 308, 110, 84, 81},
				{862, 303, 115, 87, 84},
				{869, 300, 121, 93, 86},
				{877, 297, 112, 95, 90},
				{886, 297, 102, 82, 81},
				{908, 300, 100, 79, 78},
				{950, 311, 101, 81, 80},
				{1055, 326, 102, 82, 82},
				{1238, 344, 106, 83, 84},
				{1480, 361, 113, 84, 81},
				{1823, 377, 118, 84, 80},
				{2374, 386, 125, 86, 81},
				{3075, 376, 127, 87, 81},
				{3892, 368, 129, 89, 82},
				{4742, 391, 134, 91, 84},
				{5332, 410, 134, 94, 85},
				{6044, 433, 134, 97, 86},
				{6756, 438, 123, 97, 89},
				{7960, 454, 120, 98, 90},
				{10089, 505, 121, 95, 89},
				{13435, 589, 118, 90, 88},
				{19237, 794, 115, 89, 89},
				{30339, 1309, 118, 92, 93},
				{52021, 2444, 127, 97, 96},
				{89399, 4858, 148, 110, 119},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4316, 4317, 4311, 4304, 4297},
				{4170, 4226, 4237, 4236, 4233},
				{4081, 4160, 4177, 4178, 4175},
				{4005, 4103, 4121, 4122, 4120},
				{3939, 4048, 4069, 4070, 4068},
				{3883, 3994, 4020, 4022, 4020},
				{3838, 3944, 3977, 3978, 3976},
				{3801, 3899, 3937, 3939, 3937},
				{3764, 3859, 3888, 3898, 3897},
				{3723, 3825, 3846, 3850, 3850},
				{3685, 3800, 3817, 3820, 3820},
				{3655, 3783, 3796, 3800, 3799},
				{3631, 3770, 3781, 3783, 3783},
				{3609, 3758, 3771, 3771, 3770},
				{3586, 3744, 3763, 3761, 3751},
				{3561, 3723, 3750, 3746, 3733},
				{3531, 3686, 3724, 3723, 3710},
				{3502, 3634, 3689, 3691, 3680},
				{3477, 3583, 3661, 3665, 3658},
				{3456, 3556, 3647, 3654, 3649},
				{3444, 3544, 3637, 3647, 3642},
				{3431, 3532, 3627, 3640, 3635},
				{3418, 3521, 3612, 3631, 3626},
				{3404, 3507, 3592, 3616, 3611},
				{3386, 3489, 3569, 3590, 3582},
				{3364, 3463, 3535, 3548, 3531},
				{3336, 3424, 3481, 3488, 3467},
				{3298, 3372, 3411, 3414, 3390},
				{3239, 3299, 3323, 3321, 3288},
				{3146, 3193, 3199, 3187, 3141},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data LG_TOCAD_BL44JH_1700_data = {
	.fcc				= 1700,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 238
};