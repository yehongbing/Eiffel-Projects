/*
 * Code for class INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in311.h"
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

/* {INTEGER_INTERVAL}.make */
void F583_5709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5040[dtype-582]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O5042[dtype-582]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		*(EIF_INTEGER_32 *)(Current + O5056[dtype-582]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O5055[dtype-582]) = (EIF_INTEGER_32) arg2;
	} else {
		*(EIF_INTEGER_32 *)(Current + O5056[dtype-582]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current + O5055[dtype-582]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.lower */
EIF_INTEGER_32 F583_5712 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O5056[Dtype(Current)-582]);
}

/* {INTEGER_INTERVAL}.upper */
EIF_INTEGER_32 F583_5714 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O5055[Dtype(Current)-582]);
}

/* {INTEGER_INTERVAL}.has */
EIF_BOOLEAN F583_5717 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current + O5042[dtype-582])) {
		tb1 = (EIF_BOOLEAN) (arg1 <= F583_5714(Current));
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current + O5040[dtype-582])) {
			tb1 = (EIF_BOOLEAN) (arg1 >= F583_5712(Current));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.valid_index */
EIF_BOOLEAN F583_5718 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current + O5042[dtype-582])) {
		tb1 = (EIF_BOOLEAN) (arg1 <= F583_5714(Current));
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current + O5040[dtype-582])) {
			tb1 = (EIF_BOOLEAN) (arg1 >= F583_5712(Current));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.capacity */
EIF_INTEGER_32 F583_5720 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_INTEGER_32) F583_5721(Current);
}

/* {INTEGER_INTERVAL}.count */
EIF_INTEGER_32 F583_5721 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O5042[dtype-582]) && *(EIF_BOOLEAN *)(Current + O5040[dtype-582]))) {
		Result = F583_5714(Current);
		ti4_1 = F583_5712(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.index_set */
EIF_REFERENCE F583_5722 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {INTEGER_INTERVAL}.is_equal */
EIF_BOOLEAN F583_5723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current + O5040[dtype-582])) {
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O5040[Dtype(arg1)-582]);
		if (tb3) {
			ti4_1 = F583_5712(RTCV(arg1));
			tb2 = (EIF_BOOLEAN)(F583_5712(Current) == ti4_1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current + O5042[dtype-582])) {
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(RTCV(arg1) + O5042[Dtype(arg1)-582]);
			if (tb3) {
				ti4_1 = F583_5714(RTCV(arg1));
				tb2 = (EIF_BOOLEAN)(F583_5714(Current) == ti4_1);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.extendible */
EIF_BOOLEAN F583_5725 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {INTEGER_INTERVAL}.prunable */
EIF_BOOLEAN F583_5726 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {INTEGER_INTERVAL}.extend */
void F583_5727 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < F583_5712(Current))) {
		*(EIF_INTEGER_32 *)(Current + O5056[dtype-582]) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > F583_5714(Current))) {
			*(EIF_INTEGER_32 *)(Current + O5055[dtype-582]) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.put */
void F583_5728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < F583_5712(Current))) {
		*(EIF_INTEGER_32 *)(Current + O5056[dtype-582]) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > F583_5714(Current))) {
			*(EIF_INTEGER_32 *)(Current + O5055[dtype-582]) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.wipe_out */
void F583_5733 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5040[dtype-582]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O5042[dtype-582]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current + O5056[dtype-582]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O5055[dtype-582]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {INTEGER_INTERVAL}.as_array */
EIF_REFERENCE F583_5734 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F583_5712(Current);
	loc2 = F583_5714(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {669,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 669, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F670_6235(RTCV(tr1), ((EIF_INTEGER_32) 0L), loc1, loc2);
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		F670_6260(RTCV(Result), loc1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.linear_representation */
EIF_REFERENCE F583_5736 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F670_6287(RTCV(F583_5734(Current)));
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.copy */
void F583_5737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.prune */
void F583_5746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit311 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
