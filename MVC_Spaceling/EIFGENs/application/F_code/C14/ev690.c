/*
 * Code for class EV_PIXEL_BUFFER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev690.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_255
static EIF_NATURAL_32 inline_F24_255 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_n_channels ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_255
#endif
#ifndef INLINE_F24_256
static EIF_NATURAL_32 inline_F24_256 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_bits_per_sample ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_256
#endif
#ifndef INLINE_F24_254
static EIF_NATURAL_32 inline_F24_254 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_rowstride ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_254
#endif
#ifndef INLINE_F24_250
static EIF_POINTER inline_F24_250 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_pixels ((GdkPixbuf*) arg1);
#endif
	;
}
#define INLINE_F24_250
#endif
#ifndef INLINE_F24_252
static EIF_INTEGER_32 inline_F24_252 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_width ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_252
#endif
#ifndef INLINE_F24_253
static EIF_INTEGER_32 inline_F24_253 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_height ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_253
#endif
#ifndef INLINE_F24_251
static EIF_POINTER inline_F24_251 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_copy ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_251
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_IMP}.make */
void F1053_13742 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(777));
	tp1 = F1_33(Current);
	F778_7236(RTCV(tr1), tp1, ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.get_pixel */
EIF_NATURAL_32 F1053_13750 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
	loc3 = inline_F24_255(tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
	loc5 = inline_F24_256(tp1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
	loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (loc5 / tu4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
	loc4 = inline_F24_254(tp1);
	loc1 = (EIF_INTEGER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg2 * loc4) + (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 * loc3) * loc5)));
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
	tp1 = inline_F24_250(tp1);
	F778_7238(RTCV(loc2), tp1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L)));
	tu4_1 = F778_7298(RTCV(loc2), loc1);
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {EV_PIXEL_BUFFER_IMP}.width */
EIF_INTEGER_32 F1053_13754 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) gtk_major_version > ((EIF_INTEGER_32) 1L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
		RTLE;
		return (EIF_INTEGER_32) inline_F24_252(tp1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			ti4_1 = F950_11091(RTCV(loc1));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_PIXEL_BUFFER_IMP}.height */
EIF_INTEGER_32 F1053_13755 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) gtk_major_version > ((EIF_INTEGER_32) 1L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
		RTLE;
		return (EIF_INTEGER_32) inline_F24_253(tp1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			ti4_1 = F950_11092(RTCV(loc1));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_PIXEL_BUFFER_IMP}.set_from_stock_id */
void F1053_13757 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	loc2 = (EIF_POINTER) gtk_label_new((gchar*) tp2);
	g_object_ref((gpointer) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_ICON_SIZE_DIALOG;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	loc1 = (EIF_POINTER) gtk_widget_render_icon((GtkWidget*) loc2, (gchar*) arg1, (GtkIconSize) ti4_1, (gchar*) tp2);
	g_object_unref((gpointer) loc2);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	loc2 = tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tp1 = inline_F24_251(loc1);
		F1053_13760(Current, tp1);
		g_object_unref((gpointer) loc1);
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.reusable_managed_pointer */
EIF_REFERENCE F1053_13758 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EV_PIXEL_BUFFER_IMP}.internal_pixmap */
EIF_REFERENCE F1053_13759 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_PIXEL_BUFFER_IMP}.set_gdkpixbuf */
void F1053_13760 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_);
		g_object_unref((gpointer) tp1);
	}
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg1 != tp1)) {
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(gdk_pixbuf_get_has_alpha((GdkPixbuf*) arg1))) {
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tp1 = (EIF_POINTER) gdk_pixbuf_add_alpha((GdkPixbuf*) arg1, (gboolean) (EIF_BOOLEAN) 0, (guchar) tu1_1, (guchar) tu1_2, (guchar) tu1_3);
			*(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_) = (EIF_POINTER) tp1;
			g_object_unref((gpointer) arg1);
		} else {
			*(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_) = (EIF_POINTER) arg1;
		}
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_4_2_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.destroy */
void F1053_13763 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1029_13082(Current, (EIF_BOOLEAN) 1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	F1053_13760(Current, tp2);
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.dispose */
void F1053_13764 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	F1053_13760(Current, tp2);
	RTLE;
}

void EIF_Minit690 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
