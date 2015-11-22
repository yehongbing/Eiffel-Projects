/*
 * Class TOOL_DESC
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_864 [] = {238,863,0xFFFF};
static EIF_TYPE_INDEX gen_type1_864 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_864 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_864 [] = {0,0xFFFF};


static struct desc_info desc_864[] = {
	{(BODY_INDEX) 12632, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_864},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 863, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_864},
	{14, (BODY_INDEX)-1, 0, gen_type2_864},
	{15, (BODY_INDEX)-1, 863, NULL},
	{16, (BODY_INDEX)-1, 863, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_864},
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
	{28, (BODY_INDEX)-1, 863, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 863, NULL},
	{12633, 0, 220, NULL},
	{12634, 8, 890, NULL},
	{12635, 16, 206, NULL},
	{12636, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init864(void);
void Init864(void)
{
	IDSC(desc_864, 0, 863);
	IDSC(desc_864 + 1, 1, 863);
	IDSC(desc_864 + 32, 349, 863);
}


#ifdef __cplusplus
}
#endif
