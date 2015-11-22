/*
 * Code for class EV_CHARACTER_FORMAT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev678.h"
#include "eif_plug.h"
#include "eif_misc.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_I}.out */
EIF_REFERENCE F1044_13331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_8_);
	Result = c_outi(ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F920_10291(RTCV(tr1));
	F923_10435(RTCV(Result), tr1);
	tr1 = c_outi(F1045_13382(Current));
	F923_10435(RTCV(Result), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_6_);
	tr1 = c_outi(ti4_1);
	F923_10435(RTCV(Result), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_5_);
	tr1 = c_outi(ti4_1);
	F923_10435(RTCV(Result), tr1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	ti1_1 = (EIF_INTEGER_8) loc2;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	ti1_1 = (EIF_INTEGER_8) loc2;
	tr1 = c_outi(ti1_1);
	F923_10435(RTCV(Result), tr1);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	F923_10435(RTCV(Result), tr1);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	F923_10435(RTCV(Result), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_3_);
	tr1 = c_outi(ti4_1);
	F923_10435(RTCV(Result), tr1);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_I}.interface */
static EIF_REFERENCE F1044_13350_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1044_13350 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1044_13350_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit678 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
