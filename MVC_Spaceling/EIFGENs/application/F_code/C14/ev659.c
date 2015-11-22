/*
 * Code for class EV_MENU_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev659.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_BAR}.parent */
EIF_REFERENCE F1026_13041 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1080_14161(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_MENU_BAR}.implementation */
EIF_REFERENCE F1026_13042 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_MENU_BAR}.create_interface_objects */
void F1026_13043 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MENU_BAR}.create_implementation */
void F1026_13044 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1079, 1079, _OBJSIZ_5_1_0_2_0_1_0_0_);
	F1080_14151(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit659 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
