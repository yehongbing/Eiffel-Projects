/*
 * Code for class IMMUTABLE_STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im495.h"
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

/* {IMMUTABLE_STRING_8}.make_from_area_and_bounds */
void F928_10695 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {IMMUTABLE_STRING_8}.copy */
void F928_10697 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {IMMUTABLE_STRING_8}.character_32_item */
EIF_CHARACTER_32 F928_10700 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.code */
EIF_NATURAL_32 F928_10701 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_NATURAL_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.substring */
EIF_REFERENCE F928_10707 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		{
			static EIF_TYPE_INDEX typarr0[] = {761,853,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSP2(eif_non_attached_type(typres0),0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)loc1 + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)tr1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg1) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + loc2);
		/* END INLINED CODE */
		;
		F762_6965(RTCV(loc1), (EIF_CHARACTER_8) '\000');
		tr1 = RTLNSMART(dftype);
		F928_10695(RTCV(tr1), loc1, ((EIF_INTEGER_32) 0L), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) RTOSCF(10712,F928_10712,(Current));
	}/* NOTREACHED */
	
}

/* {IMMUTABLE_STRING_8}.is_empty */
EIF_BOOLEAN F928_10709 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {IMMUTABLE_STRING_8}.new_string */
EIF_REFERENCE F928_10711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(927, 927, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F921_10330(RTCV(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_8}.empty_string */
static EIF_REFERENCE F928_10712_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (10712);
#define Result RTOSR(10712)
	RTOC_NEW(Result);
	tr1 = RTLNS(927, 927, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F921_10330(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (10712);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F928_10712 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(10712,F928_10712_body,(Current));
}

/* {IMMUTABLE_STRING_8}.area_lower */
EIF_INTEGER_32 F928_10713 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


void EIF_Minit495 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
