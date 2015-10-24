/*
 * Class CELL [TOOTH]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_913 [] = {238,912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type1_913 [] = {912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type2_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_913 [] = {912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type5_913 [] = {912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type6_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_913 [] = {912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type8_913 [] = {912,892,0xFFFF};
static EIF_TYPE_INDEX gen_type9_913 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type10_913 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_913[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_913},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 912, gen_type1_913},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_913},
	{14, (BODY_INDEX)-1, 0, gen_type3_913},
	{15, (BODY_INDEX)-1, 912, gen_type4_913},
	{16, (BODY_INDEX)-1, 912, gen_type5_913},
	{17, (BODY_INDEX)-1, 0, gen_type6_913},
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
	{28, (BODY_INDEX)-1, 912, gen_type7_913},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 912, gen_type8_913},
	{13161, 24, (EIF_TYPE_INDEX)-1, gen_type9_913},
	{13162, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13163, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type10_913},
};

extern void Init913(void);
void Init913(void)
{
	IDSC(desc_913, 0, 912);
	IDSC(desc_913 + 1, 1, 912);
	IDSC(desc_913 + 32, 174, 912);
}


#ifdef __cplusplus
}
#endif
