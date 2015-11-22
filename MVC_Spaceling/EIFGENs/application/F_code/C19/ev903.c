/*
 * Code for class EV_BITMAP_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev903.h"
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

/* {EV_BITMAP_IMP}.make */
void F1199_17087 (EIF_REFERENCE Current)
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
	tp1 = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) tp2, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
	tp1 = (EIF_POINTER) gdk_gc_new((GdkWindow*) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_) = (EIF_POINTER) tp1;
	F1199_17095(Current);
	F1198_17006(Current);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_BITMAP_IMP}.clear_rectangle */
void F1199_17089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	tp2 = RTOSCF(17071,F1198_17071,(Current));
	gdk_gc_set_foreground((GdkGC*) tp1, (GdkColor*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	tp2 = RTOSCF(17072,F1198_17072,(Current));
	gdk_gc_set_background((GdkGC*) tp1, (GdkColor*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	gdk_draw_rectangle((GdkDrawable*) tp1, (GdkGC*) tp2, (gint) ((EIF_INTEGER_32) 1L), (gint) arg1, (gint) arg2, (gint) arg3, (gint) arg4);
	F1199_17095(Current);
	RTLE;
}

/* {EV_BITMAP_IMP}.width */
EIF_INTEGER_32 F1199_17090 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
		gdk_window_get_size((GdkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(Result), (gint*) (EIF_INTEGER_32 *) &(loc1));
	}
	RTLE;
	return Result;
}

/* {EV_BITMAP_IMP}.height */
EIF_INTEGER_32 F1199_17091 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
		gdk_window_get_size((GdkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) (EIF_INTEGER_32 *) &(Result));
	}
	RTLE;
	return Result;
}

/* {EV_BITMAP_IMP}.drawable */
EIF_POINTER F1199_17092 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
}


/* {EV_BITMAP_IMP}.app_implementation */
static EIF_REFERENCE F1199_17093_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	
	RTEV;
	RTGC;
	RTOSP (17093);
#define Result RTOSR(17093)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	loc2 = F1030_13088(RTCV(loc2));
	loc2 = RTRV(eif_non_attached_type(1048), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc2;
	RTOSE (17093);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1199_17093 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17093,F1199_17093_body,(Current));
}

/* {EV_BITMAP_IMP}.set_default_colors */
void F1199_17095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	tp2 = RTOSCF(17072,F1198_17072,(Current));
	gdk_gc_set_foreground((GdkGC*) tp1, (GdkColor*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	tp2 = RTOSCF(17071,F1198_17071,(Current));
	gdk_gc_set_background((GdkGC*) tp1, (GdkColor*) tp2);
	RTLE;
}

/* {EV_BITMAP_IMP}.destroy */
void F1199_17096 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
		gdk_bitmap_unref((GdkBitmap*) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) = (EIF_POINTER) tp2;
	}
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_BITMAP_IMP}.dispose */
void F1199_17097 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
		gdk_bitmap_unref((GdkBitmap*) tp1);
	}
	RTLE;
}

/* {EV_BITMAP_IMP}.update_if_needed */
void F1199_17099 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_BITMAP_IMP}.mask */
EIF_POINTER F1199_17100 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

/* {EV_BITMAP_IMP}.interface */
static EIF_REFERENCE F1199_17101_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1199_17101 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1199_17101_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit903 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
