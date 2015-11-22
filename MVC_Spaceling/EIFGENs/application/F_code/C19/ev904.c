/*
 * Code for class EV_DRAWING_AREA_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev904.h"
#include <stdio.h>
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

/* {EV_DRAWING_AREA_IMP}.make */
void F1200_17103 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(930));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) tr1;
	tp1 = (EIF_POINTER) gtk_drawing_area_new();
	F1079_14134(Current, tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_0_);
	gtk_widget_set_redraw_on_allocate((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	tp1 = F1049_13643(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	tp1 = (EIF_POINTER) gdk_gc_new((GdkWindow*) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_) = (EIF_POINTER) tp1;
	F1198_17006(Current);
	F1200_17105(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_0_);
	tr1 = F1065_13856(Current);
	F1066_13866(Current, tp1, tr1);
	tr1 = RTLNSMART(eif_non_attached_type(925));
	F920_10235(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) tr1;
	F1142_15736(Current);
	F1142_15742(Current);
	F1142_15744(Current);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.disable_double_buffering */
void F1200_17105 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	gtk_widget_set_double_buffered((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.on_pointer_enter_leave */
void F1200_17106 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1200_17107(Current, arg1);
	F1096_14505(Current, arg1);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.update_tooltip */
void F1200_17107 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if (F1200_17116(Current)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_3_) != tp1);
	}
	if (tb1) {
		if (arg1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_20_);
			F931_10763(RTCV(tr1), ti4_1);
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F1200_17109(Current);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
			F931_10763(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.update_tooltip_window */
void F1200_17109 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc11);
	RTLR(2,tr1);
	
	RTGC;
	if (F1200_17116(Current)) {
		loc3 = (EIF_POINTER) gdk_window_at_pointer((gint*) (EIF_INTEGER_32 *) &(loc5), (gint*) (EIF_INTEGER_32 *) &(loc6));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_3_);
		loc1 = (EIF_POINTER) (((GtkTooltips *)tp1)->tip_window);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 == F1200_17128(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) !F1094_14448(Current);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_10_)) {
				loc4 = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) loc3, (gint*) (EIF_INTEGER_32 *) &(loc7), (gint*) (EIF_INTEGER_32 *) &(loc8));
				loc12 = *(EIF_POINTER *)(RTCV(RTOSCF(14176,F1081_14176,(Current)))+ _PTROFF_0_1_0_1_0_0_);
				gtk_widget_size_request((GtkWidget*) loc1, (GtkRequisition*) loc12);
				loc9 = (EIF_INTEGER_32) (((GtkRequisition *)loc12)->width);
				loc10 = (EIF_INTEGER_32) (((GtkRequisition *)loc12)->height);
				tr1 = RTLNS(961, 961, _OBJSIZ_2_0_0_0_0_0_0_0_);
				F930_10736(RTCV(tr1));
				loc11 = (EIF_REFERENCE) tr1;
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + loc5);
				ti4_1 = F1200_17112(Current);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_4_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) + ti4_1);
				ti4_1 = F962_11312(RTCV(loc11));
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_3_) + loc9) > ti4_1)) {
					ti4_1 = F962_11312(RTCV(loc11));
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc9);
				}
				ti4_1 = F962_11313(RTCV(loc11));
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_4_) + loc10) > ti4_1)) {
					ti4_1 = F1200_17112(Current);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_4_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc10) - ti4_1);
				}
				*(EIF_BOOLEAN *)(Current+ _CHROFF_48_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
			F931_10763(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		}
		tb1 = '\0';
		if (loc2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
			tb2 = F418_5127(RTCV(tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_3_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_12_4_);
			gtk_window_move((GtkWindow*) loc1, (gint) ti4_1, (gint) ti4_2);
			gtk_widget_show((GtkWidget*) loc1);
		} else {
			gtk_widget_hide((GtkWidget*) loc1);
		}
	}
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.tooltip_window_y_offset */
EIF_INTEGER_32 F1200_17112 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	tp1 = (EIF_POINTER) gdk_display_get_default();
	Result = (EIF_INTEGER_32) gdk_display_get_default_cursor_size((GdkDisplay*) tp1);
	return Result;
}

/* {EV_DRAWING_AREA_IMP}.tooltip_repeater */
EIF_REFERENCE F1200_17113 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_46_);
}


/* {EV_DRAWING_AREA_IMP}.tooltips_pointer */
EIF_POINTER F1200_17115 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_3_);
}


/* {EV_DRAWING_AREA_IMP}.needs_custom_tooltip_implementation */
EIF_BOOLEAN F1200_17116 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) gtk_major_version == ((EIF_INTEGER_32) 2L))) {
		Result = (EIF_BOOLEAN) ((EIF_INTEGER_32) gtk_minor_version < ((EIF_INTEGER_32) 12L));
	}
	return Result;
}

/* {EV_DRAWING_AREA_IMP}.internal_tooltip */
EIF_REFERENCE F1200_17119 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_47_);
}


/* {EV_DRAWING_AREA_IMP}.update_if_needed */
void F1200_17125 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_DRAWING_AREA_IMP}.drawable */
EIF_POINTER F1200_17128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_0_);
	return (EIF_POINTER) (EIF_POINTER) (((GtkWidget *)tp1)->window);
}

/* {EV_DRAWING_AREA_IMP}.mask */
EIF_POINTER F1200_17129 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

/* {EV_DRAWING_AREA_IMP}.internal_set_focus */
void F1200_17132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
	ti4_2 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) !loc1) {
		tp1 = F1079_14146(Current);
		ti4_1 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
		GTK_WIDGET_SET_FLAGS((tp1), (ti4_1));
	}
	F1081_14185(Current);
	if ((EIF_BOOLEAN) !loc1) {
		tp1 = F1079_14146(Current);
		ti4_1 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
		GTK_WIDGET_UNSET_FLAGS((tp1), (ti4_1));
	}
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.on_key_event */
void F1200_17133 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	
	RTGC;
	F1200_17107(Current, (EIF_BOOLEAN) 0);
	F1096_14502(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.call_button_event_actions */
void F1200_17134 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1200_17107(Current, (EIF_BOOLEAN) 0);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
		tp1 = F1079_14146(Current);
		ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
		ti4_2 = (EIF_INTEGER_32) GTK_HAS_FOCUS;
		ti4_1 = eif_bit_and(ti4_1,ti4_2);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 3L)));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_48_9_);
	}
	if (tb1) {
		F1081_14184(Current);
	}
	F1096_14506(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.destroy */
void F1200_17135 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1200_17107(Current, (EIF_BOOLEAN) 0);
	F1096_14516(Current);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_) != (EIF_POINTER) NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_);
		gdk_gc_unref((GdkGC*) tp1);
		tp1 = (EIF_POINTER) NULL;
		*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_) = (EIF_POINTER) tp1;
	}
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.dispose */
void F1200_17136 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_) != (EIF_POINTER) NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_);
		gdk_gc_unref((GdkGC*) tp1);
		tp1 = (EIF_POINTER) NULL;
		*(EIF_POINTER *)(Current+ _PTROFF_48_14_12_5_0_1_) = (EIF_POINTER) tp1;
	}
	F1079_14143(Current);
	RTLE;
}

/* {EV_DRAWING_AREA_IMP}.interface */
static EIF_REFERENCE F1200_17137_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1200_17137 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1200_17137_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit904 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
