/*
 * Code for class EV_WIDGET_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev225.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_ACTION_SEQUENCES_I}.file_drop_actions */
EIF_REFERENCE F170_3700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3457[dtype-169]) == NULL)) {
		tr1 = F171_3755(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3457[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3457[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.file_drop_actions_internal */
static EIF_REFERENCE F170_3701_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3701 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3457[Dtype(Current) - 169]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,614,925,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F170_3701_body (Current));
				*(EIF_REFERENCE *)(Current + O3457[Dtype(Current) - 169]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_motion_actions */
EIF_REFERENCE F170_3702 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3461[dtype-169]) == NULL)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3460[dtype-170])(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3461[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3461[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_motion_actions_internal */
static EIF_REFERENCE F170_3705_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3705 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3461[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(742)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3705_body (Current));
			*(EIF_REFERENCE *)(Current + O3461[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_press_actions */
EIF_REFERENCE F170_3706 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3464[dtype-169]) == NULL)) {
		tr1 = F171_3743(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3464[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3464[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_press_actions_internal */
static EIF_REFERENCE F170_3708_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3708 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3464[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3708_body (Current));
			*(EIF_REFERENCE *)(Current + O3464[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_double_press_actions_internal */
static EIF_REFERENCE F170_3711_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3711 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3467[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3711_body (Current));
			*(EIF_REFERENCE *)(Current + O3467[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_release_actions */
EIF_REFERENCE F170_3712 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3470[dtype-169]) == NULL)) {
		tr1 = F171_3745(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3470[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3470[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_release_actions_internal */
static EIF_REFERENCE F170_3714_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3714 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3470[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3714_body (Current));
			*(EIF_REFERENCE *)(Current + O3470[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_enter_actions_internal */
static EIF_REFERENCE F170_3717_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3717 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3473[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3717_body (Current));
			*(EIF_REFERENCE *)(Current + O3473[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.mouse_wheel_actions_internal */
static EIF_REFERENCE F170_3720_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3720 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3476[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(747)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3720_body (Current));
			*(EIF_REFERENCE *)(Current + O3476[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_leave_actions_internal */
static EIF_REFERENCE F170_3723_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3723 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3479[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3723_body (Current));
			*(EIF_REFERENCE *)(Current + O3479[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_press_actions */
EIF_REFERENCE F170_3724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3482[dtype-169]) == NULL)) {
		tr1 = F171_3748(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3482[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3482[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_press_actions_internal */
static EIF_REFERENCE F170_3726_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3726 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3482[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(738)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3726_body (Current));
			*(EIF_REFERENCE *)(Current + O3482[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_press_string_actions_internal */
static EIF_REFERENCE F170_3729_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3729 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3485[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(739)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3729_body (Current));
			*(EIF_REFERENCE *)(Current + O3485[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_release_actions_internal */
static EIF_REFERENCE F170_3732_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3732 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3488[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(738)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3732_body (Current));
			*(EIF_REFERENCE *)(Current + O3488[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.focus_in_actions_internal */
static EIF_REFERENCE F170_3735_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3735 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3491[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3735_body (Current));
			*(EIF_REFERENCE *)(Current + O3491[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.focus_out_actions_internal */
static EIF_REFERENCE F170_3738_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3738 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3494[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3738_body (Current));
			*(EIF_REFERENCE *)(Current + O3494[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.resize_actions */
EIF_REFERENCE F170_3739 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3497[dtype-169]) == NULL)) {
		tr1 = F171_3753(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3497[dtype-169]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3497[dtype-169]);
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.resize_actions_internal */
static EIF_REFERENCE F170_3741_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F170_3741 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3497[Dtype(Current) - 169]);
	if (!r) {
		if (RTAT(748)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F170_3741_body (Current));
			*(EIF_REFERENCE *)(Current + O3497[Dtype(Current) - 169]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit225 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
