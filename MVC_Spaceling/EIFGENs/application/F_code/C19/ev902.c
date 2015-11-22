/*
 * Code for class EV_DRAWABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev902.h"
#include <string.h>
#include <stdlib.h>
#include <ev_gtk.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1198_17084
static void inline_F1198_17084 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gdk_gc_set_dashes ((GdkGC*) arg1, 0, (gint8*) arg2, 2)
	;
}
#define INLINE_F1198_17084
#endif
#ifndef INLINE_F24_262
static EIF_POINTER inline_F24_262 (EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_new ((GdkColorspace) arg1, (gboolean) arg2, (int) arg3, (int) arg4, (int) arg5);
#endif
	;
}
#define INLINE_F24_262
#endif
#ifndef INLINE_F1198_17073
static void inline_F1198_17073 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	{
	guint32 x, y;
	guint32 l_pix_height,l_pix_width;
	guint32 l_pix_row_stride;
	guint32 l_mask_row_stride;
	GdkPixbuf *pixbuf, *mask;
	guchar *l_mask_pixels, *l_pixbuf_pixels;
	pixbuf = (GdkPixbuf*) arg1;
	mask = (GdkPixbuf*) arg2;
	l_pix_height = gdk_pixbuf_get_height (pixbuf);
	l_pix_width = gdk_pixbuf_get_width (pixbuf);
	l_pix_row_stride = gdk_pixbuf_get_rowstride(pixbuf);
	l_mask_row_stride = gdk_pixbuf_get_rowstride(mask);
	l_mask_pixels = gdk_pixbuf_get_pixels (mask);
	l_pixbuf_pixels = gdk_pixbuf_get_pixels (pixbuf);
	for (y = 0; y < l_pix_height; y++) {
		guchar *src, *dest;
		src = (l_mask_pixels + (y * l_mask_row_stride));
		dest = (l_pixbuf_pixels + (y * l_pix_row_stride));
		for (x = 0; x < l_pix_width; x++) {
			if (src [0] == (guchar)0) {
				dest [3] = (guchar)0;
			}
			src += 4;
			dest += 4;
		}
	}
}
	;
}
#define INLINE_F1198_17073
#endif
#ifndef INLINE_F31_1335
static EIF_POINTER inline_F31_1335 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	return (EIF_POINTER) (gdk_pixbuf_scale_simple ((GdkPixbuf*) arg1, (int) arg2, (int) arg3, (int) arg4))
	;
}
#define INLINE_F31_1335
#endif
#ifndef INLINE_F31_1044
static EIF_POINTER inline_F31_1044 (EIF_POINTER arg1)
{
	return gdk_screen_get_rgb_colormap ((GdkScreen*)arg1);
	;
}
#define INLINE_F31_1044
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DRAWABLE_IMP}.init_default_values */
void F1198_17006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = eif_bit_shift_left(((EIF_INTEGER_16) 3L),((EIF_INTEGER_32) 8L));
	loc1 = eif_bit_or(((EIF_INTEGER_16) 3L),ti2_1);
	tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
	inline_F1198_17084(tp1, (EIF_INTEGER_16 *) &(loc1));
	ti4_1 = (EIF_INTEGER_32) GDK_LINE_SOLID;
	*(EIF_INTEGER_32 *)(Current + O12669[dtype-1197]) = (EIF_INTEGER_32) ti4_1;
	F1198_17029(Current, ((EIF_INTEGER_32) 0L));
	F1198_17028(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_DRAWABLE_IMP}.cap_style */
EIF_INTEGER_32 F1198_17012 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GDK_CAP_ROUND;
}

/* {EV_DRAWABLE_IMP}.join_style */
EIF_INTEGER_32 F1198_17013 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GDK_JOIN_BEVEL;
}

/* {EV_DRAWABLE_IMP}.foreground_color_internal */
EIF_REFERENCE F1198_17018 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12689[Dtype(Current)-1197]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		loc1 = F938_10902(RTCV(loc4));
		loc2 = F938_10903(RTCV(loc4));
		loc3 = F938_10904(RTCV(loc4));
	}
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F938_10887(RTCV(tr1), loc1, loc2, loc3);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_DRAWABLE_IMP}.background_color_internal */
EIF_REFERENCE F1198_17019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12690[Dtype(Current)-1197]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		loc1 = F938_10902(RTCV(loc4));
		loc2 = F938_10903(RTCV(loc4));
		loc3 = F938_10904(RTCV(loc4));
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	}
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F938_10887(RTCV(tr1), loc1, loc2, loc3);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_DRAWABLE_IMP}.line_width */
EIF_INTEGER_32 F1198_17020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) calloc (sizeof(GdkGCValues), 1);
	*(EIF_POINTER *)(Current + O12666[dtype-1197]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
	tp2 = *(EIF_POINTER *)(Current + O12666[dtype-1197]);
	gdk_gc_get_values((GdkGC*) tp1, (GdkGCValues*) tp2);
	tp1 = *(EIF_POINTER *)(Current + O12666[dtype-1197]);
	Result = (EIF_INTEGER_32) (((GdkGCValues *)tp1)->line_width);
	tp1 = *(EIF_POINTER *)(Current + O12666[dtype-1197]);
	free(tp1);
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.set_font */
void F1198_17025 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(1034),loc1);
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O12696[Dtype(Current)-1197]) = (EIF_REFERENCE) loc1;
	} else {
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_background_color */
void F1198_17026 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O12690[dtype-1197]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(937));
		F938_10887(RTCV(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O12690[dtype-1197]) = (EIF_REFERENCE) loc1;
	}
	tb1 = F938_10916(RTCV(loc1), arg1);
	if ((EIF_BOOLEAN) !tb1) {
		ti4_1 = F938_10902(RTCV(arg1));
		F938_10905(RTCV(loc1), ti4_1);
		ti4_1 = F938_10903(RTCV(arg1));
		F938_10906(RTCV(loc1), ti4_1);
		ti4_1 = F938_10904(RTCV(arg1));
		F938_10907(RTCV(loc1), ti4_1);
		ti4_1 = F938_10909(RTCV(arg1));
		ti4_2 = F938_10910(RTCV(arg1));
		ti4_3 = F938_10911(RTCV(arg1));
		F1198_17070(Current, (EIF_BOOLEAN) 0, ti4_1, ti4_2, ti4_3);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_foreground_color */
void F1198_17027 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O12689[dtype-1197]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(937));
		F930_10736(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O12689[dtype-1197]) = (EIF_REFERENCE) loc1;
	}
	tb1 = F938_10916(RTCV(loc1), arg1);
	if ((EIF_BOOLEAN) !tb1) {
		ti4_1 = F938_10902(RTCV(arg1));
		F938_10905(RTCV(loc1), ti4_1);
		ti4_1 = F938_10903(RTCV(arg1));
		F938_10906(RTCV(loc1), ti4_1);
		ti4_1 = F938_10904(RTCV(arg1));
		F938_10907(RTCV(loc1), ti4_1);
		ti4_1 = F938_10909(RTCV(arg1));
		ti4_2 = F938_10910(RTCV(arg1));
		ti4_3 = F938_10911(RTCV(arg1));
		F1198_17070(Current, (EIF_BOOLEAN) 1, ti4_1, ti4_2, ti4_3);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_line_width */
void F1198_17028 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12669[dtype-1197]);
	ti4_2 = F1198_17012(Current);
	ti4_3 = F1198_17013(Current);
	gdk_gc_set_line_attributes((GdkGC*) tp1, (gint) arg1, (GdkLineStyle) ti4_1, (GdkCapStyle) ti4_2, (GdkJoinStyle) ti4_3);
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_drawing_mode */
void F1198_17029 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_POINTER *)(Current + O12665[Dtype(Current)-1197]);
	switch (arg1) {
		case 0L:
			ti4_1 = (EIF_INTEGER_32) GDK_COPY;
			gdk_gc_set_function((GdkGC*) loc1, (GdkFunction) ti4_1);
			break;
		case 1L:
			ti4_1 = (EIF_INTEGER_32) GDK_XOR;
			gdk_gc_set_function((GdkGC*) loc1, (GdkFunction) ti4_1);
			break;
		case 2L:
			ti4_1 = (EIF_INTEGER_32) GDK_INVERT;
			gdk_gc_set_function((GdkGC*) loc1, (GdkFunction) ti4_1);
			break;
		case 3L:
			ti4_1 = (EIF_INTEGER_32) GDK_AND;
			gdk_gc_set_function((GdkGC*) loc1, (GdkFunction) ti4_1);
			break;
		case 4L:
			ti4_1 = (EIF_INTEGER_32) GDK_OR;
			gdk_gc_set_function((GdkGC*) loc1, (GdkFunction) ti4_1);
			break;
		default:
			break;
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.enable_dashed_line_style */
void F1198_17035 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GDK_LINE_ON_OFF_DASH;
	*(EIF_INTEGER_32 *)(Current + O12669[dtype-1197]) = (EIF_INTEGER_32) ti4_1;
	tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
	ti4_1 = F1198_17020(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O12669[dtype-1197]);
	ti4_3 = F1198_17012(Current);
	ti4_4 = F1198_17013(Current);
	gdk_gc_set_line_attributes((GdkGC*) tp1, (gint) ti4_1, (GdkLineStyle) ti4_2, (GdkCapStyle) ti4_3, (GdkJoinStyle) ti4_4);
	RTLE;
}

/* {EV_DRAWABLE_IMP}.clear_rectangle */
void F1198_17038 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current) != tp1)) {
		loc1 = *(EIF_REFERENCE *)(Current + O12689[dtype-1197]);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			loc1 = F1065_13855(Current);
		}
		loc2 = *(EIF_REFERENCE *)(Current + O12690[dtype-1197]);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			loc2 = F1065_13856(Current);
		}
		ti4_1 = F938_10909(RTCV(loc2));
		ti4_2 = F938_10910(RTCV(loc2));
		ti4_3 = F938_10911(RTCV(loc2));
		F1198_17070(Current, (EIF_BOOLEAN) 1, ti4_1, ti4_2, ti4_3);
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current);
		tp2 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12682[dtype-1197]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ti4_1),ti4_2);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_1 = eif_min_int32 (ti4_1,ti4_2);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12683[dtype-1197]);
		ti4_2 = (EIF_INTEGER_32) ti2_1;
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (arg2 + ti4_2),ti4_3);
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_2 = eif_min_int32 (ti4_2,ti4_3);
		gdk_draw_rectangle((GdkDrawable*) tp1, (GdkGC*) tp2, (gint) ((EIF_INTEGER_32) 1L), (gint) ti4_1, (gint) ti4_2, (gint) arg3, (gint) arg4);
		ti4_1 = F938_10909(RTCV(loc1));
		ti4_2 = F938_10910(RTCV(loc1));
		ti4_3 = F938_10911(RTCV(loc1));
		F1198_17070(Current, (EIF_BOOLEAN) 1, ti4_1, ti4_2, ti4_3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12693[dtype-1198])(Current);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.draw_point */
void F1198_17039 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_16 ti2_1;
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
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current) != tp1)) {
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current);
		tp2 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12682[dtype-1197]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ti4_1),ti4_2);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_1 = eif_min_int32 (ti4_1,ti4_2);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12683[dtype-1197]);
		ti4_2 = (EIF_INTEGER_32) ti2_1;
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (arg2 + ti4_2),ti4_3);
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_2 = eif_min_int32 (ti4_2,ti4_3);
		gdk_draw_point((GdkDrawable*) tp1, (GdkGC*) tp2, (gint) ti4_1, (gint) ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12693[dtype-1198])(Current);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.draw_segment */
void F1198_17048 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_16 ti2_1;
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
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current) != tp1)) {
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current);
		tp2 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12682[dtype-1197]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ti4_1),ti4_2);
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_1 = eif_min_int32 (ti4_1,ti4_2);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12683[dtype-1197]);
		ti4_2 = (EIF_INTEGER_32) ti2_1;
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (arg2 + ti4_2),ti4_3);
		ti4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_2 = eif_min_int32 (ti4_2,ti4_3);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12682[dtype-1197]);
		ti4_3 = (EIF_INTEGER_32) ti2_1;
		ti4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_3 = eif_max_int32 ((EIF_INTEGER_32) (arg3 + ti4_3),ti4_4);
		ti4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_3 = eif_min_int32 (ti4_3,ti4_4);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O12683[dtype-1197]);
		ti4_4 = (EIF_INTEGER_32) ti2_1;
		ti4_5 = (EIF_INTEGER_32) ((EIF_INTEGER_16) -32768L);
		ti4_4 = eif_max_int32 ((EIF_INTEGER_32) (arg4 + ti4_4),ti4_5);
		ti4_5 = (EIF_INTEGER_32) ((EIF_INTEGER_16) 32767L);
		ti4_4 = eif_min_int32 (ti4_4,ti4_5);
		gdk_draw_line((GdkDrawable*) tp1, (GdkGC*) tp2, (gint) ti4_1, (gint) ti4_2, (gint) ti4_3, (gint) ti4_4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12693[dtype-1198])(Current);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.pixbuf_from_drawable */
EIF_POINTER F1198_17065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12547[dtype-1198])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12548[dtype-1198])(Current);
	Result = F1198_17066(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.pixbuf_from_drawable_at_position */
EIF_POINTER F1198_17066 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12667[dtype-1198])(Current);
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O12682[dtype-1197]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O12683[dtype-1197]);
	ti4_2 = (EIF_INTEGER_32) ti2_1;
	Result = (EIF_POINTER) gdk_pixbuf_get_from_drawable((GdkPixbuf*) loc3, (GdkDrawable*) tp1, (GdkColormap*) loc3, (int) (EIF_INTEGER_32) (arg1 + ti4_1), (int) (EIF_INTEGER_32) (arg2 + ti4_2), (int) arg3, (int) arg4, (int) arg5, (int) arg6);
	if ((EIF_BOOLEAN)(Result == loc3)) {
		RTLE;
		return (EIF_POINTER) inline_F24_262(((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 8L), arg5, arg6);
	} else {
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12668[dtype-1198])(Current) != loc3)) {
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12668[dtype-1198])(Current);
			loc1 = (EIF_POINTER) gdk_pixbuf_get_from_drawable((GdkPixbuf*) loc3, (GdkDrawable*) tp1, (GdkColormap*) loc3, (int) arg1, (int) arg2, (int) arg3, (int) arg4, (int) arg5, (int) arg6);
			if ((EIF_BOOLEAN)(loc1 != loc3)) {
				loc2 = (EIF_POINTER) loc1;
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
				tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
				loc1 = (EIF_POINTER) gdk_pixbuf_add_alpha((GdkPixbuf*) loc1, (gboolean) (EIF_BOOLEAN) 1, (guchar) tu1_1, (guchar) tu1_2, (guchar) tu1_3);
				g_object_unref((gpointer) loc2);
				loc2 = (EIF_POINTER) Result;
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
				tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
				Result = (EIF_POINTER) gdk_pixbuf_add_alpha((GdkPixbuf*) Result, (gboolean) (EIF_BOOLEAN) 0, (guchar) tu1_1, (guchar) tu1_2, (guchar) tu1_3);
				g_object_unref((gpointer) loc2);
				ti4_1 = (EIF_INTEGER_32) GDK_INTERP_BILINEAR;
				gdk_pixbuf_composite((GdkPixbuf*) loc1, (GdkPixbuf*) Result, (int) ((EIF_INTEGER_32) 0L), (int) ((EIF_INTEGER_32) 0L), (int) arg5, (int) arg6, (double) (EIF_REAL_64) 0.0, (double) (EIF_REAL_64) 0.0, (double) (EIF_REAL_64) 1.0, (double) (EIF_REAL_64) 1.0, (GdkInterpType) ti4_1, (int) ((EIF_INTEGER_32) 255L));
				inline_F1198_17073(Result, loc1);
				g_object_unref((gpointer) loc1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.pixbuf_from_drawable_with_size */
EIF_POINTER F1198_17067 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F1198_17065(Current);
	ti4_1 = (EIF_INTEGER_32) GDK_INTERP_BILINEAR;
	Result = inline_F31_1335(loc1, arg1, arg2, ti4_1);
	g_object_unref((gpointer) loc1);
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.internal_set_color */
void F1198_17070 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12688[dtype-1198])(Current);
	loc1 = RTOSCF(13653,F1049_13653,(RTCV(tr1)));
	(((GdkColor *)loc1)->red = (gushort)(arg2));
	(((GdkColor *)loc1)->green = (gushort)(arg3));
	(((GdkColor *)loc1)->blue = (gushort)(arg4));
	if (arg1) {
		tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
		gdk_gc_set_rgb_fg_color((GdkGC*) tp1, (GdkColor*) loc1);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12665[dtype-1197]);
		gdk_gc_set_rgb_bg_color((GdkGC*) tp1, (GdkColor*) loc1);
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.fg_color */
static EIF_POINTER F1198_17071_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	

	
	RTEV;
	RTGC;
	RTOSP (17071);
#define Result RTOSR(17071)
	Result = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	tp1 = inline_F31_1044(tp1);
	loc1 = (EIF_BOOLEAN) EIF_TEST(gdk_colormap_alloc_color((GdkColormap*) tp1, (GdkColor*) Result, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1));
	RTOSE (17071);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1198_17071 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17071,F1198_17071_body,(Current));
}

/* {EV_DRAWABLE_IMP}.bg_color */
static EIF_POINTER F1198_17072_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	

	
	RTEV;
	RTGC;
	RTOSP (17072);
#define Result RTOSR(17072)
	Result = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
	(((GdkColor *)Result)->red = (gushort)(((EIF_INTEGER_32) 65535L)));
	(((GdkColor *)Result)->green = (gushort)(((EIF_INTEGER_32) 65535L)));
	(((GdkColor *)Result)->blue = (gushort)(((EIF_INTEGER_32) 65535L)));
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	tp1 = inline_F31_1044(tp1);
	loc1 = (EIF_BOOLEAN) EIF_TEST(gdk_colormap_alloc_color((GdkColormap*) tp1, (GdkColor*) Result, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1));
	RTOSE (17072);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1198_17072 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17072,F1198_17072_body,(Current));
}

/* {EV_DRAWABLE_IMP}.draw_mask_on_pixbuf */
void F1198_17073 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F1198_17073 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {EV_DRAWABLE_IMP}.internal_foreground_color */
EIF_REFERENCE F1198_17075 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12689[Dtype(Current) - 1197]);
}


/* {EV_DRAWABLE_IMP}.internal_background_color */
EIF_REFERENCE F1198_17076 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12690[Dtype(Current) - 1197]);
}


/* {EV_DRAWABLE_IMP}.internal_font_imp */
static EIF_REFERENCE F1198_17082_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1198_17082 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O12696[Dtype(Current) - 1197]);
	if (!r) {
		if (RTAT(1034)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1198_17082_body (Current));
			*(EIF_REFERENCE *)(Current + O12696[Dtype(Current) - 1197]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_DRAWABLE_IMP}.gdk_gc_unref */
void F1198_17083 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_gc_unref((GdkGC*) arg1);
	
}

/* {EV_DRAWABLE_IMP}.set_dashes_pattern */
void F1198_17084 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F1198_17084 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {EV_DRAWABLE_IMP}.interface */
static EIF_REFERENCE F1198_17085_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1198_17085 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1198_17085_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit902 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
