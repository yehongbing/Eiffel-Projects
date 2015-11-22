/*
 * Code for class EV_SENSITIVE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev703.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SENSITIVE_IMP}.is_sensitive */
EIF_BOOLEAN F1070_13946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_IS_SENSITIVE((tp1)));
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_SENSITIVE_IMP}.has_parent */
EIF_BOOLEAN F1070_13950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10824[Dtype(Current)-1095])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {EV_SENSITIVE_IMP}.parent_is_sensitive */
EIF_BOOLEAN F1070_13952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10824[Dtype(Current)-1095])(Current);
	loc1 = RTRV(eif_non_attached_type(966), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb1 = F967_11563(RTCV(loc1));
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_SENSITIVE_IMP}.interface */
static EIF_REFERENCE F1070_13953_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1070_13953 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1070_13953_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit703 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
