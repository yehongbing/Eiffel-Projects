/*
 * Class REPAIR_DESC
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_863 [] = {238,862,0xFFFF};
static EIF_TYPE_INDEX gen_type1_863 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_863 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_863 [] = {0,0xFFFF};


static struct desc_info desc_863[] = {
	{(BODY_INDEX) 12641, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_863},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{4, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 862, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_863},
	{14, (BODY_INDEX)-1, 0, gen_type2_863},
	{15, (BODY_INDEX)-1, 862, NULL},
	{16, (BODY_INDEX)-1, 862, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_863},
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
	{28, (BODY_INDEX)-1, 862, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 862, NULL},
	{12642, 0, 864, NULL},
	{12643, 8, 890, NULL},
	{12644, 16, 890, NULL},
	{12645, 24, 220, NULL},
	{12646, 32, 220, NULL},
	{12647, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init863(void);
void Init863(void)
{
	IDSC(desc_863, 0, 862);
	IDSC(desc_863 + 1, 1, 862);
	IDSC(desc_863 + 32, 351, 862);
}


#ifdef __cplusplus
}
#endif
