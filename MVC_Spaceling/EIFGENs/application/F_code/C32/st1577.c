/*
 * Code for class STACK [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st1577.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STACK}.replace */
void F442_5144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[dtype-404])(Current, (EIF_REFERENCE) &arg1);
	RTLE;
}

/* {STACK}.fill */
void F442_5145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {717,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 717, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F704_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc1 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(arg1)-303])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(arg1)-273])(RTCV(arg1));
		if (tb1) break;
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(arg1)-303])(RTCV(arg1)));
		F718_6661(RTCV(loc1), ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(arg1)-303])(RTCV(arg1));
	}
	for (;;) {
		tb2 = '\01';
		tb3 = F410_5127(RTCV(loc1));
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) !F603_5820(Current);
		}
		if (tb2) break;
		ti4_1 = F704_6583(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Current)-404])(Current, (EIF_REFERENCE) &ti4_1);
		F718_6664(RTCV(loc1));
	}
	RTLE;
}

void EIF_Minit1577 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
