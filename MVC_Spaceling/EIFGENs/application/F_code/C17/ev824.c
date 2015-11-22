/*
 * Code for class EV_TEXT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev824.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_IMP}.make */
void F1150_15994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_event_box_new();
	F1079_14134(Current, tp1);
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current + O12252[dtype-1149]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_IN;
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) tp1, (GtkShadowType) ti4_1);
	tp1 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp2 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = (EIF_POINTER) gtk_text_view_new();
	*(EIF_POINTER *)(Current + O12251[dtype-1149]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	tp1 = (EIF_POINTER) gtk_text_view_get_buffer((GtkTextView*) tp1);
	*(EIF_POINTER *)(Current + O12253[dtype-1149]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	tp2 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_widget_set_usize((GtkWidget*) tp1, (gint) ((EIF_INTEGER_32) 1L), (gint) ((EIF_INTEGER_32) 1L));
	F1150_16030(Current);
	F1150_16005(Current, (EIF_BOOLEAN) 1);
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(1826,F34_1826,(RTCV(tr1)));
	F1066_13865(Current, tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12247[dtype-1149])(Current);
	F1149_15986(Current);
	RTLE;
}

/* {EV_TEXT_IMP}.initialize_buffer_events */
void F1150_15996 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12253[dtype-1149]);
	tr1 = RTMS_EX_H("changed",7,346303332);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tp2 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_328, (EIF_POINTER) _A412_328, (EIF_POINTER)(F790_8077),tr2, 1, 0);
	}
	F1079_14139(Current, tp1, tr1, tr3, NULL);
	RTLE;
}

/* {EV_TEXT_IMP}.is_editable */
EIF_BOOLEAN F1150_16000 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12255[Dtype(Current) - 1149]);
}


/* {EV_TEXT_IMP}.start_selection */
EIF_INTEGER_32 F1150_16002 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12253[Dtype(Current)-1149]);
	tp2 = F492_5202(RTCV(loc1));
	tp3 = F492_5202(RTCV(loc2));
	loc3 = (EIF_BOOLEAN) EIF_TEST(gtk_text_buffer_get_selection_bounds((GtkTextBuffer*) tp1, (GtkTextIter*) tp2, (GtkTextIter*) tp3));
	if (loc3) {
		tp1 = F492_5202(RTCV(loc1));
		loc4 = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		tp1 = F492_5202(RTCV(loc2));
		loc5 = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		Result = eif_min_int32 (loc4,loc5);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		tp1 = F492_5202(RTCV(loc1));
		Result = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_IMP}.end_selection */
EIF_INTEGER_32 F1150_16003 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12253[Dtype(Current)-1149]);
	tp2 = F492_5202(RTCV(loc1));
	tp3 = F492_5202(RTCV(loc2));
	loc3 = (EIF_BOOLEAN) EIF_TEST(gtk_text_buffer_get_selection_bounds((GtkTextBuffer*) tp1, (GtkTextIter*) tp2, (GtkTextIter*) tp3));
	if (loc3) {
		tp1 = F492_5202(RTCV(loc1));
		loc4 = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		tp1 = F492_5202(RTCV(loc2));
		loc5 = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		Result = eif_max_int32 (loc4,loc5);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		tp1 = F492_5202(RTCV(loc1));
		Result = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_IMP}.set_editable */
void F1150_16005 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O12255[dtype-1149]) = (EIF_BOOLEAN) arg1;
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_text_view_set_editable((GtkTextView*) tp1, (gboolean) arg1);
	RTLE;
}

/* {EV_TEXT_IMP}.text */
RTEOMS(16013,1);
EIF_REFERENCE F1150_16014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,Result);
	
	RTGC;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12253[dtype-1149]);
	tp2 = F492_5202(RTCV(loc1));
	tp3 = F492_5202(RTCV(loc2));
	gtk_text_buffer_get_bounds((GtkTextBuffer*) tp1, (GtkTextIter*) tp2, (GtkTextIter*) tp3);
	tp1 = *(EIF_POINTER *)(Current + O12253[dtype-1149]);
	tp2 = F492_5202(RTCV(loc1));
	tp3 = F492_5202(RTCV(loc2));
	loc3 = (EIF_POINTER) gtk_text_buffer_get_text((GtkTextBuffer*) tp1, (GtkTextIter*) tp2, (GtkTextIter*) tp3, (gboolean) (EIF_BOOLEAN) 0);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7422(RTCV(tr1), loc3);
	loc4 = (EIF_REFERENCE) tr1;
	Result = F781_7426(RTCV(loc4));
	F781_7428(RTCV(loc4), RTOMS(16013,0));
	RTLE;
	return Result;
}

/* {EV_TEXT_IMP}.caret_position */
EIF_INTEGER_32 F1150_16021 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12253[dtype-1149]);
	tp2 = F492_5202(RTCV(loc1));
	tp3 = *(EIF_POINTER *)(Current + O12253[dtype-1149]);
	tp3 = (EIF_POINTER) gtk_text_buffer_get_insert((GtkTextBuffer*) tp3);
	gtk_text_buffer_get_iter_at_mark((GtkTextBuffer*) tp1, (GtkTextIter*) tp2, (GtkTextMark*) tp3);
	tp1 = F492_5202(RTCV(loc1));
	Result = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) tp1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_TEXT_IMP}.has_word_wrapping */
EIF_BOOLEAN F1150_16022 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12254[Dtype(Current) - 1149]);
}


/* {EV_TEXT_IMP}.set_text */
void F1150_16024 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12253[Dtype(Current)-1149]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_text_buffer_set_text((GtkTextBuffer*) tp1, (gchar*) tp2, (gint) ((EIF_INTEGER_32) -1L));
	RTLE;
}

/* {EV_TEXT_IMP}.enable_word_wrapping */
void F1150_16030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) ti4_1, (GtkPolicyType) ti4_2);
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_text_view_set_wrap_mode((GtkTextView*) tp1, (GtkWrapMode) ((EIF_INTEGER_32) 2L));
	*(EIF_BOOLEAN *)(Current + O12254[dtype-1149]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_TEXT_IMP}.disable_word_wrapping */
void F1150_16031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12252[dtype-1149]);
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) ti4_1, (GtkPolicyType) ti4_2);
	tp1 = *(EIF_POINTER *)(Current + O12251[dtype-1149]);
	gtk_text_view_set_wrap_mode((GtkTextView*) tp1, (GtkWrapMode) ((EIF_INTEGER_32) 0L));
	*(EIF_BOOLEAN *)(Current + O12254[dtype-1149]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_TEXT_IMP}.visual_widget */
EIF_POINTER F1150_16032 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O12251[Dtype(Current)-1149]);
}

/* {EV_TEXT_IMP}.dispose */
void F1150_16033 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1079_14143(Current);
}

/* {EV_TEXT_IMP}.on_change_actions */
void F1150_16034 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3559[dtype-186]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O3559[dtype-186]);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_TEXT_IMP}.interface */
static EIF_REFERENCE F1150_16040_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1150_16040 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1150_16040_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit824 (void)
{
	GTCX
	RTPOMS(16013,0,"",0,0);
}


#ifdef __cplusplus
}
#endif
