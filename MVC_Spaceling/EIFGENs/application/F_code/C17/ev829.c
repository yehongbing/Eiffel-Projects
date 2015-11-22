/*
 * Code for class EV_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev829.h"
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

/* {EV_BUTTON_IMP}.new_gtk_button */
EIF_POINTER F1154_16184 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) gtk_button_new();
}

/* {EV_BUTTON_IMP}.make */
void F1154_16185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12308[Dtype(Current)-1153])(Current);
	F1079_14134(Current, tp1);
	F1086_14245(Current);
	F1088_14258(Current);
	F1154_16186(Current);
	F1154_16191(Current);
	F1142_15736(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.initialize_button_box */
void F1154_16186 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_4 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	loc1 = (EIF_POINTER) gtk_alignment_new((gfloat) tr4_1, (gfloat) tr4_2, (gfloat) tr4_3, (gfloat) tr4_4);
	tp1 = F1079_14146(Current);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) loc1);
	loc2 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	gtk_widget_show((GtkWidget*) loc2);
	gtk_container_add((GtkContainer*) loc1, (GtkWidget*) loc2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_1_);
	gtk_container_add((GtkContainer*) loc2, (GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_2_);
	gtk_misc_set_padding((GtkMisc*) tp1, (gint) ((EIF_INTEGER_32) 4L), (gint) ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_2_);
	gtk_container_add((GtkContainer*) loc2, (GtkWidget*) tp1);
	gtk_widget_show((GtkWidget*) loc1);
	RTLE;
}

/* {EV_BUTTON_IMP}.fontable_widget */
EIF_POINTER F1154_16187 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_2_);
}

/* {EV_BUTTON_IMP}.event_widget */
EIF_POINTER F1154_16188 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) F1079_14146(Current);
}

/* {EV_BUTTON_IMP}.needs_event_box */
EIF_BOOLEAN F1154_16189 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_BUTTON_IMP}.is_default_push_button */
EIF_BOOLEAN F1154_16190 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_44_9_);
}


/* {EV_BUTTON_IMP}.align_text_center */
void F1154_16191 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1088_14261(Current);
	tp1 = F1154_16200(Current);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	gtk_alignment_set((GtkAlignment*) tp1, (gfloat) (EIF_REAL_32) 0.5, (gfloat) (EIF_REAL_32) 0.5, (gfloat) tr4_1, (gfloat) tr4_2);
	RTLE;
}

/* {EV_BUTTON_IMP}.align_text_left */
void F1154_16192 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1088_14262(Current);
	tp1 = F1154_16200(Current);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	gtk_alignment_set((GtkAlignment*) tp1, (gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 0.5, (gfloat) tr4_1, (gfloat) tr4_2);
	RTLE;
}

/* {EV_BUTTON_IMP}.enable_default_push_button */
void F1154_16194 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1154_16196(Current);
}

/* {EV_BUTTON_IMP}.disable_default_push_button */
void F1154_16195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_44_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tp1 = F1079_14146(Current);
	ti4_1 = (EIF_INTEGER_32) GTK_HAS_DEFAULT;
	GTK_WIDGET_UNSET_FLAGS((tp1), (ti4_1));
	tp1 = F1079_14146(Current);
	gtk_widget_queue_draw((GtkWidget*) tp1);
	RTLE;
}

/* {EV_BUTTON_IMP}.enable_can_default */
void F1154_16196 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_44_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tp1 = F1079_14146(Current);
	ti4_1 = (EIF_INTEGER_32) GTK_HAS_DEFAULT;
	GTK_WIDGET_SET_FLAGS((tp1), (ti4_1));
	tp1 = F1079_14146(Current);
	gtk_widget_queue_draw((GtkWidget*) tp1);
	RTLE;
}

/* {EV_BUTTON_IMP}.set_foreground_color */
void F1154_16197 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1066_13867(Current, arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_2_);
	F1066_13868(Current, tp1, arg1);
	RTLE;
}

/* {EV_BUTTON_IMP}.on_focus_changed */
void F1154_16198 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	F1096_14504(Current, arg1);
	loc1 = F1081_14194(Current);
	loc1 = RTRV(eif_non_attached_type(1125), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if (arg1) {
			loc2 = Current;
			loc2 = RTRV(eif_non_attached_type(1154), loc2);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				F1118_15320(RTCV(loc1), *(EIF_REFERENCE *)(Current + O10149[dtype-1028]));
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_60_);
			if ((EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + O10149[dtype-1028]))) {
				F1118_15320(RTCV(loc1), NULL);
			}
		}
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.foreground_color_pointer */
EIF_POINTER F1154_16199 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_44_12_10_2_0_2_);
	tp1 = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) tp1);
	Result = (EIF_POINTER) (((GtkStyle *)tp1)->text);
	RTLE;
	return Result;
}

/* {EV_BUTTON_IMP}.button_box */
EIF_POINTER F1154_16200 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	Result = (EIF_POINTER) (((GtkBin *)tp1)->child);
	RTLE;
	return Result;
}

/* {EV_BUTTON_IMP}.interface */
static EIF_REFERENCE F1154_16201_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1154_16201 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1154_16201_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit829 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
