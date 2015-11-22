/*
 * Code for class EV_COMBO_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev827.h"
#include "ev_c_util.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1195
static EIF_POINTER inline_F31_1195 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (GTK_ENTRY (GTK_BIN ( arg1 )->child))
	;
}
#define INLINE_F31_1195
#endif
#ifndef INLINE_F31_1067
static void inline_F31_1067 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_container_set_focus_chain ((GtkContainer*) arg1, (GList*) arg2)
	;
}
#define INLINE_F31_1067
#endif
#ifndef INLINE_F31_1201
static void inline_F31_1201 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_combo_box_set_model ((GtkComboBox*) arg1, (GtkTreeModel*) arg2)
	;
}
#define INLINE_F31_1201
#endif
#ifndef INLINE_F31_1202
static void inline_F31_1202 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_combo_box_entry_set_text_column ((GtkComboBoxEntry*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1202
#endif
#ifndef INLINE_F31_1206
static void inline_F31_1206 (EIF_POINTER arg1)
{
	gtk_cell_layout_clear ((GtkCellLayout*) arg1)
	;
}
#define INLINE_F31_1206
#endif
#ifndef INLINE_F31_1258
static EIF_POINTER inline_F31_1258 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_text_new())
	;
}
#define INLINE_F31_1258
#endif
#ifndef INLINE_F31_1203
static void inline_F31_1203 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_cell_layout_pack_start ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1203
#endif
#ifndef INLINE_F31_1205
static void inline_F31_1205 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_cell_layout_reorder ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1205
#endif
#ifndef INLINE_F31_1204
static void inline_F31_1204 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_cell_layout_set_attributes ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gchar*) arg3, (gint) arg4, NULL)
	;
}
#define INLINE_F31_1204
#endif
#ifndef INLINE_F31_1259
static EIF_POINTER inline_F31_1259 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_pixbuf_new())
	;
}
#define INLINE_F31_1259
#endif
#ifndef INLINE_F31_1196
static EIF_INTEGER_32 inline_F31_1196 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_combo_box_get_active ((GtkComboBox*) arg1))
	;
}
#define INLINE_F31_1196
#endif
#ifndef INLINE_F31_1197
static void inline_F31_1197 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_combo_box_set_active ((GtkComboBox*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1197
#endif
#ifndef INLINE_F1153_16177
static void inline_F1153_16177 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	{
gtk_container_forall (GTK_CONTAINER (arg1), (GtkCallback) c_gtk_return_combo_toggle, (GtkWidget**) arg2);
}
	;
}
#define INLINE_F1153_16177
#endif
#ifndef INLINE_F31_1066
static void inline_F31_1066 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	g_signal_handler_disconnect ((gpointer) arg1, (gulong) arg2)
	;
}
#define INLINE_F31_1066
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COMBO_BOX_IMP}.needs_event_box */
EIF_BOOLEAN F1153_16159 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_COMBO_BOX_IMP}.call_selection_action_sequences */
void F1153_16161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = F1153_16166(Current);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_54_);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
		gtk_combo_box_popdown((GtkComboBox*) tp1);
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
		loc3 = RTRV(eif_non_attached_type(1159), loc3);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_7_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F197_3880(RTCV(loc3));
			F732_6800(RTCV(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_23_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_8_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F197_3883(RTCV(loc2));
			F732_6800(RTCV(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_24_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) loc3;
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F1152_16153(Current);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.previous_selected_item_imp */
EIF_REFERENCE F1153_16162 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_54_);
}


/* {EV_COMBO_BOX_IMP}.make */
RTEOMS(16162,5);
void F1153_16163 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLR(4,loc2);
	
	RTGC;
	loc4 = (EIF_POINTER) gtk_vbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	F1079_14134(Current, loc4);
	tp1 = (EIF_POINTER) gtk_combo_box_entry_new();
	*(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	gtk_box_pack_start((GtkBox*) loc4, (GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 0, (guint) ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	tp1 = inline_F31_1195(tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_2_) = (EIF_POINTER) tp1;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	tp3 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_2_);
	loc5 = (EIF_POINTER) g_list_append((GList*) tp2, (gpointer) tp3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1067(tp1, loc5);
	g_list_free((GList*) loc5);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 4, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_0_);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 1L);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_319, (EIF_POINTER) _A412_319, (EIF_POINTER)(F789_8067),tr1, 1, 0);
	}
	F1079_14139(Current, tp1, RTOMS(16162,0), tr2, NULL);
	ti4_1 = F1079_14141(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_8_) = (EIF_INTEGER_32) ti4_1;
	F1147_15923(Current);
	F1152_16125(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_1_);
	inline_F31_1201(tp1, tp2);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(16162,1));
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	tp2 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	gtk_widget_set_name((GtkWidget*) tp1, (gchar*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1202(tp1, ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1206(tp1);
	loc1 = inline_F31_1258();
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1203(tp1, loc1, (EIF_BOOLEAN) 1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1205(tp1, loc1, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(16162,2));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1204(tp1, loc1, tp2, ((EIF_INTEGER_32) 1L));
	loc1 = inline_F31_1259();
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1203(tp1, loc1, (EIF_BOOLEAN) 0);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1205(tp1, loc1, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(16162,3));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1204(tp1, loc1, tp2, ((EIF_INTEGER_32) 0L));
	F1152_16120(Current, ((EIF_INTEGER_32) 4L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_0_);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_318, (EIF_POINTER) _A412_318, (EIF_POINTER)(F789_8066),tr1, 1, 0);
	}
	F1079_14139(Current, tp1, RTOMS(16162,4), tr2, NULL);
	F1142_15745(Current);
	F1139_15698(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.insert_i_th */
void F1153_16164 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1147_15948(Current, arg1, arg2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F1058_13827(Current) == ((EIF_INTEGER_32) 1L))) {
		tb2 = F954_11119(RTCV(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		F954_11120(RTCV(arg1));
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.has_focus */
EIF_BOOLEAN F1153_16165 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_55_11_);
}


/* {EV_COMBO_BOX_IMP}.selected_item */
EIF_REFERENCE F1153_16166 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	loc1 = inline_F31_1196(tp1);
	if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
		Result = F701_6585(RTCV(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.select_item */
void F1153_16168 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1197(tp1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
}

/* {EV_COMBO_BOX_IMP}.clear_selection */
void F1153_16170 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F31_1197(tp1, ((EIF_INTEGER_32) -1L));
}

/* {EV_COMBO_BOX_IMP}.on_focus_changed */
void F1153_16172 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	
	RTGC;
	if (arg1) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
				F732_6800(RTCV(tr1), NULL);
			}
			loc2 = F1081_14194(Current);
			loc2 = RTRV(eif_non_attached_type(1123), loc2);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb2 = F1081_14191(RTCV(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				F1124_15468(RTCV(loc2));
			}
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			F1096_14504(Current, arg1);
		}
	} else {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
		inline_F1153_16177(tp1, (EIF_POINTER *) &(loc1));
		tb1 = '\0';
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			tb1 = (EIF_BOOLEAN) EIF_TEST(gtk_toggle_button_get_active((GtkToggleButton*) loc1));
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F1096_14504(Current, arg1);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.is_list_shown */
EIF_BOOLEAN F1153_16173 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_);
}


/* {EV_COMBO_BOX_IMP}.retrieve_toggle_button */
RTEOMS(16174,1);
void F1153_16175 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F1153_16177(tp1, (EIF_POINTER *) &(loc1));
	gtk_widget_set_usize((GtkWidget*) loc1, (gint) ((EIF_INTEGER_32) -1L), (gint) ((EIF_INTEGER_32) 1L));
	ti4_1 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	GTK_WIDGET_UNSET_FLAGS((loc1), (ti4_1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 4, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_0_);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 2L);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_319, (EIF_POINTER) _A412_319, (EIF_POINTER)(F789_8067),tr1, 1, 0);
	}
	F1079_14139(Current, loc1, RTOMS(16174,0), tr2, NULL);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_8_);
	inline_F31_1066(tp1, ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_14_10_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.toggle_button_toggled */
void F1153_16176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
	inline_F1153_16177(tp1, (EIF_POINTER *) &(loc1));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		if ((EIF_BOOLEAN) EIF_TEST(gtk_toggle_button_get_active((GtkToggleButton*) loc1))) {
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_55_11_)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_21_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
				F732_6800(RTCV(tr1), NULL);
			}
		} else {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_14_10_9_0_3_);
			gtk_combo_box_popdown((GtkComboBox*) tp1);
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_55_11_)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_55_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
					F732_6800(RTCV(tr1), NULL);
				}
			}
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.return_combo_toggle */
void F1153_16177 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2)
{
	GTCX
	
	
	inline_F1153_16177 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2);
}

/* {EV_COMBO_BOX_IMP}.interface */
static EIF_REFERENCE F1153_16180_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1153_16180 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1153_16180_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_29_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit827 (void)
{
	GTCX
	RTPOMS(16162,4,"changed",7,346303332);
	RTPOMS(16162,3,"pixbuf",6,93246054);
	RTPOMS(16162,2,"text",4,1952807028);
	RTPOMS(16162,1,"v2combobox",10,126500216);
	RTPOMS(16162,0,"realize",7,1414294885);
	RTPOMS(16174,0,"toggled",7,209460068);
}


#ifdef __cplusplus
}
#endif
