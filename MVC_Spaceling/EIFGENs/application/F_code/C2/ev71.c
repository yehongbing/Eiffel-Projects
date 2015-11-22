/*
 * Code for class EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev71.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I}.dock_ended_actions */
EIF_REFERENCE F54_2264 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2266[dtype-53]) == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(737));
		F726_6713(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O2266[dtype-53]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O2266[dtype-53]);
}

/* {EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I}.dock_started_actions_internal */
static EIF_REFERENCE F54_2265_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F54_2265 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O2265[Dtype(Current) - 53]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F54_2265_body (Current));
			*(EIF_REFERENCE *)(Current + O2265[Dtype(Current) - 53]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I}.dock_ended_actions_internal */
static EIF_REFERENCE F54_2266_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F54_2266 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O2266[Dtype(Current) - 53]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F54_2266_body (Current));
			*(EIF_REFERENCE *)(Current + O2266[Dtype(Current) - 53]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit71 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
