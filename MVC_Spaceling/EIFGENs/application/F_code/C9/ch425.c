/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch425.h"
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

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F852_8881 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F852_8882 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (F852_8881(Current))));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F852_8886 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tu4_1 = F852_8881(Current);
	tu4_2 = F852_8881(RTCV(arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F852_8887 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(RTCV(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.set_item */
void F852_8893 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F852_8894 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10330(RTCV(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	F923_10449(RTCV(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F852_8898 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.as_lower */
EIF_CHARACTER_8 F852_8901 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F852_8904(Current)) {
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
		ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
		Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
	} else {
		RTLE;
		return (EIF_CHARACTER_8) *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_upper */
EIF_BOOLEAN F852_8904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F852_8914(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_digit */
EIF_BOOLEAN F852_8906 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F852_8914(Current, ti4_1);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 4U));
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F852_8907 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F852_8914(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.is_printable */
EIF_BOOLEAN F852_8911 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = F852_8914(Current, ti4_1);
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_2 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 16U));
	tu1_2 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 128U));
	tu1_1 = eif_bit_and(tu1_1,tu1_2);
	tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_1 > tu1_2);
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F852_8914 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		tr1 = RTOSCF(8915,F852_8915,(Current));
		/* INLINED CODE (SPECIAL.item) */
		tu1_2 = *((EIF_NATURAL_8 *)tr1 + (arg1));
		/* END INLINED CODE */
		Result = tu1_2;
	}
	RTLE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F852_8915_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8915);
#define Result RTOSR(8915)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {756,865,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(eif_non_attached_type(typres0),0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	F757_6965(RTCV(Result), tu1_1);
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 8U),((EIF_NATURAL_8) 128U));
	F757_6965(RTCV(Result), tu1_1);
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 4U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 1U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	F757_6965(RTCV(Result), tu1_1);
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 2U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 16U));
	F757_6965(RTCV(Result), ((EIF_NATURAL_8) 32U));
	tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F757_6967(RTCV(Result), tu1_1, ((EIF_INTEGER_32) 128L), ((EIF_INTEGER_32) 255L));
	RTOSE (8915);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F852_8915 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8915,F852_8915_body,(Current));
}

void EIF_Minit425 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
