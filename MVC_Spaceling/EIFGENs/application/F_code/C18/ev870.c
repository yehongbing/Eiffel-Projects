/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev870.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW_I}.is_selectable */
EIF_BOOLEAN F1177_16532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1157_16282(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_I}.pixmap */
EIF_REFERENCE F1177_16533 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = F950_11091(RTCV(loc1));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_55_12_10_3_);
			tb2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb2) {
			ti4_1 = F950_11092(RTCV(loc1));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_55_12_10_4_);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_55_12_10_3_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_55_12_10_4_);
			F990_12501(RTCV(Result), ti4_1, ti4_2);
		}
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_I}.internal_pixmap */
EIF_REFERENCE F1177_16534 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {EV_MULTI_COLUMN_LIST_ROW_I}.interface */
static EIF_REFERENCE F1177_16542_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1177_16542 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1177_16542_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit870 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
