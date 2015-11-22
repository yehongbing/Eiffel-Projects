/*
 * Code for class EV_DOCKABLE_TARGET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev520.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_TARGET}.veto_dock_function */
EIF_REFERENCE F949_11081 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O10834[Dtype(tr1)-1072]);
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_TARGET}.is_docking_enabled */
EIF_BOOLEAN F949_11082 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1) + O10835[Dtype(tr1)-1072]);
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_TARGET}.implementation */
EIF_REFERENCE F949_11086 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit520 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
