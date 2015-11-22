/*
 * Code for class EV_SCROLLABLE_AREA_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev773.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1118
static void inline_F31_1118 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	gtk_widget_set_size_request ((GtkWidget*) arg1, (gint) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1118
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCROLLABLE_AREA_IMP}.make */
void F1122_15379 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_NONE;
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) tp1, (GtkShadowType) ti4_1);
	F1079_14134(Current, *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_));
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	F1122_15405(Current, ti4_1, ti4_2);
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_viewport_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_1_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_1_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_1_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	F1122_15389(Current, ((EIF_INTEGER_32) 10L));
	F1122_15390(Current, ((EIF_INTEGER_32) 10L));
	tp1 = (EIF_POINTER) gtk_fixed_new();
	*(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 1, (gint) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_2_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_2_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	inline_F31_1118(tp1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	F1121_15356(Current);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.needs_event_box */
EIF_BOOLEAN F1122_15380 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_SCROLLABLE_AREA_IMP}.horizontal_step */
EIF_INTEGER_32 F1122_15381 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F1122_15401(Current);
	tr4_1 = (EIF_REAL_32) (((GtkAdjustment *)tp1)->step_increment);
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = tr4_1;
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.vertical_step */
EIF_INTEGER_32 F1122_15382 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F1122_15402(Current);
	tr4_1 = (EIF_REAL_32) (((GtkAdjustment *)tp1)->step_increment);
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = tr4_1;
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.set_x_offset */
void F1122_15387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1122_15401(Current);
	F1121_15375(Current, tp1, arg1);
	tp1 = F1122_15401(Current);
	gtk_adjustment_value_changed((GtkAdjustment*) tp1);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.set_y_offset */
void F1122_15388 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1122_15402(Current);
	F1121_15375(Current, tp1, arg1);
	tp1 = F1122_15402(Current);
	gtk_adjustment_value_changed((GtkAdjustment*) tp1);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.set_horizontal_step */
void F1122_15389 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1122_15381(Current) != arg1)) {
		tp1 = F1122_15401(Current);
		tr4_1 = (EIF_REAL_32) (arg1);
		(((GtkAdjustment *)tp1)->step_increment = (gfloat)(tr4_1));
		tp1 = F1122_15401(Current);
		gtk_adjustment_changed((GtkAdjustment*) tp1);
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.set_vertical_step */
void F1122_15390 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1122_15382(Current) != arg1)) {
		tp1 = F1122_15402(Current);
		tr4_1 = (EIF_REAL_32) (arg1);
		(((GtkAdjustment *)tp1)->step_increment = (gfloat)(tr4_1));
		tp1 = F1122_15402(Current);
		gtk_adjustment_changed((GtkAdjustment*) tp1);
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.show_horizontal_scroll_bar */
void F1122_15391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_5_);
	F1122_15405(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.show_vertical_scroll_bar */
void F1122_15393 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_4_);
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	F1122_15405(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.hide_vertical_scroll_bar */
void F1122_15394 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_4_);
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_NEVER;
	F1122_15405(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.fixed_width */
EIF_INTEGER_32 F1122_15396 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_);
	tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
	ti4_1 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->width);
	Result = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.fixed_height */
EIF_INTEGER_32 F1122_15397 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_3_);
	tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
	ti4_1 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->height);
	Result = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.on_size_allocate */
void F1122_15399 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	F1096_14503(Current, arg1, arg2, arg3, arg4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
		loc1 = RTRV(eif_non_attached_type(1095), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_2_);
			ti4_1 = F1122_15396(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[Dtype(loc1)-1079])(RTCV(loc1));
			ti4_1 = eif_max_int32 (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L))),((EIF_INTEGER_32) 0L));
			ti4_2 = F1122_15397(Current);
			ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[Dtype(loc1)-1079])(RTCV(loc1));
			ti4_2 = eif_max_int32 (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) / ((EIF_INTEGER_32) 2L))),((EIF_INTEGER_32) 0L));
			gtk_widget_set_uposition((GtkWidget*) tp1, (gint) ti4_1, (gint) ti4_2);
		}
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.child_has_resized */
void F1122_15400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_2_);
	ti4_1 = F1122_15396(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[Dtype(arg1)-1079])(RTCV(arg1));
	ti4_1 = eif_max_int32 (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L))),((EIF_INTEGER_32) 0L));
	ti4_2 = F1122_15397(Current);
	ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[Dtype(arg1)-1079])(RTCV(arg1));
	ti4_2 = eif_max_int32 (((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) / ((EIF_INTEGER_32) 2L))),((EIF_INTEGER_32) 0L));
	gtk_widget_set_uposition((GtkWidget*) tp1, (gint) ti4_1, (gint) ti4_2);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.horizontal_adjustment */
EIF_POINTER F1122_15401 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	return (EIF_POINTER) (EIF_POINTER) gtk_scrolled_window_get_hadjustment((GtkScrolledWindow*) tp1);
}

/* {EV_SCROLLABLE_AREA_IMP}.vertical_adjustment */
EIF_POINTER F1122_15402 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	return (EIF_POINTER) (EIF_POINTER) gtk_scrolled_window_get_vadjustment((GtkScrolledWindow*) tp1);
}

/* {EV_SCROLLABLE_AREA_IMP}.set_scrolling_policy */
void F1122_15405 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_47_11_10_6_0_4_);
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) arg1, (GtkPolicyType) arg2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_4_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_5_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.interface */
static EIF_REFERENCE F1122_15406_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1122_15406 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1122_15406_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_25_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit773 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
