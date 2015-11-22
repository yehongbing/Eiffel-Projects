/*
 * Code for class EV_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev509.h"
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

/* {EV_COLOR}.make_with_8_bit_rgb */
void F938_10887 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F930_10736(Current);
	F938_10905(Current, arg1);
	F938_10906(Current, arg2);
	F938_10907(Current, arg3);
	RTLE;
}

/* {EV_COLOR}.make_with_rgb */
void F938_10888 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F930_10736(Current);
	F938_10896(Current, arg1);
	F938_10897(Current, arg2);
	F938_10898(Current, arg3);
	RTLE;
}

/* {EV_COLOR}.red */
EIF_REAL_32 F938_10889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REAL_32 *)(RTCV(tr1)+ _R32OFF_2_1_0_3_2_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.green */
EIF_REAL_32 F938_10890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REAL_32 *)(RTCV(tr1)+ _R32OFF_2_1_0_3_1_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.blue */
EIF_REAL_32 F938_10891 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REAL_32 *)(RTCV(tr1)+ _R32OFF_2_1_0_3_0_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.set_red */
void F938_10896 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13694(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_green */
void F938_10897 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13695(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_blue */
void F938_10898 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13696(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.rgb_24_bit */
EIF_INTEGER_32 F938_10899 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1051_13698(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.red_8_bit */
EIF_INTEGER_32 F938_10902 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1051_13700(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.green_8_bit */
EIF_INTEGER_32 F938_10903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1051_13701(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.blue_8_bit */
EIF_INTEGER_32 F938_10904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1051_13702(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.set_red_with_8_bit */
void F938_10905 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13703(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_green_with_8_bit */
void F938_10906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13704(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_blue_with_8_bit */
void F938_10907 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13705(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_rgb_with_16_bit */
void F938_10908 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F938_10912(Current, arg1);
	F938_10913(Current, arg2);
	F938_10914(Current, arg3);
	RTLE;
}

/* {EV_COLOR}.red_16_bit */
EIF_INTEGER_32 F938_10909 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_1_0_2_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.green_16_bit */
EIF_INTEGER_32 F938_10910 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_1_0_1_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.blue_16_bit */
EIF_INTEGER_32 F938_10911 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_1_0_0_);
	RTLE;
	return Result;
}

/* {EV_COLOR}.set_red_with_16_bit */
void F938_10912 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13709(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_green_with_16_bit */
void F938_10913 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13710(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_blue_with_16_bit */
void F938_10914 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1051_13711(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.out */
EIF_REFERENCE F938_10915 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(209, 209, _OBJSIZ_1_8_0_4_0_0_0_0_);
	F210_4046(RTCV(tr1), ((EIF_INTEGER_32) 6L), ((EIF_INTEGER_32) 4L));
	loc1 = (EIF_REFERENCE) tr1;
	tr4_1 = F938_10889(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr1 = F210_4064(RTCV(loc1), tr8_1);
	tr2 = RTMS_EX_H(" ",1,32);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr4_1 = F938_10890(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr2 = F210_4064(RTCV(loc1), tr8_1);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H(" ",1,32);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr4_1 = F938_10891(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr2 = F210_4064(RTCV(loc1), tr8_1);
	Result = F923_10437(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

/* {EV_COLOR}.is_equal */
EIF_BOOLEAN F938_10916 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = F938_10922(Current);
	Result = '\0';
	tb1 = '\0';
	tr4_1 = F938_10889(RTCV(arg1));
	tr4_2 = F938_10889(Current);
	tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
	if ((EIF_BOOLEAN) (tr4_1 < loc1)) {
		tr4_1 = F938_10890(RTCV(arg1));
		tr4_2 = F938_10890(Current);
		tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
		tb1 = (EIF_BOOLEAN) (tr4_1 < loc1);
	}
	if (tb1) {
		tr4_1 = F938_10891(RTCV(arg1));
		tr4_2 = F938_10891(Current);
		tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
		Result = (EIF_BOOLEAN) (tr4_1 < loc1);
	}
	RTLE;
	return Result;
}

/* {EV_COLOR}.copy */
void F938_10917 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F930_10736(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R10632[Dtype(tr1)-1049])(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.hash_code */
EIF_INTEGER_32 F938_10918 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F938_10899(Current);
}

/* {EV_COLOR}.delta */
EIF_REAL_32 F938_10922 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1051_13713(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.implementation */
EIF_REFERENCE F938_10923 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_COLOR}.create_interface_objects */
void F938_10924 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_COLOR}.create_implementation */
void F938_10925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1050, 1050, _OBJSIZ_2_1_0_3_3_0_0_0_);
	F1051_13689(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit509 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
