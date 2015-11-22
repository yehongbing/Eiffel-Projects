/*
 * Code for class EV_TOOL_BAR_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev627.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_BUTTON}.parent */
EIF_REFERENCE F1004_12714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	Result = F1002_12711(Current);
	RTLE;
	return RTRV(eif_non_attached_type(1015), Result);
}

/* {EV_TOOL_BAR_BUTTON}.implementation */
EIF_REFERENCE F1004_12722 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_TOOL_BAR_BUTTON}.create_implementation */
void F1004_12723 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1180, 1180, _OBJSIZ_28_12_8_2_0_2_0_0_);
	F1181_16601(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit627 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
