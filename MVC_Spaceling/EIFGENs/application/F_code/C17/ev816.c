/*
 * Code for class EV_MULTI_COLUMN_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev816.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1217
static void inline_F31_1217 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_set_enable_search ((GtkTreeView*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1217
#endif
#ifndef INLINE_F31_1242
static EIF_POINTER inline_F31_1242 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_get_selection ((GtkTreeView*) arg1))
	;
}
#define INLINE_F31_1242
#endif
#ifndef INLINE_F31_1078
static void inline_F31_1078 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	GType type = GDK_TYPE_PIXBUF;
	memcpy ((char *) arg1 + arg2, &type, sizeof(GType));
}
	;
}
#define INLINE_F31_1078
#endif
#ifndef INLINE_F31_1077
static void inline_F31_1077 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	GType type = G_TYPE_STRING;
	memcpy ((char *) arg1 + arg2, &type, sizeof(GType));
}
	;
}
#define INLINE_F31_1077
#endif
#ifndef INLINE_F31_1291
static EIF_POINTER inline_F31_1291 (EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (gtk_list_store_newv ((gint) arg1, (GType*) arg2))
	;
}
#define INLINE_F31_1291
#endif
#ifndef INLINE_F31_1295
static void inline_F31_1295 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_list_store_insert ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1295
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
#ifndef INLINE_F31_1250
static void inline_F31_1250 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_column_set_clickable ((GtkTreeViewColumn*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1250
#endif
#ifndef INLINE_F31_1248
static void inline_F31_1248 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_view_column_set_sizing ((GtkTreeViewColumn*) arg1, (GtkTreeViewColumnSizing) arg2)
	;
}
#define INLINE_F31_1248
#endif
#ifndef INLINE_F31_1259
static EIF_POINTER inline_F31_1259 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_pixbuf_new())
	;
}
#define INLINE_F31_1259
#endif
#ifndef INLINE_F31_1269
static void inline_F31_1269 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_tree_view_column_pack_start ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1269
#endif
#ifndef INLINE_F31_1257
static void inline_F31_1257 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_tree_view_column_add_attribute ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gchar*) arg3, (gint) arg4)
	;
}
#define INLINE_F31_1257
#endif
#ifndef INLINE_F31_1258
static EIF_POINTER inline_F31_1258 (void)
{
	return (EIF_POINTER) (gtk_cell_renderer_text_new())
	;
}
#define INLINE_F31_1258
#endif
#ifndef INLINE_F31_1264
static void inline_F31_1264 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_tree_view_insert_column ((GtkTreeView*) arg1, (GtkTreeViewColumn*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1264
#endif
#ifndef INLINE_F31_1241
static EIF_POINTER inline_F31_1241 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_get_columns ((GtkTreeView*) arg1))
	;
}
#define INLINE_F31_1241
#endif
#ifndef INLINE_F31_1231
static EIF_INTEGER_32 inline_F31_1231 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_model_get_n_columns ((GtkTreeModel*) arg1))
	;
}
#define INLINE_F31_1231
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
#ifndef INLINE_F31_1243
static void inline_F31_1243 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_selection_set_mode ((GtkTreeSelection*) arg1, (GtkSelectionMode) arg2)
	;
}
#define INLINE_F31_1243
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
#ifndef INLINE_F31_1239
static EIF_POINTER inline_F31_1239 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (gtk_tree_view_get_column ((GtkTreeView*) arg1, (gint) arg2))
	;
}
#define INLINE_F31_1239
#endif
#ifndef INLINE_F31_1268
static void inline_F31_1268 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_view_column_set_title((GtkTreeViewColumn*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1268
#endif
#ifndef INLINE_F31_1246
static void inline_F31_1246 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_view_column_set_fixed_width ((GtkTreeViewColumn*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1246
#endif
#ifndef INLINE_F31_1210
static EIF_POINTER inline_F31_1210 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_column_get_cell_renderers ((GtkTreeViewColumn*) arg1))
	;
}
#define INLINE_F31_1210
#endif
#ifndef INLINE_F31_1410
static void inline_F31_1410 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_REAL_64 arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, (gfloat) arg3, NULL)
	;
}
#define INLINE_F31_1410
#endif
#ifndef INLINE_F31_1245
static void inline_F31_1245 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	gtk_tree_view_column_set_alignment ((GtkTreeViewColumn*) arg1, (gfloat) arg2)
	;
}
#define INLINE_F31_1245
#endif
#ifndef INLINE_F31_1214
static void inline_F31_1214 (EIF_POINTER arg1)
{
	gtk_list_store_clear ((GtkListStore*) arg1)
	;
}
#define INLINE_F31_1214
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
#ifndef INLINE_F31_1278
static void inline_F31_1278 (EIF_POINTER arg1)
{
	g_value_init ((GValue*) arg1, G_TYPE_STRING)
	;
}
#define INLINE_F31_1278
#endif
#ifndef INLINE_F31_1285
static void inline_F31_1285 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	g_value_set_string ((GValue*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1285
#endif
#ifndef INLINE_F31_1299
static void inline_F31_1299 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set_value ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GValue*) arg4)
	;
}
#define INLINE_F31_1299
#endif
#ifndef INLINE_F31_1301
static void inline_F31_1301 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GdkPixbuf*) arg4, -1)
	;
}
#define INLINE_F31_1301
#endif
#ifndef INLINE_F31_1297
static void inline_F31_1297 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_list_store_remove ((GtkListStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1297
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

/* {EV_MULTI_COLUMN_LIST_IMP}.make */
void F1145_15775 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) tp1, (GtkAdjustment*) tp2);
	*(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_3_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_3_);
	ti4_1 = (EIF_INTEGER_32) GTK_SHADOW_IN;
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) tp1, (GtkShadowType) ti4_1);
	F1079_14134(Current, *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_3_));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_3_);
	ti4_1 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	ti4_2 = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) tp1, (GtkPolicyType) ti4_1, (GtkPolicyType) ti4_2);
	{
		static EIF_TYPE_INDEX typarr0[] = {700,1177,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {700,1000,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) tr1;
	tp1 = (EIF_POINTER) gtk_tree_view_new();
	*(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_3_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) tp2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	gtk_widget_show((GtkWidget*) tp1);
	F1058_13825(Current);
	F1142_15736(Current);
	F1130_15536(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	inline_F31_1217(tp1, (EIF_BOOLEAN) 0);
	F1145_15787(Current, ((EIF_INTEGER_32) 25L));
	F1145_15788(Current, ((EIF_INTEGER_32) 2L));
	tr1 = F1145_15798(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) tr1;
	F1077_14127(Current);
	F1145_15806(Current);
	loc1 = F170_3712(Current);
	F1145_15777(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.needs_event_box */
EIF_BOOLEAN F1145_15776 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.connect_selection_actions */
void F1145_15777 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_) == ((EIF_INTEGER_32) 0L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
		loc1 = inline_F31_1242(tp1);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_0_);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_318, (EIF_POINTER) _A412_318, (EIF_POINTER)(F789_8066),tr2, 1, 0);
		}
		F1079_14139(Current, loc1, tr1, tr3, NULL);
		ti4_1 = F1079_14141(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.disconnect_selection_actions */
void F1145_15778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_) != ((EIF_INTEGER_32) 0L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
		loc1 = inline_F31_1242(tp1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_);
		g_signal_handler_disconnect((gpointer) loc1, (gulong) ti4_1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.call_selection_action_sequences */
void F1145_15780 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	
	RTGC;
	F1145_15778(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_55_9_)) {
		loc1 = F1145_15798(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {700,1177,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc2 = (EIF_REFERENCE) tr1;
		F701_6609(RTCV(loc1));
		for (;;) {
			tb1 = F585_5774(RTCV(loc1));
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
			tr2 = F701_6583(RTCV(loc1));
			tb2 = F701_6590(RTCV(tr1), tr2);
			if ((EIF_BOOLEAN) !tb2) {
				loc3 = F701_6583(RTCV(loc1));
				loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_4_);
				loc3 = RTRV(eif_non_attached_type(1177), loc3);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc2)-404])(RTCV(loc2), loc3);
				}
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
			tr2 = F701_6583(RTCV(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4204[Dtype(tr1)-304])(RTCV(tr1), tr2);
			F701_6611(RTCV(loc1));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
		F701_6609(RTCV(tr1));
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
			tb2 = F585_5774(RTCV(tr1));
			if (tb2) break;
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
			loc3 = F701_6583(RTCV(loc3));
			loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_4_);
			loc3 = RTRV(eif_non_attached_type(1177), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				F1145_15786(Current, loc3);
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
			F701_6611(RTCV(tr1));
		}
		F701_6609(RTCV(loc2));
		for (;;) {
			tb3 = F585_5774(RTCV(loc2));
			if (tb3) break;
			tr1 = F701_6583(RTCV(loc2));
			F1145_15785(Current, tr1);
			F701_6611(RTCV(loc2));
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) loc1;
	}
	F1145_15777(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.previous_selection */
EIF_REFERENCE F1145_15781 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_49_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.create_pointer_motion_actions */
EIF_REFERENCE F1145_15782 (EIF_REFERENCE Current)
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

/* {EV_MULTI_COLUMN_LIST_IMP}.call_button_event_actions */
void F1145_15783 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	F1096_14506(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	if ((EIF_BOOLEAN)(arg1 != (EIF_INTEGER_32) GDK_BUTTON_RELEASE)) {
		loc4 = (EIF_POINTER) gdk_window_at_pointer((gint*) (EIF_INTEGER_32 *) &(loc6), (gint*) (EIF_INTEGER_32 *) &(loc7));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc4 != tp1)) {
			gdk_window_get_user_data((GdkWindow*) loc4, (gpointer*) (EIF_POINTER *) &(loc5));
			if ((EIF_BOOLEAN)(loc5 == *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_55_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
				loc2 = F1145_15832(Current, arg3);
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
					tb1 = (EIF_BOOLEAN) (loc2 <= F1145_15795(Current));
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
					loc3 = F701_6585(RTCV(tr1), loc2);
				} else {
					F1145_15809(Current);
				}
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
					tb1 = '\0';
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_7_);
						tb1 = (EIF_BOOLEAN)(tr1 != NULL);
					}
					if (tb1) {
						tr1 = F179_3799(RTCV(loc3));
						F732_6800(RTCV(tr1), loc1);
					}
				} else {
					if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_2BUTTON_PRESS)) {
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc3 != NULL)) {
							tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_8_);
							tb1 = (EIF_BOOLEAN)(tr1 != NULL);
						}
						if (tb1) {
							tr1 = F179_3802(RTCV(loc3));
							F732_6800(RTCV(tr1), loc1);
						}
					}
				}
			}
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_55_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1145_15780(Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.call_selection_actions */
void F1145_15785 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	tr2 = F1029_13066(RTCV(arg1));
	tb1 = F701_6590(RTCV(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F91_3006(RTCV(arg1));
			F732_6800(RTCV(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1000,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F1029_13066(RTCV(arg1));
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			F732_6800(RTCV(tr1), tr2);
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.call_deselect_actions */
void F1145_15786 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F91_3009(RTCV(arg1));
		F732_6800(RTCV(tr1), NULL);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1000,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		tr3 = F1029_13066(RTCV(arg1));
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		F732_6800(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.resize_model_if_needed */
void F1145_15787 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > (EIF_INTEGER_32) (F1145_15793(Current) - ((EIF_INTEGER_32) 1L)))) {
		tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
		ti4_1 = (EIF_INTEGER_32) sizeof(GType);
		F778_7233(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ti4_1));
		loc1 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1078(tp1, ((EIF_INTEGER_32) 0L));
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > arg1)) break;
			tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = (EIF_INTEGER_32) sizeof(GType);
			inline_F31_1077(tp1, (EIF_INTEGER_32) (loc3 * ti4_1));
			loc3++;
		}
		tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
		tp1 = inline_F31_1291((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), tp1);
		*(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_) = (EIF_POINTER) tp1;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
		gtk_tree_view_set_model((GtkTreeView*) tp1, (GtkTreeModel*) tp2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		F701_6609(RTCV(tr1));
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			tb1 = F615_5836(RTCV(tr1));
			if (tb1) break;
			tr1 = RTLNS(493, 493, _OBJSIZ_1_1_0_0_0_1_0_0_);
			F492_5199(RTCV(tr1));
			loc2 = (EIF_REFERENCE) tr1;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
			tp2 = F492_5202(RTCV(loc2));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1) + O5474[Dtype(tr1)-700]);
			inline_F31_1295(tp1, tp2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			tr1 = F701_6583(RTCV(tr1));
			F1178_16578(RTCV(tr1), loc2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			tr1 = F701_6583(RTCV(tr1));
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2) + O5474[Dtype(tr2)-700]);
			F1145_15838(Current, tr1, ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			F701_6611(RTCV(tr1));
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.create_list */
RTEOMS(15787,3);
void F1145_15788 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,loc11);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,tr3);
	
	RTGC;
	loc10 = F1145_15792(Current);
	F1145_15787(Current, arg1);
	tr1 = RTLNS(81, 81, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc5 = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		loc9 = inline_F31_1267();
		inline_F31_1249(loc9, (EIF_BOOLEAN) 1);
		inline_F31_1250(loc9, (EIF_BOOLEAN) 1);
		ti4_1 = (EIF_INTEGER_32) GTK_TREE_VIEW_COLUMN_FIXED;
		inline_F31_1248(loc9, ti4_1);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L))) {
			loc8 = inline_F31_1259();
			inline_F31_1269(loc9, loc8, (EIF_BOOLEAN) 0);
			tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F781_7428(RTCV(tr1), RTOMS(15787,0));
			loc7 = (EIF_REFERENCE) tr1;
			tp1 = *(EIF_POINTER *)(RTCV(loc7)+ _PTROFF_0_1_0_1_0_0_);
			inline_F31_1257(loc9, loc8, tp1, ((EIF_INTEGER_32) 0L));
		}
		loc8 = inline_F31_1258();
		inline_F31_1269(loc9, loc8, (EIF_BOOLEAN) 1);
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7428(RTCV(tr1), RTOMS(15787,1));
		loc7 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(RTCV(loc7)+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1257(loc9, loc8, tp1, loc1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
		inline_F31_1264(tp1, loc9, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_46_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
			tb3 = F585_5771(RTCV(tr1), loc1);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
			tr1 = F585_5763(RTCV(tr1), loc1);
			loc11 = tr1;
			tb1 = EIF_TEST(loc11);
		}
		if (tb1) {
			loc2 = (EIF_REFERENCE) loc11;
		} else {
			loc2 = (EIF_REFERENCE) RTOMS(15787,2);
		}
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_47_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
			tb2 = F588_5771(RTCV(tr1), loc1);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_47_);
			loc3 = F588_5763(RTCV(tr1), loc1);
		} else {
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
		}
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_48_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
			tb2 = F588_5771(RTCV(tr1), loc1);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
			loc6 = F588_5763(RTCV(tr1), loc1);
			tr1 = RTLNS(81, 81, _OBJSIZ_0_0_0_1_0_0_0_0_);
			loc4 = (EIF_REFERENCE) tr1;
			ti4_1 = ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(loc6 == ti4_1)) {
				F82_2823(RTCV(loc4));
			} else {
				ti4_1 = ((EIF_INTEGER_32) 1L);
				if ((EIF_BOOLEAN)(loc6 == ti4_1)) {
					F82_2824(RTCV(loc4));
				} else {
					F82_2825(RTCV(loc4));
				}
			}
		} else {
			loc4 = (EIF_REFERENCE) loc5;
		}
		F1145_15812(Current, loc3, loc1);
		F1145_15811(Current, loc2, loc1);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
			F1145_15813(Current, loc4, loc1);
		}
		tr1 = RTMS_EX_H("notify::width",13,1221810280);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 4, 0);
		}
		tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		ti4_1 = F788_7991(Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = loc1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_313, (EIF_POINTER) _A412_313, (EIF_POINTER)(F789_8061),tr2, 1, 0);
		}
		F1079_14139(Current, loc9, tr1, tr3, NULL);
		tr1 = RTMS_EX_H("clicked",7,169941860);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,792,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 4, 0);
		}
		tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		ti4_1 = F788_7991(Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = loc1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_312, (EIF_POINTER) _A412_312, (EIF_POINTER)(F789_8060),tr2, 1, 0);
		}
		F1079_14139(Current, loc9, tr1, tr3, NULL);
		loc1++;
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_pointer_motion */
void F1145_15790 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
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
		ti4_1 = F842_8529(RTCV(arg1), ((EIF_INTEGER_32) 2L));
		loc1 = F1145_15832(Current, ti4_1);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) (loc1 <= F1145_15795(Current));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			loc2 = F701_6585(RTCV(tr1), loc1);
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_6_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F179_3796(RTCV(loc2));
				F732_6800(RTCV(tr1), arg1);
			}
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_count */
EIF_INTEGER_32 F1145_15792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1241(tp1);
	if ((EIF_BOOLEAN)(loc1 != (EIF_POINTER) NULL)) {
		Result = (EIF_INTEGER_32) g_list_length((GList*) loc1);
		g_list_free((GList*) loc1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.model_column_count */
EIF_INTEGER_32 F1145_15793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_) != (EIF_POINTER) NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
		RTLE;
		return (EIF_INTEGER_32) inline_F31_1231(tp1);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.count */
EIF_INTEGER_32 F1145_15795 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	Result = F701_6600(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.i_th */
EIF_REFERENCE F1145_15796 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	tr1 = F701_6585(RTCV(tr1), arg1);
	Result = F1029_13066(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.selected_item */
EIF_REFERENCE F1145_15797 (EIF_REFERENCE Current)
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
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1242(tp1);
	loc2 = inline_F31_1225(loc1, (EIF_POINTER *) &(loc3));
	if ((EIF_BOOLEAN)(loc2 != (EIF_POINTER) NULL)) {
		loc4 = (EIF_POINTER) (((GList *)loc2)->data);
		loc5 = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) loc4);
		tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
		F778_7236(RTCV(tr1), loc5, ((EIF_INTEGER_32) 4L));
		loc6 = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		ti4_1 = F778_7250(RTCV(loc6), ((EIF_INTEGER_32) 0L));
		tr1 = F701_6585(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		Result = F1029_13066(RTCV(tr1));
		Result = (EIF_REFERENCE) Result;
		inline_F31_1084(loc2);
		g_list_free((GList*) loc2);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.selected_items */
EIF_REFERENCE F1145_15798 (EIF_REFERENCE Current)
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
		static EIF_TYPE_INDEX typarr0[] = {700,1000,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
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
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			ti4_1 = F778_7250(RTCV(loc6), ((EIF_INTEGER_32) 0L));
			tr1 = F701_6585(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			tr1 = F1029_13066(RTCV(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), tr1);
			loc2 = (EIF_POINTER) (((GList *)loc2)->next);
		}
		inline_F31_1084(loc2);
		g_list_free((GList*) loc2);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.destroy */
void F1145_15802 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1145_15815(Current);
	F1096_14516(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.disable_multiple_selection */
void F1145_15806 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1242(tp1);
	ti4_1 = (EIF_INTEGER_32) GTK_SELECTION_SINGLE;
	inline_F31_1243(loc1, ti4_1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.select_item */
void F1145_15807 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1242(tp1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	tr1 = F701_6585(RTCV(tr1), arg1);
	loc3 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_19_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F492_5202(RTCV(loc3));
	inline_F31_1227(loc1, tp1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_5_) == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		loc2 = F701_6584(RTCV(tr1), arg1);
		F1145_15785(Current, loc2);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.clear_selection */
void F1145_15809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1242(tp1);
	inline_F31_1230(loc1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_title_changed */
RTEOMS(15810,2);
void F1145_15811 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg2 > F1145_15792(Current))) {
		F1145_15843(Current, arg2);
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc3 = inline_F31_1239(tp1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	loc1 = F920_10294(RTCV(arg1));
	F926_10620(RTCV(loc1), RTOMS(15810,0), RTOMS(15810,1));
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), loc1);
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1268(loc3, tp1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_width_changed */
void F1145_15812 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_47_) != NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
		loc1 = inline_F31_1239(tp1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) GTK_TREE_VIEW_COLUMN_FIXED;
		inline_F31_1248(loc1, ti4_1);
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
		inline_F31_1246(loc1, ti4_1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_alignment_changed */
void F1145_15813 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	tb1 = F82_2826(RTCV(arg1));
	if (tb1) {
		loc1 = (EIF_REAL_32) (EIF_REAL_32) 0.0;
	} else {
		tb1 = F82_2827(RTCV(arg1));
		if (tb1) {
			loc1 = (EIF_REAL_32) (EIF_REAL_32) 0.5;
		} else {
			loc1 = (EIF_REAL_32) (EIF_REAL_32) 1.0;
		}
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc2 = inline_F31_1239(tp1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	loc3 = inline_F31_1210(loc2);
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("xalign",6,2055521646);
	F781_7428(RTCV(tr1), tr2);
	loc5 = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN)(loc6 == (EIF_INTEGER_32) g_list_length((GList*) loc3))) break;
		loc4 = (EIF_POINTER) g_list_nth_data((GList*) loc3, (guint) loc6);
		tp1 = *(EIF_POINTER *)(RTCV(loc5)+ _PTROFF_0_1_0_1_0_0_);
		tr8_1 = (EIF_REAL_64) (loc1);
		inline_F31_1410(loc4, tp1, tr8_1);
		loc6++;
	}
	inline_F31_1245(loc2, loc1);
	g_list_free((GList*) loc3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.wipe_out */
void F1145_15815 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	F1145_15809(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
	inline_F31_1214(tp1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	F701_6609(RTCV(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		tb1 = F615_5836(RTCV(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		loc1 = F701_6583(RTCV(tr1));
		F1178_16580(RTCV(loc1), NULL);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		F701_6611(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4205[Dtype(tr1)-404])(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4205[Dtype(tr1)-404])(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1145_15821(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.pebble_source */
EIF_REFERENCE F1145_15816 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
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

/* {EV_MULTI_COLUMN_LIST_IMP}.able_to_transport */
EIF_BOOLEAN F1145_15818 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1178_16574(RTCV(loc1), arg1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14458(Current, arg1);
	}/* NOTREACHED */
	
}

/* {EV_MULTI_COLUMN_LIST_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1145_15819 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1178_16576(RTCV(loc1), arg1, arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14462(Current, arg1, arg2);
	}/* NOTREACHED */
	
}

/* {EV_MULTI_COLUMN_LIST_IMP}.update_pnd_status */
void F1145_15821 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	F701_6609(RTCV(tr1));
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		tb2 = F615_5836(RTCV(tr1));
		if (!tb2) {
			tb1 = loc1;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		tr1 = F701_6583(RTCV(tr1));
		loc1 = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_22_1_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		F701_6611(RTCV(tr1));
	}
	F1145_15822(Current, loc1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.update_pnd_connection */
void F1145_15822 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_55_6_)) {
		if ((EIF_BOOLEAN) (arg1 || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) != NULL))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !arg1 && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) == NULL))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_55_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_mouse_button_event */
void F1145_15823 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F1145_15832(Current, arg3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		loc2 = F701_6584(RTCV(tr1), loc1);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) loc2;
		tb1 = '\01';
		tb2 = F1178_16574(RTCV(loc2), arg4);
		if (!tb2) {
			tb2 = F1093_14417(RTCV(loc2));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN) !tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) NULL;
	}
	F1094_14459(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.pnd_row_imp */
EIF_REFERENCE F1145_15824 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_50_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.temp_pebble */
EIF_REFERENCE F1145_15825 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_51_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.temp_pebble_function */
EIF_REFERENCE F1145_15826 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_52_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.temp_accept_cursor */
EIF_REFERENCE F1145_15827 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_53_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.temp_deny_cursor */
EIF_REFERENCE F1145_15828 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_54_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.call_pebble_function */
void F1145_15829 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) RTCCL(tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_14_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
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
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.pre_pick_steps */
void F1145_15830 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = RTCCL(loc2);
		F1049_13618(RTCV(tr1), Current, tr2);
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F110_3245(RTCV(loc1));
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
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_16_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_17_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
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
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_2_) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_3_) = (EIF_INTEGER_16) ti2_1;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tb1 = '\0';
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_) == ti2_1)) {
			ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_) == ti2_1);
		}
		if (tb1) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			F1048_13499(RTCV(tr1), arg3, arg4);
		} else {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14188(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14188(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)));
		}
	} else {
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_22_5_4_);
		ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(ti2_1 == ti2_2)) {
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_22_5_5_);
			ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(ti2_1 == ti2_2);
		}
		if (tb1) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			F1048_13499(RTCV(tr1), arg3, arg4);
		} else {
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_6_) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1145_15842(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1145_15842(Current);
				*(EIF_INTEGER_16 *)(Current+ _I16OFF_55_12_7_) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_22_5_4_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_22_5_5_);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
			ti4_3 = F585_5762(RTCV(tr2), loc1, ((EIF_INTEGER_32) 1L));
			ti4_4 = F1145_15842(Current);
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) * ti4_4))));
		}
	}
	F1093_14435(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.post_drop_steps */
void F1145_15831 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	F1048_13499(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F1178_16573(RTCV(loc1));
		} else {
			*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) NULL;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_54_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_52_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.row_index_from_y_coord */
EIF_INTEGER_32 F1145_15832 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	tp2 = (EIF_POINTER) NULL;
	tp3 = (EIF_POINTER) NULL;
	loc3 = EIF_TEST (inline_F31_1208(tp1, ((EIF_INTEGER_32) 1L), arg1, (EIF_POINTER *) &(loc1), (EIF_POINTER *) &(loc2), tp2, tp3));
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

/* {EV_MULTI_COLUMN_LIST_IMP}.item_from_coords */
EIF_REFERENCE F1145_15833 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F1145_15832(Current, arg2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		Result = F701_6585(RTCV(tr1), loc1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_text_on_position */
void F1145_15834 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc3);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), arg3);
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = RTOSCF(15835,F1145_15835,(Current));
	g_value_unset((GValue*) loc2);
	inline_F31_1278(loc2);
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1285(loc2, tp1);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	loc3 = F701_6584(RTCV(loc3), arg2);
	loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_19_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
	tp2 = F492_5202(RTCV(loc3));
	inline_F31_1299(tp1, tp2, arg1, loc2);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.g_value_string_struct */
static EIF_POINTER F1145_15835_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTGC;
	RTOSP (15835);
#define Result RTOSR(15835)
	Result = (EIF_POINTER) calloc (sizeof(GValue), 1);
	inline_F31_1278(Result);
	RTOSE (15835);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1145_15835 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(15835,F1145_15835_body,(Current));
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_row_pixmap */
void F1145_15836 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = F1198_17067(RTCV(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_12_10_4_));
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	loc2 = F701_6584(RTCV(loc2), arg1);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_19_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
	tp2 = F492_5202(RTCV(loc2));
	inline_F31_1301(tp1, tp2, ((EIF_INTEGER_32) 0L), loc3);
	g_object_unref((gpointer) loc3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.update_child */
void F1145_15838 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLR(6,loc2);
	
	RTGC;
	loc3 = F1029_13066(RTCV(arg1));
	loc1 = F701_6589(RTCV(loc3));
	tr1 = F1177_16533(RTCV(arg1));
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		F1145_15836(Current, arg2, loc5);
	}
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	F701_6609(RTCV(loc3));
	for (;;) {
		if ((EIF_BOOLEAN) (loc4 > F1145_15792(Current))) break;
		tb1 = F615_5836(RTCV(loc3));
		if (tb1) {
			loc2 = (EIF_REFERENCE) NULL;
		} else {
			loc2 = F701_6583(RTCV(loc3));
		}
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F920_10235(RTCV(tr1));
			loc2 = (EIF_REFERENCE) tr1;
		}
		F1145_15834(Current, loc4, arg2, loc2);
		tb1 = F615_5836(RTCV(loc3));
		if ((EIF_BOOLEAN) !tb1) {
			F701_6611(RTCV(loc3));
		}
		loc4++;
	}
	F701_6614(RTCV(loc3), loc1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.insert_i_th */
void F1145_15840 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_4_);
	loc1 = RTRV(eif_non_attached_type(1177), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1178_16580(RTCV(loc1), Current);
		ti4_1 = F701_6600(RTCV(arg1));
		if ((EIF_BOOLEAN) (ti4_1 > F1145_15792(Current))) {
			ti4_1 = F701_6600(RTCV(arg1));
			F1145_15788(Current, ti4_1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		F701_6613(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), loc1);
		tr1 = RTLNS(493, 493, _OBJSIZ_1_1_0_0_0_1_0_0_);
		F492_5199(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		F1178_16578(RTCV(loc1), loc2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
		tp2 = F492_5202(RTCV(loc2));
		inline_F31_1295(tp1, tp2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		ti4_1 = F701_6600(RTCV(tr1));
		F1145_15838(Current, loc1, ti4_1);
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_22_1_);
		if (tb1) {
			F1145_15822(Current, (EIF_BOOLEAN) 1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		F701_6613(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.remove_i_th */
void F1145_15841 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	loc1 = F701_6585(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) loc1;
	F1178_16580(RTCV(loc1), NULL);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_19_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_1_);
		tp2 = F492_5202(RTCV(loc2));
		inline_F31_1297(tp1, tp2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		F701_6613(RTCV(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		F701_6613(RTCV(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
		F1145_15821(Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.row_height */
EIF_INTEGER_32 F1145_15842 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
	loc1 = inline_F31_1239(tp1, ((EIF_INTEGER_32) 0L));
	tp1 = (EIF_POINTER) NULL;
	inline_F31_1211(loc1, tp1, (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), (EIF_INTEGER_32 *) &(loc4), (EIF_INTEGER_32 *) &(loc5));
	RTLE;
	return (EIF_INTEGER_32) loc5;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.expand_column_count_to */
void F1145_15843 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1145_15788(Current, arg1);
}

/* {EV_MULTI_COLUMN_LIST_IMP}.visual_widget */
EIF_POINTER F1145_15845 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_55_12_10_6_0_2_);
}

/* {EV_MULTI_COLUMN_LIST_IMP}.interface */
static EIF_REFERENCE F1145_15847_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1145_15847 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1145_15847_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_27_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit816 (void)
{
	GTCX
	RTPOMS32(15787,2,"",0,0);
	RTPOMS(15787,1,"text",4,1952807028);
	RTPOMS(15787,0,"pixbuf",6,93246054);
	RTPOMS32(15810,1,"_\000\000\000_\000\000\000",2,24415);
	RTPOMS32(15810,0,"_\000\000\000",1,95);
}


#ifdef __cplusplus
}
#endif
