/*
 * Code for class HASH_TABLE_ITERATION_CURSOR [NATURAL_32, POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha1165.h"
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

/* {HASH_TABLE_ITERATION_CURSOR}.item */
EIF_NATURAL_32 F548_5682 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
	/* INLINED CODE (SPECIAL.item) */
	tu4_2 = *((EIF_NATURAL_32 *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)));
	/* END INLINED CODE */
	Result = tu4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.key */
EIF_POINTER F548_5683 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)tr1 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F548_5684 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !F534_5673(Current)) {
		tb1 = (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		Result = (EIF_BOOLEAN) (loc1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.forth */
void F548_5685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			loc3 = F696_6475(RTCV(tr1), loc3);
			loc1++;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
				ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				tb1 = (EIF_BOOLEAN) (loc3 >= ti4_1);
			}
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			loc3 = F696_6474(RTCV(tr1), loc3);
			loc1++;
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HASH_TABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F548_5686 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit1165 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif