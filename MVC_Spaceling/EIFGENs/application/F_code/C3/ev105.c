/*
 * Code for class EV_DOCKABLE_TARGET_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev105.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_TARGET_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F77_2686 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2634[Dtype(Current) - 76]);
}


/* {EV_DOCKABLE_TARGET_ACTION_SEQUENCES}.docked_actions */
EIF_REFERENCE F77_2687 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2634[Dtype(Current)-76]);
	Result = F74_2648(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit105 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
