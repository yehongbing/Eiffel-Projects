/*
 * Code for class ROUTINE [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro948.h"
#include "eif_gen_conf.h"
#include "eif_built_in.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROUTINE}.operands */
EIF_REFERENCE F915_9685 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F915_9687 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O7688[dtype-914]);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O7692[dtype-914]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = eif_bit_xor(Result,ti4_1);
	RTLE;
	return Result;
}

/* {ROUTINE}.empty_operands */
EIF_REFERENCE F915_9690 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_gen_param_id(Dftype(Current), 2)));
	F1_29(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F915_9692 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tb6 = RTEQ(*(EIF_REFERENCE *)(Current), tr1);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_2_);
		tb5 = RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_2_), tr1);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O7688[Dtype(arg1)-914]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O7688[dtype-914]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O7692[Dtype(arg1)-914]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O7692[dtype-914]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O7694[Dtype(arg1)-914]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O7694[dtype-914]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O7691[Dtype(arg1)-914]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O7691[dtype-914]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O7689[Dtype(arg1)-914]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O7689[dtype-914]) == tp1);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.valid_operands */
EIF_BOOLEAN F915_9693 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc3);
	RTLR(4,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O7679[dtype-914]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg1);
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O7679[dtype-914]))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc4 = (EIF_REFERENCE) eif_gen_typecode_str((EIF_REFERENCE) Current);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O7679[dtype-914])) || (EIF_BOOLEAN) !Result)) break;
				tu1_1 = F842_8619(RTCV(arg1), loc1);
				loc2 = (EIF_INTEGER_32) tu1_1;
				tc1 = F923_10400(RTCV(loc4), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == ti4_1);
				tb1 = '\0';
				if (Result) {
					ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 0U);
					tb1 = (EIF_BOOLEAN)(loc2 == ti4_1);
				}
				if (tb1) {
					loc3 = F842_8513(RTCV(arg1), loc1);
					loc5 = F915_9717(Current, loc1);
					if (F499_5346(Current, loc5)) {
						Result = '\0';
						if ((EIF_BOOLEAN)(loc3 != NULL)) {
							tr1 = RTCCL(loc3);
							ti4_1 = F915_9718(Current, tr1);
							Result = F499_5336(Current, ti4_1, loc5);
						}
					} else {
						Result = '\01';
						if (!(EIF_BOOLEAN)(loc3 == NULL)) {
							tr1 = RTCCL(loc3);
							ti4_1 = F915_9718(Current, tr1);
							Result = F499_5336(Current, ti4_1, loc5);
						}
					}
				}
				loc1++;
			}
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O7678[dtype-914])) && (EIF_BOOLEAN)(arg1 != NULL))) {
		tr1 = F842_8513(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.copy */
void F915_9699 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {ROUTINE}.closed_operands */
EIF_REFERENCE F915_9704 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ROUTINE}.open_map */
EIF_REFERENCE F915_9708 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ROUTINE}.set_rout_disp */
void F915_9713 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	
	
	F915_9715(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

/* {ROUTINE}.set_rout_disp_final */
void F915_9714 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	
	RTGC;
	*(EIF_POINTER *)(Current + O7688[dtype-914]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O7691[dtype-914]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O7689[dtype-914]) = (EIF_POINTER) arg3;
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	*(EIF_BOOLEAN *)(Current + O7678[dtype-914]) = (EIF_BOOLEAN) arg5;
	*(EIF_INTEGER_32 *)(Current + O7679[dtype-914]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {ROUTINE}.set_rout_disp_int */
void F915_9715 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLR(2,arg9);
	
	RTGC;
	*(EIF_POINTER *)(Current + O7688[dtype-914]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O7691[dtype-914]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O7689[dtype-914]) = (EIF_POINTER) arg3;
	*(EIF_INTEGER_32 *)(Current + O7692[dtype-914]) = (EIF_INTEGER_32) arg4;
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg5;
	*(EIF_BOOLEAN *)(Current + O7693[dtype-914]) = (EIF_BOOLEAN) arg6;
	*(EIF_BOOLEAN *)(Current + O7678[dtype-914]) = (EIF_BOOLEAN) arg7;
	*(EIF_INTEGER_32 *)(Current + O7694[dtype-914]) = (EIF_INTEGER_32) arg8;
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg9;
	*(EIF_INTEGER_32 *)(Current + O7679[dtype-914]) = (EIF_INTEGER_32) arg10;
	RTLE;
}

/* {ROUTINE}.open_types */
EIF_REFERENCE F915_9716 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ROUTINE}.open_operand_type */
EIF_INTEGER_32 F915_9717 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {669,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O7679[Dtype(Current)-914]);
		F670_6235(RTCV(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 1L), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	Result = F670_6240(RTCV(loc1), arg1);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		tr1 = RTLNTY(eif_gen_param_id(dftype, 2));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R6918[Dtype(tr1)-795])(tr1, arg1);
		Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6919[Dtype(tr1)-795])(tr1);
		F670_6260(RTCV(loc1), Result, arg1);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.type_id_of */
EIF_INTEGER_32 F915_9718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1_5(RTCV(arg1));
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6919[Dtype(tr1)-795])(tr1);
	RTLE;
	return Result;
}

/* {ROUTINE}.eif_gen_typecode_str */
EIF_REFERENCE F915_9719 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	Result = (EIF_REFERENCE) eif_gen_typecode_str((EIF_REFERENCE) arg1);
	
	RTLE;
	return Result;
}

void EIF_Minit948 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
