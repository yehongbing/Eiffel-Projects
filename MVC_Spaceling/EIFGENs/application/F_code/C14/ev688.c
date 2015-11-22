/*
 * Code for class EV_COLOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev688.h"
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

/* {EV_COLOR_IMP}.make */
void F1051_13689 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (RTOSCF(13685,F1050_13685,(Current)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_COLOR_IMP}.red */
EIF_REAL_32 F1051_13690 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_2_);
}


/* {EV_COLOR_IMP}.green */
EIF_REAL_32 F1051_13691 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_1_);
}


/* {EV_COLOR_IMP}.blue */
EIF_REAL_32 F1051_13692 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_0_);
}


/* {EV_COLOR_IMP}.name */
EIF_REFERENCE F1051_13693 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_COLOR_IMP}.set_red */
void F1051_13694 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_2_) = (EIF_REAL_32) arg1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 65535L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	
	ti4_1 = F846_8809(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.set_green */
void F1051_13695 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_1_) = (EIF_REAL_32) arg1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 65535L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	
	ti4_1 = F846_8809(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.set_blue */
void F1051_13696 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_0_) = (EIF_REAL_32) arg1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 65535L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	
	ti4_1 = F846_8809(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.rgb_24_bit */
EIF_INTEGER_32 F1051_13698 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F1051_13700(Current);
	ti4_1 = F1051_13701(Current);
	ti4_2 = F1051_13702(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 65536L)) + (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 256L))) + ti4_2);
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.red_8_bit */
EIF_INTEGER_32 F1051_13700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_2_);
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.green_8_bit */
EIF_INTEGER_32 F1051_13701 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_1_);
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.blue_8_bit */
EIF_INTEGER_32 F1051_13702 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_0_);
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.set_red_with_8_bit */
void F1051_13703 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1051_13709(Current, (EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 257L)));
}

/* {EV_COLOR_IMP}.set_green_with_8_bit */
void F1051_13704 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1051_13710(Current, (EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 257L)));
}

/* {EV_COLOR_IMP}.set_blue_with_8_bit */
void F1051_13705 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1051_13711(Current, (EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 257L)));
}

/* {EV_COLOR_IMP}.red_16_bit */
EIF_INTEGER_32 F1051_13706 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_2_);
}


/* {EV_COLOR_IMP}.green_16_bit */
EIF_INTEGER_32 F1051_13707 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_);
}


/* {EV_COLOR_IMP}.blue_16_bit */
EIF_INTEGER_32 F1051_13708 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
}


/* {EV_COLOR_IMP}.set_red_with_16_bit */
void F1051_13709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_INTEGER_32) arg1;
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 65535L))));
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_2_) = (EIF_REAL_32) tr4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.set_green_with_16_bit */
void F1051_13710 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_INTEGER_32) arg1;
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 65535L))));
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_1_) = (EIF_REAL_32) tr4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.set_blue_with_16_bit */
void F1051_13711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) arg1;
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 65535L))));
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_0_) = (EIF_REAL_32) tr4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.set_with_other */
void F1051_13712 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(1050), loc1);
	RTCT0("imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_2_1_0_2_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_2_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_2_1_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	tr4_1 = *(EIF_REAL_32 *)(RTCV(loc1)+ _R32OFF_2_1_0_3_2_);
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_2_) = (EIF_REAL_32) tr4_1;
	tr4_1 = *(EIF_REAL_32 *)(RTCV(loc1)+ _R32OFF_2_1_0_3_1_);
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_1_) = (EIF_REAL_32) tr4_1;
	tr4_1 = *(EIF_REAL_32 *)(RTCV(loc1)+ _R32OFF_2_1_0_3_0_);
	*(EIF_REAL_32 *)(Current+ _R32OFF_2_1_0_3_0_) = (EIF_REAL_32) tr4_1;
	RTLE;
}

/* {EV_COLOR_IMP}.delta */
EIF_REAL_32 F1051_13713 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_32) 1.0) /  (EIF_REAL_64) ((EIF_REAL_32) 255.0));
}

/* {EV_COLOR_IMP}.destroy */
void F1051_13714 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

/* {EV_COLOR_IMP}.interface */
static EIF_REFERENCE F1051_13715_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1051_13715 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1051_13715_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit688 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
