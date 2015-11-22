/*
 * Code for class EV_LABEL_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev814.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1408
static void inline_F31_1408 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gint*) arg3, NULL)
	;
}
#define INLINE_F31_1408
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LABEL_IMP}.make */
RTEOMS(15746,1);
void F1143_15747 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	F1088_14258(Current);
	F1079_14134(Current, *(EIF_POINTER *)(Current+ _PTROFF_42_11_10_2_1_1_));
	F1088_14261(Current);
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	loc1 = F1049_13651(RTCV(tr1), RTOMS(15746,0));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_42_11_10_2_1_1_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(loc2));
	F1142_15736(Current);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_LABEL_IMP}.needs_event_box */
EIF_BOOLEAN F1143_15753 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_LABEL_IMP}.interface */
static EIF_REFERENCE F1143_15754_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1143_15754 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_23_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1143_15754_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_23_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit814 (void)
{
	GTCX
	RTPOMS(15746,0,"justify",7,1848530809);
}


#ifdef __cplusplus
}
#endif
