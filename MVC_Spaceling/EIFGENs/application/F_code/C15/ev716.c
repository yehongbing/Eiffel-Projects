/*
 * Code for class EV_GTK_WIDGET_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev716.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "ev_any_imp.h"
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1408
static void inline_F31_1408 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gint*) arg3, NULL)
	;
}
#define INLINE_F31_1408
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

/* {EV_GTK_WIDGET_IMP}.gdk_events_mask */
static EIF_INTEGER_32 F1081_14165_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	

	
	RTEV;
	RTGC;
	RTOSP (14165);
#define Result RTOSR(14165)
	ti4_1 = (EIF_INTEGER_32) GDK_EXPOSURE_MASK;
	ti4_2 = (EIF_INTEGER_32) GDK_POINTER_MOTION_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_BUTTON_PRESS_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_BUTTON_RELEASE_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_KEY_PRESS_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_KEY_RELEASE_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_ENTER_NOTIFY_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_LEAVE_NOTIFY_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_FOCUS_CHANGE_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_VISIBILITY_NOTIFY_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_POINTER_MOTION_HINT_MASK;
	Result = eif_bit_or(ti4_1,ti4_2);
	RTOSE (14165);
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1081_14165 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14165,F1081_14165_body,(Current));
}

/* {EV_GTK_WIDGET_IMP}.make */
void F1081_14166 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[dtype-1078])(Current);
	loc2 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	ti4_1 = RTOSCF(14165,F1081_14165,(Current));
	gtk_widget_add_events((GtkWidget*) loc1, (gint) ti4_1);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		ti4_1 = RTOSCF(14165,F1081_14165,(Current));
		gtk_widget_add_events((GtkWidget*) loc2, (gint) ti4_1);
	}
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((loc2)))) {
		gtk_widget_realize((GtkWidget*) loc2);
	} else {
		gtk_widget_show((GtkWidget*) loc2);
	}
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_GTK_WIDGET_IMP}.screen_x */
EIF_INTEGER_32 F1081_14167 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[dtype-1078])(Current);
		tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		loc3 = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) loc4);
		Result = (EIF_INTEGER_32) loc1;
	} else {
		loc2 = F1081_14189(Current);
		if ((EIF_BOOLEAN)(loc2 != loc4)) {
			Result = (EIF_INTEGER_32) (((GtkWidgetAuxInfo *)loc2)->x);
		}
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_11_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.screen_y */
EIF_INTEGER_32 F1081_14168 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[dtype-1078])(Current);
		tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		loc3 = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) tp1, (gint*) loc4, (gint*) (EIF_INTEGER_32 *) &(loc1));
		Result = (EIF_INTEGER_32) loc1;
	} else {
		loc2 = F1081_14189(Current);
		if ((EIF_BOOLEAN)(loc2 != loc4)) {
			Result = (EIF_INTEGER_32) (((GtkWidgetAuxInfo *)loc2)->y);
		}
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_12_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + (EIF_INTEGER_32) ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.widget_imp_at_pointer_position */
EIF_REFERENCE F1081_14171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	Result = F1049_13639(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	RTLE;
	return RTRV(eif_non_attached_type(1095), Result);
}

/* {EV_GTK_WIDGET_IMP}.width_request_string */
static EIF_REFERENCE F1081_14172_body (EIF_REFERENCE Current)
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
	RTOSP (14172);
#define Result RTOSR(14172)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("width-request",13,1424438132);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (14172);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1081_14172 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14172,F1081_14172_body,(Current));
}

/* {EV_GTK_WIDGET_IMP}.height_request_string */
static EIF_REFERENCE F1081_14173_body (EIF_REFERENCE Current)
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
	RTOSP (14173);
#define Result RTOSR(14173)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("height-request",14,1691830900);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (14173);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1081_14173 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14173,F1081_14173_body,(Current));
}

/* {EV_GTK_WIDGET_IMP}.minimum_width */
EIF_INTEGER_32 F1081_14174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14172,F1081_14172,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(Result));
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
			loc1 = *(EIF_POINTER *)(RTCV(RTOSCF(14176,F1081_14176,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_widget_size_request((GtkWidget*) tp1, (GtkRequisition*) loc1);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) (((GtkRequisition *)loc1)->width);
		}
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.real_minimum_width */
EIF_INTEGER_32 F1081_14175 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14172,F1081_14172,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(Result));
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
			loc1 = *(EIF_POINTER *)(RTCV(RTOSCF(14176,F1081_14176,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_widget_size_request((GtkWidget*) tp1, (GtkRequisition*) loc1);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) (((GtkRequisition *)loc1)->width);
		}
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.reusable_requisition_struct */
static EIF_REFERENCE F1081_14176_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (14176);
#define Result RTOSR(14176)
	RTOC_NEW(Result);
	tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (EIF_INTEGER_32) sizeof(GtkRequisition);
	F778_7233(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (14176);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1081_14176 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14176,F1081_14176_body,(Current));
}

/* {EV_GTK_WIDGET_IMP}.minimum_height */
EIF_INTEGER_32 F1081_14177 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14173,F1081_14173,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(Result));
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
			loc1 = *(EIF_POINTER *)(RTCV(RTOSCF(14176,F1081_14176,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_widget_size_request((GtkWidget*) tp1, (GtkRequisition*) loc1);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) (((GtkRequisition *)loc1)->height);
		}
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.real_minimum_height */
EIF_INTEGER_32 F1081_14178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14173,F1081_14173,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(Result));
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
			loc1 = *(EIF_POINTER *)(RTCV(RTOSCF(14176,F1081_14176,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_widget_size_request((GtkWidget*) tp1, (GtkRequisition*) loc1);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) (((GtkRequisition *)loc1)->height);
		}
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.event_widget */
EIF_POINTER F1081_14179 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[dtype-1078])(Current);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_NO_WINDOW((loc1)))) {
		RTLE;
		return (EIF_POINTER) loc1;
	} else {
		RTLE;
		return (EIF_POINTER) *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	}/* NOTREACHED */
	
}

/* {EV_GTK_WIDGET_IMP}.set_pointer_style */
void F1081_14180 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != *(EIF_REFERENCE *)(Current + O11014[dtype-1080]))) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
			F1081_14181(Current, arg1);
		}
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + O11014[dtype-1080]) = (EIF_REFERENCE) arg1;
	}
	RTLE;
}

/* {EV_GTK_WIDGET_IMP}.internal_set_pointer_style */
void F1081_14181 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != *(EIF_REFERENCE *)(Current + O11013[dtype-1080]))) {
		loc3 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		loc3 = RTRV(eif_non_attached_type(1036), loc3);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc1 = F1037_13258(RTCV(loc3));
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		loc2 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			gdk_window_set_cursor((GdkWindow*) loc2, (GdkCursor*) loc1);
		}
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11013[dtype-1080]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_GTK_WIDGET_IMP}.previously_set_pointer_style */
EIF_REFERENCE F1081_14182 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11013[Dtype(Current) - 1080]);
}


/* {EV_GTK_WIDGET_IMP}.pointer_style */
EIF_REFERENCE F1081_14183 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11014[Dtype(Current) - 1080]);
}


/* {EV_GTK_WIDGET_IMP}.set_focus */
void F1081_14184 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11017[dtype-1080])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11016[dtype-1080])(Current);
	}
	RTLE;
}

/* {EV_GTK_WIDGET_IMP}.internal_set_focus */
void F1081_14185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,loc3);
	
	RTGC;
	loc4 = RTOSCF(14148,F1079_14148,(Current));
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(loc4) + _REFACS_29_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tb2 = F1049_13621(RTCV(loc4));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc3 = F1029_13066(Current);
		if ((EIF_BOOLEAN)(loc3 != loc5)) {
			F968_11587(RTCV(loc5));
		}
	}
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((tp1)))) {
		loc1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		loc1 = (EIF_POINTER) gtk_widget_get_toplevel((GtkWidget*) tp1);
		loc2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10990[dtype-1078])(Current);
		ti4_1 = (EIF_INTEGER_32) (((GtkObject *)loc2)->flags);
		ti4_2 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
		ti4_1 = eif_bit_and(ti4_1,ti4_2);
		if ((EIF_BOOLEAN)(ti4_1 != (EIF_INTEGER_32) GTK_CAN_FOCUS)) {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			loc2 = tp1;
		}
	}
	gtk_window_set_focus((GtkWindow*) loc1, (GtkWidget*) loc2);
	RTLE;
}

/* {EV_GTK_WIDGET_IMP}.has_focus */
EIF_BOOLEAN F1081_14186 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1081_14196(Current, (EIF_BOOLEAN) 1);
}

/* {EV_GTK_WIDGET_IMP}.width */
EIF_INTEGER_32 F1081_14187 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F1081_14175(Current);
	tb1 = '\01';
	if (!F1081_14191(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tb1 = (EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((tp1)));
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
		loc2 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->width);
		tb1 = '\0';
		tb2 = '\0';
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			{
			/* INLINED CODE (default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tb2 = (EIF_BOOLEAN)((EIF_POINTER) (((GtkWidget *)tp1)->parent) != tp2);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (loc2 < loc1);
		}
		if (tb1) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->parent);
			gtk_container_check_resize((GtkContainer*) tp1);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
			loc2 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->width);
		}
	}
	ti4_1 = eif_max_int32 (loc1,loc2);
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_GTK_WIDGET_IMP}.height */
EIF_INTEGER_32 F1081_14188 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F1081_14178(Current);
	tb1 = '\01';
	if (!F1081_14191(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tb1 = (EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((tp1)));
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
		loc2 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->height);
		tb1 = '\0';
		tb2 = '\0';
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			{
			/* INLINED CODE (default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tb2 = (EIF_BOOLEAN)((EIF_POINTER) (((GtkWidget *)tp1)->parent) != tp2);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) (loc2 < loc1);
		}
		if (tb1) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->parent);
			gtk_container_check_resize((GtkContainer*) tp1);
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			tp1 = (EIF_POINTER) &(((GtkWidget *)tp1)->allocation);
			loc2 = (EIF_INTEGER_32) (((GtkAllocation *)tp1)->height);
		}
	}
	ti4_1 = eif_max_int32 (loc1,loc2);
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_GTK_WIDGET_IMP}.aux_info_struct */
EIF_POINTER F1081_14189 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14197,F1081_14197,(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_POINTER) gtk_object_get_data((GtkObject*) tp1, (gchar*) tp2);
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.show */
void F1081_14190 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_widget_show((GtkWidget*) tp1);
}

/* {EV_GTK_WIDGET_IMP}.is_show_requested */
EIF_BOOLEAN F1081_14191 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
	ti4_2 = (EIF_INTEGER_32) GTK_VISIBLE;
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GTK_VISIBLE;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.is_displayed */
EIF_BOOLEAN F1081_14192 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	Result = '\0';
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O10979[dtype-1078]) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
		ti4_2 = (EIF_INTEGER_32) GTK_MAPPED;
		ti4_1 = eif_bit_and(ti4_1,ti4_2);
		Result = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GTK_MAPPED);
	}
	if (Result) {
		loc1 = F1081_14194(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
			ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
			ti4_2 = (EIF_INTEGER_32) GTK_MAPPED;
			ti4_1 = eif_bit_and(ti4_1,ti4_2);
			ti4_2 = (EIF_INTEGER_32) GTK_MAPPED;
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.top_level_gtk_window_imp */
EIF_REFERENCE F1081_14193 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	loc1 = (EIF_POINTER) gtk_widget_get_toplevel((GtkWidget*) tp1);
	if ((EIF_BOOLEAN)(loc1 != (EIF_POINTER) NULL)) {
		Result = inline_F1079_14135(loc1);
		RTLE;
		return RTRV(eif_non_attached_type(1081), Result);
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WIDGET_IMP}.top_level_window_imp */
EIF_REFERENCE F1081_14194 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	Result = F1081_14193(Current);
	RTLE;
	return RTRV(eif_non_attached_type(1122), Result);
}

/* {EV_GTK_WIDGET_IMP}.top_level_window */
EIF_REFERENCE F1081_14195 (EIF_REFERENCE Current)
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
	loc1 = F1081_14193(Current);
	loc1 = RTRV(eif_non_attached_type(1122), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_GTK_WIDGET_IMP}.has_focus_internal */
EIF_BOOLEAN F1081_14196 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	loc1 = (EIF_POINTER) gtk_widget_get_toplevel((GtkWidget*) tp1);
	tb1 = '\0';
	tb2 = '\0';
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tb2 = (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_TOPLEVEL((loc1)));
	}
	if (tb2) {
		tb2 = '\01';
		if (arg1) {
			tb2 = (EIF_BOOLEAN) EIF_TEST(gtk_window_is_active((GtkWindow*) loc1));
		}
		tb1 = tb2;
	}
	if (tb1) {
		loc2 = (EIF_POINTER) gtk_window_get_focus((GtkWindow*) loc1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			loc3 = F1049_13638(RTCV(tr1), loc2);
			loc3 = RTRV(eif_non_attached_type(1095), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == Current);
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_GTK_WIDGET_IMP}.aux_info_string */
static EIF_REFERENCE F1081_14197_body (EIF_REFERENCE Current)
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
	RTOSP (14197);
#define Result RTOSR(14197)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("gtk-aux-info",12,408018287);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (14197);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1081_14197 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14197,F1081_14197_body,(Current));
}

void EIF_Minit716 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
