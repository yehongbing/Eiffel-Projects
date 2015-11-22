/*
 * Code for class EV_POPUP_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev775.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_247
static void inline_F24_247 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	#if GTK_MAJOR_VERSION > 1
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) arg1, (gboolean) arg2);
#endif
	;
}
#define INLINE_F24_247
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POPUP_WINDOW_IMP}.make */
void F1124_15465 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_event_box_new();
	*(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_4_) = (EIF_POINTER) tp1;
	F1123_15409(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_4_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_0_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_4_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_0_);
	inline_F24_247(tp1, (EIF_BOOLEAN) 1);
	F1115_15273(Current);
	F1123_15420(Current);
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(1827,F34_1827,(RTCV(tr1)));
	F1066_13865(Current, tr1);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.on_focus_changed */
void F1124_15467 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1123_15459(Current, arg1);
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.grab_keyboard_and_mouse */
void F1124_15468 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_57_13_)) {
		F1094_14449(Current);
	}
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.release_keyboard_and_mouse */
void F1124_15469 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_57_13_)) {
		F1094_14450(Current);
	}
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.allow_resize */
void F1124_15470 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1124_15473(Current);
}

/* {EV_POPUP_WINDOW_IMP}.forbid_resize */
void F1124_15471 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_POPUP_WINDOW_IMP}.internal_enable_border */
void F1124_15473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_0_);
	gtk_container_set_border_width((GtkContainer*) tp1, (guint) ((EIF_INTEGER_32) 1L));
}

/* {EV_POPUP_WINDOW_IMP}.internal_disable_border */
void F1124_15474 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_0_);
	gtk_container_set_border_width((GtkContainer*) tp1, (guint) ((EIF_INTEGER_32) 0L));
}

/* {EV_POPUP_WINDOW_IMP}.show */
void F1124_15475 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_0_);
	gtk_window_set_accept_focus((GtkWindow*) tp1, (gboolean) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_57_13_));
	F1123_15423(Current);
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.hide */
void F1124_15476 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1123_15426(Current);
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.handle_mouse_button_event */
void F1124_15477 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	RTGC;
}

/* {EV_POPUP_WINDOW_IMP}.default_wm_decorations */
EIF_INTEGER_32 F1124_15478 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {EV_POPUP_WINDOW_IMP}.client_area */
EIF_POINTER F1124_15479 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_57_21_10_7_0_4_);
}


/* {EV_POPUP_WINDOW_IMP}.interface */
static EIF_REFERENCE F1124_15480_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1124_15480 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1124_15480_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_29_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit775 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
