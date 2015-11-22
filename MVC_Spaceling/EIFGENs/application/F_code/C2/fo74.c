/*
 * Code for class FORMAT_INTEGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fo74.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FORMAT_INTEGER}.make */
void F57_2271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F57_2290(Current);
	*(EIF_INTEGER_32 *)(Current + O2273[Dtype(Current)-56]) = (EIF_INTEGER_32) arg1;
	F57_2311(Current);
	F57_2308(Current);
	F57_2303(Current);
	RTLE;
}

/* {FORMAT_INTEGER}.sign_string */
EIF_REFERENCE F57_2278 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FORMAT_INTEGER}.centered */
EIF_BOOLEAN F57_2280 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2275[Dtype(Current)-56]) == ((EIF_INTEGER_32) 2L));
}

/* {FORMAT_INTEGER}.left_justified */
EIF_BOOLEAN F57_2281 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2275[Dtype(Current)-56]) == ((EIF_INTEGER_32) 1L));
}

/* {FORMAT_INTEGER}.show_sign_negative */
EIF_BOOLEAN F57_2284 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2277[Dtype(Current)-56]) == ((EIF_INTEGER_32) 3L));
}

/* {FORMAT_INTEGER}.show_sign_positive */
EIF_BOOLEAN F57_2285 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2277[Dtype(Current)-56]) == ((EIF_INTEGER_32) 2L));
}

/* {FORMAT_INTEGER}.show_sign */
EIF_BOOLEAN F57_2286 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2277[Dtype(Current)-56]) == ((EIF_INTEGER_32) 0L));
}

/* {FORMAT_INTEGER}.ignore_sign */
EIF_BOOLEAN F57_2287 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2277[Dtype(Current)-56]) == ((EIF_INTEGER_32) 1L));
}

/* {FORMAT_INTEGER}.no_separator */
EIF_BOOLEAN F57_2288 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_) == (EIF_CHARACTER_8) '\000');
}

/* {FORMAT_INTEGER}.blank_fill */
void F57_2290 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
}

/* {FORMAT_INTEGER}.right_justify */
void F57_2303 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O2275[Dtype(Current)-56]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {FORMAT_INTEGER}.sign_negative_only */
void F57_2308 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O2277[Dtype(Current)-56]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {FORMAT_INTEGER}.sign_normal */
void F57_2311 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTMS_EX_H("- +",3,2957355);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FORMAT_INTEGER}.split */
EIF_REFERENCE F57_2328 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10330(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O2273[Dtype(Current)-56]));
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 3L))) break;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			tc1 = F923_10400(RTCV(arg1), loc1);
			F923_10424(RTCV(Result), tc1);
			loc1--;
			loc2++;
		}
		F923_10424(RTCV(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_));
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		tc1 = F923_10400(RTCV(arg1), loc1);
		F923_10424(RTCV(Result), tc1);
		loc1--;
	}
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.process_sign */
EIF_REFERENCE F57_2329 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	
	RTGC;
	Result = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O2279[dtype-56]) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L)))) {
		F923_10424(RTCV(Result), (EIF_CHARACTER_8) '(');
		F923_10450(RTCV(Result), (EIF_CHARACTER_8) ')');
	}
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tb4 = '\01';
	if (!F57_2284(Current)) {
		tb4 = F57_2286(Current);
	}
	if (tb4) {
		tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L));
	}
	if (!(tb3)) {
		tb3 = '\0';
		tb4 = '\01';
		if (!F57_2285(Current)) {
			tb4 = F57_2286(Current);
		}
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		if (F57_2286(Current)) {
			tb2 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = F57_2331(Current, arg2);
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current + O2276[dtype-56])) {
			F923_10435(RTCV(Result), loc1);
		} else {
			F923_10427(RTCV(Result), loc1);
		}
	}
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.sign_size */
EIF_INTEGER_32 F57_2330 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 3L));
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.sign_value */
EIF_REFERENCE F57_2331 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F57_2330(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 * (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))) + ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F57_2330(Current);
	Result = F923_10481(RTCV(tr1), loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.justify */
EIF_REFERENCE F57_2332 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	
	RTGC;
	Result = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) !F57_2280(Current)) {
		tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2273[dtype-56]);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		F921_10330(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2));
		loc1 = (EIF_REFERENCE) tr1;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = F921_10348(RTCV(loc1));
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
			F923_10450(RTCV(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			loc3++;
		}
		if (F57_2281(Current)) {
			F923_10435(RTCV(Result), loc1);
		} else {
			F923_10427(RTCV(Result), loc1);
		}
	} else {
		loc4 = *(EIF_INTEGER_32 *)(Current + O2273[dtype-56]);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - ti4_2) / ((EIF_INTEGER_32) 2L));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc4) + ti4_2) < *(EIF_INTEGER_32 *)(Current + O2273[dtype-56]))) {
			tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F921_10330(RTCV(tr1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F921_10330(RTCV(tr1), loc4);
			loc1 = (EIF_REFERENCE) tr1;
		}
		tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F921_10330(RTCV(tr1), loc4);
		loc2 = (EIF_REFERENCE) tr1;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_2 = F921_10348(RTCV(loc2));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			F923_10450(RTCV(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			F923_10450(RTCV(loc2), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			loc3++;
		}
		ti4_3 = F921_10348(RTCV(loc1));
		if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
			F923_10450(RTCV(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
		}
		F923_10427(RTCV(Result), loc1);
		F923_10435(RTCV(Result), loc2);
	}
	RTLE;
	return Result;
}

void EIF_Minit74 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
