/*
 * Code for class EV_MENU_ITEM_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev65.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F49_2223 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2223[Dtype(Current) - 48]);
}


/* {EV_MENU_ITEM_ACTION_SEQUENCES}.select_actions */
EIF_REFERENCE F49_2224 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2223[Dtype(Current)-48]);
	Result = F106_3234(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
