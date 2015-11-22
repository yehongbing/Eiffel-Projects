/*
 * Code for class EV_WIDGET_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev113.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F80_2801 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2724[Dtype(Current) - 79]);
}


/* {EV_WIDGET_ACTION_SEQUENCES}.pointer_motion_actions */
EIF_REFERENCE F80_2803 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2724[Dtype(Current)-79]);
	Result = F170_3702(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES}.pointer_button_press_actions */
EIF_REFERENCE F80_2804 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2724[Dtype(Current)-79]);
	Result = F170_3706(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES}.key_press_actions */
EIF_REFERENCE F80_2810 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2724[Dtype(Current)-79]);
	Result = F170_3724(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit113 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
