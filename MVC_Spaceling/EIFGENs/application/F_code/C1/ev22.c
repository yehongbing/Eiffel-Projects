/*
 * Code for class EV_PIXEL_BUFFER_PIXEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev22.h"
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

/* {EV_PIXEL_BUFFER_PIXEL}.default_create */
void F27_858 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(503, 503, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows;
	if (tb1) {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_0_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_1_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_2_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_3_) = (EIF_NATURAL_8) tu1_1;
	} else {
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_0_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_1_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_2_) = (EIF_NATURAL_8) tu1_1;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_3_) = (EIF_NATURAL_8) tu1_1;
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_PIXEL}.sync_with_pixel_buffer_value */
void F27_871 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_0_) = (EIF_NATURAL_32) arg1;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_1_) = (EIF_NATURAL_32) arg2;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = F1053_13750(RTCV(tr1), arg1, arg2);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_2_) = (EIF_NATURAL_32) tu4_1;
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_PIXEL}.internal_pixel_buffer */
static EIF_REFERENCE F27_880_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F27_880 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(1051)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F27_880_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit22 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
