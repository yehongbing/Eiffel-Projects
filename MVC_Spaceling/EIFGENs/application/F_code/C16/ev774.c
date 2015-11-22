/*
 * Code for class EV_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev774.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_245
static void inline_F24_245 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	#if GTK_MAJOR_VERSION > 1
	gtk_settings_set_string_property ((GtkSettings*) arg1, (gchar*) arg2, (gchar*) arg3, (gchar*) arg4);
#endif
	;
}
#define INLINE_F24_245
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_IMP}.new_gtk_window */
EIF_POINTER F1123_15408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GTK_WINDOW_TOPLEVEL;
	Result = (EIF_POINTER) gtk_window_new((GtkWindowType) ti4_1);
	return Result;
}

/* {EV_WINDOW_IMP}.make */
void F1123_15409 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,tr6);
	
	RTGC;
	F1029_13080(Current, (EIF_BOOLEAN) 0);
	loc1 = RTOSCF(14148,F1079_14148,(Current));
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11929[dtype-1122])(Current);
	F1079_14134(Current, tp1);
	loc3 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	{
		static EIF_TYPE_INDEX typarr0[] = {692,934,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F693_6432(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11864[dtype-1114]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(973));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11836[dtype-1114]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(973));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11837[dtype-1114]) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current + O11960[dtype-1122]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32000L);
	*(EIF_INTEGER_32 *)(Current + O11959[dtype-1122]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32000L);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
	F1123_15444(Current);
	tr1 = RTOSCF(2442,F67_2442,(RTCV(loc1)));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc2;
	RTAR(tr2,loc2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,1,841,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A412_327_3, (EIF_POINTER) _A412_327_3, (EIF_POINTER)(F790_8076),tr2, 1, 1);
	}
	tr6 = RTOSCF(8401,F793_8401,(RTCV(loc2)));
	F793_8399(RTCV(loc2), loc3, tr1, tr5, tr6, (EIF_BOOLEAN) 1);
	gtk_window_set_default_size((GtkWindow*) loc3, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L));
	F1119_15323(Current);
	tp1 = (EIF_POINTER) (((GtkWidget *)loc3)->window);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11042[dtype-1081])(Current);
	gdk_window_set_decorations((GdkWindow*) tp1, (GdkWMDecoration) ti4_1);
	*(EIF_BOOLEAN *)(Current + O11867[dtype-1114]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O11041[dtype-1081]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O11843[dtype-1114]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_WINDOW_IMP}.has_focus */
EIF_BOOLEAN F1123_15410 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current + O11935[Dtype(Current)-1122]);
}

/* {EV_WINDOW_IMP}.maximum_width */
EIF_INTEGER_32 F1123_15411 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O11960[Dtype(Current) - 1122]);
}


/* {EV_WINDOW_IMP}.maximum_height */
EIF_INTEGER_32 F1123_15412 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O11959[Dtype(Current) - 1122]);
}


/* {EV_WINDOW_IMP}.add_transient_child */
void F1123_15415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(arg1) + O10979[Dtype(arg1)-1078]);
	tp2 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_set_transient_for((GtkWindow*) tp1, (GtkWindow*) tp2);
	RTLE;
}

/* {EV_WINDOW_IMP}.remove_transient_child */
void F1123_15416 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(arg1) + O10979[Dtype(arg1)-1078]);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	gtk_window_set_transient_for((GtkWindow*) tp1, (GtkWindow*) tp3);
	RTLE;
}

/* {EV_WINDOW_IMP}.internal_disable_border */
void F1123_15417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc2 = F1082_14213(Current);
	loc3 = F1082_14215(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11042[dtype-1081])(Current);
	ti4_2 = eif_bit_not((EIF_INTEGER_32) GDK_DECOR_BORDER);
	loc1 = eif_bit_and(ti4_1,ti4_2);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	gdk_window_set_decorations((GdkWindow*) tp1, (GdkWMDecoration) loc1);
	F1082_14211(Current, loc2, loc3);
	RTLE;
}

/* {EV_WINDOW_IMP}.internal_enable_border */
void F1123_15418 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11042[dtype-1081])(Current);
	ti4_2 = (EIF_INTEGER_32) GDK_DECOR_BORDER;
	loc1 = eif_bit_or(ti4_1,ti4_2);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	gdk_window_set_decorations((GdkWindow*) tp1, (GdkWMDecoration) loc1);
	RTLE;
}

/* {EV_WINDOW_IMP}.disable_user_resize */
void F1123_15420 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O11932[dtype-1122]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O11843[dtype-1114]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11243[dtype-1095])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11851[dtype-1122])(Current);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.allow_resize */
void F1123_15422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_POINTER) calloc (sizeof(GdkGeometry), 1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11960[dtype-1122]);
	(((GdkGeometry *)loc1)->max_width = (gint)(ti4_1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11959[dtype-1122]);
	(((GdkGeometry *)loc1)->max_height = (gint)(ti4_1));
	ti4_1 = F1081_14174(Current);
	(((GdkGeometry *)loc1)->min_width = (gint)(ti4_1));
	ti4_1 = F1081_14177(Current);
	(((GdkGeometry *)loc1)->min_height = (gint)(ti4_1));
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp2 = (EIF_POINTER) NULL;
	ti4_1 = (EIF_INTEGER_32) GDK_HINT_MAX_SIZE;
	ti4_2 = (EIF_INTEGER_32) GDK_HINT_MIN_SIZE;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	gtk_window_set_geometry_hints((GtkWindow*) tp1, (GtkWidget*) tp2, (GdkGeometry*) loc1, (GdkWindowHints) ti4_1);
	free(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11866[dtype-1122])(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.show */
void F1123_15423 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1081_14191(Current)) {
		*(EIF_BOOLEAN *)(Current + O11933[dtype-1122]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (*(EIF_BOOLEAN *)(Current + O11932[dtype-1122])) {
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O11843[dtype-1114])) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R11851[dtype-1122])(Current);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R11852[dtype-1122])(Current);
			}
		}
		F1082_14218(Current);
	}
	if ((EIF_BOOLEAN)(F1082_14200(Current) != NULL)) {
		F1082_14199(Current, NULL);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.hide */
void F1123_15426 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F1081_14191(Current)) {
		*(EIF_BOOLEAN *)(Current + O11934[dtype-1122]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F1094_14447(Current);
		F1082_14219(Current);
		if (*(EIF_BOOLEAN *)(Current + O11932[dtype-1122])) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11852[dtype-1122])(Current);
		}
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_title */
void F1123_15429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R8023[Dtype(arg1)-922])(RTCV(arg1));
	if (tb1) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr2 = RTMS_EX_H("\011",1,9);
		F781_7428(RTCV(tr1), tr2);
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), arg1);
		loc1 = (EIF_REFERENCE) tr1;
	}
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_window_set_title((GtkWindow*) tp1, (gchar*) tp2);
	RTLE;
}

/* {EV_WINDOW_IMP}.connect_accelerator */
RTEOMS(15431,6);
void F1123_15432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc5);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,loc3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(1032), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11864[Dtype(Current)-1114]);
	ti4_1 = F1032_13128(RTCV(loc1));
	F693_6476(RTCV(tr1), arg1, ti4_1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 36L))) {
		loc5 = (EIF_REFERENCE) RTOMS(15431,0);
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 37L))) {
			loc5 = (EIF_REFERENCE) RTOMS(15431,1);
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_0_0_0_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 38L))) {
				loc5 = (EIF_REFERENCE) RTOMS(15431,2);
			}
		}
	}
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), RTOMS(15431,3));
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr2 = F923_10437(RTCV(RTOMS(15431,4)), loc5);
		F781_7428(RTCV(tr1), tr2);
		loc4 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), RTOMS(15431,5));
		loc3 = (EIF_REFERENCE) tr1;
		tp1 = RTOSCF(8110,F791_8110,(RTCV(RTOSCF(14148,F1079_14148,(Current)))));
		tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		tp3 = *(EIF_POINTER *)(RTCV(loc4)+ _PTROFF_0_1_0_1_0_0_);
		tp4 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
		inline_F24_245(tp1, tp2, tp3, tp4);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.disconnect_accelerator */
void F1123_15433 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(1032), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11864[Dtype(Current)-1114]);
	ti4_1 = F1032_13128(RTCV(loc1));
	F693_6482(RTCV(tr1), ti4_1);
	RTLE;
}

/* {EV_WINDOW_IMP}.destroy */
void F1123_15434 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1094_14447(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11246[Dtype(Current)-1122])(Current);
	F1098_14670(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.on_widget_mapped */
void F1123_15435 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1096_14518(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_23_) != NULL) && *(EIF_BOOLEAN *)(Current + O11933[dtype-1122]))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
		F732_6800(RTCV(tr1), NULL);
	}
	*(EIF_BOOLEAN *)(Current + O11933[dtype-1122]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_WINDOW_IMP}.on_widget_unmapped */
void F1123_15436 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1096_14519(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_24_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_focused_widget */
void F1123_15440 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCV(arg1) + O10979[Dtype(arg1)-1078]);
		*(EIF_POINTER *)(Current + O11937[dtype-1122]) = (EIF_POINTER) tp1;
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O11937[dtype-1122]) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.client_area */
EIF_POINTER F1123_15443 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
}

/* {EV_WINDOW_IMP}.initialize_client_area */
void F1123_15444 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_vbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O11956[dtype-1122]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O11956[dtype-1122]);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11941[dtype-1122])(Current);
	tp2 = *(EIF_POINTER *)(Current + O11956[dtype-1122]);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O11957[dtype-1122]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O11957[dtype-1122]);
	gtk_widget_show((GtkWidget*) tp1);
	tr1 = *(EIF_REFERENCE *)(Current + O11836[dtype-1114]);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1109), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current + O11956[dtype-1122]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_47_11_10_3_0_0_);
	gtk_box_pack_start((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current + O11956[dtype-1122]);
	tp2 = *(EIF_POINTER *)(Current + O11957[dtype-1122]);
	gtk_box_pack_start((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) (EIF_BOOLEAN) 1, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(Current + O11837[dtype-1114]);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1109), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current + O11956[dtype-1122]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_47_11_10_3_0_0_);
	gtk_box_pack_start((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_43_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), (EIF_REFERENCE) &*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]));
	RTLE;
}

/* {EV_WINDOW_IMP}.on_size_allocate */
void F1123_15445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = F1082_14213(Current);
	loc2 = F1082_14215(Current);
	F1082_14229(Current, loc1, loc2, arg3, arg4);
	F1096_14503(Current, loc1, loc2, arg3, arg4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != *(EIF_INTEGER_32 *)(Current + O11939[dtype-1122])) || (EIF_BOOLEAN)(loc2 != *(EIF_INTEGER_32 *)(Current + O11940[dtype-1122])))) {
		*(EIF_INTEGER_32 *)(Current + O11939[dtype-1122]) = (EIF_INTEGER_32) loc1;
		*(EIF_INTEGER_32 *)(Current + O11940[dtype-1122]) = (EIF_INTEGER_32) loc2;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
			tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
			tr2 = F793_8397(RTCV(tr2), loc1, loc2, arg3, arg4);
			F732_6800(RTCV(tr1), tr2);
		}
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.call_window_state_event */
void F1123_15446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WINDOW_IMP}.on_set_focus_event */
void F1123_15447 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	loc2 = F1049_13638(RTCV(tr1), arg1);
	loc2 = RTRV(eif_non_attached_type(1095), loc2);
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	loc1 = F1049_13638(RTCV(tr1), *(EIF_POINTER *)(Current + O11937[Dtype(Current)-1122]));
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	F1123_15440(Current, loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R11264[Dtype(loc2)-1095])(RTCV(loc2), (EIF_BOOLEAN) 1);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && (EIF_BOOLEAN)(loc1 != loc2))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R11264[Dtype(loc1)-1095])(RTCV(loc1), (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.decrease_modal_window_count */
void F1123_15450 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current + O11945[dtype-1122]))--;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11945[dtype-1122]) == ((EIF_INTEGER_32) 0L))) {
		F1123_15452(Current);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.has_modal_window */
EIF_BOOLEAN F1123_15451 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O11945[Dtype(Current)-1122]) > ((EIF_INTEGER_32) 0L));
}

/* {EV_WINDOW_IMP}.allow_window_manager_focus */
void F1123_15452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_window_set_accept_focus((GtkWindow*) tp1, (gboolean) (EIF_BOOLEAN) 1);
}

/* {EV_WINDOW_IMP}.on_focus_changed */
void F1123_15459 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O11935[dtype-1122]) = (EIF_BOOLEAN) arg1;
	F1096_14504(Current, arg1);
	if (arg1) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp1 = (EIF_POINTER) (((GtkWindow *)tp1)->focus_widget);
		F1123_15447(Current, tp1);
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		F1123_15447(Current, tp2);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.call_close_request_actions */
void F1123_15461 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_21_) != NULL)) {
		tb4 = F1049_13621(RTCV(RTOSCF(14148,F1079_14148,(Current))));
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) !F1123_15451(Current);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1029_13065(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.container_widget */
EIF_POINTER F1123_15462 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O11957[Dtype(Current) - 1122]);
}


/* {EV_WINDOW_IMP}.interface */
static EIF_REFERENCE F1123_15463_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1123_15463 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1123_15463_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit774 (void)
{
	GTCX
	RTPOMS(15431,5,"Vision2",7,164373298);
	RTPOMS(15431,4,"<Shift><Control><Mod1><Mod2><Mod3><Mod4><Mod5>",46,1367187518);
	RTPOMS(15431,3,"gtk-menu-bar-accel",18,1018648940);
	RTPOMS(15431,2,"F12",3,4600114);
	RTPOMS(15431,1,"F11",3,4600113);
	RTPOMS(15431,0,"F10",3,4600112);
}


#ifdef __cplusplus
}
#endif
