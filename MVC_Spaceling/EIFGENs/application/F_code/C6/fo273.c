/*
 * Code for class FORMAT_DOUBLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fo273.h"
#include <math.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FORMAT_DOUBLE}.make */
void F210_4046 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F57_2271(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {FORMAT_DOUBLE}.formatted */
EIF_REFERENCE F210_4064 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,Result);
	
	RTGC;
	loc6 = (EIF_REAL_64) arg1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (arg1 < tr8_1)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		loc6 = (EIF_REAL_64) (EIF_REAL_64) -loc6;
	}
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) ((EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) - ((EIF_INTEGER_32) 1L))));
	loc6 += (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
	loc2 = (EIF_REAL_64) floor((double) loc6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	loc3 = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (loc6 - loc2) * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_1))));
	if ((EIF_BOOLEAN) !F57_2288(Current)) {
		tr1 = c_outr64(loc2);
		loc4 = F57_2328(Current, tr1);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_5_)) {
			tr1 = F210_4065(Current, loc3);
			loc5 = F210_4066(Current, tr1);
		} else {
			loc5 = F210_4065(Current, loc3);
		}
	} else {
		loc4 = c_outr64(loc2);
		loc5 = F210_4065(Current, loc3);
	}
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10330(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	Result = (EIF_REFERENCE) tr1;
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN)(loc2 != tr8_1)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_6_);
	}
	if (tb1) {
		F923_10435(RTCV(Result), loc4);
	}
	tb1 = F921_10362(RTCV(Result), (EIF_CHARACTER_8) 'e');
	if ((EIF_BOOLEAN) !tb1) {
		F923_10450(RTCV(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_2_));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) > ((EIF_INTEGER_32) 0L))) {
			F923_10435(RTCV(Result), loc5);
		}
		if ((EIF_BOOLEAN) !F57_2287(Current)) {
			Result = F57_2329(Current, Result, loc1);
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_1_) != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) F57_2332(Current, Result);
	}
	RTLE;
	return Result;
}

/* {FORMAT_DOUBLE}.pad_fraction */
EIF_REFERENCE F210_4065 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	Result = c_outr64(arg1);
	F923_10458(RTCV(Result), ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_);
		Result = F923_10481(RTCV(Result), ((EIF_INTEGER_32) 1L), ti4_1);
	} else {
		for (;;) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_))) break;
			F923_10424(RTCV(Result), (EIF_CHARACTER_8) '0');
		}
	}
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_7_)) {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 1L))) {
				tc1 = F923_10400(RTCV(Result), loc1);
				tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
			}
			if (tb1) break;
			F923_10455(RTCV(Result), loc1);
			loc1--;
		}
	}
	RTLE;
	return Result;
}

/* {FORMAT_DOUBLE}.separate_fraction */
EIF_REFERENCE F210_4066 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10330(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 3L)))) break;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			tc1 = F923_10400(RTCV(arg1), loc1);
			F923_10450(RTCV(Result), tc1);
			loc1++;
			loc2++;
		}
		F923_10450(RTCV(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_));
	}
	for (;;) {
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		tc1 = F923_10400(RTCV(arg1), loc1);
		F923_10450(RTCV(Result), tc1);
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit273 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
