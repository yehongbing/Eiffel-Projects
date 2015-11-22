/*
 * Code for class EV_POINTER_STYLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev671.h"
#include "ev_c_util.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
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
#ifndef INLINE_F24_259
static EIF_POINTER inline_F24_259 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_new_from_xpm_data ((const char**) arg1);
#endif
	;
}
#define INLINE_F24_259
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

/* {EV_POINTER_STYLE_IMP}.make */
void F1037_13246 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13080(Current, (EIF_BOOLEAN) 1);
}

/* {EV_POINTER_STYLE_IMP}.init_predefined */
void F1037_13248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
	switch (arg1) {
		case 3L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
			break;
		case 5L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			break;
		case 6L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			break;
		case 7L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		case 8L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 9L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 10L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 11L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			break;
		case 12L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			break;
		case 1L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
			break;
		case 14L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			break;
		default:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			break;
	}
	F1037_13251(Current, loc1);
	F1037_13252(Current, loc2);
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.set_x_hotspot */
void F1037_13251 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {EV_POINTER_STYLE_IMP}.set_y_hotspot */
void F1037_13252 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg1;
}

/* {EV_POINTER_STYLE_IMP}.destroy */
void F1037_13253 (EIF_REFERENCE Current)
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
	F1037_13260(Current, tp2);
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.width */
EIF_INTEGER_32 F1037_13254 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_);
		RTLE;
		return (EIF_INTEGER_32) inline_F24_252(tp1);
	} else {
		tp1 = (EIF_POINTER) gdk_display_get_default();
		Result = (EIF_INTEGER_32) gdk_display_get_default_cursor_size((GdkDisplay*) tp1);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.height */
EIF_INTEGER_32 F1037_13255 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_);
		RTLE;
		return (EIF_INTEGER_32) inline_F24_253(tp1);
	} else {
		tp1 = (EIF_POINTER) gdk_display_get_default();
		Result = (EIF_INTEGER_32) gdk_display_get_default_cursor_size((GdkDisplay*) tp1);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.x_hotspot */
EIF_INTEGER_32 F1037_13256 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
}


/* {EV_POINTER_STYLE_IMP}.y_hotspot */
EIF_INTEGER_32 F1037_13257 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {EV_POINTER_STYLE_IMP}.gdk_cursor_from_pointer_style */
EIF_POINTER F1037_13258 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) {
		case 1L:
			ti4_1 = (EIF_INTEGER_32) GDK_WATCH;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 2L:
			ti4_1 = (EIF_INTEGER_32) GDK_LEFT_PTR;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 3L:
			ti4_1 = (EIF_INTEGER_32) GDK_CROSSHAIR;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 5L:
			ti4_1 = (EIF_INTEGER_32) GDK_XTERM;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 7L:
			ti4_1 = (EIF_INTEGER_32) GDK_FLEUR;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 8L:
			ti4_1 = (EIF_INTEGER_32) GDK_SB_V_DOUBLE_ARROW;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 13L:
			ti4_1 = (EIF_INTEGER_32) GDK_WATCH;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 4L:
			ti4_1 = (EIF_INTEGER_32) GDK_QUESTION_ARROW;
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ti4_1);
			break;
		case 15L:
			Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) ((EIF_INTEGER_32) 60L));
			break;
		case 6L:
			tp1 = (EIF_POINTER) no_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		case 9L:
			tp1 = (EIF_POINTER) sizenwse_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		case 10L:
			tp1 = (EIF_POINTER) sizenesw_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		case 11L:
			tp1 = (EIF_POINTER) sizewe_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		case 12L:
			tp1 = (EIF_POINTER) uparrow_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		case 14L:
			tp1 = (EIF_POINTER) sizewe_cursor_xpm();
			loc1 = F1037_13259(Current, tp1);
			break;
		default:
			loc1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_);
			g_object_ref((gpointer) loc1);
			break;
	}
	tb1 = '\0';
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(Result == tp1)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) != ((EIF_INTEGER_32) 2L));
	}
	if (tb1) {
		tp1 = (EIF_POINTER) gdk_display_get_default();
		ti4_1 = F940_10963(RTCV(F1029_13066(Current)));
		ti4_2 = F940_10964(RTCV(F1029_13066(Current)));
		Result = (EIF_POINTER) gdk_cursor_new_from_pixbuf((GdkDisplay*) tp1, (GdkPixbuf*) loc1, (gint) ti4_1, (gint) ti4_2);
		g_object_unref((gpointer) loc1);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.image_from_xpm_data */
EIF_POINTER F1037_13259 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	return (EIF_POINTER) inline_F24_259(arg1);
}

/* {EV_POINTER_STYLE_IMP}.set_gdkpixbuf */
void F1037_13260 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_);
		g_object_unref((gpointer) tp1);
	}
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_3_0_0_) = (EIF_POINTER) arg1;
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.copy_from_pointer_style */
void F1037_13262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(Dftype(Current)), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_1_1_0_3_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_1_1_0_3_0_0_);
		tp1 = inline_F24_251(tp1);
		F1037_13260(Current, tp1);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.dispose */
void F1037_13264 (EIF_REFERENCE Current)
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
	F1037_13260(Current, tp2);
	RTLE;
}

void EIF_Minit671 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
