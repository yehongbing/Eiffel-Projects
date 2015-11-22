/*
 * Code for class EV_SCREEN_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev905.h"
#include <ev_gtk.h>
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1135
static EIF_POINTER inline_F31_1135 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gdk_display_get_default_screen ((GdkDisplay*) arg1))
	;
}
#define INLINE_F31_1135
#endif
#ifndef INLINE_F1201_17174
static void inline_F1201_17174 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	(FUNCTION_CAST(void, (GdkDisplay*, GdkScreen*, gint, gint)) arg1) ((GdkDisplay*) arg2, (GdkScreen*) arg3, (gint) arg4, (gint) arg5)
	;
}
#define INLINE_F1201_17174
#endif
#ifndef INLINE_F1201_17178
static int inline_F1201_17178 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_INTEGER, EIF_INTEGER, EIF_INTEGER, EIF_INTEGER)) arg1) ((EIF_POINTER) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4, (EIF_INTEGER) arg4, (EIF_INTEGER) arg6)
	;
}
#define INLINE_F1201_17178
#endif
#ifndef INLINE_F1201_17182
static EIF_POINTER inline_F1201_17182 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (FUNCTION_CAST(EIF_POINTER, (GdkDisplay*)) arg1) ((GdkDisplay*) arg2)
	;
}
#define INLINE_F1201_17182
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCREEN_IMP}.make */
void F1201_17139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
	/* INLINED CODE (do_nothing) */
	tr1 = RTOSCF(17183,F1201_17183,(Current));
	
	
	/* END INLINED CODE */
	}
	;
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	tp1 = (EIF_POINTER) gdk_screen_get_root_window((GdkScreen*) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
	tp1 = (EIF_POINTER) gdk_gc_new((GdkWindow*) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
	ti4_1 = (EIF_INTEGER_32) GDK_INCLUDE_INFERIORS;
	gdk_gc_set_subwindow((GdkGC*) tp1, (GdkSubwindowMode) ti4_1);
	F1198_17006(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_11_);
	ti2_1 = (EIF_INTEGER_16) ti4_1;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_0_) = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_12_);
	ti2_1 = (EIF_INTEGER_16) ti4_1;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_1_) = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_SCREEN_IMP}.pointer_position */
EIF_REFERENCE F1201_17140 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc1 = F1049_13627(RTCV(RTOSCF(17183,F1201_17183,(Current))));
	tr1 = RTLNS(752, 752, _OBJSIZ_0_0_0_0_0_0_0_2_);
	ti4_1 = eif_integer_32_item(RTCV(loc1),2);
	ti4_2 = eif_integer_32_item(RTCV(loc1),3);
	F753_6925(RTCV(tr1), ti4_1, ti4_2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.widget_at_position */
EIF_REFERENCE F1201_17141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = F1049_13627(RTCV(RTOSCF(17183,F1201_17183,(Current))));
	loc3 = '\01';
	ti4_1 = eif_integer_32_item(RTCV(loc1),2);
	if (!(EIF_BOOLEAN)(ti4_1 != arg1)) {
		ti4_1 = eif_integer_32_item(RTCV(loc1),3);
		loc3 = (EIF_BOOLEAN)(ti4_1 != arg2);
	}
	if (loc3) {
		F1201_17151(Current, arg1, arg2);
	}
	loc2 = F1201_17143(Current);
	if (loc3) {
		ti4_1 = eif_integer_32_item(RTCV(loc1),2);
		ti4_2 = eif_integer_32_item(RTCV(loc1),3);
		F1201_17151(Current, ti4_1, ti4_2);
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O10149[Dtype(loc2)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_SCREEN_IMP}.widget_at_mouse_pointer */
EIF_REFERENCE F1201_17142 (EIF_REFERENCE Current)
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
	loc1 = F1201_17143(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_SCREEN_IMP}.widget_imp_at_pointer_position */
EIF_REFERENCE F1201_17143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	loc3 = F1049_13627(RTCV(RTOSCF(17183,F1201_17183,(Current))));
	loc1 = eif_pointer_item(RTCV(loc3),1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		gdk_window_get_user_data((GdkWindow*) loc1, (gpointer*) (EIF_POINTER *) &(loc2));
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(Result != NULL)) {
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tb1 = (EIF_BOOLEAN)(loc2 == tp1);
			}
			if (tb1) break;
			Result = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) loc2);
			Result = RTRV(eif_non_attached_type(1095), Result);
			loc2 = (EIF_POINTER) (((GtkWidget *)loc2)->parent);
		}
	}
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.set_pointer_position */
void F1201_17151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_0_);
	loc6 = (EIF_INTEGER_32) ti2_1;
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + loc6);
	ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_1_);
	loc7 = (EIF_INTEGER_32) ti2_1;
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + loc7);
	loc4 = RTOSCF(17172,F1201_17172,(Current));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc4 != tp1)) {
		loc2 = (EIF_POINTER) gdk_display_get_default();
		loc3 = inline_F31_1135(loc2);
		inline_F1201_17174(loc4, loc2, loc3, loc6, loc7);
	} else {
		loc5 = RTOSCF(17170,F1201_17170,(Current));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc5 != tp1)) {
			tp1 = F1201_17180(Current);
			loc1 = EIF_TEST (inline_F1201_17178(loc5, tp1, ((EIF_INTEGER_32) -1L), loc6, loc7, ((EIF_INTEGER_32) 0L)));
		}
	}
	tb1 = *(EIF_BOOLEAN *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _CHROFF_49_8_);
	if (tb1) {
		F1049_13628(RTCV(RTOSCF(17183,F1201_17183,(Current))));
	}
	RTLE;
}

/* {EV_SCREEN_IMP}.height */
EIF_INTEGER_32 F1201_17161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_16_);
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.width */
EIF_INTEGER_32 F1201_17162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_15_);
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.x_test_fake_motion_event_symbol */
static EIF_POINTER F1201_17170_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (17170);
#define Result RTOSR(17170)
	tr1 = RTOSCF(17183,F1201_17183,(Current));
	tr2 = RTMS_EX_H("XTestFakeMotionEvent",20,1417733492);
	Result = F1049_13561(RTCV(tr1), tr2);
	RTOSE (17170);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1201_17170 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17170,F1201_17170_body,(Current));
}

/* {EV_SCREEN_IMP}.gdk_display_warp_pointer_symbol */
static EIF_POINTER F1201_17172_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (17172);
#define Result RTOSR(17172)
	tr1 = RTOSCF(17183,F1201_17183,(Current));
	tr2 = RTMS_EX_H("gdk_display_warp_pointer",24,1820537714);
	Result = F1049_13561(RTCV(tr1), tr2);
	RTOSE (17172);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1201_17172 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17172,F1201_17172_body,(Current));
}

/* {EV_SCREEN_IMP}.gdk_display_warp_pointer_call */
void F1201_17174 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	
	inline_F1201_17174 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5);
}

/* {EV_SCREEN_IMP}.x_test_fake_motion_event_call */
EIF_BOOLEAN F1201_17178 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F1201_17178 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32) arg6));
	return Result;
}

/* {EV_SCREEN_IMP}.gdk_x_display */
EIF_POINTER F1201_17180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = RTOSCF(17181,F1201_17181,(Current));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tp1 = (EIF_POINTER) gdk_display_get_default();
		Result = inline_F1201_17182(loc1, tp1);
	}
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.gdk_x11_display_get_xdisplay_symbol */
static EIF_POINTER F1201_17181_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTEV;
	RTGC;
	RTOSP (17181);
#define Result RTOSR(17181)
	tr1 = RTOSCF(17183,F1201_17183,(Current));
	tr2 = RTMS_EX_H("gdk_x11_display_get_xdisplay",28,2011220089);
	Result = F1049_13561(RTCV(tr1), tr2);
	RTOSE (17181);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1201_17181 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17181,F1201_17181_body,(Current));
}

/* {EV_SCREEN_IMP}.gdk_x11_display_get_xdisplay_call */
EIF_POINTER F1201_17182 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1201_17182 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {EV_SCREEN_IMP}.app_implementation */
static EIF_REFERENCE F1201_17183_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (17183);
#define Result RTOSR(17183)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	loc1 = F1030_13088(RTCV(loc1));
	loc1 = RTRV(eif_non_attached_type(1048), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOSE (17183);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1201_17183 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(17183,F1201_17183_body,(Current));
}

/* {EV_SCREEN_IMP}.update_if_needed */
void F1201_17185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_11_);
	ti2_1 = (EIF_INTEGER_16) ti4_1;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_0_) = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(17183,F1201_17183,(Current)))+ _LNGOFF_49_16_0_12_);
	ti2_1 = (EIF_INTEGER_16) ti4_1;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_6_1_1_) = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	RTLE;
}

/* {EV_SCREEN_IMP}.destroy */
void F1201_17186 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1201_17187(Current);
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_SCREEN_IMP}.dispose */
void F1201_17187 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_);
		gdk_gc_unref((GdkGC*) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {EV_SCREEN_IMP}.drawable */
EIF_POINTER F1201_17188 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_6_1_2_1_0_2_);
}


/* {EV_SCREEN_IMP}.mask */
EIF_POINTER F1201_17189 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

/* {EV_SCREEN_IMP}.interface */
static EIF_REFERENCE F1201_17190_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1201_17190 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1201_17190_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit905 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
