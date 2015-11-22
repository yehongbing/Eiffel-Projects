/*
 * Code for class EV_TITLED_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev776.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_built_in.h"
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

/* {EV_TITLED_WINDOW_IMP}.on_size_allocate */
void F1125_15482 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1123_15445(Current, arg1, arg1, arg3, arg4);
	if (*(EIF_BOOLEAN *)(Current + O11965[dtype-1124])) {
		*(EIF_BOOLEAN *)(Current + O11965[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_26_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.call_window_state_event */
void F1125_15483 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GDK_WINDOW_STATE_ICONIFIED;
	ti4_1 = eif_bit_and(arg1,ti4_1);
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GDK_WINDOW_STATE_ICONIFIED)) {
		ti4_1 = (EIF_INTEGER_32) GDK_WINDOW_STATE_ICONIFIED;
		ti4_1 = eif_bit_and(arg2,ti4_1);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GDK_WINDOW_STATE_ICONIFIED)) {
			*(EIF_BOOLEAN *)(Current + O11970[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current + O11969[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_27_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
				F732_6800(RTCV(tr1), NULL);
			}
		} else {
			ti4_1 = (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED;
			ti4_1 = eif_bit_and(arg2,ti4_1);
			if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED)) {
				*(EIF_BOOLEAN *)(Current + O11969[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				*(EIF_BOOLEAN *)(Current + O11970[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_26_) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
					F732_6800(RTCV(tr1), NULL);
				}
			} else {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	} else {
		ti4_1 = (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED;
		ti4_1 = eif_bit_and(arg1,ti4_1);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED)) {
			ti4_1 = (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED;
			ti4_1 = eif_bit_and(arg2,ti4_1);
			if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED)) {
				*(EIF_BOOLEAN *)(Current + O11969[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				*(EIF_BOOLEAN *)(Current + O11970[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				*(EIF_BOOLEAN *)(Current + O11965[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	if (loc1) {
		*(EIF_BOOLEAN *)(Current + O11970[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O11969[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_28_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	F1123_15446(Current, arg1, arg2);
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.icon_pixmap_internal */
EIF_REFERENCE F1125_15487 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11966[Dtype(Current) - 1124]);
}


/* {EV_TITLED_WINDOW_IMP}.is_minimized */
EIF_BOOLEAN F1125_15489 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O11970[Dtype(Current) - 1124]);
}


/* {EV_TITLED_WINDOW_IMP}.is_maximized */
EIF_BOOLEAN F1125_15490 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O11969[Dtype(Current) - 1124]);
}


/* {EV_TITLED_WINDOW_IMP}.is_displayed */
EIF_BOOLEAN F1125_15491 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (F1081_14192(Current)) {
		Result = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O11970[Dtype(Current)-1124]);
	}
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.raise */
void F1125_15492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1081_14191(Current)) {
		F1123_15423(Current);
	} else {
		if (*(EIF_BOOLEAN *)(Current + O11970[dtype-1124])) {
			F1125_15496(Current);
		}
	}
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	gdk_window_raise((GdkWindow*) tp1);
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.restore */
void F1125_15496 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O11969[dtype-1124])) {
		*(EIF_BOOLEAN *)(Current + O11969[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		gtk_window_unmaximize((GtkWindow*) tp1);
	} else {
		if (*(EIF_BOOLEAN *)(Current + O11970[dtype-1124])) {
			*(EIF_BOOLEAN *)(Current + O11970[dtype-1124]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_window_deiconify((GtkWindow*) tp1);
		}
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.set_icon_pixmap */
void F1125_15498 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0("icon_implementation_exists", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_24_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11966[dtype-1124]) = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	tp2 = (EIF_POINTER) NULL;
	tp3 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_46_11_12_3_0_5_);
	tp4 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_46_11_12_3_0_4_);
	gdk_window_set_icon((GdkWindow*) tp1, (GdkWindow*) tp2, (GdkPixmap*) tp3, (GdkBitmap*) tp4);
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.default_wm_decorations */
EIF_INTEGER_32 F1125_15499 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GDK_DECOR_ALL;
}

/* {EV_TITLED_WINDOW_IMP}.interface */
static EIF_REFERENCE F1125_15501_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1125_15501 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1125_15501_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit776 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
