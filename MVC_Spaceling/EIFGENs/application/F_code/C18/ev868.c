/*
 * Code for class EV_MENU_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev868.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_SEPARATOR_IMP}.make */
void F1175_16509 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_menu_item_new();
	F1079_14134(Current, tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_0_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_0_);
	gtk_widget_set_sensitive((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_0_);
	gtk_widget_set_usize((GtkWidget*) tp1, (gint) ((EIF_INTEGER_32) -1L), (gint) ((EIF_INTEGER_32) 8L));
	F1086_14245(Current);
	F1088_14258(Current);
	F1175_16510(Current);
	tr1 = RTLNSMART(eif_non_attached_type(881));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) RTCCL(tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_23_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.initialize_menu_sep_box */
void F1175_16510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_);
	g_object_ref((gpointer) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_);
	gtk_object_sink((GtkObject*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_2_);
	gtk_box_pack_start((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) (EIF_BOOLEAN) 1, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_1_);
	gtk_box_pack_start((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) (EIF_BOOLEAN) 1, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.is_sensitive */
EIF_BOOLEAN F1175_16511 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_23_4_);
}


/* {EV_MENU_SEPARATOR_IMP}.dispose */
void F1175_16514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_23_7_6_1_0_4_);
	g_object_unref((gpointer) tp1);
	F1079_14143(Current);
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.radio_group_ref */
EIF_REFERENCE F1175_16516 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {EV_MENU_SEPARATOR_IMP}.set_radio_group */
void F1175_16517 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	F882_9654(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.radio_group */
EIF_POINTER F1175_16518 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {EV_MENU_SEPARATOR_IMP}.pointer_motion_actions_internal */
static EIF_REFERENCE F1175_16519_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1175_16519 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if (!r) {
		if (RTAT(742)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1175_16519_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MENU_SEPARATOR_IMP}.pointer_button_press_actions_internal */
static EIF_REFERENCE F1175_16520_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1175_16520 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1175_16520_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_6_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MENU_SEPARATOR_IMP}.pointer_double_press_actions_internal */
static EIF_REFERENCE F1175_16521_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1175_16521 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1175_16521_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MENU_SEPARATOR_IMP}.interface */
static EIF_REFERENCE F1175_16522_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1175_16522 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1175_16522_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_11_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit868 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
