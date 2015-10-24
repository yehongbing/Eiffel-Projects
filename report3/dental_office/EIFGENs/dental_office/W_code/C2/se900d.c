/*
 * Class SET [TOOTH]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_900 [] = {238,899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type1_900 [] = {899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type2_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_900 [] = {899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type5_900 [] = {899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type6_900 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_900 [] = {899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type8_900 [] = {899,892,0xFFFF};
static EIF_TYPE_INDEX gen_type9_900 [] = {901,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_900 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_900[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_900},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 899, gen_type1_900},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_900},
	{14, (BODY_INDEX)-1, 0, gen_type3_900},
	{15, (BODY_INDEX)-1, 899, gen_type4_900},
	{16, (BODY_INDEX)-1, 899, gen_type5_900},
	{17, (BODY_INDEX)-1, 0, gen_type6_900},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, NULL},
	{21, (BODY_INDEX)-1, 220, NULL},
	{22, (BODY_INDEX)-1, 220, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 899, gen_type7_900},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 899, gen_type8_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 191, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 191, NULL},
	{13086, (BODY_INDEX)-1, 191, NULL},
	{13087, 0, 191, NULL},
	{13094, (BODY_INDEX)-1, 191, NULL},
	{13089, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13090, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 901, gen_type9_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_900},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 191, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 191, NULL},
	{13091, (BODY_INDEX)-1, 191, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13092, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13093, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 206, NULL},
};

extern void Init900(void);
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 1, 899);
	IDSC(desc_900 + 32, 78, 899);
	IDSC(desc_900 + 41, 286, 899);
	IDSC(desc_900 + 50, 240, 899);
}


#ifdef __cplusplus
}
#endif
