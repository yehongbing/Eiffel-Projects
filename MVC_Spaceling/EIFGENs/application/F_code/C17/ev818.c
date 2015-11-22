/*
 * Code for class EV_TREE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev818.h"
#include <stdio.h>
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1146_15912
static EIF_POINTER inline_F1146_15912 (void)
{
	return (EIF_POINTER) (gtk_tree_store_new (2, GDK_TYPE_PIXBUF, G_TYPE_STRING))
	;
}
#define INLINE_F1146_15912
#endif
#ifndef INLINE_F31_1216
static void inline_F31_1216 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_set_headers_visible ((GtkTreeView*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1216
#endif
#ifndef INLINE_F31_1267
static EIF_POINTER inline_F31_1267 (void)
{
	return (EIF_POINTER) (gtk_tree_view_column_new())
	;
}
#define INLINE_F31_1267
#endif
#ifndef INLINE_F31_1249
static void inline_F31_1249 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_column_set_resizable ((GtkTreeViewColumn*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1249
#endif
#ifndef INLINE_F31_1258
static EIF_POINTER inline_F31_1258 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_text_new())
	;
}
#define INLINE_F31_1258
#endif
#ifndef INLINE_F31_1270
static void inline_F31_1270 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_tree_view_column_pack_end ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1270
#endif
#ifndef INLINE_F31_1257
static void inline_F31_1257 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_tree_view_column_add_attribute ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gchar*) arg3, (gint) arg4)
	;
}
#define INLINE_F31_1257
#endif
#ifndef INLINE_F31_1259
static EIF_POINTER inline_F31_1259 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_pixbuf_new())
	;
}
#define INLINE_F31_1259
#endif
#ifndef INLINE_F31_1264
static void inline_F31_1264 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_tree_view_insert_column ((GtkTreeView*) arg1, (GtkTreeViewColumn*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1264
#endif
#ifndef INLINE_F31_1242
static EIF_POINTER inline_F31_1242 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_get_selection ((GtkTreeView*) arg1))
	;
}
#define INLINE_F31_1242
#endif
#ifndef INLINE_F31_1243
static void inline_F31_1243 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_selection_set_mode ((GtkTreeSelection*) arg1, (GtkSelectionMode) arg2)
	;
}
#define INLINE_F31_1243
#endif
#ifndef INLINE_F31_1217
static void inline_F31_1217 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_set_enable_search ((GtkTreeView*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1217
#endif
#ifndef INLINE_F31_1132
static void inline_F31_1132 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	gtk_widget_style_get ((GtkWidget*) arg1, (gchar*) arg2, (gint*) arg3, NULL);
	;
}
#define INLINE_F31_1132
#endif
#ifndef INLINE_F31_1208
static int inline_F31_1208 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	return (int) (gtk_tree_view_get_path_at_pos ((GtkTreeView*) arg1, (gint) arg2, (gint) arg3, (GtkTreePath**) arg4, (GtkTreeViewColumn**) arg5, (gint*) arg6, (gint*) arg7))
	;
}
#define INLINE_F31_1208
#endif
#ifndef INLINE_F31_1218
static EIF_INTEGER_32 inline_F31_1218 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_path_get_depth ((GtkTreePath*) arg1))
	;
}
#define INLINE_F31_1218
#endif
#ifndef INLINE_F31_1207
static void inline_F31_1207 (EIF_POINTER arg1)
{
	gtk_tree_path_free ((GtkTreePath*) arg1)
	;
}
#define INLINE_F31_1207
#endif
#ifndef INLINE_F31_1225
static EIF_POINTER inline_F31_1225 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	return (EIF_POINTER) (gtk_tree_selection_get_selected_rows ((GtkTreeSelection*) arg1, (GtkTreeModel**) arg2))
	;
}
#define INLINE_F31_1225
#endif
#ifndef INLINE_F31_1084
static void inline_F31_1084 (EIF_POINTER arg1)
{
	g_list_foreach ((GList*) arg1, (GFunc) gtk_tree_path_free, NULL)
	;
}
#define INLINE_F31_1084
#endif
#ifndef INLINE_F31_1233
static EIF_POINTER inline_F31_1233 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (gtk_tree_model_get_path ((GtkTreeModel*) arg1, (GtkTreeIter*) arg2))
	;
}
#define INLINE_F31_1233
#endif
#ifndef INLINE_F31_1296
static void inline_F31_1296 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_store_remove ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1296
#endif
#ifndef INLINE_F31_1287
static void inline_F31_1287 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	g_value_take_string ((GValue*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1287
#endif
#ifndef INLINE_F31_1298
static void inline_F31_1298 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_tree_store_set_value ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GValue*) arg4)
	;
}
#define INLINE_F31_1298
#endif
#ifndef INLINE_F31_1278
static void inline_F31_1278 (EIF_POINTER arg1)
{
	g_value_init ((GValue*) arg1, G_TYPE_STRING)
	;
}
#define INLINE_F31_1278
#endif
#ifndef INLINE_F31_1300
static void inline_F31_1300 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_tree_store_set ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GdkPixbuf*) arg4, -1)
	;
}
#define INLINE_F31_1300
#endif
#ifndef INLINE_F31_1239
static EIF_POINTER inline_F31_1239 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (gtk_tree_view_get_column ((GtkTreeView*) arg1, (gint) arg2))
	;
}
#define INLINE_F31_1239
#endif
#ifndef INLINE_F31_1211
static void inline_F31_1211 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32* arg4, EIF_INTEGER_32* arg5, EIF_INTEGER_32* arg6)
{
	gtk_tree_view_column_cell_get_size ((GtkTreeViewColumn*) arg1, (GdkRectangle*) arg2, (gint*) arg3, (gint*) arg4, (gint*) arg5, (gint*) arg6)
	;
}
#define INLINE_F31_1211
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_IMP}.needs_event_box */
EIF_BOOLEAN F1146_15868 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TREE_IMP}.call_selection_action_sequences */
void F1146_15870 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	
	RTGC;
	loc1 = F1146_15877(Current);
	if ((EIF_BOOLEAN)(loc1 != *(EIF_REFERENCE *)(Current + _REFACS_48_))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc3 = *(EIF_REFERENCE *)(RTCV(loc4) + O8345[Dtype(loc4)-929]);
			loc3 = RTRV(eif_non_attached_type(1161), loc3);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_5_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F161_3453(RTCV(loc3));
				F732_6800(RTCV(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_24_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
				F732_6800(RTCV(tr1), NULL);
			}
		}
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
			loc2 = RTRV(eif_non_attached_type(1161), loc2);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_4_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F161_3450(RTCV(loc2));
				F732_6800(RTCV(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_23_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
				F732_6800(RTCV(tr1), NULL);
			}
		}
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {EV_TREE_IMP}.visual_widget */
EIF_POINTER F1146_15871 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
}

/* {EV_TREE_IMP}.initialize_model */
void F1146_15872 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = inline_F1146_15912();
	*(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_TREE_IMP}.make */
void F1146_15873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_3_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_3_);
	ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_IN;
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) tp1, (GtkShadowType) ti4_1);
	F1079_14134(Current, *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_3_));
	tp1 = (EIF_POINTER) gtk_tree_view_new();
	*(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_3_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	F1058_13825(Current);
	F1142_15736(Current);
	F1131_15578(Current);
	F1146_15872(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_);
	gtk_tree_view_set_model((GtkTreeView*) tp1, (GtkTreeModel*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_3_);
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) ti4_1, (GtkPolicyType) ti4_2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	inline_F31_1216(tp1, (EIF_BOOLEAN) 0);
	loc1 = inline_F31_1267();
	inline_F31_1249(loc1, (EIF_BOOLEAN) 1);
	loc2 = inline_F31_1258();
	inline_F31_1270(loc1, loc2, (EIF_BOOLEAN) 1);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("text",4,1952807028);
	F781_7428(RTCV(tr1), tr2);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1257(loc1, loc2, tp1, ((EIF_INTEGER_32) 1L));
	loc2 = inline_F31_1259();
	inline_F31_1270(loc1, loc2, (EIF_BOOLEAN) 0);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("pixbuf",6,93246054);
	F781_7428(RTCV(tr1), tr2);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1257(loc1, loc2, tp1, ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	inline_F31_1264(tp1, loc1, ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	tr1 = RTMS_EX_H("row-collapsed",13,409101156);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 4, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_11_10_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN) 0;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,2,841,874,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A412_315_4_5, (EIF_POINTER) _A412_315_4_5, (EIF_POINTER)(F789_8063),tr2, 1, 2);
	}
	F1079_14139(Current, tp1, tr1, tr5, NULL);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	tr1 = RTMS_EX_H("row-expanded",12,747253348);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 4, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_11_10_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN) 1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,2,841,874,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A412_315_4_5, (EIF_POINTER) _A412_315_4_5, (EIF_POINTER)(F789_8063),tr2, 1, 2);
	}
	F1079_14139(Current, tp1, tr1, tr5, NULL);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	loc4 = inline_F31_1242(tp1);
	tr1 = RTMS_EX_H("changed",7,346303332);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_11_10_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_318, (EIF_POINTER) _A412_318, (EIF_POINTER)(F789_8066),tr2, 1, 0);
	}
	F1079_14139(Current, loc4, tr1, tr3, NULL);
	ti4_1 = (EIF_INTEGER_32) GTK_SELECTION_BROWSE;
	inline_F31_1243(loc4, ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	inline_F31_1217(tp1, (EIF_BOOLEAN) 0);
	F1077_14127(Current);
	RTLE;
}

/* {EV_TREE_IMP}.create_pointer_motion_actions */
EIF_REFERENCE F1146_15874 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(742, 742, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_TREE_IMP}.call_button_event_actions */
RTEOMS(15874,2);
void F1146_15875 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	
	RTGC;
	F1096_14506(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	loc11 = (EIF_POINTER) gdk_window_at_pointer((gint*) (EIF_INTEGER_32 *) &(loc13), (gint*) (EIF_INTEGER_32 *) &(loc14));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc11 != tp1)) {
		gdk_window_get_user_data((GdkWindow*) loc11, (gpointer*) (EIF_POINTER *) &(loc12));
		if ((EIF_BOOLEAN)(loc12 != *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_))) {
			loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F781_7428(RTCV(tr1), RTOMS(15874,0));
			loc3 = (EIF_REFERENCE) tr1;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
			tp2 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			inline_F31_1132(tp1, tp2, (EIF_INTEGER_32 *) &(loc4));
			tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F781_7428(RTCV(tr1), RTOMS(15874,1));
			loc3 = (EIF_REFERENCE) tr1;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
			tp2 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			inline_F31_1132(tp1, tp2, (EIF_INTEGER_32 *) &(loc5));
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
			tp2 = (EIF_POINTER) NULL;
			tp3 = (EIF_POINTER) NULL;
			loc6 = EIF_TEST (inline_F31_1208(tp1, arg2, arg3, (EIF_POINTER *) &(loc7), (EIF_POINTER *) &(loc8), tp2, tp3));
			if (loc6) {
				loc9 = inline_F31_1218(loc7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc4) + loc5) * loc9)) && (EIF_BOOLEAN) (arg2 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc4) + loc5) * (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)))))) {
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				inline_F31_1207(loc7);
			}
		}
	}
	if ((EIF_BOOLEAN) !loc10) {
		loc2 = F1146_15898(Current, arg2, arg3);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr1+4)->it_r8 = arg5;
			((EIF_TYPED_VALUE *)tr1+5)->it_r8 = arg6;
			((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg7;
			((EIF_TYPED_VALUE *)tr1+7)->it_i4 = arg8;
			((EIF_TYPED_VALUE *)tr1+8)->it_i4 = arg9;
			loc1 = (EIF_REFERENCE) tr1;
			tb1 = '\0';
			if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_9_);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				tr1 = F179_3799(RTCV(loc2));
				F732_6800(RTCV(tr1), loc1);
			} else {
				tb1 = '\0';
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_2BUTTON_PRESS)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_10_);
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					tr1 = F179_3802(RTCV(loc2));
					F732_6800(RTCV(tr1), loc1);
				}
			}
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.on_pointer_motion */
void F1146_15876 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	F1094_14443(Current, arg1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = F1049_13621(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	if ((EIF_BOOLEAN) !tb3) {
		ti4_1 = F842_8529(RTCV(arg1), ((EIF_INTEGER_32) 2L));
		tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		ti4_1 = F842_8529(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		tb1 = (EIF_BOOLEAN) (ti4_1 <= F1081_14187(Current));
	}
	if (tb1) {
		ti4_1 = F842_8529(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		ti4_2 = F842_8529(RTCV(arg1), ((EIF_INTEGER_32) 2L));
		loc1 = F1146_15898(Current, ti4_1, ti4_2);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_8_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F179_3796(RTCV(loc1));
				F732_6800(RTCV(tr1), arg1);
			}
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.selected_item */
EIF_REFERENCE F1146_15877 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	loc1 = inline_F31_1242(tp1);
	loc2 = inline_F31_1225(loc1, (EIF_POINTER *) &(loc3));
	if ((EIF_BOOLEAN)(loc2 != (EIF_POINTER) NULL)) {
		loc4 = (EIF_POINTER) (((GList *)loc2)->data);
		loc5 = F1146_15878(Current, loc4);
		inline_F31_1084(loc2);
		g_list_free((GList*) loc2);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc5) + O10149[Dtype(loc5)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_TREE_IMP}.node_from_tree_path */
EIF_REFERENCE F1146_15878 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,loc6);
	
	RTGC;
	loc4 = inline_F31_1218(arg1);
	loc1 = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) arg1);
	tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
	F778_7236(RTCV(tr1), loc1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc4));
	loc2 = (EIF_REFERENCE) tr1;
	ti4_1 = F778_7250(RTCV(loc2), ((EIF_INTEGER_32) 0L));
	loc5 = F1058_13826(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc3 == loc4)) break;
		ti4_1 = F778_7250(RTCV(loc2), (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 4L)));
		loc5 = F966_11521(RTCV(loc5), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc3++;
	}
	loc6 = *(EIF_REFERENCE *)(RTCV(loc5) + O8345[Dtype(loc5)-929]);
	loc6 = RTRV(eif_non_attached_type(1161), loc6);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc6;
}

/* {EV_TREE_IMP}.pebble_source */
EIF_REFERENCE F1146_15880 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) F1094_14461(Current);
	}/* NOTREACHED */
	
}

/* {EV_TREE_IMP}.ensure_item_visible */
void F1146_15881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1161), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_21_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_);
	tp2 = F492_5202(RTCV(loc3));
	loc2 = inline_F31_1233(tp1, tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	tp2 = (EIF_POINTER) NULL;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	gtk_tree_view_scroll_to_cell((GtkTreeView*) tp1, (GtkTreePath*) loc2, (GtkTreeViewColumn*) tp2, (gboolean) (EIF_BOOLEAN) 0, (gfloat) tr4_1, (gfloat) tr4_2);
	inline_F31_1207(loc2);
	RTLE;
}

/* {EV_TREE_IMP}.able_to_transport */
EIF_BOOLEAN F1146_15883 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1162_16424(RTCV(loc1), arg1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14458(Current, arg1);
	}/* NOTREACHED */
	
}

/* {EV_TREE_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1146_15884 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1162_16425(RTCV(loc1), arg1, arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14462(Current, arg1, arg2);
	}/* NOTREACHED */
	
}

/* {EV_TREE_IMP}.update_pnd_status */
void F1146_15886 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,loc4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	loc3 = F701_6589(RTCV(tr1));
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	F701_6609(RTCV(loc5));
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		ti4_1 = F701_6600(RTCV(loc5));
		if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
			tb1 = loc1;
		}
		if (tb1) break;
		F701_6613(RTCV(loc5), loc2);
		tr1 = F701_6583(RTCV(loc5));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			loc4 = F701_6583(RTCV(loc5));
			loc4 = *(EIF_REFERENCE *)(RTCV(loc4) + O8345[Dtype(loc4)-929]);
			loc4 = RTRV(eif_non_attached_type(1161), loc4);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc1 = F1162_16422(RTCV(loc4));
			}
		}
		loc2++;
	}
	F701_6614(RTCV(loc5), loc3);
	F1146_15887(Current, loc1);
	RTLE;
}

/* {EV_TREE_IMP}.update_pnd_connection */
void F1146_15887 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_49_6_)) {
		if ((EIF_BOOLEAN) (arg1 || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_34_) != NULL))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_49_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !arg1 && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_34_) == NULL))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_49_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.on_mouse_button_event */
void F1146_15888 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1146_15898(Current, arg2, arg3);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) loc1;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = '\01';
		tb3 = F1162_16424(RTCV(loc1), arg4);
		if (!tb3) {
			tb3 = F1093_14417(RTCV(loc1));
			tb2 = tb3;
		}
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) NULL;
	}
	F1094_14459(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	RTLE;
}

/* {EV_TREE_IMP}.pnd_row_imp */
EIF_REFERENCE F1146_15889 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_43_);
}


/* {EV_TREE_IMP}.temp_pebble */
EIF_REFERENCE F1146_15890 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_44_);
}


/* {EV_TREE_IMP}.temp_pebble_function */
EIF_REFERENCE F1146_15891 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_45_);
}


/* {EV_TREE_IMP}.temp_accept_cursor */
EIF_REFERENCE F1146_15892 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_46_);
}


/* {EV_TREE_IMP}.temp_deny_cursor */
EIF_REFERENCE F1146_15893 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_47_);
}


/* {EV_TREE_IMP}.call_pebble_function */
void F1146_15894 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_44_) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_35_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_16_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) RTCCL(tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_17_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_35_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_35_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7682[Dtype(loc2)-915])(RTCV(loc2), tr1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7708[Dtype(loc2)-916])(RTCV(loc2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

/* {EV_TREE_IMP}.pre_pick_steps */
void F1146_15895 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = RTCCL(loc1);
		F1049_13618(RTCV(tr1), Current, tr2);
	}
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F110_3245(RTCV(loc2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			F732_6800(RTCV(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_19_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_20_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			F732_6800(RTCV(tr1), tr2);
		}
	}
	ti2_1 = (EIF_INTEGER_16) arg3;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_2_) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_3_) = (EIF_INTEGER_16) ti2_1;
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		tb1 = '\0';
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_) == ti2_1)) {
			ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_) == ti2_1);
		}
		if (tb1) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			F1048_13499(RTCV(tr1), arg3, arg4);
		} else {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14188(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14188(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)));
		}
	} else {
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc2)+ _I16OFF_25_6_4_);
		ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(ti2_1 == ti2_2)) {
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc2)+ _I16OFF_25_6_5_);
			ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(ti2_1 == ti2_2);
		}
		if (tb1) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			F1048_13499(RTCV(tr1), arg3, arg4);
		} else {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_6_) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1146_15909(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1146_15909(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_49_11_7_) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc2)+ _I16OFF_25_6_4_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc2)+ _I16OFF_25_6_5_);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
			tr3 = F1029_13066(RTCV(loc2));
			ti4_3 = F585_5762(RTCV(tr2), tr3, ((EIF_INTEGER_32) 1L));
			ti4_4 = F1146_15909(Current);
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) * ti4_4))));
		}
	}
	F1093_14435(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TREE_IMP}.reset_pebble_function */
void F1146_15896 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_35_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R7711[Dtype(loc1)-916])(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_44_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_35_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_44_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_TREE_IMP}.post_drop_steps */
void F1146_15897 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1094_14464(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_TREE_IMP}.item_from_coords */
EIF_REFERENCE F1146_15898 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,Result);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	tp2 = (EIF_POINTER) NULL;
	tp3 = (EIF_POINTER) NULL;
	loc3 = EIF_TEST (inline_F31_1208(tp1, ((EIF_INTEGER_32) 1L), arg2, (EIF_POINTER *) &(loc1), (EIF_POINTER *) &(loc2), tp2, tp3));
	if (loc3) {
		loc4 = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) loc1);
		loc6 = inline_F31_1218(loc1);
		tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
		F778_7236(RTCV(tr1), loc4, (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc6));
		loc5 = (EIF_REFERENCE) tr1;
		loc9 = F778_7250(RTCV(loc5), ((EIF_INTEGER_32) 0L));
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		loc7 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
		loc7 = F701_6584(RTCV(loc7), loc9);
		loc7 = *(EIF_REFERENCE *)(RTCV(loc7) + O8345[Dtype(loc7)-929]);
		loc7 = RTRV(eif_non_attached_type(1161), loc7);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == loc6)) break;
			loc9 = F778_7250(RTCV(loc5), (EIF_INTEGER_32) (loc8 * ((EIF_INTEGER_32) 4L)));
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_15_);
			loc7 = F701_6584(RTCV(tr1), loc9);
			loc7 = *(EIF_REFERENCE *)(RTCV(loc7) + O8345[Dtype(loc7)-929]);
			loc7 = RTRV(eif_non_attached_type(1161), loc7);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc8++;
		}
		Result = (EIF_REFERENCE) loc7;
		inline_F31_1207(loc1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_IMP}.previous_selected_item */
EIF_REFERENCE F1146_15899 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_48_);
}


/* {EV_TREE_IMP}.insert_i_th */
void F1146_15901 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1161), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1162_16428(RTCV(loc1), Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
		F701_6613(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
		F1162_16431(RTCV(loc1), Current, NULL, arg2);
		F1146_15906(Current, loc1);
		tb1 = F1162_16422(RTCV(loc1));
		if (tb1) {
			F1146_15887(Current, (EIF_BOOLEAN) 1);
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.remove_i_th */
void F1146_15902 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	tr1 = F701_6585(RTCV(tr1), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
	loc1 = RTRV(eif_non_attached_type(1161), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_21_);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_);
			tp2 = F492_5202(RTCV(loc2));
			inline_F31_1296(tp1, tp2);
			F1162_16428(RTCV(loc1), NULL);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
			F701_6613(RTCV(tr1), arg1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
			F1146_15886(Current);
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.set_text_on_position */
void F1146_15904 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,loc3);
	RTLR(4,arg1);
	
	RTGC;
	loc1 = RTOSCF(13652,F1049_13652,(RTCV(RTOSCF(14148,F1079_14148,(Current)))));
	F781_7429(RTCV(loc1), arg2);
	loc2 = RTOSCF(15905,F1146_15905,(Current));
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1287(loc2, tp1);
	loc3 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_);
		tp2 = F492_5202(RTCV(loc3));
		inline_F31_1298(tp1, tp2, ((EIF_INTEGER_32) 1L), loc2);
	}
	RTLE;
}

/* {EV_TREE_IMP}.g_value_string_struct */
static EIF_POINTER F1146_15905_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTGC;
	RTOSP (15905);
#define Result RTOSR(15905)
	Result = (EIF_POINTER) calloc (sizeof(GValue), 1);
	inline_F31_1278(Result);
	RTOSE (15905);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1146_15905 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(15905,F1146_15905_body,(Current));
}

/* {EV_TREE_IMP}.update_row_pixmap */
void F1146_15906 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_25_6_6_3_0_0_);
	loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_1_);
		tp2 = F492_5202(RTCV(loc2));
		inline_F31_1300(tp1, tp2, ((EIF_INTEGER_32) 0L), loc1);
	}
	RTLE;
}

/* {EV_TREE_IMP}.row_height */
EIF_INTEGER_32 F1146_15909 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_11_10_5_0_2_);
	loc1 = inline_F31_1239(tp1, ((EIF_INTEGER_32) 0L));
	tp1 = (EIF_POINTER) NULL;
	inline_F31_1211(loc1, tp1, (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), (EIF_INTEGER_32 *) &(loc4), (EIF_INTEGER_32 *) &(loc5));
	RTLE;
	return (EIF_INTEGER_32) loc5;
}

/* {EV_TREE_IMP}.new_tree_store */
EIF_POINTER F1146_15912 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1146_15912 ();
	return Result;
}

/* {EV_TREE_IMP}.interface */
static EIF_REFERENCE F1146_15914_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1146_15914 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1146_15914_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_25_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit818 (void)
{
	GTCX
	RTPOMS(15874,1,"horizontal-separator",20,1855499634);
	RTPOMS(15874,0,"expander-size",13,1515618149);
}


#ifdef __cplusplus
}
#endif
