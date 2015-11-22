/*
 * Code for class EV_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev821.h"
#include <stdio.h>
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
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
#ifndef INLINE_F31_1227
static void inline_F31_1227 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_selection_select_iter ((GtkTreeSelection*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1227
#endif
#ifndef INLINE_F31_1230
static void inline_F31_1230 (EIF_POINTER arg1)
{
	gtk_tree_selection_unselect_all ((GtkTreeSelection*) arg1)
	;
}
#define INLINE_F31_1230
#endif
#ifndef INLINE_F31_1208
static int inline_F31_1208 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	return (int) (gtk_tree_view_get_path_at_pos ((GtkTreeView*) arg1, (gint) arg2, (gint) arg3, (GtkTreePath**) arg4, (GtkTreeViewColumn**) arg5, (gint*) arg6, (gint*) arg7))
	;
}
#define INLINE_F31_1208
#endif
#ifndef INLINE_F31_1207
static void inline_F31_1207 (EIF_POINTER arg1)
{
	gtk_tree_path_free ((GtkTreePath*) arg1)
	;
}
#define INLINE_F31_1207
#endif
#ifndef INLINE_F31_1239
static EIF_POINTER inline_F31_1239 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (gtk_tree_view_get_column ((GtkTreeView*) arg1, (gint) arg2))
	;
}
#define INLINE_F31_1239
#endif
#ifndef INLINE_F31_1210
static EIF_POINTER inline_F31_1210 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_column_get_cell_renderers ((GtkTreeViewColumn*) arg1))
	;
}
#define INLINE_F31_1210
#endif
#ifndef INLINE_F31_1132
static void inline_F31_1132 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	gtk_widget_style_get ((GtkWidget*) arg1, (gchar*) arg2, (gint*) arg3, NULL);
	;
}
#define INLINE_F31_1132
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_IMP}.make */
void F1148_15955 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_2_);
	ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_IN;
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) tp1, (GtkShadowType) ti4_1);
	F1079_14134(Current, *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_2_));
	tp1 = (EIF_POINTER) gtk_tree_view_new();
	*(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	F1147_15923(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_1_);
	gtk_tree_view_set_model((GtkTreeView*) tp1, (GtkTreeModel*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_2_);
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) ti4_1, (GtkPolicyType) ti4_2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	inline_F31_1264(tp1, loc1, ((EIF_INTEGER_32) 1L));
	tr1 = F1148_15958(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_12_10_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_318, (EIF_POINTER) _A412_318, (EIF_POINTER)(F789_8066),tr2, 1, 0);
	}
	F1079_14139(Current, loc4, tr1, tr3, NULL);
	F1077_14127(Current);
	RTLE;
}

/* {EV_LIST_IMP}.needs_event_box */
EIF_BOOLEAN F1148_15956 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_LIST_IMP}.selected_items */
EIF_REFERENCE F1148_15958 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {700,999,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	loc1 = inline_F31_1242(tp1);
	loc2 = inline_F31_1225(loc1, (EIF_POINTER *) &(loc3));
	if ((EIF_BOOLEAN)(loc2 != (EIF_POINTER) NULL)) {
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == (EIF_POINTER) NULL)) break;
			loc4 = (EIF_POINTER) (((GList *)loc2)->data);
			loc5 = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) loc4);
			tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
			F778_7236(RTCV(tr1), loc5, ((EIF_INTEGER_32) 4L));
			loc6 = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
			ti4_1 = F778_7250(RTCV(loc6), ((EIF_INTEGER_32) 0L));
			tr1 = F701_6585(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), tr1);
			loc2 = (EIF_POINTER) (((GList *)loc2)->next);
		}
		inline_F31_1084(loc2);
		g_list_free((GList*) loc2);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.select_item */
void F1148_15963 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	loc1 = inline_F31_1242(tp1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	tr1 = F701_6585(RTCV(tr1), arg1);
	loc2 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	loc2 = RTRV(eif_non_attached_type(1159), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_20_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F492_5202(RTCV(loc3));
	inline_F31_1227(loc1, tp1);
	RTLE;
}

/* {EV_LIST_IMP}.clear_selection */
void F1148_15965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	loc1 = inline_F31_1242(tp1);
	inline_F31_1230(loc1);
	RTLE;
}

/* {EV_LIST_IMP}.row_index_from_coords */
EIF_INTEGER_32 F1148_15966 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	tp2 = (EIF_POINTER) NULL;
	tp3 = (EIF_POINTER) NULL;
	loc3 = EIF_TEST (inline_F31_1208(tp1, ((EIF_INTEGER_32) 1L), arg2, (EIF_POINTER *) &(loc1), (EIF_POINTER *) &(loc2), tp2, tp3));
	if (loc3) {
		loc4 = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) loc1);
		tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
		F778_7236(RTCV(tr1), loc4, ((EIF_INTEGER_32) 4L));
		loc5 = (EIF_REFERENCE) tr1;
		Result = F778_7250(RTCV(loc5), ((EIF_INTEGER_32) 0L));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
		inline_F31_1207(loc1);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.item_from_coords */
EIF_REFERENCE F1148_15967 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F1148_15966(Current, arg1, arg2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = F1058_13826(Current, loc1);
		Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
		RTLE;
		return RTRV(eif_non_attached_type(1077), Result);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.on_mouse_button_event */
void F1148_15968 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	
	RTGC;
	loc1 = F1148_15966(Current, arg2, arg3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tr2 = F1058_13826(Current, loc1);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
		*(EIF_REFERENCE *)(Current + _REFACS_43_) = RTRV(eif_non_attached_type(1159), tr1);
		RTAR(Current, tr1);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_43_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = '\01';
			tb3 = F1160_16346(RTCV(loc2), arg4);
			if (!tb3) {
				tb3 = F1093_14417(RTCV(loc2));
				tb2 = tb3;
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) NULL;
	}
	F1094_14459(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	RTLE;
}

/* {EV_LIST_IMP}.row_height */
RTEOMS(15968,1);
EIF_INTEGER_32 F1148_15969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	loc1 = inline_F31_1239(tp1, ((EIF_INTEGER_32) 0L));
	loc2 = inline_F31_1210(loc1);
	loc3 = (EIF_POINTER) g_list_nth_data((GList*) loc2, (guint) ((EIF_INTEGER_32) 0L));
	tp1 = (EIF_POINTER) NULL;
	gtk_cell_renderer_get_fixed_size((GtkCellRenderer*) loc3, (gint*) tp1, (gint*) (EIF_INTEGER_32 *) &(Result));
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(15968,0));
	loc4 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
	tp2 = *(EIF_POINTER *)(RTCV(loc4)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1132(tp1, tp2, (EIF_INTEGER_32 *) &(loc5));
	RTLE;
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + loc5);
}

/* {EV_LIST_IMP}.visual_widget */
EIF_POINTER F1148_15970 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_49_12_10_5_0_3_);
}

/* {EV_LIST_IMP}.interface */
static EIF_REFERENCE F1148_15971_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1148_15971 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1148_15971_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_25_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_LIST_IMP}.previous_selection */
EIF_REFERENCE F1148_15972 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_48_);
}


/* {EV_LIST_IMP}.call_selection_action_sequences */
void F1148_15973 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,tr3);
	
	RTGC;
	loc1 = F1148_15958(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {700,1159,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	loc2 = (EIF_REFERENCE) tr1;
	F701_6609(RTCV(loc1));
	for (;;) {
		tb1 = F585_5774(RTCV(loc1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		tr2 = F701_6583(RTCV(loc1));
		tb2 = F701_6590(RTCV(tr1), tr2);
		if ((EIF_BOOLEAN) !tb2) {
			loc3 = F701_6583(RTCV(loc1));
			loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_3_);
			loc3 = RTRV(eif_non_attached_type(1159), loc3);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc2)-404])(RTCV(loc2), loc3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		tr2 = F701_6583(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4204[Dtype(tr1)-304])(RTCV(tr1), tr2);
		F701_6611(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
	F701_6609(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		tb2 = F585_5774(RTCV(tr1));
		if (tb2) break;
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		loc3 = F701_6583(RTCV(loc3));
		loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_3_);
		loc3 = RTRV(eif_non_attached_type(1159), loc3);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_8_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F197_3883(RTCV(loc3));
			F732_6800(RTCV(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_21_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,999,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F1029_13066(RTCV(loc3));
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			F732_6800(RTCV(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
		F701_6611(RTCV(tr1));
	}
	F701_6609(RTCV(loc2));
	for (;;) {
		tb3 = F585_5774(RTCV(loc2));
		if (tb3) break;
		tr1 = F701_6583(RTCV(loc2));
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_7_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F701_6583(RTCV(loc2));
			tr1 = F197_3880(RTCV(tr1));
			F732_6800(RTCV(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_20_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,999,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F701_6583(RTCV(loc2));
			tr3 = F1029_13066(RTCV(tr3));
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			F732_6800(RTCV(tr1), tr2);
		}
		F701_6611(RTCV(loc2));
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) loc1;
	RTLE;
}

void EIF_Minit821 (void)
{
	GTCX
	RTPOMS(15968,0,"vertical-separator",18,1613565554);
}


#ifdef __cplusplus
}
#endif
