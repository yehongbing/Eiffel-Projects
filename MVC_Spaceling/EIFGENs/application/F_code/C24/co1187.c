/*
 * Code for class COLLECTION [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1187.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLLECTION}.fill */
void F311_4517 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4158[Dtype(arg1)-273])(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4197[dtype-404])(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc1)-273])(RTCV(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tr8_1 = F707_6583(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[dtype-404])(Current, (EIF_REFERENCE) &tr8_1);
		F707_6611(RTCV(loc1));
	}
	RTLE;
}

/* {COLLECTION}.prune_all */
void F311_4519 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	for (;;) {
		if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[dtype-273])(Current, (EIF_REFERENCE) &arg1)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4203[dtype-404])(Current, (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

void EIF_Minit1187 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
