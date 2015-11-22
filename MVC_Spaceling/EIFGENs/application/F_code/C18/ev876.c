/*
 * Code for class EV_TOOL_BAR_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev876.h"
#include <stdio.h>
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

/* {EV_TOOL_BAR_BUTTON_IMP}.needs_event_box */
EIF_BOOLEAN F1181_16598 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.new_tool_bar_button */
EIF_POINTER F1181_16600 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	Result = (EIF_POINTER) gtk_tool_button_new((GtkWidget*) tp1, (gchar*) tp2);
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.make */
void F1181_16601 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R12424[Dtype(Current)-1180])(Current);
	F1079_14134(Current, tp1);
	F1081_14166(Current);
	F1086_14245(Current);
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_1_);
	gtk_tool_button_set_icon_widget((GtkToolButton*) tp1, (GtkWidget*) tp2);
	tp1 = F1079_14146(Current);
	ti4_1 = RTOSCF(14165,F1081_14165,(Current));
	gtk_widget_add_events((GtkWidget*) tp1, (gint) ti4_1);
	tp1 = F1079_14146(Current);
	gtk_tool_item_set_is_important((GtkToolItem*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.event_widget */
EIF_POINTER F1181_16602 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_1_);
	return (EIF_POINTER) (EIF_POINTER) (((GtkWidget *)tp1)->parent);
}

/* {EV_TOOL_BAR_BUTTON_IMP}.text */
EIF_REFERENCE F1181_16603 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = F1079_14146(Current);
	loc1 = (EIF_POINTER) gtk_tool_button_get_label((GtkToolButton*) tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7430(RTCV(tr1), loc1);
		loc2 = (EIF_REFERENCE) tr1;
		tr1 = F781_7426(RTCV(loc2));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F920_10235(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TOOL_BAR_BUTTON_IMP}.set_text */
void F1181_16607 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	loc2 = F1049_13651(RTCV(tr1), arg1);
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
	gtk_tool_button_set_label((GtkToolButton*) tp1, (gchar*) tp2);
	loc1 = F1165_16458(Current);
	loc1 = RTRV(eif_non_attached_type(1143), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		F1144_15768(RTCV(loc1));
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.set_pixmap */
void F1181_16608 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	F1086_14247(Current, arg1);
	loc1 = F1165_16458(Current);
	loc1 = RTRV(eif_non_attached_type(1143), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		F1144_15768(RTCV(loc1));
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.enable_sensitive */
void F1181_16612 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
	gtk_widget_set_sensitive((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_EVENT_BOX((tp1)))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
		gtk_event_box_set_visible_window((GtkEventBox*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	}
	if (F1081_14192(Current)) {
		loc1 = (EIF_POINTER) gdk_window_at_pointer((gint*) (EIF_INTEGER_32 *) &(loc5), (gint*) (EIF_INTEGER_32 *) &(loc6));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			tr1 = F1049_13640(RTCV(tr1), loc1);
			if ((EIF_BOOLEAN)(Current == tr1)) {
				loc2 = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) loc1, (gint*) (EIF_INTEGER_32 *) &(loc3), (gint*) (EIF_INTEGER_32 *) &(loc4));
				tr1 = RTOSCF(13495,F1048_13495,(RTCV(RTOSCF(14148,F1079_14148,(Current)))));
				ti4_1 = F1081_14187(Current);
				ti4_2 = F1081_14188(Current);
				F962_11303(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc5) + ti4_1) + ((EIF_INTEGER_32) 10L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) + ti4_2) + ((EIF_INTEGER_32) 10L)));
				tr1 = RTOSCF(13495,F1048_13495,(RTCV(RTOSCF(14148,F1079_14148,(Current)))));
				F962_11303(RTCV(tr1), (EIF_INTEGER_32) (loc3 + loc5), (EIF_INTEGER_32) (loc4 + loc6));
			}
		}
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.disable_sensitive */
void F1181_16613 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
	gtk_widget_set_sensitive((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_EVENT_BOX((tp1)))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
		gtk_event_box_set_visible_window((GtkEventBox*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.is_sensitive */
EIF_BOOLEAN F1181_16614 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_28_12_8_2_0_0_);
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_IS_SENSITIVE((tp1)));
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.has_parent */
EIF_BOOLEAN F1181_16615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1157_16282(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.parent_is_sensitive */
EIF_BOOLEAN F1181_16616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1157_16282(Current);
	loc1 = RTRV(eif_non_attached_type(966), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb1 = F967_11563(RTCV(loc1));
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.interface */
static EIF_REFERENCE F1181_16621_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1181_16621 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1181_16621_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit876 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
