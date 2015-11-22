/*
 * Code for class EV_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev510.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONT}.make_with_values */
void F939_10926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	F930_10736(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F939_10934(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE)) R10217[Dtype(tr1)-1033])(RTCV(tr1), arg1, arg2, arg3, arg4, tr2);
	RTLE;
}

/* {EV_FONT}.family */
EIF_INTEGER_32 F939_10927 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_3_2_0_7_);
	RTLE;
	return Result;
}

/* {EV_FONT}.weight */
EIF_INTEGER_32 F939_10929 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_3_2_0_5_);
	RTLE;
	return Result;
}

/* {EV_FONT}.shape */
EIF_INTEGER_32 F939_10930 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_3_2_0_4_);
	RTLE;
	return Result;
}

/* {EV_FONT}.height */
EIF_INTEGER_32 F939_10931 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_3_2_0_3_);
	RTLE;
	return Result;
}

/* {EV_FONT}.height_in_points */
EIF_INTEGER_32 F939_10932 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_3_2_0_2_);
	RTLE;
	return Result;
}

/* {EV_FONT}.preferred_families */
EIF_REFERENCE F939_10934 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	RTLE;
	return Result;
}

/* {EV_FONT}.set_family */
void F939_10935 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1035_13189(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.set_weight */
void F939_10936 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1035_13191(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.set_shape */
void F939_10937 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1035_13192(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.set_height_in_points */
void F939_10939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1035_13194(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.name */
EIF_REFERENCE F939_10940 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {EV_FONT}.string_width */
EIF_INTEGER_32 F939_10946 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1035_13206(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_FONT}.is_equal */
EIF_BOOLEAN F939_10951 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = F939_10927(RTCV(arg1));
	if ((EIF_BOOLEAN)(F939_10927(Current) == ti4_1)) {
		ti4_1 = F939_10929(RTCV(arg1));
		tb2 = (EIF_BOOLEAN)(F939_10929(Current) == ti4_1);
	}
	if (tb2) {
		ti4_1 = F939_10930(RTCV(arg1));
		tb1 = (EIF_BOOLEAN)(F939_10930(Current) == ti4_1);
	}
	if (tb1) {
		ti4_1 = F939_10932(RTCV(arg1));
		Result = (EIF_BOOLEAN)(F939_10932(Current) == ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_FONT}.copy */
void F939_10952 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1034_13175(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.implementation */
EIF_REFERENCE F939_10954 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_FONT}.create_interface_objects */
void F939_10955 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_FONT}.create_implementation */
void F939_10956 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1034, 1034, _OBJSIZ_3_2_0_8_0_1_0_0_);
	F1035_13181(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit510 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
