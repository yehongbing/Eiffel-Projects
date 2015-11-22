/*
 * Code for class EV_STANDARD_DIALOG_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev888.h"
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STANDARD_DIALOG_IMP}.selected_button */
EIF_REFERENCE F1188_16708 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12500[Dtype(Current) - 1187]);
}


/* {EV_STANDARD_DIALOG_IMP}.on_key_event */
void F1188_16711 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 42L))) {
			F1188_16720(Current);
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 41L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R12498[Dtype(Current)-1187])(Current);
			}
		}
	}
	RTLE;
}

/* {EV_STANDARD_DIALOG_IMP}.user_can_resize */
EIF_BOOLEAN F1188_16712 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EV_STANDARD_DIALOG_IMP}.enable_closeable */
void F1188_16714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) GDK_FUNC_CLOSE;
	ti4_1 = (EIF_INTEGER_32) GDK_FUNC_MOVE;
	loc1 = eif_bit_or(loc1,ti4_1);
	ti4_1 = (EIF_INTEGER_32) GDK_FUNC_RESIZE;
	loc1 = eif_bit_or(loc1,ti4_1);
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	gdk_window_set_functions((GdkWindow*) tp1, (GdkWMFunction) loc1);
	RTLE;
}

/* {EV_STANDARD_DIALOG_IMP}.call_close_request_actions */
void F1188_16715 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1188_16720(Current);
}

/* {EV_STANDARD_DIALOG_IMP}.default_wm_decorations */
EIF_INTEGER_32 F1188_16717 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GDK_DECOR_ALL;
}

/* {EV_STANDARD_DIALOG_IMP}.interface */
static EIF_REFERENCE F1188_16718_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1188_16718 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1188_16718_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_STANDARD_DIALOG_IMP}.on_ok */
void F1188_16719 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O12497[dtype-1187]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = F1183_16642(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12500[dtype-1187]) = (EIF_REFERENCE) tr1;
	F1082_14219(Current);
	RTLE;
}

/* {EV_STANDARD_DIALOG_IMP}.on_cancel */
void F1188_16720 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(2392,F65_2392,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12500[Dtype(Current)-1187]) = (EIF_REFERENCE) tr1;
	F1082_14219(Current);
	RTLE;
}

void EIF_Minit888 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
