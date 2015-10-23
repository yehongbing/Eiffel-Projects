/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_883 [] = {238,882,0xFFFF};
static EIF_TYPE_INDEX gen_type1_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_883 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_883 [] = {894,882,0xFFFF};


static struct desc_info desc_883[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 220, NULL},
	{1, (BODY_INDEX)-1, 238, gen_type0_883},
	{2, (BODY_INDEX)-1, 191, NULL},
	{3, (BODY_INDEX)-1, 191, NULL},
	{1446, (BODY_INDEX)-1, 191, NULL},
	{5, (BODY_INDEX)-1, 191, NULL},
	{6, (BODY_INDEX)-1, 191, NULL},
	{7, (BODY_INDEX)-1, 191, NULL},
	{8, (BODY_INDEX)-1, 191, NULL},
	{9, (BODY_INDEX)-1, 191, NULL},
	{10, (BODY_INDEX)-1, 882, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_883},
	{14, (BODY_INDEX)-1, 0, gen_type2_883},
	{15, (BODY_INDEX)-1, 882, NULL},
	{16, (BODY_INDEX)-1, 882, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_883},
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
	{28, (BODY_INDEX)-1, 882, NULL},
	{29, (BODY_INDEX)-1, 215, NULL},
	{30, (BODY_INDEX)-1, 882, NULL},
	{12873, (BODY_INDEX)-1, 191, NULL},
	{1443, (BODY_INDEX)-1, 191, NULL},
	{1444, (BODY_INDEX)-1, 191, NULL},
	{1445, (BODY_INDEX)-1, 191, NULL},
	{1447, (BODY_INDEX)-1, 206, NULL},
	{1448, (BODY_INDEX)-1, 882, NULL},
	{1449, (BODY_INDEX)-1, 882, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 882, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 878, NULL},
	{12874, (BODY_INDEX)-1, 894, gen_type4_883},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 878, NULL},
};

extern void Init883(void);
void Init883(void)
{
	IDSC(desc_883, 0, 882);
	IDSC(desc_883 + 1, 1, 882);
	IDSC(desc_883 + 32, 207, 882);
	IDSC(desc_883 + 36, 292, 882);
	IDSC(desc_883 + 39, 357, 882);
}


#ifdef __cplusplus
}
#endif
