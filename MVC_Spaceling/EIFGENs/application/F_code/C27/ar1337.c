/*
 * Code for class ARRAYED_LIST [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar1337.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_LIST}.make */
void F711_6579 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y5197,Y5197_gen_type,Dftype(Current),651)),0,arg1,sizeof(EIF_NATURAL_16), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ARRAYED_LIST}.area */
EIF_REFERENCE F711_6582 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {ARRAYED_LIST}.item */
EIF_NATURAL_16 F711_6583 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	/* INLINED CODE (SPECIAL.item) */
	tu2_2 = *((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tu2_2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.i_th */
EIF_NATURAL_16 F711_6584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu2_2 = *((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tu2_2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.at */
EIF_NATURAL_16 F711_6585 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu2_2 = *((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tu2_2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.first */
EIF_NATURAL_16 F711_6586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu2_2 = *((EIF_NATURAL_16 *)tr1 + (((EIF_INTEGER_32) 0L)));
	/* END INLINED CODE */
	Result = tu2_2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.last */
EIF_NATURAL_16 F711_6587 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F711_6600(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu2_2 = *((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tu2_2;
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.index */
EIF_INTEGER_32 F711_6588 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAYED_LIST}.cursor */
EIF_REFERENCE F711_6589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(684, 684, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F685_6343(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ARRAYED_LIST}.has */
EIF_BOOLEAN F711_6590 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = F711_6600(Current);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && EIF_TRUE)) {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || Result)) break;
			/* INLINED CODE (SPECIAL.item) */
			tu2_2 = *((EIF_NATURAL_16 *)loc1 + (loc2));
			/* END INLINED CODE */
			tu2_1 = tu2_2;
			Result = (EIF_BOOLEAN) (arg1 == tu2_1);
			loc2++;
		}
	} else {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || Result)) break;
			/* INLINED CODE (SPECIAL.item) */
			tu2_2 = *((EIF_NATURAL_16 *)loc1 + (loc2));
			/* END INLINED CODE */
			tu2_1 = tu2_2;
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == tu2_1);
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.upper */
EIF_INTEGER_32 F711_6599 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.count */
EIF_INTEGER_32 F711_6600 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.capacity */
EIF_INTEGER_32 F711_6601 (EIF_REFERENCE Current)
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
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.is_equal */
EIF_BOOLEAN F711_6602 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		ti4_1 = F711_6600(RTCV(arg1));
		if ((EIF_BOOLEAN)(F711_6600(Current) == ti4_1)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN) !Result) {
						tb1 = (EIF_BOOLEAN) (loc1 > F711_6599(Current));
					}
					if (tb1) break;
					tu2_1 = F711_6584(Current, loc1);
					tu2_2 = F711_6584(RTCV(arg1), loc1);
					Result = (EIF_BOOLEAN) (tu2_1 == tu2_2);
					loc1++;
				}
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
				ti4_1 = F711_6600(Current);
				Result = F765_6961(RTCV(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.prunable */
EIF_BOOLEAN F711_6603 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {ARRAYED_LIST}.valid_index */
EIF_BOOLEAN F711_6605 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) {
		Result = (EIF_BOOLEAN) (arg1 <= F711_6600(Current));
	}
	RTLE;
	return Result;
}

/* {ARRAYED_LIST}.move */
void F711_6608 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > (EIF_INTEGER_32) (F711_6600(Current) + ((EIF_INTEGER_32) 1L)))) {
		ti4_1 = F711_6600(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTLE;
}

/* {ARRAYED_LIST}.start */
void F711_6609 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {ARRAYED_LIST}.finish */
void F711_6610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F711_6600(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {ARRAYED_LIST}.forth */
void F711_6611 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
}

/* {ARRAYED_LIST}.back */
void F711_6612 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
}

/* {ARRAYED_LIST}.go_i_th */
void F711_6613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {ARRAYED_LIST}.go_to */
void F711_6614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(684),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
	}
	RTLE;
}

/* {ARRAYED_LIST}.search */
void F711_6615 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc3 = F711_6600(Current);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc2 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && EIF_TRUE)) {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			/* INLINED CODE (SPECIAL.item) */
			tu2_2 = *((EIF_NATURAL_16 *)loc1 + (loc2));
			/* END INLINED CODE */
			tu2_1 = tu2_2;
			loc4 = (EIF_BOOLEAN) (arg1 == tu2_1);
			loc2++;
		}
	} else {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			/* INLINED CODE (SPECIAL.item) */
			tu2_2 = *((EIF_NATURAL_16 *)loc1 + (loc2));
			/* END INLINED CODE */
			tu2_1 = tu2_2;
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == tu2_1);
			loc2++;
		}
	}
	if (loc4) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc2;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {ARRAYED_LIST}.put_i_th */
void F711_6617 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {ARRAYED_LIST}.extend */
void F711_6619 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);
	
	RTGC;
	loc1 = F711_6600(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (loc2);
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		ti4_1 = F485_5153(Current);
		loc2 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (loc2, (EIF_INTEGER_32) (loc1 + ti4_1));
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	}
	F765_6965(RTCV(loc2), arg1);
	RTLE;
}

/* {ARRAYED_LIST}.put_left */
void F711_6620 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\01';
	if (!F625_5836(Current)) {
		tb1 = F417_5127(Current);
	}
	if (tb1) {
		F711_6619(Current, arg1);
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		F711_6641(Current, arg1, ti4_1);
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
	RTLE;
}

/* {ARRAYED_LIST}.replace */
void F711_6622 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	F711_6617(Current, arg1, ti4_1);
}

/* {ARRAYED_LIST}.grow */
void F711_6626 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (tr1, arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ARRAYED_LIST}.copy */
void F711_6629 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		F662_6233(Current, tr1);
	}
	RTLE;
}

/* {ARRAYED_LIST}.prune */
void F711_6630 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F625_5837(Current)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		for (;;) {
			tb1 = '\01';
			if (!F625_5836(Current)) {
				tb1 = (F711_6583(Current) == arg1);
			}
			if (tb1) break;
			F711_6611(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!F625_5836(Current)) {
				tb2 = (EIF_BOOLEAN)(F711_6583(Current) == arg1);
			}
			if (tb2) break;
			F711_6611(Current);
		}
	}
	if ((EIF_BOOLEAN) !F625_5836(Current)) {
		F711_6631(Current);
	}
	RTLE;
}

/* {ARRAYED_LIST}.remove */
void F711_6631 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < F711_6600(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = F711_6600(Current);
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
		memmove((EIF_NATURAL_16 *)tr1 + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))),(EIF_NATURAL_16 *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_NATURAL_16) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 - ti4_4));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (ti4_3 - ti4_4));
		/* END INLINED CODE */
		;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F765_6977(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_LIST}.prune_all */
void F711_6632 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc6);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
	loc6 = *(EIF_REFERENCE *)(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F711_6600(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F711_6600(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				tu2_2 = *((EIF_NATURAL_16 *)loc6 + ((EIF_INTEGER_32) (loc1 + loc3)));
				/* END INLINED CODE */
				tu2_1 = tu2_2;
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_NATURAL_16 *)loc6 + (loc1)) = tu2_1;
				/* END INLINED CODE */
				;
			}
			if (loc5) {
				/* INLINED CODE (SPECIAL.item) */
				tu2_2 = *((EIF_NATURAL_16 *)loc6 + (loc1));
				/* END INLINED CODE */
				tu2_1 = tu2_2;
				loc4 = (EIF_BOOLEAN) (arg1 == tu2_1);
			} else {
				/* INLINED CODE (SPECIAL.item) */
				tu2_2 = *((EIF_NATURAL_16 *)loc6 + (loc1));
				/* END INLINED CODE */
				tu2_1 = tu2_2;
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == tu2_1);
			}
			if (loc4) {
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	F765_6977(RTCV(loc6), loc3);
	ti4_1 = F711_6600(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_LIST}.wipe_out */
void F711_6635 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F765_6983(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {ARRAYED_LIST}.correct_mismatch */
void F711_6637 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,tr3);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = RTOSCF(6366,F690_6366,(Current));
	tr2 = RTMS_EX_H("area_v2",7,1288217906);
	tb5 = F692_6438(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = RTOSCF(6366,F690_6366,(Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr1 = F692_6436(RTCV(tr1), tr2);
		loc2 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {764,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y5205,Y5205_gen_type,dftype,651);
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc2 = RTRV(eif_non_attached_type(typres0),loc2);
		}
		tb4 = EIF_TEST(loc2);
	}
	if (tb4) {
		tr2 = RTOSCF(6366,F690_6366,(Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F692_6436(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 874, tr1, loc3, tb4);
		tb3 = tb4;
	}
	if (tb3) {
		tr2 = RTOSCF(6366,F690_6366,(Current));
		tr3 = RTMS_EX_H("object_comparison",17,2049833582);
		tr2 = F692_6436(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_BOOLEAN *), 859, tr1, loc4, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		tr2 = RTOSCF(6366,F690_6366,(Current));
		tr3 = RTMS_EX_H("index",5,1852879736);
		tr2 = F692_6436(RTCV(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), 874, tr1, loc5, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTLNSP2(eif_non_attached_type(eif_final_id(Y5197,Y5197_gen_type,dftype,651)),0,loc3,sizeof(EIF_NATURAL_16), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.item) */
			tu2_2 = *((EIF_NATURAL_16 *)loc2 + (loc1));
			/* END INLINED CODE */
			tu2_1 = tu2_2;
			F765_6965(RTCV(tr1), tu2_1);
			loc1++;
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) loc4;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc5;
	} else {
		F690_6365(Current);
	}
	RTLE;
}

/* {ARRAYED_LIST}.insert */
void F711_6641 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (F711_6600(Current) + ((EIF_INTEGER_32) 1L)) > F711_6601(Current))) {
		ti4_1 = F711_6600(Current);
		ti4_2 = F485_5153(Current);
		F711_6626(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F711_6600(Current);
	/* INLINED CODE (SPECIAL.move_data/overlapping_move) */
	memmove((EIF_NATURAL_16 *)tr1 + (arg2),(EIF_NATURAL_16 *)tr1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_NATURAL_16) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), arg2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	F711_6617(Current, arg1, arg2);
	RTLE;
}

void EIF_Minit1337 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
