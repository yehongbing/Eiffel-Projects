/*
 * Code for class BINARY_SEARCH_TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi1392.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BINARY_SEARCH_TREE}.make */
void F387_4943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F386_4894(Current, tr1);
	RTLE;
}

/* {BINARY_SEARCH_TREE}.parent */
EIF_REFERENCE F387_4944 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {BINARY_SEARCH_TREE}.has */
EIF_BOOLEAN F387_4945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLR(6,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTCCL(tr1);
		tr3 = RTCCL(arg1);
		if (F387_4967(Current, tr2, tr3)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			loc2 = *(EIF_REFERENCE *)(Current);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = RTCCL(loc2);
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
				if (tb1) {
					loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				} else {
					loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				}
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F387_4968(Current, loc1);
					tr1 = RTCCL(arg1);
					Result = F387_4945(RTCV(loc1), tr1);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {BINARY_SEARCH_TREE}.put */
void F387_4955 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLR(6,loc1);
	
	RTGC;
	tr1 = RTCCL(arg1);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = RTCCL(tr2);
	if ((EIF_BOOLEAN) !F387_4967(Current, tr1, tr3)) {
		loc2 = *(EIF_REFERENCE *)(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = RTCCL(loc2);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
			tb1 = tb2;
		}
		if (tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				loc1 = F386_4942(Current);
				F386_4921(Current, loc1);
				tr1 = RTCCL(arg1);
				F234_4166(RTCV(loc1), tr1);
			} else {
				tr1 = RTCCL(arg1);
				F387_4955(RTCV(loc1), tr1);
			}
		} else {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				loc1 = F386_4942(Current);
				F386_4922(Current, loc1);
				tr1 = RTCCL(arg1);
				F234_4166(RTCV(loc1), tr1);
			} else {
				tr1 = RTCCL(arg1);
				F387_4955(RTCV(loc1), tr1);
			}
		}
	}
	RTLE;
}

/* {BINARY_SEARCH_TREE}.items_equal */
EIF_BOOLEAN F387_4967 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		RTLE;
		return (EIF_BOOLEAN) RTEQ(arg1, arg2);
	} else {
		RTLE;
		return (EIF_BOOLEAN) RTCEQ(arg1, arg2);
	}/* NOTREACHED */
	
}

/* {BINARY_SEARCH_TREE}.set_comparison_mode */
void F387_4968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		F244_4452(RTCV(arg1));
	} else {
		F244_4453(RTCV(arg1));
	}
	RTLE;
}

void EIF_Minit1392 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
