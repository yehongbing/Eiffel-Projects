/*
 * Class DURATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_880 [] = {238,879,0xFFFF};
static const EIF_TYPE_INDEX egt_1_880 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_2_880 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_880 [] = {0,0xFFFF};


static const struct desc_info desc_880[] = {
	{EIF_GENERIC(NULL), 12840, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_880), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_880), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_880), 14, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 15, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_880), 17, 0xFFFFFFFF},
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
	{EIF_NON_GENERIC(0x06DF /*879*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B1 /*216*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 1450, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 1451, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 1449, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 12836, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0181 /*192*/), 12837, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 12839, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), 12838, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06DF /*879*/), -1, 0xFFFFFFFF},
};
void Init880(void)
{
	IDSC(desc_880, 0, 879);
	IDSC(desc_880 + 1, 1, 879);
	IDSC(desc_880 + 32, 206, 879);
	IDSC(desc_880 + 36, 370, 879);
	IDSC(desc_880 + 39, 379, 879);
}


#ifdef __cplusplus
}
#endif