/*
 * Code for class EV_WINDOW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev765.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_I}.upper_bar */
EIF_REFERENCE F1115_15246 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11836[Dtype(Current) - 1114]);
}


/* {EV_WINDOW_I}.lower_bar */
EIF_REFERENCE F1115_15247 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11837[Dtype(Current) - 1114]);
}


/* {EV_WINDOW_I}.user_can_resize */
EIF_BOOLEAN F1115_15253 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O11843[Dtype(Current) - 1114]);
}


/* {EV_WINDOW_I}.has */
EIF_BOOLEAN F1115_15254 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11905[dtype-1118]) == arg1) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11837[dtype-1114]) == arg1)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11836[dtype-1114]) == arg1));
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_I}.accelerator_list */
EIF_REFERENCE F1115_15257 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11868[dtype-1114]) == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(724));
		F725_6709(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11868[dtype-1114]) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + O11868[dtype-1114]);
		F244_4452(RTCV(tr1));
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11868[dtype-1114]);
}

/* {EV_WINDOW_I}.lock_update */
void F1115_15270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	tr1 = F1030_13088(RTCV(tr1));
	F1048_13468(RTCV(tr1), *(EIF_REFERENCE *)(Current + O10149[Dtype(Current)-1028]));
	RTLE;
}

/* {EV_WINDOW_I}.unlock_update */
void F1115_15271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	tr1 = F1030_13088(RTCV(tr1));
	F1048_13468(RTCV(tr1), NULL);
	RTLE;
}

/* {EV_WINDOW_I}.disable_border */
void F1115_15273 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O11867[dtype-1114]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11865[dtype-1122])(Current);
	RTLE;
}

/* {EV_WINDOW_I}.accel_list */
EIF_REFERENCE F1115_15275 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11864[Dtype(Current) - 1114]);
}


/* {EV_WINDOW_I}.accelerators_internal */
static EIF_REFERENCE F1115_15279_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1115_15279 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O11868[Dtype(Current) - 1114]);
	if (!r) {
		if (RTAT(724)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1115_15279_body (Current));
			*(EIF_REFERENCE *)(Current + O11868[Dtype(Current) - 1114]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WINDOW_I}.update_for_pick_and_drop */
void F1115_15280 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1111_14826(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O11836[dtype-1114]);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	F1099_14723(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O11837[dtype-1114]);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	F1099_14723(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_WINDOW_I}.interface */
static EIF_REFERENCE F1115_15281_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1115_15281 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1115_15281_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit765 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
