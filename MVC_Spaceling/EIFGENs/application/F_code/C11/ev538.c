/*
 * Code for class EV_PICK_AND_DROPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev538.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE}.pebble */
EIF_REFERENCE F964_11338 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O11165[Dtype(tr1)-1092]);
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE}.configurable_target_menu_handler */
EIF_REFERENCE F964_11345 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O11168[Dtype(tr1)-1092]);
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE}.implementation */
EIF_REFERENCE F964_11365 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit538 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
