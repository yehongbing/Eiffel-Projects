/*
 * Code for class EV_GTK_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev717.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ev_gtk.h>
#include <gdk/gdkkeysyms.h>
#include "eif_helpers.h"
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

/* {EV_GTK_WINDOW_IMP}.set_blocking_window */
void F1082_14199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
			loc1 = RTRV(eif_non_attached_type(1122), loc1);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + O11034[dtype-1081]) = (EIF_REFERENCE) loc1;
			F1123_15415(RTCV(loc1), Current);
		} else {
			loc1 = *(EIF_REFERENCE *)(Current + O11034[dtype-1081]);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F1123_15416(RTCV(loc1), Current);
				*(EIF_REFERENCE *)(Current + O11034[dtype-1081]) = (EIF_REFERENCE) NULL;
			}
		}
	} else {
		*(EIF_REFERENCE *)(Current + O11034[dtype-1081]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.blocking_window */
EIF_REFERENCE F1082_14200 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O11034[Dtype(Current)-1081]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_GTK_WINDOW_IMP}.window_position_enum */
EIF_INTEGER_32 F1082_14201 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1082_14200(Current) != NULL)) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) GTK_WIN_POS_CENTER_ON_PARENT;
	} else {
		RTLE;
		return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11033[Dtype(Current)-1081])(Current);
	}/* NOTREACHED */
	
}

/* {EV_GTK_WINDOW_IMP}.default_window_position */
EIF_INTEGER_32 F1082_14202 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GTK_WIN_POS_NONE;
}

/* {EV_GTK_WINDOW_IMP}.internal_blocking_window */
EIF_REFERENCE F1082_14203 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11034[Dtype(Current) - 1081]);
}


/* {EV_GTK_WINDOW_IMP}.set_size */
void F1082_14206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1081_14174(Current);
	loc1 = eif_max_int32 (arg1,ti4_1);
	ti4_1 = F1081_14177(Current);
	loc2 = eif_max_int32 (arg2,ti4_1);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	gtk_window_resize((GtkWindow*) tp1, (gint) loc1, (gint) loc2);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	gtk_window_set_default_size((GtkWindow*) tp1, (gint) loc1, (gint) loc2);
	*(EIF_BOOLEAN *)(Current + O11041[dtype-1081]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current)) {
		tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11049[dtype-1122])(Current);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11054[dtype-1081])(Current);
	}
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.width */
EIF_INTEGER_32 F1082_14207 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current + O11041[dtype-1081])) {
		tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		gtk_window_get_default_size((GtkWindow*) tp1, (EIF_INTEGER_32*) (EIF_INTEGER_32 *) &(Result), (EIF_INTEGER_32*) tp3);
		ti4_1 = F1081_14174(Current);
		Result = eif_max_int32 (Result,ti4_1);
	} else {
		RTLE;
		return (EIF_INTEGER_32) F1081_14187(Current);
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.height */
EIF_INTEGER_32 F1082_14208 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current + O11041[dtype-1081])) {
		tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11023[dtype-1080])(Current);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		{
		/* INLINED CODE (default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp3 = tp2;
		gtk_window_get_default_size((GtkWindow*) tp1, (EIF_INTEGER_32*) tp3, (EIF_INTEGER_32*) (EIF_INTEGER_32 *) &(Result));
		ti4_1 = F1081_14177(Current);
		Result = eif_max_int32 (Result,ti4_1);
	} else {
		RTLE;
		return (EIF_INTEGER_32) F1081_14188(Current);
	}
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.set_x_position */
void F1082_14209 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1082_14215(Current);
	F1082_14211(Current, arg1, ti4_1);
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.set_y_position */
void F1082_14210 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1082_14213(Current);
	F1082_14211(Current, ti4_1, arg1);
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.set_position */
void F1082_14211 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_11_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_12_);
	gtk_window_move((GtkWindow*) tp1, (gint) (EIF_INTEGER_32) (arg1 - ti4_1), (gint) (EIF_INTEGER_32) (arg2 - ti4_2));
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.x_position */
EIF_INTEGER_32 F1082_14213 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_get_position((GtkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(Result), (gint*) (EIF_INTEGER_32 *) &(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_11_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.screen_x */
EIF_INTEGER_32 F1082_14214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_get_position((GtkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(Result), (gint*) (EIF_INTEGER_32 *) &(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_11_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.y_position */
EIF_INTEGER_32 F1082_14215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_get_position((GtkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) (EIF_INTEGER_32 *) &(Result));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_12_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.screen_y */
EIF_INTEGER_32 F1082_14216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_get_position((GtkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc1), (gint*) (EIF_INTEGER_32 *) &(Result));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_12_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_GTK_WINDOW_IMP}.default_wm_decorations */
EIF_INTEGER_32 F1082_14217 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {EV_GTK_WINDOW_IMP}.show */
void F1082_14218 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1081_14191(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		ti4_1 = F1082_14201(Current);
		gtk_window_set_position((GtkWindow*) tp1, (GtkWindowPosition) ti4_1);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		gtk_widget_show((GtkWidget*) tp1);
	}
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.hide */
void F1082_14219 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	
	RTGC;
	if (F1081_14191(Current)) {
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O11034[dtype-1081]);
		loc5 = tr1;
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O11044[dtype-1081]) && EIF_TEST(loc5))) {
			tb3 = F1029_13065(RTCV(loc5));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tb2 = F1081_14191(RTCV(loc5));
			tb1 = tb2;
		}
		if (tb1) {
			F1123_15450(RTCV(loc5));
		}
		loc1 = F1082_14213(Current);
		loc2 = F1082_14215(Current);
		loc3 = F1082_14207(Current);
		loc4 = F1082_14208(Current);
		*(EIF_BOOLEAN *)(Current + O11044[dtype-1081]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1082_14199(Current, NULL);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		gtk_widget_hide((GtkWidget*) tp1);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		gdk_window_hide((GdkWindow*) tp1);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		gtk_window_set_default_size((GtkWindow*) tp1, (gint) loc3, (gint) loc4);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		gtk_window_move((GtkWindow*) tp1, (gint) loc1, (gint) loc2);
	}
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.show_relative_to_window */
void F1082_14222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1082_14199(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11021[Dtype(Current)-1080])(Current);
	F1082_14199(Current, arg1);
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.process_key_event */
RTEOMS(14226,3);
void F1082_14227 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc13 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc17 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc18 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc8);
	RTLR(5,loc6);
	RTLR(6,loc15);
	RTLR(7,loc16);
	RTLR(8,tr2);
	RTLR(9,loc2);
	RTLR(10,loc9);
	RTLR(11,loc14);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc19);
	RTLR(15,tr3);
	
	RTGC;
	loc5 = RTOSCF(14148,F1079_14148,(Current));
	loc1 = (EIF_NATURAL_32) (((GdkEventKey *)arg1)->keyval);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
		if ((EIF_BOOLEAN) !F243_4283(Current, loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 268828432L);
			if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
				loc1 = (EIF_NATURAL_32) GDK_F11;
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 268828433L);
				if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
					loc1 = (EIF_NATURAL_32) GDK_F12;
				} else {
					loc1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
			tr1 = RTLNS(1205, 1205, _OBJSIZ_0_0_0_1_0_0_0_0_);
			ti4_1 = F243_4282(Current, loc1);
			F1206_17317(RTCV(tr1), ti4_1);
			loc3 = (EIF_REFERENCE) tr1;
		}
	}
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (((GdkEventKey *)arg1)->type) == (EIF_INTEGER_32) GDK_KEY_PRESS)) {
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc8 = Current;
		loc8 = RTRV(eif_non_attached_type(1122), loc8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(loc8 != NULL))) {
			loc6 = *(EIF_REFERENCE *)(RTCV(loc8) + O11868[Dtype(loc8)-1114]);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				tb2 = F407_5127(RTCV(loc6));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				loc15 = F701_6585(RTCV(loc6), ((EIF_INTEGER_32) 1L));
				if ((EIF_BOOLEAN)(loc15 != NULL)) {
					loc16 = *(EIF_REFERENCE *)(RTCV(loc15) + _REFACS_1_);
					loc16 = RTRV(eif_non_attached_type(1032), loc16);
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc16 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc15 = *(EIF_REFERENCE *)(RTCV(loc8) + O11864[Dtype(loc8)-1114]);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_0_0_0_);
					tb1 = F1049_13563(RTCV(loc5));
					tb2 = F1049_13564(RTCV(loc5));
					tb3 = F1049_13565(RTCV(loc5));
					ti4_1 = F1032_13129(RTCV(loc16), ti4_1, tb1, tb2, tb3);
					loc15 = F693_6436(RTCV(loc15), ti4_1);
					if ((EIF_BOOLEAN)(loc15 != NULL)) {
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,737,0xFFF9,0,841,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNTS(typres0, 3, 0);
						}
						tr2 = F935_10817(RTCV(loc15));
						((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
						RTAR(tr1,tr2);
						
						{
							static EIF_TYPE_INDEX typarr0[] = {915,737,0xFFF9,0,841,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNRF(typres0, (EIF_POINTER) __A339_177, (EIF_POINTER) _A339_177, (EIF_POINTER)(F732_6800),tr1, 1, 0);
						}
						F1048_13486(RTCV(loc5), tr2);
					}
				}
			}
		}
		loc2 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_47_);
		F926_10671(RTCV(loc2));
		tp1 = *(EIF_POINTER *)(RTCV(loc5)+ _PTROFF_49_16_0_21_0_2_);
		loc17 = (EIF_BOOLEAN) EIF_TEST(gtk_im_context_filter_keypress((GtkIMContext*) tp1, (GdkEventKey*) arg1));
		if ((EIF_BOOLEAN) !loc7) {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb2 = F920_10247(RTCV(loc2), ((EIF_INTEGER_32) 1L));
				tb1 = tb2;
			}
			if (tb1) {
				loc13 = F926_10610(RTCV(loc2), ((EIF_INTEGER_32) 1L));
				tb1 = '\0';
				tb2 = '\0';
				tb3 = (loc13 <= 0xFF);
				if (tb3) {
					tc1 = (EIF_CHARACTER_8) loc13;
					tr1 = RTLNS(853, 853, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = tc1;
					
					tb3 = F852_8911(RTCV(tr1));
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					ti4_1 = (EIF_INTEGER_32) (loc13);
					tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 127L));
				}
				if (tb1) {
					loc2 = (EIF_REFERENCE) NULL;
				}
			} else {
				loc2 = (EIF_REFERENCE) NULL;
			}
			tb1 = '\0';
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F1206_17326(RTCV(loc3));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 1L));
			}
			if (tb2) {
				tb2 = F1206_17321(RTCV(loc3));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_0_0_0_);
				switch (ti4_1) {
					case 39L:
						loc2 = (EIF_REFERENCE) RTOMS(14226,0);
						break;
					case 41L:
						loc2 = (EIF_REFERENCE) RTOMS(14226,1);
						break;
					case 43L:
						loc2 = (EIF_REFERENCE) RTOMS(14226,2);
						break;
					default:
						loc2 = (EIF_REFERENCE) NULL;
						break;
				}
			}
		}
	}
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWindow *)tp1)->focus_widget);
	loc9 = F1049_13638(RTCV(loc5), tp1);
	loc9 = RTRV(eif_non_attached_type(1095), loc9);
	loc14 = (EIF_REFERENCE) Current;
	if ((EIF_BOOLEAN)(loc9 == NULL)) {
		loc9 = RTCCL(loc14);
		loc9 = RTRV(eif_non_attached_type(1095), loc9);
		if ((EIF_BOOLEAN)(loc9 == NULL)) {
			loc10 = RTCCL(loc14);
			loc10 = RTRV(eif_non_attached_type(1187), loc10);
		}
	}
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc9 != NULL)) {
		tb3 = F1070_13946(RTCV(loc9));
		tb2 = tb3;
	}
	if (tb2) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11244[Dtype(loc9)-1095])(RTCV(loc9));
		tb1 = tb2;
	}
	if (tb1) {
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			loc12 = F1095_14495(RTCV(loc9), loc3);
			if ((EIF_BOOLEAN) !loc12) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_0_0_0_);
				loc18 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 43L));
				if (loc18) {
					tb1 = F1049_13565(RTCV(loc5));
					if (tb1) {
						F1048_13509(RTCV(loc5), ((EIF_NATURAL_8) 2U));
					} else {
						F1048_13509(RTCV(loc5), ((EIF_NATURAL_8) 1U));
					}
				}
				loc11 = loc9;
				loc11 = RTRV(eif_non_attached_type(1053), loc11);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					tb2 = *(EIF_BOOLEAN *)(RTCV(loc11) + O12157[Dtype(loc11)-1141]);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					loc12 = '\01';
					tb1 = F1206_17324(RTCV(loc3));
					if (!tb1) {
						loc12 = loc18;
					}
				}
			}
		}
		if ((EIF_BOOLEAN) !loc12) {
			gtk_main_do_event((GdkEvent*) arg1);
		}
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = F1049_13622(RTCV(loc5));
		loc19 = tr1;
		if (EIF_TEST(loc19)) {
			tb3 = loc4;
		}
		if (tb3) {
			tb2 = (EIF_BOOLEAN)(loc3 != NULL);
		}
		if (tb2) {
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_0_0_0_);
			if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 42L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_0_0_0_0_);
				tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 96L));
			}
			tb1 = tb2;
		}
		if (tb1) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1094_14463(RTCV(loc19), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		} else {
			if (loc4) {
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_14_);
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					tr1 = F163_3504(RTCV(loc5));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,1205,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 3, 0);
					}
					tr3 = F1029_13066(RTCV(loc9));
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					((EIF_TYPED_VALUE *)tr2+2)->it_r = loc3;
					RTAR(tr2,loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
				}
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_15_);
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					tr1 = F163_3507(RTCV(loc5));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,925,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 3, 0);
					}
					tr3 = F1029_13066(RTCV(loc9));
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					((EIF_TYPED_VALUE *)tr2+2)->it_r = loc2;
					RTAR(tr2,loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
				}
			} else {
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + _REFACS_16_);
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					tr1 = F163_3510(RTCV(loc5));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,1205,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 3, 0);
					}
					tr3 = F1029_13066(RTCV(loc9));
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					((EIF_TYPED_VALUE *)tr2+2)->it_r = loc3;
					RTAR(tr2,loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
				}
			}
			if ((EIF_BOOLEAN) !loc12) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN)) R11050[dtype-1122])(Current, loc3, loc2, loc4);
			}
			if ((EIF_BOOLEAN)(loc9 != loc14)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN)) R11262[Dtype(loc9)-1095])(RTCV(loc9), loc3, loc2, loc4);
			}
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) && loc4)) {
			F1188_16711(RTCV(loc10), loc3, loc2, loc4);
		}
		gtk_main_do_event((GdkEvent*) arg1);
	}
	if (loc18) {
		F1048_13509(RTCV(loc5), ((EIF_NATURAL_8) 0U));
	}
	RTLE;
}

/* {EV_GTK_WINDOW_IMP}.on_size_allocate */
void F1082_14229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O11041[Dtype(Current)-1081]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_GTK_WINDOW_IMP}.forbid_resize */
void F1082_14230 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_POINTER) calloc (sizeof(GdkGeometry), 1);
	loc2 = F1082_14207(Current);
	loc3 = F1082_14208(Current);
	(((GdkGeometry *)loc1)->max_width = (gint)(loc2));
	(((GdkGeometry *)loc1)->max_height = (gint)(loc3));
	(((GdkGeometry *)loc1)->min_width = (gint)(loc2));
	(((GdkGeometry *)loc1)->min_height = (gint)(loc3));
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	tp2 = (EIF_POINTER) NULL;
	ti4_1 = (EIF_INTEGER_32) GDK_HINT_MAX_SIZE;
	ti4_2 = (EIF_INTEGER_32) GDK_HINT_MIN_SIZE;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	gtk_window_set_geometry_hints((GtkWindow*) tp1, (GtkWidget*) tp2, (GdkGeometry*) loc1, (GdkWindowHints) ti4_1);
	free(loc1);
	RTLE;
}

void EIF_Minit717 (void)
{
	GTCX
	RTPOMS32(14226,2,"\011\000\000\000",1,9);
	RTPOMS32(14226,1,"\012\000\000\000",1,10);
	RTPOMS32(14226,0," \000\000\000",1,32);
}


#ifdef __cplusplus
}
#endif
