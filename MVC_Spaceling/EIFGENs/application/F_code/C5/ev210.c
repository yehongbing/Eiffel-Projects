/*
 * Code for class EV_APPLICATION_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev210.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.post_launch_actions */
EIF_REFERENCE F163_3466 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = F164_3528(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.post_launch_actions_internal */
static EIF_REFERENCE F163_3468_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3468 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3468_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.idle_actions */
EIF_REFERENCE F163_3469 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
		tr1 = F164_3529(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_2_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.kamikaze_actions */
EIF_REFERENCE F163_3470 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.idle_actions_internal */
static EIF_REFERENCE F163_3472_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3472 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3472_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pick_actions */
EIF_REFERENCE F163_3473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL)) {
		tr1 = F164_3530(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_3_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pick_actions_internal */
static EIF_REFERENCE F163_3475_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3475 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if (!r) {
		if (RTAT(732)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3475_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.drop_actions */
EIF_REFERENCE F163_3476 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) == NULL)) {
		tr1 = F164_3531(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_4_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.drop_actions_internal */
static EIF_REFERENCE F163_3478_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3478 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if (!r) {
		if (RTAT(732)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3478_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.cancel_actions */
EIF_REFERENCE F163_3479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == NULL)) {
		tr1 = F164_3533(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_5_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.cancel_actions_internal */
static EIF_REFERENCE F163_3481_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3481 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if (!r) {
		if (RTAT(732)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3481_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pnd_motion_actions */
EIF_REFERENCE F163_3482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) == NULL)) {
		tr1 = F164_3532(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_6_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.file_drop_actions */
EIF_REFERENCE F163_3483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,614,925,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F726_6713(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_7_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.uncaught_exception_actions */
EIF_REFERENCE F163_3484 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,116,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F726_6713(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_8_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pnd_motion_actions_internal */
static EIF_REFERENCE F163_3486_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3486 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if (!r) {
		if (RTAT(736)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3486_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_6_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.file_drop_actions_internal */
static EIF_REFERENCE F163_3487_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3487 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,614,925,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3487_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_7_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.uncaught_exception_actions_internal */
static EIF_REFERENCE F163_3488_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3488 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,116,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3488_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_8_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_motion_actions_internal */
static EIF_REFERENCE F163_3491_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3491 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,3,841,967,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3491_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_9_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_button_press_actions */
EIF_REFERENCE F163_3492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_10_) == NULL)) {
		tr1 = F164_3535(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_10_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_button_press_actions_internal */
static EIF_REFERENCE F163_3494_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3494 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,4,841,967,874,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3494_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_10_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_double_press_actions */
EIF_REFERENCE F163_3495 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_11_) == NULL)) {
		tr1 = F164_3536(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_11_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_double_press_actions_internal */
static EIF_REFERENCE F163_3497_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3497 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,4,841,967,874,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3497_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_11_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_button_release_actions */
EIF_REFERENCE F163_3498 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_12_) == NULL)) {
		tr1 = F164_3537(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_12_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.pointer_button_release_actions_internal */
static EIF_REFERENCE F163_3500_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3500 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,4,841,967,874,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3500_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_12_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.mouse_wheel_actions */
EIF_REFERENCE F163_3501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_13_) == NULL)) {
		tr1 = F164_3538(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_13_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.mouse_wheel_actions_internal */
static EIF_REFERENCE F163_3503_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3503 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3503_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_13_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_press_actions */
EIF_REFERENCE F163_3504 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_14_) == NULL)) {
		tr1 = F164_3539(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_14_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_press_actions_internal */
static EIF_REFERENCE F163_3506_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3506 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,1205,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3506_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_14_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_press_string_actions */
EIF_REFERENCE F163_3507 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_15_) == NULL)) {
		tr1 = F164_3540(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_15_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_press_string_actions_internal */
static EIF_REFERENCE F163_3509_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3509 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,925,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3509_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_15_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_release_actions */
EIF_REFERENCE F163_3510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_16_) == NULL)) {
		tr1 = F164_3541(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_16_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.key_release_actions_internal */
static EIF_REFERENCE F163_3512_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3512 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_16_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,2,841,967,1205,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3512_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_16_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.focus_in_actions */
EIF_REFERENCE F163_3513 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_17_) == NULL)) {
		tr1 = F164_3542(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_17_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.focus_in_actions_internal */
static EIF_REFERENCE F163_3515_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3515 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,967,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3515_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_17_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.focus_out_actions */
EIF_REFERENCE F163_3516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_18_) == NULL)) {
		tr1 = F164_3543(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_18_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.focus_out_actions_internal */
static EIF_REFERENCE F163_3518_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3518 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,967,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F163_3518_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_18_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.theme_changed_actions_internal */
static EIF_REFERENCE F163_3521_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3521 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_19_);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3521_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_19_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_ACTION_SEQUENCES_I}.destroy_actions */
EIF_REFERENCE F163_3525 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_21_) == NULL)) {
		tr1 = F164_3546(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_21_);
}

/* {EV_APPLICATION_ACTION_SEQUENCES_I}.destroy_actions_internal */
static EIF_REFERENCE F163_3527_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F163_3527 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F163_3527_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_21_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit210 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
