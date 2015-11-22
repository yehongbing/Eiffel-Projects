/*
 * Code for class EV_VIEWPORT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev772.h"
#include <string.h>
#include <ev_gtk.h>
#include <glib.h>

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
#ifndef INLINE_F31_1119
static void inline_F31_1119 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_widget_size_allocate ((GtkWidget*) arg1, (GtkAllocation*) arg2)
	;
}
#define INLINE_F31_1119
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_VIEWPORT_IMP}.make */
void F1121_15356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O10979[dtype-1078]) == tp1)) {
		tp1 = (EIF_POINTER) NULL;
		tp2 = (EIF_POINTER) NULL;
		tp1 = (EIF_POINTER) gtk_viewport_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
		*(EIF_POINTER *)(Current + O11920[dtype-1120]) = (EIF_POINTER) tp1;
		F1079_14134(Current, *(EIF_POINTER *)(Current + O11920[dtype-1120]));
		tp1 = *(EIF_POINTER *)(Current + O11920[dtype-1120]);
		ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_NONE;
		gtk_viewport_set_shadow_type((GtkViewport*) tp1, (GtkShadowType) ti4_1);
		tp1 = *(EIF_POINTER *)(Current + O11920[dtype-1120]);
		inline_F31_1118(tp1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
		*(EIF_POINTER *)(Current + O11921[dtype-1120]) = (EIF_POINTER) *(EIF_POINTER *)(Current + O11920[dtype-1120]);
	}
	F1119_15323(Current);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.needs_event_box */
EIF_BOOLEAN F1121_15357 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EV_VIEWPORT_IMP}.block_resize_actions */
void F1121_15360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O3497[Dtype(tr1)-169]);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
			tr1 = F170_3739(RTCV(tr1));
			F726_6721(RTCV(tr1));
		}
	}
	RTLE;
}

/* {EV_VIEWPORT_IMP}.unblock_resize_actions */
void F1121_15361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O3497[Dtype(tr1)-169]);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
			tr1 = F170_3739(RTCV(tr1));
			F726_6723(RTCV(tr1));
		}
	}
	RTLE;
}

/* {EV_VIEWPORT_IMP}.set_x_offset */
void F1121_15362 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R11822[Dtype(Current)-1112])(Current, arg1, ti4_1);
}

/* {EV_VIEWPORT_IMP}.set_offset */
void F1121_15363 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_2_);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 != ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_3_);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg2 != ti4_1);
	if ((EIF_BOOLEAN) (loc2 || loc3)) {
		F1121_15360(Current);
		if (loc2) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_2_) = (EIF_INTEGER_32) arg1;
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11917[dtype-1120])(Current);
			F1121_15375(Current, tp1, arg1);
		}
		if (loc3) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_3_) = (EIF_INTEGER_32) arg2;
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11918[dtype-1120])(Current);
			F1121_15375(Current, tp1, arg2);
		}
		tp1 = *(EIF_POINTER *)(Current + O11920[dtype-1120]);
		if ((EIF_BOOLEAN)((EIF_POINTER) (((GtkViewport *)tp1)->bin_window) != loc1)) {
			tp1 = *(EIF_POINTER *)(Current + O11920[dtype-1120]);
			tp1 = (EIF_POINTER) (((GtkViewport *)tp1)->bin_window);
			gdk_window_move((GdkWindow*) tp1, (gint) (EIF_INTEGER_32) -arg1, (gint) (EIF_INTEGER_32) -arg2);
		} else {
			if (loc2) {
				tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11917[dtype-1120])(Current);
				gtk_adjustment_value_changed((GtkAdjustment*) tp1);
			}
			if (loc3) {
				tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11918[dtype-1120])(Current);
				gtk_adjustment_value_changed((GtkAdjustment*) tp1);
			}
		}
		F1121_15361(Current);
	}
	RTLE;
}

/* {EV_VIEWPORT_IMP}.set_y_offset */
void F1121_15364 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R11822[Dtype(Current)-1112])(Current, ti4_1, arg1);
}

/* {EV_VIEWPORT_IMP}.set_item_size */
void F1121_15365 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc1);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_REFERENCE *)(RTCV(loc4) + O8345[Dtype(loc4)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	loc2 = (EIF_POINTER) (((GtkWidget *)loc3)->parent);
	ti4_1 = (EIF_INTEGER_32) sizeof(GtkAllocation);
	loc5 = malloc((size_t)ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_2_);
	(((GtkAllocation *)loc5)->x = (gint)(ti4_1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_11_10_3_);
	(((GtkAllocation *)loc5)->y = (gint)(ti4_1));
	(((GtkAllocation *)loc5)->width = (gint)(arg1));
	(((GtkAllocation *)loc5)->height = (gint)(arg2));
	inline_F31_1118(loc2, arg1, arg2);
	inline_F31_1119(loc2, loc5);
	free(loc5);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.gtk_insert_i_th */
void F1121_15366 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	
	
	RTGC;
	loc1 = (EIF_POINTER) gtk_event_box_new();
	gtk_event_box_set_visible_window((GtkEventBox*) loc1, (gboolean) (EIF_BOOLEAN) 0);
	gtk_widget_show((GtkWidget*) loc1);
	gtk_container_add((GtkContainer*) loc1, (GtkWidget*) arg2);
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) loc1);
}

/* {EV_VIEWPORT_IMP}.gtk_container_remove */
void F1121_15367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	
	
	RTGC;
	loc1 = (EIF_POINTER) (((GtkWidget *)arg2)->parent);
	gtk_container_remove((GtkContainer*) loc1, (GtkWidget*) arg2);
	gtk_container_remove((GtkContainer*) arg1, (GtkWidget*) loc1);
}

/* {EV_VIEWPORT_IMP}.container_widget */
EIF_POINTER F1121_15368 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O11921[Dtype(Current) - 1120]);
}


/* {EV_VIEWPORT_IMP}.visual_widget */
EIF_POINTER F1121_15369 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O11920[Dtype(Current)-1120]);
}

/* {EV_VIEWPORT_IMP}.on_removed_item */
void F1121_15370 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1098_14672(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R11822[Dtype(Current)-1112])(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_VIEWPORT_IMP}.horizontal_adjustment */
EIF_POINTER F1121_15373 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O11920[Dtype(Current)-1120]);
	return (EIF_POINTER) (EIF_POINTER) gtk_viewport_get_hadjustment((GtkViewport*) tp1);
}

/* {EV_VIEWPORT_IMP}.vertical_adjustment */
EIF_POINTER F1121_15374 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O11920[Dtype(Current)-1120]);
	return (EIF_POINTER) (EIF_POINTER) gtk_viewport_get_vadjustment((GtkViewport*) tp1);
}

/* {EV_VIEWPORT_IMP}.internal_set_value_from_adjustment */
void F1121_15375 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_32 tr4_1;
	
	
	RTGC;
	tr4_1 = (EIF_REAL_32) (arg2);
	if ((EIF_BOOLEAN) ((EIF_REAL_32) (((GtkAdjustment *)arg1)->lower) > tr4_1)) {
		tr4_1 = (EIF_REAL_32) (arg2);
		(((GtkAdjustment *)arg1)->lower = (gfloat)(tr4_1));
	} else {
		tr4_1 = (EIF_REAL_32) (arg2);
		if ((EIF_BOOLEAN) ((EIF_REAL_32) (((GtkAdjustment *)arg1)->upper) < tr4_1)) {
			tr4_1 = (EIF_REAL_32) (arg2);
			(((GtkAdjustment *)arg1)->upper = (gfloat)(tr4_1));
		}
	}
	tr4_1 = (EIF_REAL_32) (arg2);
	(((GtkAdjustment *)arg1)->value = (gfloat)(tr4_1));
}

/* {EV_VIEWPORT_IMP}.interface */
static EIF_REFERENCE F1121_15377_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1121_15377 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1121_15377_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit772 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
