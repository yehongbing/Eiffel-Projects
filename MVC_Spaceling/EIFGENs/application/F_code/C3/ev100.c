/*
 * Code for class EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev100.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I}.docked_actions */
EIF_REFERENCE F74_2648 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2597[dtype-73]) == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(735));
		F726_6713(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2597[dtype-73]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O2597[dtype-73]);
}

/* {EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I}.docked_actions_internal */
static EIF_REFERENCE F74_2649_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F74_2649 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O2597[Dtype(Current) - 73]);
	if (!r) {
		if (RTAT(735)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F74_2649_body (Current));
			*(EIF_REFERENCE *)(Current + O2597[Dtype(Current) - 73]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit100 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
