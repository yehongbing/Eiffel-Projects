/*
 * Code for class EV_PIXMAP_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev906.h"
#include "ev_c_util.h"
#include <stdio.h>
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1335
static EIF_POINTER inline_F31_1335 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	return (EIF_POINTER) (gdk_pixbuf_scale_simple ((GdkPixbuf*) arg1, (int) arg2, (int) arg3, (int) arg4))
	;
}
#define INLINE_F31_1335
#endif
#ifndef INLINE_F24_261
static void inline_F24_261 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_POINTER* arg3, EIF_INTEGER_32 arg4)
{
	#if GTK_MAJOR_VERSION > 1
	gdk_pixbuf_render_pixmap_and_mask ((GdkPixbuf*) arg1, (GdkPixmap**) arg2, (GdkBitmap**) arg3, (int) arg4);
#endif
	;
}
#define INLINE_F24_261
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP_IMP}.needs_event_box */
EIF_BOOLEAN F1202_17191 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PIXMAP_IMP}.make */
void F1202_17193 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_image_new();
	F1079_14134(Current, tp1);
	F1142_15736(Current);
	loc3 = RTOSCF(14148,F1079_14148,(Current));
	tp1 = (EIF_POINTER) NULL;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_49_16_0_19_);
	loc1 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp1, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L), (gint) ti4_1);
	F1202_17215(Current, loc1, loc2);
	tp1 = (EIF_POINTER) gdk_gc_new((GdkWindow*) loc1);
	*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_);
	tp2 = RTOSCF(17071,F1198_17071,(Current));
	gdk_gc_set_foreground((GdkGC*) tp1, (GdkColor*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_);
	tp2 = RTOSCF(17072,F1198_17072,(Current));
	gdk_gc_set_background((GdkGC*) tp1, (GdkColor*) tp2);
	F1198_17006(Current);
	F1198_17038(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_PIXMAP_IMP}.init_from_pixel_buffer */
void F1202_17195 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(1052), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_0_0_0_);
	F1202_17209(Current, tp1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.update_if_needed */
void F1202_17198 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F1081_14192(Current)) {
		tp1 = F1079_14146(Current);
		gtk_widget_queue_draw((GtkWidget*) tp1);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.width */
EIF_INTEGER_32 F1202_17199 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
	gdk_drawable_get_size((GdkDrawable*) tp1, (gint*) (EIF_INTEGER_32 *) &(Result), (gint*) (EIF_INTEGER_32 *) &(loc1));
	return Result;
}

/* {EV_PIXMAP_IMP}.height */
EIF_INTEGER_32 F1202_17200 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
	gdk_drawable_get_size((GdkDrawable*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) (EIF_INTEGER_32 *) &(Result));
	return Result;
}

/* {EV_PIXMAP_IMP}.set_with_default */
void F1202_17202 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) default_pixmap_xpm();
	F1202_17216(Current, tp1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.stretch */
void F1202_17203 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc4 = F1202_17199(Current);
	loc5 = F1202_17200(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != arg1) || (EIF_BOOLEAN)(loc5 != arg2))) {
		loc1 = F1198_17065(Current);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 <= ((EIF_INTEGER_32) 16L)) && (EIF_BOOLEAN) (loc5 <= ((EIF_INTEGER_32) 16L)))) {
			loc3 = (EIF_INTEGER_32) GDK_INTERP_NEAREST;
		} else {
			loc3 = (EIF_INTEGER_32) GDK_INTERP_BILINEAR;
		}
		loc2 = inline_F31_1335(loc1, arg1, arg2, loc3);
		g_object_unref((gpointer) loc1);
		F1202_17209(Current, loc2);
		g_object_unref((gpointer) loc2);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_size */
void F1202_17204 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc3 = F1202_17199(Current);
	loc4 = F1202_17200(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != arg1) || (EIF_BOOLEAN)(loc4 != arg2))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
		loc1 = (EIF_POINTER) gdk_pixmap_ref((GdkPixmap*) tp1);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_) != loc7)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_);
			loc2 = (EIF_POINTER) gdk_pixmap_ref((GdkPixmap*) tp1);
		}
		tp1 = (EIF_POINTER) NULL;
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_19_);
		tp1 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp1, (gint) arg1, (gint) arg2, (gint) ti4_1);
		*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_) = (EIF_POINTER) tp1;
		F1198_17038(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg1, arg2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
		loc5 = (EIF_POINTER) gdk_gc_new((GdkWindow*) tp1);
		gdk_gc_set_clip_mask((GdkGC*) loc5, (GdkBitmap*) loc2);
		gdk_gc_set_clip_origin((GdkGC*) loc5, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
		gdk_draw_drawable((GdkDrawable*) tp1, (GdkGC*) loc5, (GdkDrawable*) loc1, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) loc3, (gint) loc4);
		gdk_gc_unref((GdkGC*) loc5);
		gdk_pixmap_unref((GdkPixmap*) loc1);
		if ((EIF_BOOLEAN)(loc2 != loc7)) {
			tp1 = (EIF_POINTER) NULL;
			tp1 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp1, (gint) arg1, (gint) arg2, (gint) ((EIF_INTEGER_32) 1L));
			*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_) = (EIF_POINTER) tp1;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_);
			loc6 = (EIF_POINTER) gdk_gc_new((GdkWindow*) tp1);
			tp1 = RTOSCF(17072,F1198_17072,(Current));
			gdk_gc_set_foreground((GdkGC*) loc6, (GdkColor*) tp1);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_);
			gdk_draw_rectangle((GdkDrawable*) tp1, (GdkGC*) loc6, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) arg1, (gint) arg2);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_);
			gdk_draw_drawable((GdkDrawable*) tp1, (GdkGC*) loc6, (GdkDrawable*) loc2, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) loc3, (gint) loc4);
			gdk_gc_unref((GdkGC*) loc6);
			gdk_pixmap_unref((GdkPixmap*) loc2);
		}
		F1202_17215(Current, *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_), *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_));
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.copy_pixmap */
void F1202_17208 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_46_11_12_3_0_5_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_46_11_12_3_0_4_);
	ti4_1 = F1202_17199(RTCV(loc1));
	ti4_2 = F1202_17200(RTCV(loc1));
	F1202_17210(Current, tp1, tp2, ti4_1, ti4_2);
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_46_11_12_3_0_3_);
	*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_3_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_pixmap_from_pixbuf */
void F1202_17209 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	inline_F24_261(arg1, (EIF_POINTER *) &(loc1), (EIF_POINTER *) &(loc2), ((EIF_INTEGER_32) 127L));
	F1202_17215(Current, loc1, loc2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.copy_from_gdk_data */
void F1202_17210 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_19_);
	loc1 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp1, (gint) arg3, (gint) arg4, (gint) ti4_1);
	loc3 = (EIF_POINTER) gdk_gc_new((GdkWindow*) loc1);
	gdk_draw_drawable((GdkDrawable*) loc1, (GdkGC*) loc3, (GdkDrawable*) arg1, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) arg3, (gint) arg4);
	gdk_gc_unref((GdkGC*) loc3);
	if ((EIF_BOOLEAN)(arg2 != (EIF_POINTER) NULL)) {
		tp1 = (EIF_POINTER) NULL;
		loc2 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp1, (gint) arg3, (gint) arg4, (gint) ((EIF_INTEGER_32) 1L));
		loc4 = (EIF_POINTER) gdk_gc_new((GdkWindow*) loc2);
		gdk_draw_drawable((GdkDrawable*) loc2, (GdkGC*) loc4, (GdkDrawable*) arg2, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L), (gint) arg3, (gint) arg4);
		gdk_gc_unref((GdkGC*) loc4);
	}
	F1202_17215(Current, loc1, loc2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.drawable */
EIF_POINTER F1202_17211 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_);
}


/* {EV_PIXMAP_IMP}.mask */
EIF_POINTER F1202_17212 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_);
}


/* {EV_PIXMAP_IMP}.set_pixmap */
void F1202_17215 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	gtk_image_set_from_pixmap((GtkImage*) tp1, (GdkPixmap*) arg1, (GdkBitmap*) arg2);
	*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_5_) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_4_) = (EIF_POINTER) arg2;
	if ((EIF_BOOLEAN)(arg1 != (EIF_POINTER) NULL)) {
		gdk_pixmap_unref((GdkPixmap*) arg1);
	}
	if ((EIF_BOOLEAN)(arg2 != (EIF_POINTER) NULL)) {
		gdk_pixmap_unref((GdkPixmap*) arg2);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_from_xpm_data */
void F1202_17216 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_3_) = (EIF_POINTER) arg1;
	tp1 = F1049_13643(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	tp2 = (EIF_POINTER) NULL;
	loc1 = (EIF_POINTER) gdk_pixmap_create_from_xpm_d((GdkWindow*) tp1, (GdkBitmap**) (EIF_POINTER *) &(loc2), (GdkColor*) tp2, (gchar**) arg1);
	F1202_17215(Current, loc1, loc2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.destroy */
void F1202_17220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	F1202_17215(Current, tp1, tp2);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_) != (EIF_POINTER) NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_);
		gdk_gc_unref((GdkGC*) tp1);
		tp1 = (EIF_POINTER) NULL;
		*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_) = (EIF_POINTER) tp1;
	}
	F1096_14516(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP}.dispose */
void F1202_17221 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_) != (EIF_POINTER) NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_);
		gdk_gc_unref((GdkGC*) tp1);
		tp1 = (EIF_POINTER) NULL;
		*(EIF_POINTER *)(Current+ _PTROFF_46_11_12_3_0_1_) = (EIF_POINTER) tp1;
	}
	F1079_14143(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP}.default_pixmap_xpm */
EIF_POINTER F1202_17222 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) default_pixmap_xpm();
	
	return Result;
}

/* {EV_PIXMAP_IMP}.interface */
static EIF_REFERENCE F1202_17224_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1202_17224 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1202_17224_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit906 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
