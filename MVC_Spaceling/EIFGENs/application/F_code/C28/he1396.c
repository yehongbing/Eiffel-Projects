/*
 * Code for class HEAP_PRIORITY_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "he1396.h"
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

/* {HEAP_PRIORITY_QUEUE}.make */
void F490_5158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {754,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,arg1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.item */
EIF_REFERENCE F490_5159 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	RTLE;
	return (EIF_REFERENCE) F490_5182(Current, ((EIF_INTEGER_32) 1L));
}

/* {HEAP_PRIORITY_QUEUE}.has */
EIF_BOOLEAN F490_5160 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5669[Dtype(loc3)-754])(loc3);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && (EIF_BOOLEAN)(arg1 != NULL))) {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(loc3)-584])(RTCV(loc3), loc1);
			Result = (EIF_BOOLEAN) RTEQ(tr1, arg1);
			loc1++;
		}
	} else {
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(loc3)-584])(RTCV(loc3), loc1);
			Result = (EIF_BOOLEAN) RTCEQ(tr1, arg1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.count */
EIF_INTEGER_32 F490_5161 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5669[Dtype(tr1)-754])(tr1);
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.capacity */
EIF_INTEGER_32 F490_5162 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5670[Dtype(tr1)-754])(tr1);
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.extendible */
EIF_BOOLEAN F490_5165 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F460_5148(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.prunable */
EIF_BOOLEAN F490_5167 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {HEAP_PRIORITY_QUEUE}.is_equal */
EIF_BOOLEAN F490_5168 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_1_0_);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2)) {
			ti4_1 = F490_5161(RTCV(arg1));
			tb1 = (EIF_BOOLEAN)(F490_5161(Current) == ti4_1);
		}
		if (tb1) {
			ti4_1 = F490_5161(Current);
			loc1 = F490_5179(Current, ti4_1);
			ti4_1 = F490_5161(Current);
			loc2 = F490_5179(RTCV(arg1), ti4_1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !Result) {
					tb2 = F407_5127(RTCV(loc1));
					tb1 = tb2;
				}
				if (tb1) break;
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					tr1 = F490_5159(RTCV(loc1));
					tr2 = F490_5159(RTCV(loc2));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				} else {
					tr1 = F490_5159(RTCV(loc1));
					tr2 = F490_5159(RTCV(loc2));
					Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				}
				F490_5173(RTCV(loc1));
				F490_5173(RTCV(loc2));
			}
		}
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.put */
void F490_5170 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	
	RTGC;
	loc1 = F490_5161(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 1L))) {
			tr1 = F490_5182(Current, (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L)));
			tr2 = RTCCL(tr1);
			tr3 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) !F490_5186(Current, tr2, tr3);
		}
		if (tb1) break;
		tr1 = F490_5182(Current, (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L)));
		tr2 = RTCCL(tr1);
		F490_5184(Current, tr2, loc1);
		loc1 /= ((EIF_INTEGER_32) 2L);
	}
	tr1 = RTCCL(arg1);
	F490_5184(Current, tr1, loc1);
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.extend */
void F490_5171 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F490_5170(Current, tr1);
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.copy */
void F490_5172 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.remove */
void F490_5173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	
	RTGC;
	loc4 = F490_5161(Current);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = F490_5182(Current, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
		for (;;) {
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))))) break;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc2 < loc4)) {
				tr1 = F490_5182(Current, loc2);
				tr2 = RTCCL(tr1);
				tr3 = F490_5182(Current, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				tr4 = RTCCL(tr3);
				tb1 = F490_5186(Current, tr2, tr4);
			}
			if (tb1) {
				loc2++;
			}
			tr1 = RTCCL(loc3);
			tr2 = F490_5182(Current, loc2);
			tr3 = RTCCL(tr2);
			loc5 = F490_5186(Current, tr1, tr3);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc5;
			if ((EIF_BOOLEAN) !loc5) {
				tr1 = F490_5182(Current, loc2);
				tr2 = RTCCL(tr1);
				F490_5183(Current, tr2, loc1);
				loc1 = (EIF_INTEGER_32) loc2;
			}
		}
		tr1 = RTCCL(loc3);
		F490_5183(Current, tr1, loc1);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5699[Dtype(tr1)-754])(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.prune */
void F490_5174 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,arg1);
	RTLR(5,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {700,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F490_5161(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5460[Dtype(tr1)-700])(RTCV(tr1), ti4_1);
	loc3 = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = F490_5161(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc4 = F490_5182(Current, loc1);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && RTEQ(loc4, arg1))) {
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc3)-404])(RTCV(loc3), tr1);
			}
			loc1++;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = F490_5161(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc4 = F490_5182(Current, loc1);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && RTCEQ(loc4, arg1))) {
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc3)-404])(RTCV(loc3), tr1);
			}
			loc1++;
		}
	}
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[Dtype(loc3)-489])(RTCV(loc3));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (F490_5161(Current) - ((EIF_INTEGER_32) 1L)))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc3)-303])(RTCV(loc3));
		F490_5175(Current);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4176[Dtype(loc3)-303])(RTCV(loc3));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(loc3)-404])(RTCV(loc3));
			tr2 = RTCCL(tr1);
			F490_5170(Current, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc3)-303])(RTCV(loc3));
		}
	}
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.wipe_out */
void F490_5175 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R5705[Dtype(tr1)-754])(RTCV(tr1));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.linear_representation */
EIF_REFERENCE F490_5178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {700,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F490_5161(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5460[Dtype(tr1)-700])(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = F407_5127(RTCV(loc1));
		if (tb1) break;
		tr1 = F490_5159(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), tr2);
		F490_5173(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.duplicate */
EIF_REFERENCE F490_5179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {700,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,dftype,243);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5460[Dtype(tr1)-700])(RTCV(tr1), arg1);
	loc2 = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > arg1)) break;
		tr1 = F490_5159(RTCV(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc2)-404])(RTCV(loc2), tr2);
		F490_5173(RTCV(loc1));
		loc3++;
	}
	tr1 = RTLNSMART(dftype);
	F490_5158(RTCV(tr1), arg1);
	Result = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc2)-303])(RTCV(loc2));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4176[Dtype(loc2)-303])(RTCV(loc2));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(loc2)-404])(RTCV(loc2));
		tr2 = RTCCL(tr1);
		F490_5170(RTCV(Result), tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc2)-303])(RTCV(loc2));
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.area */
EIF_REFERENCE F490_5181 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {HEAP_PRIORITY_QUEUE}.i_th */
EIF_REFERENCE F490_5182 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(tr1)-584])(RTCV(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.put_i_th */
void F490_5183 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5685[Dtype(tr1)-754])(RTCV(tr1), tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.force_i_th */
void F490_5184 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5686[Dtype(tr1)-754])(RTCV(tr1), tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.replace */
void F490_5185 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {HEAP_PRIORITY_QUEUE}.safe_less_than */
EIF_BOOLEAN F490_5186 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL))) {
		tr1 = RTCCL(arg2);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == NULL) && (EIF_BOOLEAN)(arg2 != NULL))) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1396 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
