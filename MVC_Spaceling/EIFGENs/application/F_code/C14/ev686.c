/*
 * Code for class EV_APPLICATION_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev686.h"
#include <stdlib.h>
#include "ev_c_util.h"
#include <ev_gtk.h>
#include "eif_built_in.h"
#include <glib.h>
#include <gmodule.h>
#include "ev_any_imp.h"
#include "eif_argv.h"
#include "eif_helpers.h"
#include "eif_misc.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1044
static EIF_POINTER inline_F31_1044 (EIF_POINTER arg1)
{
	return gdk_screen_get_rgb_colormap ((GdkScreen*)arg1);
	;
}
#define INLINE_F31_1044
#endif
#ifndef INLINE_F31_1045
static EIF_POINTER inline_F31_1045 (EIF_POINTER arg1)
{
	return gdk_screen_get_rgb_visual ((GdkScreen*)arg1);
	;
}
#define INLINE_F31_1045
#endif
#ifndef INLINE_F1049_13540
static int inline_F1049_13540 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (FUNCTION_CAST(gboolean, (GdkDisplay*)) arg1)((GdkDisplay*) arg2);
	;
}
#define INLINE_F1049_13540
#endif
#ifndef INLINE_F31_1043
static EIF_INTEGER_32 inline_F31_1043 (EIF_POINTER arg1)
{
	#if GTK_MINOR_VERSION >= 20
	return gdk_screen_get_primary_monitor ((GdkScreen*)arg1);
#else
	return 0; // Default Primary Monitor is the first monitor.
#endif
	;
}
#define INLINE_F31_1043
#endif
#ifndef INLINE_F1079_14135
static EIF_REFERENCE inline_F1079_14135 (EIF_POINTER arg1)
{
	return (EIF_REFERENCE) (c_ev_any_imp_get_eif_reference_from_object_id (arg1))
	;
}
#define INLINE_F1079_14135
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_IMP}.make */
void F1049_13536 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	F925_10552(RTCV(tr1), ((EIF_INTEGER_32) 4L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tp1 = (EIF_POINTER) gtk_set_locale();
	F921_10333(RTCV(tr1), tp1);
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = (EIF_BOOLEAN) EIF_TEST(gtk_init_check (&eif_argc, &eif_argv));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_11_) = (EIF_BOOLEAN) tb1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,913,874,874,868,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(792));
	F793_8394(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_42_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {646,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F647_6017(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	F920_10235(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	F1048_13434(Current);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_49_11_)) {
		F1049_13654(Current);
		tb1 = F51_2253(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_49_12_) = (EIF_BOOLEAN) tb1;
		enable_ev_gtk_log((EIF_INTEGER) ((EIF_INTEGER_32) 0L));
		gdk_set_show_events((gboolean) (EIF_BOOLEAN) 0);
		ti4_1 = (EIF_INTEGER_32) gdk_visual_get_best_depth();
		ti4_1 = eif_min_int32 (ti4_1,((EIF_INTEGER_32) 24L));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_19_) = (EIF_INTEGER_32) ti4_1;
		loc3 = RTOSCF(13541,F1049_13541,(Current));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc3 != tp1)) {
		}
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			tp1 = (EIF_POINTER) gdk_screen_get_default();
			loc2 = inline_F31_1044(tp1);
		}
		gtk_widget_set_default_colormap((GdkColormap*) loc2);
		F791_8089(Current);
		tp1 = (EIF_POINTER) gtk_tooltips_new();
		*(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_1_) = (EIF_POINTER) tp1;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_1_);
		g_object_ref((gpointer) tp1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_1_);
		gtk_object_sink((GtkObject*) tp1);
		F1049_13616(Current, ((EIF_INTEGER_32) 500L));
		gdk_error_trap_push();
		F1049_13538(Current);
		tp1 = (EIF_POINTER) gtk_im_context_simple_new();
		*(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_2_) = (EIF_POINTER) tp1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_42_);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_2_);
		tr2 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr3 = RTMS_EX_H("commit",6,2031381364);
		F781_7428(RTCV(tr2), tr3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr3 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
		RTAR(tr3,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,1,841,780,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr6 = RTLNRF(typres0, (EIF_POINTER) __A686_462_2, (EIF_POINTER) _A686_462_2, (EIF_POINTER)(F1049_13537),tr3, 1, 1);
		}
		tr7 = RTOSCF(13629,F1049_13629,(Current));
		F793_8399(RTCV(tr1), tp1, tr2, tr6, tr7, (EIF_BOOLEAN) 1);
	} else {
		tr1 = RTMS_EX_H("EiffelVision application could not launch, check DISPLAY environment variable\012",78,1906588938);
		F1_27(Current, tr1);
		esdie(((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.on_char */
void F1049_13537 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
	F926_10671(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
	tr2 = F781_7426(RTCV(arg1));
	F926_10643(RTCV(tr1), tr2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_2_);
	gtk_im_context_reset((GtkIMContext*) tp1);
	RTLE;
}

/* {EV_APPLICATION_IMP}.update_screen_meta_data */
void F1049_13538 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	tp1 = inline_F31_1045(tp1);
	loc3 = (EIF_POINTER) gdk_image_new((GdkImageType) ((EIF_INTEGER_32) 1L), (GdkVisual*) tp1, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_13_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == tp2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_49_13_)) {
		g_object_unref((gpointer) loc3);
	}
	loc4 = RTOSCF(13539,F1049_13539,(Current));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc4 != tp1)) {
		tp1 = (EIF_POINTER) gdk_display_get_default();
		tb1 = EIF_TEST (inline_F1049_13540(loc4, tp1));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_49_7_) = (EIF_BOOLEAN) tb1;
	}
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	ti4_1 = (EIF_INTEGER_32) gdk_screen_get_n_monitors((GdkScreen*) tp1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_17_) = (EIF_INTEGER_32) ti4_1;
	loc1 = RTOSCF(13650,F1049_13650,(Current));
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	loc2 = inline_F31_1043(tp1);
	tp1 = (EIF_POINTER) gdk_screen_get_default();
	gdk_screen_get_monitor_geometry((GdkScreen*) tp1, (gint) loc2, (GdkRectangle*) loc1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_18_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_11_) = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (((GdkRectangle *)loc1)->x);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_12_) = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (((GdkRectangle *)loc1)->y);
	ti4_1 = (EIF_INTEGER_32) (((GdkRectangle *)loc1)->width);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_15_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = (EIF_INTEGER_32) (((GdkRectangle *)loc1)->height);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_16_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = (EIF_INTEGER_32) gdk_screen_width();
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_13_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = (EIF_INTEGER_32) gdk_screen_height();
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_14_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_APPLICATION_IMP}.gdk_display_supports_composite_symbol */
static EIF_POINTER F1049_13539_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (13539);
#define Result RTOSR(13539)
	tr1 = RTMS_EX_H("gdk_display_supports_composite",30,1113796709);
	Result = F1049_13561(Current, tr1);
	RTOSE (13539);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1049_13539 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13539,F1049_13539_body,(Current));
}

/* {EV_APPLICATION_IMP}.gdk_display_supports_composite_call */
EIF_BOOLEAN F1049_13540 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F1049_13540 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {EV_APPLICATION_IMP}.gdk_screen_get_rgba_colormap_symbol */
static EIF_POINTER F1049_13541_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (13541);
#define Result RTOSR(13541)
	tr1 = RTMS_EX_H("gdk_screen_get_rgba_colormap",28,1508252784);
	Result = F1049_13561(Current, tr1);
	RTOSE (13541);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1049_13541 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13541,F1049_13541_body,(Current));
}

/* {EV_APPLICATION_IMP}.is_display_remote */
EIF_BOOLEAN F1049_13553 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_49_13_);
}


/* {EV_APPLICATION_IMP}.set_currently_shown_control */
void F1049_13554 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.currently_shown_control */
EIF_REFERENCE F1049_13555 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_41_);
}


/* {EV_APPLICATION_IMP}.focused_widget */
EIF_REFERENCE F1049_13556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Result);
	
	RTGC;
	loc1 = F1049_13568(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	for (;;) {
		tb1 = '\01';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc1)-273])(RTCV(loc1));
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		tb2 = F968_11581(RTCV(loc2));
		if (tb2) {
			tb2 = F976_12013(RTCV(loc2));
			if (tb2) {
				loc3 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
				loc3 = RTRV(eif_non_attached_type(1122), loc3);
				RTCT0(NULL, EX_CHECK);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tp1 = *(EIF_POINTER *)(RTCV(loc3) + O10979[Dtype(loc3)-1078]);
				loc5 = (EIF_POINTER) (((GtkWindow *)tp1)->focus_widget);
				if ((EIF_BOOLEAN)(loc5 != (EIF_POINTER) NULL)) {
					loc4 = F1049_13638(Current, loc5);
					loc4 = RTRV(eif_non_attached_type(1095), loc4);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						Result = *(EIF_REFERENCE *)(RTCV(loc4) + O10149[Dtype(loc4)-1028]);
					}
				}
			} else {
				Result = (EIF_REFERENCE) loc2;
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc1)-303])(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.wait_for_input */
void F1049_13557 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1049_13613(Current, arg1);
}

/* {EV_APPLICATION_IMP}.process_underlying_toolkit_event_queue */
RTEOMS(13557,2);
void F1049_13558 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER loc13 = (EIF_POINTER) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc16 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc23 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc25 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc27 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc28 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc33 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc34 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc35 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc36 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(20);
	RTLR(0,loc14);
	RTLR(1,Current);
	RTLR(2,loc15);
	RTLR(3,loc29);
	RTLR(4,tr1);
	RTLR(5,loc30);
	RTLR(6,loc31);
	RTLR(7,loc7);
	RTLR(8,loc9);
	RTLR(9,loc8);
	RTLR(10,tr2);
	RTLR(11,loc32);
	RTLR(12,tr3);
	RTLR(13,loc11);
	RTLR(14,loc10);
	RTLR(15,loc33);
	RTLR(16,loc34);
	RTLR(17,loc35);
	RTLR(18,loc36);
	RTLR(19,loc24);
	
	RTGC;
	loc14 = RTOSCF(13573,F1049_13573,(Current));
	loc15 = RTOSCF(13574,F1049_13574,(Current));
	for (;;) {
		tb1 = '\01';
		if (!loc16) {
			tb1 = F1029_13065(Current);
		}
		if (tb1) break;
		loc1 = (EIF_POINTER) gdk_event_get();
		if ((EIF_BOOLEAN)(loc1 != (EIF_POINTER) NULL)) {
			loc2 = (EIF_POINTER) gtk_get_event_widget((GdkEvent*) loc1);
			ti1_1 = (EIF_INTEGER_8) (((GdkEventAny *)loc1)->send_event);
			ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
			loc28 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 != ti1_2);
			loc26 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			loc3 = (EIF_POINTER) gtk_grab_get_current();
			if ((EIF_BOOLEAN)(loc3 == (EIF_POINTER) NULL)) {
				loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc3 = (EIF_POINTER) loc2;
			} else {
				loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				tb2 = '\0';
				tr1 = F1049_13622(Current);
				loc29 = tr1;
				if (EIF_TEST(loc29)) {
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[Dtype(loc29)-1080])(RTCV(loc29));
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					F1094_14463(RTCV(loc29), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
				} else {
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
					loc30 = tr1;
					if (EIF_TEST(loc30)) {
						tb3 = F968_11580(RTCV(loc30));
						tb2 = (EIF_BOOLEAN) !tb3;
					}
					if (tb2) {
						F968_11587(RTCV(loc30));
					}
				}
			}
			switch ((EIF_INTEGER_8) (((GdkEventAny *)loc1)->type)) {
				case 3L:
					loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					*(EIF_BOOLEAN *)(Current+ _CHROFF_49_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					tr8_1 = (EIF_REAL_64) (((GdkEventMotion *)loc1)->x);
					loc18 = (EIF_INTEGER_32) tr8_1;
					tr8_1 = (EIF_REAL_64) (((GdkEventMotion *)loc1)->y);
					loc19 = (EIF_INTEGER_32) tr8_1;
					tr8_1 = (EIF_REAL_64) (((GdkEventMotion *)loc1)->x_root);
					loc20 = (EIF_INTEGER_32) tr8_1;
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_11_);
					loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc20 + ti4_1);
					tr8_1 = (EIF_REAL_64) (((GdkEventMotion *)loc1)->y_root);
					loc21 = (EIF_INTEGER_32) tr8_1;
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_12_);
					loc21 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 + ti4_1);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
					
					tp1 = (EIF_POINTER) (((GdkEventMotion *)loc1)->window);
					eif_put_pointer_item(RTCV(tr1),1,tp1);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
					
					eif_put_integer_32_item(RTCV(tr1),2,loc20);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
					
					eif_put_integer_32_item(RTCV(tr1),3,loc21);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
					
					tu4_1 = (EIF_NATURAL_32) (((GdkEventMotion *)loc1)->state);
					eif_put_natural_32_item(RTCV(tr1),4,tu4_1);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
					loc31 = tr1;
					if (EIF_TEST(loc31)) {
						loc7 = *(EIF_REFERENCE *)(RTCV(loc31) + O8345[Dtype(loc31)-929]);
						loc7 = RTRV(eif_non_attached_type(1093), loc7);
					} else {
						if ((EIF_BOOLEAN)(F1049_13622(Current) != NULL)) {
							loc7 = F1049_13622(Current);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
							tp2 = eif_pointer_item(RTCV(tr1),1);
							loc7 = F1049_13640(Current, tp2);
							loc7 = RTRV(eif_non_attached_type(1093), loc7);
						}
					}
					tb2 = '\0';
					if ((EIF_BOOLEAN)(loc7 != NULL)) {
						tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[Dtype(loc7)-1080])(RTCV(loc7));
						tb2 = tb3;
					}
					if (tb2) {
						loc9 = F1081_14194(RTCV(loc7));
						if ((EIF_BOOLEAN)(loc9 != NULL)) {
							tb2 = F1123_15451(RTCV(loc9));
							if ((EIF_BOOLEAN) !tb2) {
								gtk_main_do_event((GdkEvent*) loc1);
								if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_9_) != NULL)) {
									loc8 = loc7;
									loc8 = RTRV(eif_non_attached_type(1095), loc8);
									if ((EIF_BOOLEAN)(loc8 != NULL)) {
										
										tr1 = F1029_13066(RTCV(loc8));
										eif_put_reference_item(RTCV(loc15),1,tr1);
										
										eif_put_integer_32_item(RTCV(loc15),2,loc20);
										
										eif_put_integer_32_item(RTCV(loc15),3,loc21);
										tr2 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr2)-725])(RTCV(tr2), loc15);
										
										tr2 = RTOSCF(13645,F1049_13645,(Current));
										eif_put_reference_item(RTCV(loc15),1,tr2);
									}
								}
								tp2 = *(EIF_POINTER *)(RTCV(loc7) + O10979[Dtype(loc7)-1078]);
								ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp2)->flags);
								ti4_2 = (EIF_INTEGER_32) GTK_SENSITIVE;
								ti4_1 = eif_bit_and(ti4_1,ti4_2);
								if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GTK_SENSITIVE)) {
									tp2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[Dtype(loc7)-1078])(RTCV(loc7));
									if ((EIF_BOOLEAN)((EIF_POINTER) (((GtkWidget *)tp2)->window) != (EIF_POINTER) (((GdkEventMotion *)loc1)->window))) {
										tp2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[Dtype(loc7)-1078])(RTCV(loc7));
										tp2 = (EIF_POINTER) (((GtkWidget *)tp2)->window);
										loc17 = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) tp2, (gint*) (EIF_INTEGER_32 *) &(loc18), (gint*) (EIF_INTEGER_32 *) &(loc19));
										loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc20 - loc18);
										loc19 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc21 - loc19);
									}
									
									eif_put_integer_32_item(RTCV(loc14),1,loc18);
									
									eif_put_integer_32_item(RTCV(loc14),2,loc19);
									
									eif_put_real_64_item(RTCV(loc14),3,(EIF_REAL_64) 0.5);
									
									eif_put_real_64_item(RTCV(loc14),4,(EIF_REAL_64) 0.5);
									
									eif_put_real_64_item(RTCV(loc14),5,(EIF_REAL_64) 0.5);
									
									eif_put_integer_32_item(RTCV(loc14),6,loc20);
									
									eif_put_integer_32_item(RTCV(loc14),7,loc21);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11219[Dtype(loc7)-1093])(RTCV(loc7), loc14);
								}
							}
						} else {
							gtk_main_do_event((GdkEvent*) loc1);
						}
					} else {
						gtk_main_do_event((GdkEvent*) loc1);
					}
					loc8 = (EIF_REFERENCE) NULL;
					loc7 = (EIF_REFERENCE) NULL;
					*(EIF_BOOLEAN *)(Current+ _CHROFF_49_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					if ((EIF_BOOLEAN)((EIF_INTEGER_32) (((GdkEventMotion *)loc1)->is_hint) != ((EIF_INTEGER_32) 0L))) {
						F1049_13628(Current);
					}
					break;
				case 4L:
				case 5L:
				case 6L:
				case 7L:
					loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					F1049_13575(Current, loc1);
					break;
				case 31L:
					if ((EIF_BOOLEAN) !F1049_13621(Current)) {
						tr3 = *(EIF_REFERENCE *)(Current + _REFACS_44_);
						loc32 = tr3;
						if (EIF_TEST(loc32)) {
							ti4_1 = (EIF_INTEGER_32) GDK_BUTTON_PRESS;
							tr8_1 = (EIF_REAL_64) (((GdkEventScroll *)loc1)->x_root);
							ti4_2 = (EIF_INTEGER_32) tr8_1;
							ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_11_);
							tr8_1 = (EIF_REAL_64) (((GdkEventScroll *)loc1)->y_root);
							ti4_4 = (EIF_INTEGER_32) tr8_1;
							ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_12_);
							F1124_15477(RTCV(loc32), ti4_1, ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_2 + ti4_3), (EIF_INTEGER_32) (ti4_4 + ti4_5));
						}
						loc8 = F1049_13638(Current, loc2);
						loc8 = RTRV(eif_non_attached_type(1095), loc8);
						if ((EIF_BOOLEAN)(loc8 != NULL)) {
							if ((EIF_BOOLEAN)((EIF_INTEGER_32) (((GdkEventScroll *)loc1)->direction) == (EIF_INTEGER_32) GDK_SCROLL_UP)) {
								loc22 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							} else {
								loc22 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
							}
							ti4_1 = (EIF_INTEGER_32) GDK_BUTTON_PRESS;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32)) R11221[Dtype(loc8)-1095])(RTCV(loc8), ti4_1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc22, (EIF_REAL_64) 0.5, (EIF_REAL_64) 0.5, (EIF_REAL_64) 0.5, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
						}
						loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
					loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case 20L:
				case 21L:
					break;
				case 16L:
					break;
				case 2L:
					break;
				case 30L:
					break;
				case 12L:
					loc9 = F1049_13638(Current, loc2);
					loc9 = RTRV(eif_non_attached_type(1122), loc9);
					if ((EIF_BOOLEAN)(loc9 != NULL)) {
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						gtk_main_do_event((GdkEvent*) loc1);
						ti1_1 = (EIF_INTEGER_8) (((GdkEventFocus *)loc1)->in);
						tr3 = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_INTEGER_8 *)tr3 = ti1_1;
						
						tb2 = F843_8716(RTCV(tr3));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R11264[Dtype(loc9)-1095])(RTCV(loc9), tb2);
						loc9 = (EIF_REFERENCE) NULL;
					}
					break;
				case 13L:
					loc11 = F1049_13638(Current, loc2);
					loc11 = RTRV(eif_non_attached_type(1081), loc11);
					if ((EIF_BOOLEAN)(loc11 != NULL)) {
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						gtk_main_do_event((GdkEvent*) loc1);
						ti4_1 = (EIF_INTEGER_32) (((GdkEventConfigure *)loc1)->x);
						ti4_2 = (EIF_INTEGER_32) (((GdkEventConfigure *)loc1)->y);
						ti4_3 = (EIF_INTEGER_32) (((GdkEventConfigure *)loc1)->width);
						ti4_4 = (EIF_INTEGER_32) (((GdkEventConfigure *)loc1)->height);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R11053[Dtype(loc11)-1081])(RTCV(loc11), ti4_1, ti4_2, ti4_3, ti4_4);
						loc11 = (EIF_REFERENCE) NULL;
					}
					break;
				case 14L:
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					gtk_main_do_event((GdkEvent*) loc1);
					loc8 = F1049_13638(Current, loc2);
					loc8 = RTRV(eif_non_attached_type(1095), loc8);
					if ((EIF_BOOLEAN)(loc8 != NULL)) {
						(FUNCTION_CAST(void, (EIF_REFERENCE)) R11268[Dtype(loc8)-1095])(RTCV(loc8));
					}
					loc8 = (EIF_REFERENCE) NULL;
					break;
				case 15L:
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					gtk_main_do_event((GdkEvent*) loc1);
					loc10 = F1049_13638(Current, loc2);
					loc10 = RTRV(eif_non_attached_type(1080), loc10);
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						tr3 = *(EIF_REFERENCE *)(RTCV(loc10) + O10149[Dtype(loc10)-1028]);
						if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_41_) == tr3)) {
							F1049_13554(Current, NULL);
						}
						loc8 = loc10;
						loc8 = RTRV(eif_non_attached_type(1095), loc8);
						if ((EIF_BOOLEAN)(loc8 != NULL)) {
							(FUNCTION_CAST(void, (EIF_REFERENCE)) R11269[Dtype(loc8)-1095])(RTCV(loc8));
							loc8 = (EIF_REFERENCE) NULL;
						}
						loc10 = (EIF_REFERENCE) NULL;
					}
					break;
				case 17L:
					break;
				case 18L:
					break;
				case 19L:
					tr3 = F1049_13556(Current);
					loc33 = tr3;
					if (EIF_TEST(loc33)) {
						loc8 = *(EIF_REFERENCE *)(RTCV(loc33) + O8345[Dtype(loc33)-929]);
						loc8 = RTRV(eif_non_attached_type(1095), loc8);
					} else {
						tr3 = RTLNS(961, 961, _OBJSIZ_2_0_0_0_0_0_0_0_);
						F930_10736(RTCV(tr3));
						tr3 = F962_11299(RTCV(tr3));
						loc34 = tr3;
						if (EIF_TEST(loc34)) {
							loc8 = *(EIF_REFERENCE *)(RTCV(loc34) + O8345[Dtype(loc34)-929]);
							loc8 = RTRV(eif_non_attached_type(1095), loc8);
						}
					}
					loc35 = loc8;
					loc35 = RTRV(eif_non_attached_type(1151),loc35);
					if (EIF_TEST(loc35)) {
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						gtk_main_do_event((GdkEvent*) loc1);
						F1152_16153(RTCV(loc35));
					}
					loc8 = (EIF_REFERENCE) NULL;
					break;
				case 28L:
					break;
				case 29L:
					break;
				case 32L:
					loc9 = F1049_13638(Current, loc2);
					loc9 = RTRV(eif_non_attached_type(1122), loc9);
					if ((EIF_BOOLEAN)(loc9 != NULL)) {
						ti4_1 = (EIF_INTEGER_32) (((GdkEventWindowState *)loc1)->changed_mask);
						ti4_2 = (EIF_INTEGER_32) (((GdkEventWindowState *)loc1)->new_window_state);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R11943[Dtype(loc9)-1122])(RTCV(loc9), ti4_1, ti4_2);
						loc9 = (EIF_REFERENCE) NULL;
					}
					break;
				case 10L:
				case 11L:
					loc12 = (EIF_POINTER) (((GdkEventAny *)loc1)->window);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					tb2 = '\0';
					if ((EIF_BOOLEAN)(loc12 != (EIF_POINTER) NULL)) {
						tb2 = (EIF_BOOLEAN)((EIF_INTEGER_32) (((GdkEventCrossing *)loc1)->mode) == ((EIF_INTEGER_32) 0L));
					}
					if (tb2) {
						gdk_window_get_user_data((GdkWindow*) loc12, (gpointer*) (EIF_POINTER *) &(loc13));
						if ((EIF_BOOLEAN)(loc13 != (EIF_POINTER) NULL)) {
							if ((EIF_BOOLEAN) !F1049_13621(Current)) {
								loc7 = F1049_13638(Current, loc13);
								loc7 = RTRV(eif_non_attached_type(1093), loc7);
								tb2 = '\0';
								if ((EIF_BOOLEAN)(loc7 != NULL)) {
									tp2 = *(EIF_POINTER *)(RTCV(loc7) + O10979[Dtype(loc7)-1078]);
									tb2 = (EIF_BOOLEAN)(tp2 == loc13);
								}
								if (tb2) {
									loc9 = F1081_14194(RTCV(loc7));
									tb2 = '\01';
									if (!(EIF_BOOLEAN)(loc9 == NULL)) {
										tb3 = F1123_15451(RTCV(loc9));
										tb2 = (EIF_BOOLEAN) !tb3;
									}
									if (tb2) {
										loc8 = loc7;
										loc8 = RTRV(eif_non_attached_type(1095), loc8);
										if ((EIF_BOOLEAN)(loc8 != NULL)) {
											ti1_1 = (EIF_INTEGER_8) (((GdkEventAny *)loc1)->type);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R11265[Dtype(loc8)-1095])(RTCV(loc8), (EIF_BOOLEAN)(ti1_1 == ((EIF_INTEGER_8) 10L)));
										}
										loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										loc8 = (EIF_REFERENCE) NULL;
									}
									loc7 = (EIF_REFERENCE) NULL;
									loc10 = (EIF_REFERENCE) NULL;
									loc9 = (EIF_REFERENCE) NULL;
									loc13 = (EIF_POINTER) NULL;
								} else {
									gtk_main_do_event((GdkEvent*) loc1);
									loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
							}
						}
					}
					loc12 = (EIF_POINTER) NULL;
					break;
				case 8L:
				case 9L:
					loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					tr3 = *(EIF_REFERENCE *)(Current + _REFACS_44_);
					loc36 = tr3;
					if (EIF_TEST(loc36)) {
						loc10 = (EIF_REFERENCE) loc36;
						loc12 = (EIF_POINTER) (((GdkEventAny *)loc1)->window);
						tp2 = *(EIF_POINTER *)(RTCV(loc10) + O10979[Dtype(loc10)-1078]);
						tp2 = (EIF_POINTER) (((GtkWidget *)tp2)->window);
						(((GdkEventAny *)loc1)->window = (GdkWindow*)(tp2));
					} else {
						if (loc23) {
							loc10 = F1049_13638(Current, loc3);
							loc10 = RTRV(eif_non_attached_type(1080), loc10);
						} else {
							loc11 = F1049_13638(Current, loc3);
							loc11 = RTRV(eif_non_attached_type(1081), loc11);
							loc10 = (EIF_REFERENCE) loc11;
						}
					}
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						loc11 = F1081_14193(RTCV(loc10));
						if ((EIF_BOOLEAN)(loc11 != NULL)) {
							loc9 = loc11;
							loc9 = RTRV(eif_non_attached_type(1122), loc9);
							tb2 = '\01';
							if (!(EIF_BOOLEAN)(loc9 == NULL)) {
								tb3 = F1123_15451(RTCV(loc9));
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								*(EIF_BOOLEAN *)(Current+ _CHROFF_49_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								tr3 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
								
								tu4_2 = (EIF_NATURAL_32) (((GdkEventKey *)loc1)->state);
								eif_put_natural_32_item(RTCV(tr3),4,tu4_2);
								loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								F1082_14227(RTCV(loc11), loc1);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_49_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							}
							loc10 = (EIF_REFERENCE) NULL;
							loc11 = (EIF_REFERENCE) NULL;
							loc9 = (EIF_REFERENCE) NULL;
						}
					}
					if ((EIF_BOOLEAN)(loc12 != (EIF_POINTER) NULL)) {
						(((GdkEventAny *)loc1)->window = (GdkWindow*)(loc12));
						loc12 = (EIF_POINTER) NULL;
					}
					break;
				case 0L:
					loc27 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc11 = F1049_13638(Current, loc2);
					loc11 = RTRV(eif_non_attached_type(1081), loc11);
					if ((EIF_BOOLEAN)(loc11 != NULL)) {
						(FUNCTION_CAST(void, (EIF_REFERENCE)) R11052[Dtype(loc11)-1122])(RTCV(loc11));
						loc11 = (EIF_REFERENCE) NULL;
					}
					break;
				case 1L:
					break;
				case 22L:
					break;
				case 23L:
					break;
				case 24L:
					break;
				case 25L:
					break;
				case 26L:
					F1049_13576(Current, loc1);
					break;
				case 27L:
					break;
				case -1L:
					break;
				case 33L:
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					tr3 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
					tp2 = (EIF_POINTER) (((GdkEventSetting *)loc1)->name);
					F921_10333(RTCV(tr3), tp2);
					loc24 = (EIF_REFERENCE) tr3;
					tb2 = F921_10352(RTCV(loc24), RTOMS(13557,0));
					if (tb2) {
						loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						tb2 = F921_10352(RTCV(loc24), RTOMS(13557,1));
						if (tb2) {
							loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					}
					loc24 = (EIF_REFERENCE) NULL;
					gtk_main_do_event((GdkEvent*) loc1);
					if ((EIF_BOOLEAN) (loc25 && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_19_) != NULL))) {
						tr3 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
						F732_6800(RTCV(tr3), NULL);
					}
					loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
				default:
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
			}
			if (loc4) {
				if (loc5) {
					gtk_propagate_event((GtkWidget*) loc3, (GdkEvent*) loc1);
				} else {
					if ((EIF_BOOLEAN)(loc2 != (EIF_POINTER) NULL)) {
						loc6 = (EIF_BOOLEAN) EIF_TEST(gtk_widget_event((GtkWidget*) loc2, (GdkEvent*) loc1));
					} else {
						gtk_main_do_event((GdkEvent*) loc1);
					}
				}
			}
			gdk_event_free((GdkEvent*) loc1);
		} else {
			if ((EIF_BOOLEAN) EIF_TEST(g_main_context_pending (NULL))) {
				F1049_13559(Current);
			} else {
				loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_1_) = (EIF_BOOLEAN) loc26;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_2_) = (EIF_BOOLEAN) loc27;
	RTLE;
}

/* {EV_APPLICATION_IMP}.process_gtk_events */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1049_13559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTXD;
	
	RTXI(1);
	RTLR(0,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		g_main_context_dispatch(g_main_context_default());
	}
	RTE_E
	RTXS(1);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION_IMP}.gtk_marshal */
EIF_REFERENCE F1049_13560 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_42_);
}


/* {EV_APPLICATION_IMP}.symbol_from_symbol_name */
EIF_POINTER F1049_13561 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = F1049_13562(Current);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), arg1);
		loc2 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		loc3 = (EIF_BOOLEAN) EIF_TEST(g_module_symbol((GModule*) loc1, (gchar*) tp1, (gpointer*) (EIF_POINTER *) &(loc4)));
		if (loc3) {
			RTLE;
			return (EIF_POINTER) loc4;
		}
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {EV_APPLICATION_IMP}.main_module */
EIF_POINTER F1049_13562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) gtk_minor_version >= ((EIF_INTEGER_32) 6L))) {
		tb1 = (EIF_BOOLEAN) EIF_TEST(g_module_supported());
	}
	if (tb1) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		Result = (EIF_POINTER) g_module_open((gchar*) tp2, (GModuleFlags) ((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.ctrl_pressed */
EIF_BOOLEAN F1049_13563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = F1049_13626(Current);
	tu4_2 = (EIF_NATURAL_32) GDK_CONTROL_MASK;
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	tu4_2 = (EIF_NATURAL_32) GDK_CONTROL_MASK;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.alt_pressed */
EIF_BOOLEAN F1049_13564 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = F1049_13626(Current);
	tu4_2 = (EIF_NATURAL_32) GDK_MOD1_MASK;
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	tu4_2 = (EIF_NATURAL_32) GDK_MOD1_MASK;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.shift_pressed */
EIF_BOOLEAN F1049_13565 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = F1049_13626(Current);
	tu4_2 = (EIF_NATURAL_32) GDK_SHIFT_MASK;
	tu4_1 = eif_bit_and(tu4_1,tu4_2);
	tu4_2 = (EIF_NATURAL_32) GDK_SHIFT_MASK;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.window_oids */
EIF_REFERENCE F1049_13567 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_43_);
}


/* {EV_APPLICATION_IMP}.windows */
EIF_REFERENCE F1049_13568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	
	RTGC;
	tr1 = RTLNS(787, 787, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc3 = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {644,979,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 644, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F645_6017(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	Result = (EIF_REFERENCE) loc4;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	loc1 = F647_6022(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	F647_6035(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
		tb1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_2_2_);
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(tr1)-404])(RTCV(tr1)));
		loc2 = F788_7992(RTCV(loc3), ti4_1);
		loc2 = RTRV(eif_non_attached_type(1122), loc2);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc2 == NULL)) {
			tb3 = F1029_13065(RTCV(loc2));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
		} else {
			tr1 = F1029_13066(RTCV(loc2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc4)-404])(RTCV(loc4), tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
			F647_6037(RTCV(tr1));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	F647_6041(RTCV(tr1), loc1);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.focused_popup_window */
EIF_REFERENCE F1049_13569 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_44_);
}


/* {EV_APPLICATION_IMP}.set_focused_popup_window */
void F1049_13570 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_44_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.call_post_launch_actions */
void F1049_13571 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_49_11_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_2_);
		tp2 = F1049_13643(Current);
		gtk_im_context_set_client_window((GtkIMContext*) tp1, (GdkWindow*) tp2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_2_);
		gtk_im_context_focus_in((GtkIMContext*) tp1);
	}
	F1048_13514(Current);
	RTLE;
}

/* {EV_APPLICATION_IMP}.motion_tuple */
static EIF_REFERENCE F1049_13573_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13573);
#define Result RTOSR(13573)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,841,874,874,862,862,862,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 8, 1);
	}
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13573);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13573 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13573,F1049_13573_body,(Current));
}

/* {EV_APPLICATION_IMP}.app_motion_tuple */
static EIF_REFERENCE F1049_13574_body (EIF_REFERENCE Current)
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
	RTOSP (13574);
#define Result RTOSR(13574)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,967,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 4, 0);
	}
	tr2 = RTOSCF(13644,F1049_13644,(Current));
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13574);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13574 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13574,F1049_13574_body,(Current));
}

/* {EV_APPLICATION_IMP}.process_button_event */
void F1049_13575 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc10);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc7);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (((GdkEventButton *)arg1)->x_root);
	loc8 = (EIF_INTEGER_32) tr8_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_11_);
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ti4_1);
	tr8_1 = (EIF_REAL_64) (((GdkEventButton *)arg1)->y_root);
	loc9 = (EIF_INTEGER_32) tr8_1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_12_);
	loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ti4_1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
	
	tp1 = (EIF_POINTER) (((GdkEventButton *)arg1)->window);
	eif_put_pointer_item(RTCV(loc3),1,tp1);
	
	eif_put_integer_32_item(RTCV(loc3),2,loc8);
	
	eif_put_integer_32_item(RTCV(loc3),3,loc9);
	
	tu4_1 = (EIF_NATURAL_32) (((GdkEventButton *)arg1)->state);
	eif_put_natural_32_item(RTCV(loc3),4,tu4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(loc10) + O8345[Dtype(loc10)-929]);
		loc1 = RTRV(eif_non_attached_type(1093), loc1);
	} else {
		if ((EIF_BOOLEAN)(F1049_13622(Current) != NULL)) {
			loc1 = F1049_13622(Current);
		} else {
			loc2 = eif_pointer_item(RTCV(loc3),1);
			if ((EIF_BOOLEAN)(loc2 != (EIF_POINTER) NULL)) {
				loc1 = F1049_13640(Current, loc2);
				loc1 = RTRV(eif_non_attached_type(1093), loc1);
			}
		}
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc4 = F1081_14194(RTCV(loc1));
		loc4 = RTRV(eif_non_attached_type(1122), loc4);
		loc5 = loc4;
		loc5 = RTRV(eif_non_attached_type(1123), loc5);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			loc7 = loc1;
			loc7 = RTRV(eif_non_attached_type(1148), loc7);
		}
		loc6 = '\01';
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 != NULL) && (EIF_BOOLEAN)(loc7 != NULL))) {
			tb3 = (EIF_BOOLEAN)((EIF_INTEGER_32) (((GdkEventButton *)arg1)->button) == ((EIF_INTEGER_32) 3L));
		}
		if (tb3) {
			tb3 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O11165[Dtype(loc1)-1092]);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O11166[Dtype(loc1)-1092]);
				tb3 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
			tb1 = (EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_IS_SENSITIVE((tp2)));
		}
		if (!tb1) {
			tb1 = '\0';
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				tb3 = F1123_15451(RTCV(loc4));
				tb2 = tb3;
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_29_) == NULL);
			}
			loc6 = tb1;
		}
	}
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_44_);
	}
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		ti4_1 = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->type);
		ti4_2 = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->button);
		F1124_15477(RTCV(loc5), ti4_1, ti4_2, loc8, loc9);
	}
	if ((EIF_BOOLEAN) !loc6) {
		if ((EIF_BOOLEAN)(F1049_13622(Current) == NULL)) {
			gtk_main_do_event((GdkEvent*) arg1);
		}
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ti4_1 = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->type);
			tr8_1 = (EIF_REAL_64) (((GdkEventButton *)arg1)->x);
			ti4_2 = (EIF_INTEGER_32) tr8_1;
			tr8_1 = (EIF_REAL_64) (((GdkEventButton *)arg1)->y);
			ti4_3 = (EIF_INTEGER_32) tr8_1;
			ti4_4 = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->button);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32)) R11229[Dtype(loc1)-1093])(RTCV(loc1), ti4_1, ti4_2, ti4_3, ti4_4, (EIF_REAL_64) 0.5, (EIF_REAL_64) 0.5, (EIF_REAL_64) 0.5, loc8, loc9);
		}
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_49_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_APPLICATION_IMP}.handle_dnd */
void F1049_13576 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc17);
	RTLR(1,loc18);
	RTLR(2,loc13);
	RTLR(3,tr1);
	RTLR(4,loc14);
	RTLR(5,tr2);
	RTLR(6,loc16);
	RTLR(7,Current);
	RTLR(8,tr3);
	
	RTGC;
	loc1 = (EIF_POINTER) (((GdkEventDND *)arg1)->context);
	loc4 = (EIF_POINTER) (((GdkDragContext *)loc1)->source_window);
	loc6 = (EIF_POINTER) gdk_drag_get_selection((GdkDragContext*) loc1);
	loc8 = (EIF_NATURAL_32) (((GdkEventDND *)arg1)->time);
	loc2 = (EIF_POINTER) (((GdkDragContext *)loc1)->targets);
	loc17 = RTMS32_EX_H("S\000\000\000T\000\000\000R\000\000\000I\000\000\000N\000\000\000G\000\000\000",6,1544365639);
	loc18 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000:\000\000\000/\000\000\000/\000\000\000",7,1704345391);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == (EIF_POINTER) NULL)) break;
		loc3 = (EIF_POINTER) (((GList *)loc2)->data);
		if ((EIF_BOOLEAN)(loc3 != (EIF_POINTER) NULL)) {
			gdk_selection_convert((GdkWindow*) loc4, (GdkAtom) loc6, (GdkAtom) loc3, (guint32) loc8);
			loc12 = (EIF_INTEGER_32) gdk_selection_property_get((GdkWindow*) loc4, (guchar**) (EIF_POINTER *) &(loc9), (GdkAtom*) (EIF_INTEGER_32 *) &(loc10), (gint*) (EIF_INTEGER_32 *) &(loc11));
			if ((EIF_BOOLEAN)(loc9 != (EIF_POINTER) NULL)) {
				tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
				tp1 = (EIF_POINTER) gdk_atom_name((GdkAtom) loc3);
				F925_10556(RTCV(tr1), tp1);
				loc13 = (EIF_REFERENCE) tr1;
				tb1 = F925_10575(RTCV(loc13), loc17);
				if (tb1) {
					tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
					F925_10556(RTCV(tr1), loc9);
					loc13 = (EIF_REFERENCE) tr1;
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
					loc14 = F920_10313(RTCV(loc13), tw1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc14)-303])(RTCV(loc14));
					for (;;) {
						tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4176[Dtype(loc14)-303])(RTCV(loc14));
						if (tb1) break;
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(loc14)-404])(RTCV(loc14));
						ti4_1 = F925_10569(RTCV(tr1), loc18, ((EIF_INTEGER_32) 1L));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
							tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(loc14)-404])(RTCV(loc14));
							tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(loc14)-404])(RTCV(loc14));
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
							tr1 = F926_10689(RTCV(tr1), ((EIF_INTEGER_32) 8L), ti4_1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4250[Dtype(loc14)-404])(RTCV(loc14), tr1);
							loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc14)-303])(RTCV(loc14));
						} else {
							(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(loc14)-404])(RTCV(loc14));
						}
					}
				}
			}
		}
		loc2 = (EIF_POINTER) (((GList *)loc2)->next);
	}
	if ((EIF_BOOLEAN) (loc15 && (EIF_BOOLEAN)(loc14 != NULL))) {
		loc5 = (EIF_POINTER) (((GdkDragContext *)loc1)->dest_window);
		if ((EIF_BOOLEAN)(loc5 != (EIF_POINTER) NULL)) {
			gdk_window_get_user_data((GdkWindow*) loc5, (gpointer*) (EIF_POINTER *) &(loc7));
			if ((EIF_BOOLEAN)(loc7 != (EIF_POINTER) NULL)) {
				loc16 = F1049_13638(Current, loc7);
				loc16 = RTRV(eif_non_attached_type(1095), loc16);
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc16 != NULL)) {
					tb3 = F1029_13065(RTCV(loc16));
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc16) + O3457[Dtype(loc16)-169]);
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						tr1 = F170_3700(RTCV(loc16));
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,614,925,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNTS(typres0, 2, 0);
						}
						((EIF_TYPED_VALUE *)tr2+1)->it_r = loc14;
						RTAR(tr2,loc14);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
					}
					if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,614,925,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNTS(typres0, 3, 0);
						}
						tr3 = F1029_13066(RTCV(loc16));
						((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
						RTAR(tr2,tr3);
						((EIF_TYPED_VALUE *)tr2+2)->it_r = loc14;
						RTAR(tr2,loc14);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
					}
				}
			}
		}
	}
	gdk_drop_finish((GdkDragContext*) loc1, (gboolean) loc15, (guint32) loc8);
	RTLE;
}

/* {EV_APPLICATION_IMP}.sleep */
void F1049_13613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti8_1 = (EIF_INTEGER_64) arg1;
	F775_7107(Current, (EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(1000000)) * ti8_1));
	RTLE;
}

/* {EV_APPLICATION_IMP}.destroy */
void F1049_13614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_1_);
		g_object_unref((gpointer) tp1);
		F1029_13081(Current, (EIF_BOOLEAN) 1);
		tr1 = F163_3525(Current);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.tooltip_delay */
EIF_INTEGER_32 F1049_13615 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_20_);
}


/* {EV_APPLICATION_IMP}.set_tooltip_delay */
void F1049_13616 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_20_) = (EIF_INTEGER_32) arg1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_49_11_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_0_21_0_1_);
		gtk_tooltips_set_delay((GtkTooltips*) tp1, (guint) arg1);
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.set_docking_source */
void F1049_13617 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.on_pick */
void F1049_13618 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) arg1;
	tr1 = F41_2124(RTCV(F1029_13066(Current)));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg2;
	RTAR(tr2,arg2);
	F733_6801(RTCV(tr1), tr2);
	RTLE;
}

/* {EV_APPLICATION_IMP}.on_drop */
void F1049_13619 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) NULL;
}

/* {EV_APPLICATION_IMP}.is_in_transport */
EIF_BOOLEAN F1049_13621 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN)(F1049_13622(Current) != NULL)) {
		Result = (EIF_BOOLEAN)(F1049_13623(Current) != NULL);
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.pick_and_drop_source */
EIF_REFERENCE F1049_13622 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_45_);
}

/* {EV_APPLICATION_IMP}.docking_source */
EIF_REFERENCE F1049_13623 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_46_);
}

/* {EV_APPLICATION_IMP}.internal_pick_and_drop_source */
EIF_REFERENCE F1049_13624 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_45_);
}


/* {EV_APPLICATION_IMP}.internal_docking_source */
EIF_REFERENCE F1049_13625 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_46_);
}


/* {EV_APPLICATION_IMP}.keyboard_modifier_mask */
EIF_NATURAL_32 F1049_13626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_49_9_)) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
	} else {
		loc1 = F1049_13627(Current);
	}
	tu4_1 = eif_natural_32_item(RTCV(loc1),4);
	RTLE;
	return (EIF_NATURAL_32) tu4_1;
}

/* {EV_APPLICATION_IMP}.retrieve_display_data */
EIF_REFERENCE F1049_13627 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_49_8_)) {
		F1049_13628(Current);
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_48_);
}

/* {EV_APPLICATION_IMP}.update_display_data */
void F1049_13628 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc6);
	RTLR(1,Current);
	
	RTGC;
	loc6 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
	tp1 = (EIF_POINTER) gdk_display_get_default();
	loc1 = (EIF_POINTER) gdk_display_get_window_at_pointer((GdkDisplay*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc3), (gint*) (EIF_INTEGER_32 *) &(loc4));
	tp1 = (EIF_POINTER) gdk_display_get_default();
	gdk_display_get_pointer((GdkDisplay*) tp1, (GdkScreen**) (EIF_POINTER *) &(loc5), (gint*) (EIF_INTEGER_32 *) &(loc3), (gint*) (EIF_INTEGER_32 *) &(loc4), (GdkModifierType*) (EIF_NATURAL_32 *) &(loc2));
	
	eif_put_pointer_item(RTCV(loc6),1,loc1);
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_11_);
	eif_put_integer_32_item(RTCV(loc6),2,(EIF_INTEGER_32) (loc3 + ti4_1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_0_12_);
	eif_put_integer_32_item(RTCV(loc6),3,(EIF_INTEGER_32) (loc4 + ti4_2));
	
	eif_put_natural_32_item(RTCV(loc6),4,loc2);
	RTLE;
}

/* {EV_APPLICATION_IMP}.im_context_commit_translate_agent */
static EIF_REFERENCE F1049_13629_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDD;
	RTLD;
	
	dftype = Dftype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTEV;
	RTGC;
	RTOSP (13629);
#define Result RTOSR(13629)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {916,0,0xFFF9,2,841,874,913,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A686_586_2_3, (EIF_POINTER) _A686_586_2_3, (EIF_POINTER)(0),tr1, 1, 2);
	}
	Result = (EIF_REFERENCE) tr4;
	RTOSE (13629);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13629 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13629,F1049_13629_body,(Current));
}

/* {EV_APPLICATION_IMP}.character_string_buffer */
EIF_REFERENCE F1049_13630 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_47_);
}


/* {EV_APPLICATION_IMP}.stored_display_data */
EIF_REFERENCE F1049_13633 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_48_);
}


/* {EV_APPLICATION_IMP}.enable_debugger */
void F1049_13634 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_49_10_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_49_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F51_2252(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_49_12_));
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.disable_debugger */
void F1049_13635 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_49_10_)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_49_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tb1 = F51_2253(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_49_12_) = (EIF_BOOLEAN) tb1;
		F1049_13635(Current);
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.eif_object_from_gtk_object */
EIF_REFERENCE F1049_13638 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) arg1;
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN)(loc1 == loc2))) break;
		Result = inline_F1079_14135(loc1);
		loc1 = (EIF_POINTER) (((GtkWidget *)loc1)->parent);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = F1029_13065(RTCV(Result));
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) NULL;
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.gtk_widget_imp_at_pointer_position */
EIF_REFERENCE F1049_13639 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gdk_display_get_default();
	loc3 = (EIF_POINTER) gdk_display_get_window_at_pointer((GdkDisplay*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) (EIF_INTEGER_32 *) &(loc2));
	if ((EIF_BOOLEAN)(loc3 != loc4)) {
		RTLE;
		return (EIF_REFERENCE) F1049_13640(Current, loc3);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_APPLICATION_IMP}.gtk_widget_from_gdk_window */
EIF_REFERENCE F1049_13640 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	gdk_window_get_user_data((GdkWindow*) arg1, (gpointer*) (EIF_POINTER *) &(loc1));
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		Result = F1049_13638(Current, loc1);
		RTLE;
		return RTRV(eif_non_attached_type(1080), Result);
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.default_gtk_window */
static EIF_POINTER F1049_13642_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13642);
#define Result RTOSR(13642)
	tr1 = RTOSCF(13646,F1049_13646,(Current));
	Result = *(EIF_POINTER *)(RTCV(tr1) + O10979[Dtype(tr1)-1078]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	ti4_1 = F788_7991(RTCV(RTOSCF(13646,F1049_13646,(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4204[Dtype(tr1)-304])(RTCV(tr1), (EIF_REFERENCE) &ti4_1);
	RTOSE (13642);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1049_13642 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13642,F1049_13642_body,(Current));
}

/* {EV_APPLICATION_IMP}.default_gdk_window */
EIF_POINTER F1049_13643 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = RTOSCF(13642,F1049_13642,(Current));
	Result = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.default_widget */
static EIF_REFERENCE F1049_13644_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (13644);
#define Result RTOSR(13644)
	RTOC_NEW(Result);
	loc1 = RTOSCF(13645,F1049_13645,(Current));
	loc1 = RTRV(eif_non_attached_type(967), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOSE (13644);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13644 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13644,F1049_13644_body,(Current));
}

/* {EV_APPLICATION_IMP}.default_window */
static EIF_REFERENCE F1049_13645_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13645);
#define Result RTOSR(13645)
	RTOC_NEW(Result);
	tr1 = RTLNS(979, 979, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13645);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13645 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13645,F1049_13645_body,(Current));
}

/* {EV_APPLICATION_IMP}.default_window_imp */
static EIF_REFERENCE F1049_13646_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13646);
#define Result RTOSR(13646)
	RTOC_NEW(Result);
	tr1 = RTOSCF(13645,F1049_13645,(Current));
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
	loc1 = RTRV(eif_non_attached_type(1122), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOSE (13646);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13646 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13646,F1049_13646_body,(Current));
}

/* {EV_APPLICATION_IMP}.reusable_rectangle_struct */
static EIF_POINTER F1049_13650_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (13650);
#define Result RTOSR(13650)
	Result = (EIF_POINTER) calloc (sizeof(GdkRectangle), 1);
	RTOSE (13650);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1049_13650 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13650,F1049_13650_body,(Current));
}

/* {EV_APPLICATION_IMP}.c_string_from_eiffel_string */
EIF_REFERENCE F1049_13651 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8045[Dtype(arg1)-920])(RTCV(arg1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1000L))) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), arg1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = RTOSCF(13652,F1049_13652,(Current));
		F781_7428(RTCV(Result), arg1);
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.reusable_gtk_c_string */
static EIF_REFERENCE F1049_13652_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13652);
#define Result RTOSR(13652)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13652);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1049_13652 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13652,F1049_13652_body,(Current));
}

/* {EV_APPLICATION_IMP}.reusable_color_struct */
static EIF_POINTER F1049_13653_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (13653);
#define Result RTOSR(13653)
	Result = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
	RTOSE (13653);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1049_13653 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13653,F1049_13653_body,(Current));
}

/* {EV_APPLICATION_IMP}.initialize_threading */
void F1049_13654 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		tr1 = RTLNSMART(eif_non_attached_type(781));
		F782_7450(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.enable_ev_gtk_log */
void F1049_13657 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	enable_ev_gtk_log((EIF_INTEGER) arg1);
	
}

/* {EV_APPLICATION_IMP}.gtk_init_check */
EIF_BOOLEAN F1049_13659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_init_check (&eif_argc, &eif_argv));
	return Result;
}

/* {EV_APPLICATION_IMP}.inline-agent#1 of im_context_commit_translate_agent */
EIF_REFERENCE F1049_18241 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) g_value_peek_pointer((GValue*) arg2);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTOSCF(13652,F1049_13652,(Current));
		F781_7430(RTCV(tr1), loc1);
	} else {
		tr1 = RTOSCF(13652,F1049_13652,(Current));
		tr2 = RTMS_EX_H("",0,0);
		F781_7428(RTCV(tr1), tr2);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,780,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 2, 0);
	}
	tr2 = RTOSCF(13652,F1049_13652,(Current));
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

void EIF_Minit686 (void)
{
	GTCX
	RTPOMS(13557,1,"gtk-font-name",13,1067777893);
	RTPOMS(13557,0,"gtk-theme-name",14,97340261);
}


#ifdef __cplusplus
}
#endif
