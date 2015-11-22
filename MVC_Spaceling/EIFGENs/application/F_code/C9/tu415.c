/*
 * Code for class TUPLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tu415.h"
#include "eif_built_in.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TUPLE}.item */
EIF_REFERENCE F842_8513 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_item_type((Current), (arg1))) {
		case 1U:
			Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (arg1)));
			break;
		case 2U:
			Result = RTLNS(853, 853, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (EIF_CHARACTER_8) eif_character_8_item((Current), (arg1));
			break;
		case 14U:
			Result = RTLNS(850, 850, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (EIF_CHARACTER_32) eif_character_32_item((Current), (arg1));
			break;
		case 3U:
			Result = RTLNS(862, 862, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (EIF_REAL_64) eif_real_64_item((Current), (arg1));
			break;
		case 4U:
			Result = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (EIF_REAL_32) eif_real_32_item((Current), (arg1));
			break;
		case 5U:
			Result = RTLNS(913, 913, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (EIF_POINTER) eif_pointer_item((Current), (arg1));
			break;
		case 10U:
			Result = RTLNS(865, 865, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (EIF_NATURAL_8) eif_natural_8_item((Current), (arg1));
			break;
		case 11U:
			Result = RTLNS(871, 871, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (EIF_NATURAL_16) eif_natural_16_item((Current), (arg1));
			break;
		case 12U:
			Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (EIF_NATURAL_32) eif_natural_32_item((Current), (arg1));
			break;
		case 13U:
			Result = RTLNS(880, 880, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (EIF_NATURAL_64) eif_natural_64_item((Current), (arg1));
			break;
		case 6U:
			Result = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (EIF_INTEGER_8) eif_integer_8_item((Current), (arg1));
			break;
		case 7U:
			Result = RTLNS(877, 877, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (EIF_INTEGER_16) eif_integer_16_item((Current), (arg1));
			break;
		case 8U:
			Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (EIF_INTEGER_32) eif_integer_32_item((Current), (arg1));
			break;
		case 9U:
			Result = RTLNS(856, 856, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (EIF_INTEGER_64) eif_integer_64_item((Current), (arg1));
			break;
		case 0U:
			Result = (EIF_REFERENCE) eif_reference_item((Current), (arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {TUPLE}.double_item */
EIF_REAL_64 F842_8522 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) (EIF_REAL_64) eif_real_64_item((Current), (arg1));
}

/* {TUPLE}.integer_item */
EIF_INTEGER_32 F842_8529 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_integer_32_item((Current), (arg1));
}

/* {TUPLE}.integer_32_item */
EIF_INTEGER_32 F842_8530 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_integer_32_item((Current), (arg1));
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F842_8535 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (((EIF_INTEGER_32) 0L))));
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F842_8536 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc3 = F842_8535(Current);
	tb1 = F842_8535(RTCV(arg1));
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		if (loc3) {
			loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg1);
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					tr1 = F842_8513(Current, loc1);
					tr2 = F842_8513(RTCV(arg1), loc1);
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					loc1++;
				}
			}
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) eif_builtin_ANY_is_equal (Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F842_8539 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		switch ((EIF_NATURAL_8) eif_item_type((Current), (loc1))) {
			case 1U:
				tb1 = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((Current), (loc1)));
				loc3 = (tb1 ? 1L : 0L);
				break;
			case 2U:
				tc1 = (EIF_CHARACTER_8) eif_character_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (tc1);
				break;
			case 14U:
				tw1 = (EIF_CHARACTER_32) eif_character_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (tw1);
				break;
			case 3U:
				tr8_1 = (EIF_REAL_64) eif_real_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				break;
			case 4U:
				tr4_1 = (EIF_REAL_32) eif_real_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				break;
			case 5U:
				tp1 = (EIF_POINTER) eif_pointer_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				break;
			case 10U:
				tu1_1 = (EIF_NATURAL_8) eif_natural_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				break;
			case 11U:
				tu2_1 = (EIF_NATURAL_16) eif_natural_16_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				break;
			case 12U:
				tu4_1 = (EIF_NATURAL_32) eif_natural_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				break;
			case 13U:
				tu8_1 = (EIF_NATURAL_64) eif_natural_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				break;
			case 6U:
				ti1_1 = (EIF_INTEGER_8) eif_integer_8_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				break;
			case 7U:
				ti2_1 = (EIF_INTEGER_16) eif_integer_16_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				break;
			case 8U:
				ti4_1 = (EIF_INTEGER_32) eif_integer_32_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				break;
			case 9U:
				ti8_1 = (EIF_INTEGER_64) eif_integer_64_item((Current), (loc1));
				loc3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				break;
			case 0U:
				tr1 = (EIF_REFERENCE) eif_reference_item((Current), (loc1));
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_non_attached_type(793),loc4);
				if (EIF_TEST(loc4)) {
					loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6859[Dtype(loc4)-794])(RTCV(loc4));
				} else {
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		tr1 = RTOSCF(8640,F842_8640,(Current));
		ti4_1 = F406_5115(RTCV(tr1), loc1);
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		loc1++;
	}
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return (EIF_INTEGER_32) Result;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F842_8540 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current));
	}
	RTLE;
	return Result;
}

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F842_8541 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		if ((EIF_BOOLEAN)((EIF_NATURAL_8) eif_item_type((Current), (arg2)) == ((EIF_NATURAL_8) 0U))) {
			tr1 = F1_5(Current);
			tr1 = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (tr1, arg2);
			Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6923[Dtype(tr1)-795])(tr1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		}
	} else {
		switch ((EIF_NATURAL_8) eif_item_type((Current), (arg2))) {
			case 1U:
				loc2 = RTCCL(arg1);
				loc2 = RTRV(eif_non_attached_type(857),loc2);
				Result = (EIF_BOOLEAN) EIF_TEST(loc2);
				break;
			case 2U:
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_non_attached_type(851),loc3);
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 14U:
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_non_attached_type(848),loc4);
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 3U:
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_non_attached_type(860),loc5);
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 4U:
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_non_attached_type(845),loc6);
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 5U:
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_non_attached_type(881),loc7);
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 10U:
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_non_attached_type(863),loc8);
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 11U:
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_non_attached_type(869),loc9);
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 12U:
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_non_attached_type(866),loc10);
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 13U:
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_non_attached_type(878),loc11);
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 6U:
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_non_attached_type(842),loc12);
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 7U:
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_non_attached_type(875),loc13);
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 8U:
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_non_attached_type(872),loc14);
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 9U:
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_non_attached_type(854),loc15);
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 0U:
				tr1 = RTLNS(498, 498, _OBJSIZ_0_0_0_0_0_0_0_0_);
				loc1 = (EIF_REFERENCE) tr1;
				tr1 = F1_5(RTCV(arg1));
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6919[Dtype(tr1)-795])(tr1);
				tr1 = F1_5(Current);
				tr1 = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (tr1, arg2);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6919[Dtype(tr1)-795])(tr1);
				Result = F499_5336(RTCV(loc1), ti4_1, ti4_2);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F842_8542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
	return Result;
}

/* {TUPLE}.upper */
EIF_INTEGER_32 F842_8544 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_builtin_TUPLE_count (Current);
}

/* {TUPLE}.index_set */
EIF_REFERENCE F842_8546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTLNS(582, 582, _OBJSIZ_0_3_0_2_0_0_0_0_);
	ti4_1 = F842_8544(Current);
	F583_5709(RTCV(tr1), ((EIF_INTEGER_32) 1L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TUPLE}.put */
void F842_8547 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	switch ((EIF_NATURAL_8) eif_item_type((Current), (arg2))) {
		case 1U:
			eif_put_boolean_item_with_object((Current), (arg2), (arg1));
			break;
		case 2U:
			eif_put_character_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 14U:
			eif_put_character_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 3U:
			eif_put_real_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 4U:
			eif_put_real_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 5U:
			eif_put_pointer_item_with_object((Current), (arg2), (arg1));
			break;
		case 10U:
			eif_put_natural_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 11U:
			eif_put_natural_16_item_with_object((Current), (arg2), (arg1));
			break;
		case 12U:
			eif_put_natural_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 13U:
			eif_put_natural_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 6U:
			eif_put_integer_8_item_with_object((Current), (arg2), (arg1));
			break;
		case 7U:
			eif_put_integer_16_item_with_object((Current), (arg2), (arg1));
			break;
		case 8U:
			eif_put_integer_32_item_with_object((Current), (arg2), (arg1));
			break;
		case 9U:
			eif_put_integer_64_item_with_object((Current), (arg2), (arg1));
			break;
		case 0U:
			eif_put_reference_item_with_object((Current), (arg2), (arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
}

/* {TUPLE}.put_integer */
void F842_8563 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	eif_put_integer_32_item((Current), (arg2), (arg1));
}

/* {TUPLE}.correct_mismatch */
void F842_8618 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tr1 = RTOSCF(6366,F690_6366,(Current));
	tr2 = RTOSCF(8638,F842_8638,(Current));
	tr1 = F692_6436(RTCV(tr1), tr2);
	loc4 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {754,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(eif_non_attached_type(typres0),loc4);
	}
	if (EIF_TEST(loc4)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5669[Dtype(loc4)-754])(loc4);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(loc4)-584])(RTCV(loc4), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			tr1 = RTCCL(loc3);
			if (F842_8541(Current, tr1, loc1)) {
				tr1 = RTCCL(loc3);
				F842_8547(Current, tr1, loc1);
			} else {
				F690_6365(Current);
			}
			loc1++;
		}
	} else {
		F690_6365(Current);
	}
	RTLE;
}

/* {TUPLE}.item_code */
EIF_NATURAL_8 F842_8619 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_NATURAL_8) (EIF_NATURAL_8) eif_item_type((Current), (arg1));
}

/* {TUPLE}.area_name */

EIF_REFERENCE F842_8638 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (8638,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F842_8640_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8640);
#define Result RTOSR(8640)
	RTOC_NEW(Result);
	tr1 = RTLNS(405, 405, _OBJSIZ_0_1_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8640);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F842_8640 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8640,F842_8640_body,(Current));
}

/* {TUPLE}.eif_item_type */
EIF_NATURAL_8 F842_8641 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_item_type((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_boolean_item */
EIF_BOOLEAN F842_8642 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_boolean_item((arg1), (arg2)));
	return Result;
}

/* {TUPLE}.eif_character_8_item */
EIF_CHARACTER_8 F842_8643 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	Result = (EIF_CHARACTER_8) eif_character_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_character_32_item */
EIF_CHARACTER_32 F842_8644 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	
	
	Result = (EIF_CHARACTER_32) eif_character_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_real_64_item */
EIF_REAL_64 F842_8645 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	Result = (EIF_REAL_64) eif_real_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_real_32_item */
EIF_REAL_32 F842_8646 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	
	Result = (EIF_REAL_32) eif_real_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_pointer_item */
EIF_POINTER F842_8647 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_pointer_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_8_item */
EIF_NATURAL_8 F842_8648 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	
	
	Result = (EIF_NATURAL_8) eif_natural_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_16_item */
EIF_NATURAL_16 F842_8649 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	
	Result = (EIF_NATURAL_16) eif_natural_16_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_32_item */
EIF_NATURAL_32 F842_8650 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) eif_natural_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_natural_64_item */
EIF_NATURAL_64 F842_8651 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	
	
	Result = (EIF_NATURAL_64) eif_natural_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_8_item */
EIF_INTEGER_8 F842_8652 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	
	Result = (EIF_INTEGER_8) eif_integer_8_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_16_item */
EIF_INTEGER_16 F842_8653 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	
	Result = (EIF_INTEGER_16) eif_integer_16_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_32_item */
EIF_INTEGER_32 F842_8654 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_integer_32_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_integer_64_item */
EIF_INTEGER_64 F842_8655 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	
	
	Result = (EIF_INTEGER_64) eif_integer_64_item((arg1), (arg2));
	return Result;
}

/* {TUPLE}.eif_reference_item */
EIF_REFERENCE F842_8656 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_reference_item((arg1), (arg2));
	RTLE;
	return Result;
}

/* {TUPLE}.eif_put_boolean_item_with_object */
void F842_8657 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_boolean_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_character_8_item_with_object */
void F842_8658 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_character_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_character_32_item_with_object */
void F842_8659 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_character_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_real_64_item_with_object */
void F842_8660 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_real_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_real_32_item_with_object */
void F842_8661 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_real_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_pointer_item_with_object */
void F842_8662 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_pointer_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_8_item_with_object */
void F842_8663 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_16_item_with_object */
void F842_8664 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_16_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_32_item_with_object */
void F842_8665 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_natural_64_item_with_object */
void F842_8666 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_natural_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_8_item_with_object */
void F842_8667 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_8_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_16_item_with_object */
void F842_8668 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_16_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_32_item_with_object */
void F842_8669 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_32_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_64_item_with_object */
void F842_8670 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_integer_64_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_reference_item_with_object */
void F842_8671 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_put_reference_item_with_object((arg1), (arg2), (arg3));
}

/* {TUPLE}.eif_put_integer_32_item */
void F842_8684 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	eif_put_integer_32_item((arg1), (arg2), (arg3));
}

void EIF_Minit415 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
