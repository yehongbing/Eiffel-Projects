/*
 * Code for class TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tr1394.h"
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

/* {TREE}.parent */
EIF_REFERENCE F385_4762 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4335[Dtype(Current) - 384]);
}


/* {TREE}.child_item */
EIF_REFERENCE F385_4765 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = F386_4903(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = *(EIF_REFERENCE *)(RTCV(loc1) + O3869[Dtype(loc1)-233]);
	RTLE;
	return Result;
}

/* {TREE}.child_capacity */
EIF_INTEGER_32 F385_4773 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F386_4907(Current);
}

/* {TREE}.count */
EIF_INTEGER_32 F385_4774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4385[Dtype(Current)-384])(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {TREE}.is_equal */
EIF_BOOLEAN F385_4775 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F385_4786(RTCV(arg1));
		if ((EIF_BOOLEAN)(F385_4786(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCV(arg1) + O4154[Dtype(arg1)-243]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O4154[dtype-243]) == tb2);
		}
		if (tb1) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(arg1)-384])(RTCV(arg1));
			Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[dtype-384])(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F385_4786(Current);
		}
		if (tb1) {
			RTLE;
			return (EIF_BOOLEAN) F385_4823(Current, Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {TREE}.node_is_equal */
EIF_BOOLEAN F385_4776 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O4154[dtype-243])) {
		tr1 = *(EIF_REFERENCE *)(Current + O3869[dtype-233]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O3869[Dtype(arg1)-233]);
		Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O3869[dtype-233]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + O3869[Dtype(arg1)-233]);
		Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_readable */
EIF_BOOLEAN F385_4778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F385_4783(Current)) {
		Result = (EIF_BOOLEAN)(F386_4903(Current) != NULL);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_off */
EIF_BOOLEAN F385_4783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F385_4784(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4357[Dtype(Current)-384])(Current);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_before */
EIF_BOOLEAN F385_4784 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) == ((EIF_INTEGER_32) 0L));
}

/* {TREE}.child_after */
EIF_BOOLEAN F385_4785 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(Current)-384])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {TREE}.is_empty */
EIF_BOOLEAN F385_4786 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {TREE}.is_leaf */
EIF_BOOLEAN F385_4787 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F386_4907(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {TREE}.has */
EIF_BOOLEAN F385_4792 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O4154[dtype-243])) {
		Result = '\01';
		if (!RTEQ(arg1, *(EIF_REFERENCE *)(Current + O3869[dtype-233]))) {
			tr1 = RTCCL(arg1);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4384[dtype-384])(Current, tr1);
		}
	} else {
		Result = '\01';
		if (!RTCEQ(arg1, *(EIF_REFERENCE *)(Current + O3869[dtype-233]))) {
			tr1 = RTCCL(arg1);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4384[dtype-384])(Current, tr1);
		}
	}
	RTLE;
	return Result;
}

/* {TREE}.linear_representation */
EIF_REFERENCE F385_4812 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {700,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F385_4774(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5460[Dtype(tr1)-700])(RTCV(tr1), ti4_1);
	loc1 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	tr1 = RTCCL(*(EIF_REFERENCE *)(Current + O3869[dtype-233]));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc1)-404])(RTCV(loc1), tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4386[dtype-384])(Current, loc1);
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {TREE}.copy */
void F385_4814 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc4);
	
	RTGC;
	loc3 = F386_4937(Current, arg1);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(arg1)-384])(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		F385_4824(Current, arg1, loc3);
	}
	eif_builtin_ANY_standard_copy (Current, loc3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(Current)-384])(Current))) break;
		F386_4920(Current, loc1);
		loc4 = F386_4903(Current);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			F385_4819(RTCV(loc4), Current);
		}
		loc1++;
	}
	F386_4920(Current, loc2);
	RTLE;
}

/* {TREE}.subtree_has */
EIF_BOOLEAN F385_4816 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	loc1 = F386_4904(Current);
	F386_4916(Current);
	for (;;) {
		tb1 = '\01';
		if (!F385_4783(Current)) {
			tb1 = Result;
		}
		if (tb1) break;
		if ((EIF_BOOLEAN)(F386_4903(Current) != NULL)) {
			if (*(EIF_BOOLEAN *)(Current + O4154[Dtype(Current)-243])) {
				tr1 = F385_4765(Current);
				Result = (EIF_BOOLEAN) RTEQ(arg1, tr1);
			} else {
				tr1 = F385_4765(Current);
				Result = (EIF_BOOLEAN) RTCEQ(arg1, tr1);
			}
		}
		F386_4918(Current);
	}
	F386_4916(Current);
	for (;;) {
		tb2 = '\01';
		if (!F385_4783(Current)) {
			tb2 = Result;
		}
		if (tb2) break;
		loc2 = F386_4903(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = RTCCL(arg1);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4384[Dtype(loc2)-384])(RTCV(loc2), tr1);
		}
		F386_4918(Current);
	}
	F386_4915(Current, loc1);
	RTLE;
	return Result;
}

/* {TREE}.subtree_count */
EIF_INTEGER_32 F385_4817 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	
	RTGC;
	Result = F386_4907(Current);
	loc1 = F386_4904(Current);
	F386_4916(Current);
	for (;;) {
		if (F385_4783(Current)) break;
		loc2 = F386_4903(Current);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4385[Dtype(loc2)-384])(RTCV(loc2));
			Result += ti4_1;
		}
		F386_4918(Current);
	}
	F386_4915(Current, loc1);
	RTLE;
	return Result;
}

/* {TREE}.fill_list */
void F385_4818 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	F386_4916(Current);
	for (;;) {
		if (F385_4783(Current)) break;
		loc1 = F386_4903(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = F385_4765(Current);
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(arg1)-404])(RTCV(arg1), tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4386[Dtype(loc1)-384])(RTCV(loc1), arg1);
		}
		F386_4918(Current);
	}
	RTLE;
}

/* {TREE}.attach_to_parent */
void F385_4819 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O4335[Dtype(Current)-384]) = (EIF_REFERENCE) arg1;
}

/* {TREE}.tree_is_equal */
EIF_BOOLEAN F385_4823 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc9);
	RTLR(1,arg1);
	RTLR(2,loc10);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,Current);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc1);
	RTLR(12,loc2);
	RTLR(13,loc3);
	RTLR(14,loc4);
	
	RTGC;
	loc9 = F386_4904(RTCV(arg1));
	loc10 = F386_4904(RTCV(arg2));
	tb1 = '\0';
	tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(arg1)-384])(RTCV(arg1));
	if (tb2) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(arg2)-384])(RTCV(arg2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O3869[Dtype(arg1)-233]);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg2) + O3869[Dtype(arg2)-233]);
		Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	} else {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(arg1)-384])(RTCV(arg1));
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(arg2)-384])(RTCV(arg2));
		if (((tb1) != (tb2))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			{
				static EIF_TYPE_INDEX typarr0[] = {647,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0, 647, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F645_6017(RTCV(tr1));
			loc5 = (EIF_REFERENCE) tr1;
			{
				static EIF_TYPE_INDEX typarr0[] = {647,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0, 647, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F645_6017(RTCV(tr1));
			loc6 = (EIF_REFERENCE) tr1;
			{
				static EIF_TYPE_INDEX typarr0[] = {649,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 649, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F647_6017(RTCV(tr1));
			loc7 = (EIF_REFERENCE) tr1;
			{
				static EIF_TYPE_INDEX typarr0[] = {649,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 649, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F647_6017(RTCV(tr1));
			loc8 = (EIF_REFERENCE) tr1;
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_4_1_0_0_);
			F650_6065(RTCV(loc7), ti4_1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg2)+ _LNGOFF_4_1_0_0_);
			F650_6065(RTCV(loc8), ti4_1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_REFERENCE) arg1;
			loc2 = (EIF_REFERENCE) arg2;
			F386_4916(RTCV(loc1));
			F386_4916(RTCV(loc2));
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !Result) {
					tb2 = '\0';
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4357[Dtype(loc1)-384])(RTCV(loc1));
					if (tb3) {
						tb3 = F407_5127(RTCV(loc5));
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) break;
				tb2 = '\0';
				tb3 = '\0';
				tb4 = F385_4778(RTCV(loc1));
				if (tb4) {
					tb4 = F385_4778(RTCV(loc2));
					tb3 = tb4;
				}
				if (tb3) {
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc1)-384])(RTCV(loc1));
					ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc2)-384])(RTCV(loc2));
					tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
				if (tb2) {
					Result = F385_4776(RTCV(loc1), loc2);
					loc3 = F386_4903(RTCV(loc1));
					loc4 = F386_4903(RTCV(loc2));
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == NULL) || (EIF_BOOLEAN)(loc4 == NULL))) {
					} else {
						tb2 = '\01';
						tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(loc3)-384])(RTCV(loc3));
						if (!tb3) {
							tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(loc4)-384])(RTCV(loc4));
							tb2 = tb3;
						}
						if ((EIF_BOOLEAN) !tb2) {
							F648_6065(RTCV(loc5), loc1);
							F648_6065(RTCV(loc6), loc2);
							loc1 = (EIF_REFERENCE) loc3;
							loc2 = (EIF_REFERENCE) loc4;
							Result = F385_4776(RTCV(loc1), loc2);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_4_1_0_0_);
							F650_6065(RTCV(loc7), ti4_1);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_4_1_0_0_);
							F650_6065(RTCV(loc8), ti4_1);
							F386_4916(RTCV(loc1));
							F386_4916(RTCV(loc2));
						} else {
							tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(loc3)-384])(RTCV(loc3));
							tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(loc4)-384])(RTCV(loc4));
							if (((tb2) != (tb3))) {
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							} else {
								Result = F385_4776(RTCV(loc3), loc4);
							}
						}
					}
				} else {
					tb2 = '\01';
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc1)-384])(RTCV(loc1));
					ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc2)-384])(RTCV(loc2));
					if (!(EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						tb3 = F385_4778(RTCV(loc1));
						tb4 = F385_4778(RTCV(loc2));
						tb2 = ((tb3) != (tb4));
					}
					if (tb2) {
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4357[Dtype(loc1)-384])(RTCV(loc1));
				if ((EIF_BOOLEAN) !tb2) {
					F386_4918(RTCV(loc1));
					F386_4918(RTCV(loc2));
				} else {
					for (;;) {
						tb2 = '\01';
						tb3 = F407_5127(RTCV(loc5));
						if (!tb3) {
							tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4357[Dtype(loc1)-384])(RTCV(loc1));
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) break;
						loc1 = F648_6062(RTCV(loc5));
						loc2 = F648_6062(RTCV(loc6));
						F386_4918(RTCV(loc1));
						F386_4918(RTCV(loc2));
						F648_6066(RTCV(loc5));
						F648_6066(RTCV(loc6));
						F650_6066(RTCV(loc7));
						F650_6066(RTCV(loc8));
					}
				}
			}
			if ((EIF_BOOLEAN) !Result) {
				for (;;) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc7)+ _LNGOFF_2_3_0_0_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) break;
					ti4_2 = F650_6062(RTCV(loc7));
					F386_4920(RTCV(loc1), ti4_2);
					ti4_2 = F650_6062(RTCV(loc8));
					F386_4920(RTCV(loc2), ti4_2);
					loc1 = F648_6062(RTCV(loc5));
					loc2 = F648_6062(RTCV(loc6));
					F648_6066(RTCV(loc5));
					F648_6066(RTCV(loc6));
					F650_6066(RTCV(loc7));
					F650_6066(RTCV(loc8));
				}
				ti4_2 = F650_6062(RTCV(loc7));
				F386_4920(RTCV(loc1), ti4_2);
				ti4_2 = F650_6062(RTCV(loc8));
				F386_4920(RTCV(loc2), ti4_2);
				F650_6066(RTCV(loc7));
				F650_6066(RTCV(loc8));
			}
		}
	}
	F386_4915(RTCV(arg1), loc9);
	F386_4915(RTCV(arg2), loc10);
	RTLE;
	return Result;
}

/* {TREE}.tree_copy */
void F385_4824 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,loc8);
	RTLR(5,loc9);
	RTLR(6,arg1);
	RTLR(7,arg2);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc5);
	RTLR(11,loc4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {647,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0, 647, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F645_6017(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {647,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0, 647, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F645_6017(RTCV(tr1));
	loc7 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {649,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 649, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F647_6017(RTCV(tr1));
	loc8 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {649,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 649, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F647_6017(RTCV(tr1));
	loc9 = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1) + O4154[Dtype(arg1)-243]);
	if (tb1) {
		F244_4452(RTCV(arg2));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_4_1_0_0_);
	F650_6065(RTCV(loc9), ti4_1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_REFERENCE) arg1;
	loc3 = (EIF_REFERENCE) arg2;
	for (;;) {
		tb1 = '\0';
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc2)-384])(RTCV(loc2));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb2 = F407_5127(RTCV(loc6));
			tb1 = tb2;
		}
		if (tb1) break;
		F386_4920(RTCV(loc2), loc1);
		F386_4920(RTCV(loc3), loc1);
		tb2 = F385_4778(RTCV(loc2));
		if (tb2) {
			loc5 = F386_4903(RTCV(loc2));
			if ((EIF_BOOLEAN)(loc5 == NULL)) {
			} else {
				loc4 = F386_4937(Current, loc5);
				F386_4925(RTCV(loc3), loc4);
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4358[Dtype(loc5)-384])(RTCV(loc5));
				if ((EIF_BOOLEAN) !tb2) {
					F648_6065(RTCV(loc6), loc2);
					F648_6065(RTCV(loc7), loc3);
					F650_6065(RTCV(loc8), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					loc2 = (EIF_REFERENCE) loc5;
					loc3 = (EIF_REFERENCE) loc4;
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_4_1_0_0_);
					F650_6065(RTCV(loc9), ti4_1);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc2)-384])(RTCV(loc2));
		if ((EIF_BOOLEAN) (loc1 <= ti4_1)) {
			loc1++;
		} else {
			for (;;) {
				tb2 = '\01';
				tb3 = F407_5127(RTCV(loc6));
				if (!tb3) {
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4346[Dtype(loc2)-384])(RTCV(loc2));
					tb2 = (EIF_BOOLEAN) (loc1 <= ti4_1);
				}
				if (tb2) break;
				ti4_1 = F650_6062(RTCV(loc9));
				F386_4920(RTCV(loc2), ti4_1);
				ti4_1 = F650_6062(RTCV(loc9));
				F386_4920(RTCV(loc3), ti4_1);
				loc2 = F648_6062(RTCV(loc6));
				loc3 = F648_6062(RTCV(loc7));
				loc1 = F650_6062(RTCV(loc8));
				F648_6066(RTCV(loc6));
				F648_6066(RTCV(loc7));
				F650_6066(RTCV(loc8));
				F650_6066(RTCV(loc9));
			}
		}
	}
	ti4_1 = F650_6062(RTCV(loc9));
	F386_4920(RTCV(arg1), ti4_1);
	ti4_1 = F650_6062(RTCV(loc9));
	F386_4920(RTCV(arg2), ti4_1);
	F650_6066(RTCV(loc9));
	RTLE;
}

void EIF_Minit1394 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
