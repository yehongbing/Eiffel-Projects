/*
 * Code for class EV_FONT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev668.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONT_I}.preferred_families */
EIF_REFERENCE F1034_13157 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_FONT_I}.set_values */
void F1034_13158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != arg5)) {
		F1034_13179(Current, arg5);
		F1035_13212(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_) != arg1)) {
		F1035_13189(Current, arg1);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_5_) != arg2)) {
		F1035_13191(Current, arg2);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_4_) != arg3)) {
		F1035_13192(Current, arg3);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_3_) != arg4)) {
		F1035_13193(Current, arg4);
	}
	RTLE;
}

/* {EV_FONT_I}.copy_font */
void F1034_13175 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F939_10927(RTCV(arg1));
	ti4_2 = F939_10929(RTCV(arg1));
	ti4_3 = F939_10930(RTCV(arg1));
	ti4_4 = F939_10931(RTCV(arg1));
	tr1 = F939_10934(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE)) R10217[Dtype(Current)-1033])(Current, ti4_1, ti4_2, ti4_3, ti4_4, tr1);
	RTLE;
}

/* {EV_FONT_I}.interface */
static EIF_REFERENCE F1034_13176_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1034_13176 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1034_13176_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_FONT_I}.copy_preferred_families */
void F1034_13179 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	F726_6721(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_4_);
	F726_6721(RTCV(tr1));
	F719_6691(RTCV(loc1));
	F719_6680(RTCV(loc1), arg1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	F726_6723(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_4_);
	F726_6723(RTCV(tr1));
	RTLE;
}

void EIF_Minit668 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
