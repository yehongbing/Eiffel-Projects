/*
 * Class START
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_863 [] = {238,862,0xFFFF};
static const EIF_TYPE_INDEX egt_1_863 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_2_863 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_863 [] = {0,0xFFFF};


static const struct desc_info desc_863[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_863), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BD /*862*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_863), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_863), 14, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BD /*862*/), 15, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BD /*862*/), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_863), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x1D /*14*/), 20, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 21, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x1F /*15*/), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BD /*862*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B1 /*216*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BD /*862*/), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 12681, 0},
	{EIF_GENERIC(NULL), 12682, 0xFFFFFFFF},
};
void Init863(void)
{
	IDSC(desc_863, 0, 862);
	IDSC(desc_863 + 1, 1, 862);
	IDSC(desc_863 + 32, 348, 862);
}


#ifdef __cplusplus
}
#endif