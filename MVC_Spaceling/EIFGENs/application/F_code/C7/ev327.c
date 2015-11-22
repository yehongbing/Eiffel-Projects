/*
 * Code for class EV_APPLICATION_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev327.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_HANDLER}.set_application */
void F728_6751 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_HANDLER}.launch */
void F728_6752 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		loc1 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if (F728_6754(Current, loc1)) break;
			F728_6753(Current, loc1);
		}
	}
	RTLE;
}

/* {EV_APPLICATION_HANDLER}.process_application_event_queue */
void F728_6753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1048_13440(RTCV(arg1), (EIF_BOOLEAN) 1);
}

/* {EV_APPLICATION_HANDLER}.is_application_destroyed */
EIF_BOOLEAN F728_6754 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	
	
	tb1 = F1029_13065(RTCV(arg1));
	return (EIF_BOOLEAN) tb1;
}

/* {EV_APPLICATION_HANDLER}.application_i */
static EIF_REFERENCE F728_6755_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F728_6755 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(1047)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F728_6755_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit327 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
