/*
 * Code for class EV_HELP_CONTEXTABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev677.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_HELP_CONTEXTABLE_I}.help_context */
EIF_REFERENCE F1043_13320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	
	RTGC;
	loc1 = Current;
	loc1 = RTRV(eif_non_attached_type(1094), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		for (;;) {
			if (loc2) break;
			Result = *(EIF_REFERENCE *)(RTCV(loc1) + O10329[Dtype(loc1)-1042]);
			tb1 = '\0';
			tr1 = F1096_14507(RTCV(loc1));
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O8345[Dtype(loc3)-929]);
				loc4 = tr1;
				tb1 = EIF_TEST(loc4);
			}
			if (tb1) {
				loc1 = (EIF_REFERENCE) loc4;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_HELP_CONTEXTABLE_I}.interface */
static EIF_REFERENCE F1043_13323_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1043_13323 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1043_13323_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_HELP_CONTEXTABLE_I}.internal_help_context */
EIF_REFERENCE F1043_13324 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10329[Dtype(Current) - 1042]);
}


void EIF_Minit677 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
