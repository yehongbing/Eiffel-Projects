/*
 * Code for class EV_CONTAINER_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev737.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CONTAINER_I}.interface_item */
EIF_REFERENCE F1097_14526 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11278[Dtype(Current)-1098])(Current);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_CONTAINER_I}.propagate_foreground_color */
void F1097_14537 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = F1029_13066(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4158[Dtype(tr1)-273])(RTCV(tr1));
	{
		static EIF_TYPE_INDEX typarr0[] = {369,967,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = loc1;
		loc3 = RTRV(eif_non_attached_type(typres0), loc3);
	}
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4252[Dtype(loc3)-644])(RTCV(loc3));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	loc5 = F1065_13855(Current);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc1)-273])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8608[Dtype(tr1)-947])(RTCV(tr1), loc5);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		loc2 = RTRV(eif_non_attached_type(968), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F969_11617(RTCV(loc2));
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc1)-303])(RTCV(loc1));
	}
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4254[Dtype(loc3)-644])(RTCV(loc3), loc4);
	}
	RTLE;
}

/* {EV_CONTAINER_I}.propagate_background_color */
void F1097_14538 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = F1029_13066(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4158[Dtype(tr1)-273])(RTCV(tr1));
	{
		static EIF_TYPE_INDEX typarr0[] = {369,967,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = loc1;
		loc3 = RTRV(eif_non_attached_type(typres0), loc3);
	}
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4252[Dtype(loc3)-644])(RTCV(loc3));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	loc5 = F1065_13856(Current);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc1)-273])(RTCV(loc1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8609[Dtype(tr1)-947])(RTCV(tr1), loc5);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		loc2 = RTRV(eif_non_attached_type(968), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F969_11618(RTCV(loc2));
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc1)-303])(RTCV(loc1));
	}
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4254[Dtype(loc3)-644])(RTCV(loc3), loc4);
	}
	RTLE;
}

/* {EV_CONTAINER_I}.interface */
static EIF_REFERENCE F1097_14539_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1097_14539 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1097_14539_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit737 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
