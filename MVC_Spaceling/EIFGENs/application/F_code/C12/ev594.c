/*
 * Code for class EV_PIXMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev594.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP}.make_with_pixel_buffer */
void F990_12487 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	F930_10736(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1202_17195(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_PIXMAP}.is_equal */
EIF_BOOLEAN F990_12489 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = F950_11091(Current);
		ti4_2 = F950_11092(RTCV(arg1));
		ti4_3 = F950_11091(RTCV(arg1));
		ti4_4 = F950_11092(Current);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 * ti4_2) == (EIF_INTEGER_32) (ti4_3 * ti4_4));
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAP}.set_size */
void F990_12499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1202_17204(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP}.stretch */
void F990_12501 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1202_17203(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP}.copy */
void F990_12505 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL)) {
		F930_10736(Current);
	}
	tb1 = F930_10740(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F1202_17208(RTCV(tr1), arg1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		ti4_1 = F1202_17199(RTCV(tr2));
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
		ti4_2 = F1202_17200(RTCV(tr2));
		F1202_17204(RTCV(tr1), ti4_1, ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F1202_17220(RTCV(tr1));
	}
	RTLE;
}

/* {EV_PIXMAP}.implementation */
EIF_REFERENCE F990_12506 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_PIXMAP}.create_implementation */
void F990_12507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1201, 1201, _OBJSIZ_46_11_12_3_0_6_0_0_);
	F1202_17193(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit594 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
