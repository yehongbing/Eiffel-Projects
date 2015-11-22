/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is138.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F96_3055 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(3074,F96_3074,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F96_3056 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tb1 = F117_3324(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F96_3055(Current);
			F117_3328(RTCV(arg1), tr1);
		}
		F96_3067(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F212_4145(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3177[Dtype(arg1)-116])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F96_3062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(3069,F96_3069,(Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F695_6438(RTCV(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F96_3064 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY(141);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY(135);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY(150);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY(151);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY(120);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY(154);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY(153);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY(143);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY(144);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY(152);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY(149);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY(124);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY(130);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY(127);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY(135);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY(126);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY(146);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY(134);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY(142);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY(128);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY(139);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY(123);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY(138);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY(117);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY(130);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY(147);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY(139);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY(122);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY(153);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY(131);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY(137);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F96_3065 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNS(141, 141, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(3075,F96_3075,(Current))));
			F136_3384(RTCV(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			tr1 = RTLNS(150, 150, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNS(151, 151, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNS(120, 120, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNS(154, 154, _OBJSIZ_5_2_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNS(153, 153, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNS(143, 143, _OBJSIZ_7_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNS(144, 144, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNS(152, 152, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNS(149, 149, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNS(124, 124, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNS(130, 130, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F131_3376(RTCV(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			tr1 = RTLNS(127, 127, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(3075,F96_3075,(Current))));
			F136_3384(RTCV(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			tr1 = RTLNS(126, 126, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNS(146, 146, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNS(134, 134, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNS(142, 142, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNS(128, 128, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNS(139, 139, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F140_3394(RTCV(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			tr1 = RTLNS(123, 123, _OBJSIZ_5_1_0_2_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNS(138, 138, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNS(117, 117, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNS(130, 130, _OBJSIZ_5_1_0_2_0_0_0_0_);
			loc1 = (EIF_REFERENCE) tr1;
			F131_3376(RTCV(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			tr1 = RTLNS(147, 147, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNS(139, 139, _OBJSIZ_5_1_0_3_0_0_0_0_);
			loc2 = (EIF_REFERENCE) tr1;
			F140_3394(RTCV(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			tr1 = RTLNS(122, 122, _OBJSIZ_6_1_0_3_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNS(153, 153, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNS(131, 131, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNS(137, 137, _OBJSIZ_5_1_0_1_0_0_0_0_);
			Result = (EIF_REFERENCE) tr1;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F96_3066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOSCF(3073,F96_3073,(Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F96_3067 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTOSCF(3074,F96_3074,(Current));
	F234_4165(RTCV(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F96_3068 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	
	RTGC;
	tr1 = RTOSCF(3073,F96_3073,(Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,11,841,874,874,874,922,922,922,922,922,922,874,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F234_4165(RTCV(tr1), tr2);
	if (arg2) {
		tr1 = F96_3076(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F96_3067(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F96_3055(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F117_3335(RTCV(loc2), arg10);
		F117_3329(RTCV(loc2), arg6);
		F117_3333(RTCV(loc2), arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F96_3069_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3069);
#define Result RTOSR(3069)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {694,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 694, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F695_6432(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3069);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3069 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3069,F96_3069_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F96_3070_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3070);
#define Result RTOSR(3070)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {694,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 694, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F695_6432(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(141);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F695_6477(RTCV(Result), loc1, loc1);
	RTOSE (3070);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3070 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3070,F96_3070_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F96_3071_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3071);
#define Result RTOSR(3071)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {694,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 694, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F695_6432(RTCV(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY(143);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F695_6477(RTCV(Result), loc1, loc1);
	tr1 = RTLNTY(131);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F695_6477(RTCV(Result), loc1, loc1);
	RTOSE (3071);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3071 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3071,F96_3071_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F96_3072 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F96_3064(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F96_3062(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F96_3073_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3073);
#define Result RTOSR(3073)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {233,0xFFF9,11,841,874,874,874,922,922,922,922,922,922,874,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 233, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F234_4165(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3073);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3073 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3073,F96_3073_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F96_3074_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3074);
#define Result RTOSR(3074)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {233,116,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 233, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F234_4165(RTCV(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3074);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3074 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3074,F96_3074_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F96_3075_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTEV;
	RTGC;
	RTOSP (3075);
#define Result RTOSR(3075)
	RTOC_NEW(Result);
	tr1 = RTLNS(135, 135, _OBJSIZ_5_1_0_2_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10330(RTCV(tr1), ((EIF_INTEGER_32) 4096L));
	F117_3335(RTCV(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {233,135,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 233, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F234_4165(RTCV(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3075);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_3075 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3075,F96_3075_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F96_3076 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	
	RTGC;
	tb1 = '\0';
	tr1 = F96_3066(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(RTCV(loc2),1);
		tr1 = F96_3065(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_non_attached_type(143),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F96_3055(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F117_3328(RTCV(loc3), loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F144_3404(RTCV(loc4), tr1);
			tr1 = eif_boxed_item(loc2,8);
			F144_3405(RTCV(loc4), tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_non_attached_type(131),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F96_3055(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F117_3328(RTCV(loc3), loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_non_attached_type(154),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(RTCV(loc2),11);
					F155_3423(RTCV(loc6), tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_non_attached_type(124),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(RTCV(loc2),2);
						F125_3367(RTCV(loc7), ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_non_attached_type(139),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(RTCV(loc2),3);
							F140_3393(RTCV(loc8), ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_non_attached_type(123),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(RTCV(loc2),3);
								F124_3363(RTCV(loc9), ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_non_attached_type(122),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(RTCV(loc2),2);
									F123_3345(RTCV(loc10), ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F123_3350(RTCV(loc10), tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F96_3055(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F117_3328(RTCV(loc3), loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F117_3335(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,4);
		F117_3321(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,5);
		F117_3329(RTCV(loc3), tr1);
		tr1 = eif_boxed_item(loc2,6);
		F117_3333(RTCV(loc3), tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F96_3077 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	
	RTGC;
	tb1 = F117_3324(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F117_3314(RTCV(arg1));
			tr2 = F96_3055(Current);
			F117_3328(RTCV(tr1), tr2);
		}
		F96_3067(Current, arg1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F212_4145(RTCV(loc3));
		} else {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3177[Dtype(arg1)-116])(RTCV(arg1));
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F96_3078 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = RTOSCF(3069,F96_3069,(Current));
	loc1 = RTOSCF(3070,F96_3070,(Current));
	loc1 = RTOSCF(3071,F96_3071,(Current));
	loc2 = RTOSCF(3073,F96_3073,(Current));
	loc3 = RTOSCF(3074,F96_3074,(Current));
	loc4 = RTOSCF(3075,F96_3075,(Current));
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F96_3079 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(3075,F96_3075,(Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F117_3321(RTCV(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F96_3080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (Current, arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F96_3081 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit138 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
