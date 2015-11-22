/*
 * Code for class BINARY_TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi1393.h"
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

/* {BINARY_TREE}.make */
void F386_4894 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) RTCCL(arg1);
	RTLE;
}

/* {BINARY_TREE}.parent */
EIF_REFERENCE F386_4895 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4335[Dtype(Current) - 384]);
}


/* {BINARY_TREE}.child_index */
EIF_INTEGER_32 F386_4896 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
}


/* {BINARY_TREE}.left_child */
EIF_REFERENCE F386_4897 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {BINARY_TREE}.right_child */
EIF_REFERENCE F386_4898 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {BINARY_TREE}.child */
EIF_REFERENCE F386_4903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_)) {
		case 1L:
			Result = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			break;
		case 2L:
			Result = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {BINARY_TREE}.child_cursor */
EIF_REFERENCE F386_4904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(684, 684, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F685_6343(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {BINARY_TREE}.arity */
EIF_INTEGER_32 F386_4907 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F386_4912(Current)) {
		Result++;
	}
	if (F386_4913(Current)) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {BINARY_TREE}.child_capacity */
EIF_INTEGER_32 F386_4908 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

/* {BINARY_TREE}.child_after */
EIF_BOOLEAN F386_4909 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
}

/* {BINARY_TREE}.is_leaf */
EIF_BOOLEAN F386_4910 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL));
}

/* {BINARY_TREE}.has_left */
EIF_BOOLEAN F386_4912 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL);
}

/* {BINARY_TREE}.has_right */
EIF_BOOLEAN F386_4913 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL);
}

/* {BINARY_TREE}.child_go_to */
void F386_4915 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {BINARY_TREE}.child_start */
void F386_4916 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F386_4912(Current)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if (F386_4913(Current)) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTLE;
}

/* {BINARY_TREE}.child_forth */
void F386_4918 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_))++;
}

/* {BINARY_TREE}.child_go_i_th */
void F386_4920 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {BINARY_TREE}.put_left_child */
void F386_4921 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			F244_4452(RTCV(arg1));
		} else {
			F244_4453(RTCV(arg1));
		}
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F385_4819(RTCV(loc1), NULL);
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F385_4819(RTCV(arg1), Current);
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {BINARY_TREE}.put_right_child */
void F386_4922 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			F244_4452(RTCV(arg1));
		} else {
			F244_4453(RTCV(arg1));
		}
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F385_4819(RTCV(loc1), NULL);
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F385_4819(RTCV(arg1), Current);
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {BINARY_TREE}.put_child */
void F386_4925 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
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
	F385_4819(RTCV(arg1), NULL);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F386_4912(Current)) {
		tb1 = (EIF_BOOLEAN) !F386_4913(Current);
	}
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_)) {
		case 1L:
			F386_4921(Current, arg1);
			break;
		case 2L:
			F386_4922(Current, arg1);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
}

/* {BINARY_TREE}.fill_list */
void F386_4936 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(arg1)-404])(RTCV(arg1), tr2);
		F386_4936(RTCV(loc1), arg1);
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(arg1)-404])(RTCV(arg1), tr2);
		F386_4936(RTCV(loc1), arg1);
	}
	RTLE;
}

/* {BINARY_TREE}.clone_node */
EIF_REFERENCE F386_4937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	tr2 = F234_4164(RTCV(arg1));
	tr3 = RTCCL(tr2);
	F386_4894(RTCV(tr1), tr3);
	Result = (EIF_REFERENCE) tr1;
	F386_4938(RTCV(Result), arg1);
	RTLE;
	return Result;
}

/* {BINARY_TREE}.copy_node */
void F386_4938 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	eif_builtin_ANY_standard_copy (Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O4335[Dtype(Current)-384]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {BINARY_TREE}.subtree_has */
EIF_BOOLEAN F386_4939 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTCCL(arg1);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc1)-273])(RTCV(loc1), tr1);
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && (EIF_BOOLEAN) !Result)) {
		tr1 = RTCCL(arg1);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc1)-273])(RTCV(loc1), tr1);
	}
	RTLE;
	return Result;
}

/* {BINARY_TREE}.subtree_count */
EIF_INTEGER_32 F386_4940 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F385_4774(RTCV(loc1));
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F385_4774(RTCV(loc1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {BINARY_TREE}.new_tree */
EIF_REFERENCE F386_4942 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	tr2 = RTCCL(*(EIF_REFERENCE *)(Current));
	F386_4894(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		F244_4452(RTCV(Result));
	}
	RTLE;
	return Result;
}

void EIF_Minit1393 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
