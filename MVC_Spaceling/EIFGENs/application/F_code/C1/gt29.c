/*
 * Code for class GTK2
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gt29.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
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
#ifndef INLINE_F31_1066
static void inline_F31_1066 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	g_signal_handler_disconnect ((gpointer) arg1, (gulong) arg2)
	;
}
#define INLINE_F31_1066
#endif
#ifndef INLINE_F31_1067
static void inline_F31_1067 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_container_set_focus_chain ((GtkContainer*) arg1, (GList*) arg2)
	;
}
#define INLINE_F31_1067
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
#ifndef INLINE_F31_1084
static void inline_F31_1084 (EIF_POINTER arg1)
{
	g_list_foreach ((GList*) arg1, (GFunc) gtk_tree_path_free, NULL)
	;
}
#define INLINE_F31_1084
#endif
#ifndef INLINE_F31_1118
static void inline_F31_1118 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	gtk_widget_set_size_request ((GtkWidget*) arg1, (gint) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1118
#endif
#ifndef INLINE_F31_1119
static void inline_F31_1119 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_widget_size_allocate ((GtkWidget*) arg1, (GtkAllocation*) arg2)
	;
}
#define INLINE_F31_1119
#endif
#ifndef INLINE_F31_1132
static void inline_F31_1132 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	gtk_widget_style_get ((GtkWidget*) arg1, (gchar*) arg2, (gint*) arg3, NULL);
	;
}
#define INLINE_F31_1132
#endif
#ifndef INLINE_F31_1135
static EIF_POINTER inline_F31_1135 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gdk_display_get_default_screen ((GdkDisplay*) arg1))
	;
}
#define INLINE_F31_1135
#endif
#ifndef INLINE_F31_1178
static EIF_POINTER inline_F31_1178 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_POINTER) (gtk_dialog_add_button ((GtkDialog*) arg1, (gchar*) arg2, (gint) arg3))
	;
}
#define INLINE_F31_1178
#endif
#ifndef INLINE_F31_1179
static void inline_F31_1179 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_dialog_set_default_response ((GtkDialog*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1179
#endif
#ifndef INLINE_F31_1186
static EIF_POINTER inline_F31_1186 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_POINTER) (gtk_file_chooser_dialog_new ((gchar*) arg1, (GtkWindow*) arg2, (GtkFileChooserAction) arg3, NULL, NULL))
	;
}
#define INLINE_F31_1186
#endif
#ifndef INLINE_F31_1188
static EIF_POINTER inline_F31_1188 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_file_chooser_get_filename ((GtkFileChooser*) arg1))
	;
}
#define INLINE_F31_1188
#endif
#ifndef INLINE_F31_1190
static void inline_F31_1190 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_file_chooser_set_filename ((GtkFileChooser*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1190
#endif
#ifndef INLINE_F31_1192
static void inline_F31_1192 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_file_chooser_set_local_only ((GtkFileChooser*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1192
#endif
#ifndef INLINE_F31_1195
static EIF_POINTER inline_F31_1195 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (GTK_ENTRY (GTK_BIN ( arg1 )->child))
	;
}
#define INLINE_F31_1195
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
#ifndef INLINE_F31_1203
static void inline_F31_1203 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_cell_layout_pack_start ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1203
#endif
#ifndef INLINE_F31_1204
static void inline_F31_1204 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_cell_layout_set_attributes ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gchar*) arg3, (gint) arg4, NULL)
	;
}
#define INLINE_F31_1204
#endif
#ifndef INLINE_F31_1205
static void inline_F31_1205 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_cell_layout_reorder ((GtkCellLayout*) arg1, (GtkCellRenderer*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1205
#endif
#ifndef INLINE_F31_1206
static void inline_F31_1206 (EIF_POINTER arg1)
{
	gtk_cell_layout_clear ((GtkCellLayout*) arg1)
	;
}
#define INLINE_F31_1206
#endif
#ifndef INLINE_F31_1207
static void inline_F31_1207 (EIF_POINTER arg1)
{
	gtk_tree_path_free ((GtkTreePath*) arg1)
	;
}
#define INLINE_F31_1207
#endif
#ifndef INLINE_F31_1208
static int inline_F31_1208 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	return (int) (gtk_tree_view_get_path_at_pos ((GtkTreeView*) arg1, (gint) arg2, (gint) arg3, (GtkTreePath**) arg4, (GtkTreeViewColumn**) arg5, (gint*) arg6, (gint*) arg7))
	;
}
#define INLINE_F31_1208
#endif
#ifndef INLINE_F31_1210
static EIF_POINTER inline_F31_1210 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_column_get_cell_renderers ((GtkTreeViewColumn*) arg1))
	;
}
#define INLINE_F31_1210
#endif
#ifndef INLINE_F31_1211
static void inline_F31_1211 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32* arg4, EIF_INTEGER_32* arg5, EIF_INTEGER_32* arg6)
{
	gtk_tree_view_column_cell_get_size ((GtkTreeViewColumn*) arg1, (GdkRectangle*) arg2, (gint*) arg3, (gint*) arg4, (gint*) arg5, (gint*) arg6)
	;
}
#define INLINE_F31_1211
#endif
#ifndef INLINE_F31_1214
static void inline_F31_1214 (EIF_POINTER arg1)
{
	gtk_list_store_clear ((GtkListStore*) arg1)
	;
}
#define INLINE_F31_1214
#endif
#ifndef INLINE_F31_1216
static void inline_F31_1216 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_set_headers_visible ((GtkTreeView*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1216
#endif
#ifndef INLINE_F31_1217
static void inline_F31_1217 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_tree_view_set_enable_search ((GtkTreeView*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1217
#endif
#ifndef INLINE_F31_1218
static EIF_INTEGER_32 inline_F31_1218 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_path_get_depth ((GtkTreePath*) arg1))
	;
}
#define INLINE_F31_1218
#endif
#ifndef INLINE_F31_1225
static EIF_POINTER inline_F31_1225 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	return (EIF_POINTER) (gtk_tree_selection_get_selected_rows ((GtkTreeSelection*) arg1, (GtkTreeModel**) arg2))
	;
}
#define INLINE_F31_1225
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
#ifndef INLINE_F31_1231
static EIF_INTEGER_32 inline_F31_1231 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_model_get_n_columns ((GtkTreeModel*) arg1))
	;
}
#define INLINE_F31_1231
#endif
#ifndef INLINE_F31_1233
static EIF_POINTER inline_F31_1233 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (gtk_tree_model_get_path ((GtkTreeModel*) arg1, (GtkTreeIter*) arg2))
	;
}
#define INLINE_F31_1233
#endif
#ifndef INLINE_F31_1235
static int inline_F31_1235 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (gtk_tree_view_row_expanded ((GtkTreeView*) arg1, (GtkTreePath*) arg2))
	;
}
#define INLINE_F31_1235
#endif
#ifndef INLINE_F31_1237
static void inline_F31_1237 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_view_expand_to_path ((GtkTreeView*) arg1, (GtkTreePath*) arg2)
	;
}
#define INLINE_F31_1237
#endif
#ifndef INLINE_F31_1238
static int inline_F31_1238 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (gtk_tree_view_collapse_row ((GtkTreeView*) arg1, (GtkTreePath*) arg2))
	;
}
#define INLINE_F31_1238
#endif
#ifndef INLINE_F31_1239
static EIF_POINTER inline_F31_1239 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (gtk_tree_view_get_column ((GtkTreeView*) arg1, (gint) arg2))
	;
}
#define INLINE_F31_1239
#endif
#ifndef INLINE_F31_1241
static EIF_POINTER inline_F31_1241 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_get_columns ((GtkTreeView*) arg1))
	;
}
#define INLINE_F31_1241
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
#ifndef INLINE_F31_1245
static void inline_F31_1245 (EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	gtk_tree_view_column_set_alignment ((GtkTreeViewColumn*) arg1, (gfloat) arg2)
	;
}
#define INLINE_F31_1245
#endif
#ifndef INLINE_F31_1246
static void inline_F31_1246 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_view_column_set_fixed_width ((GtkTreeViewColumn*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1246
#endif
#ifndef INLINE_F31_1248
static void inline_F31_1248 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_tree_view_column_set_sizing ((GtkTreeViewColumn*) arg1, (GtkTreeViewColumnSizing) arg2)
	;
}
#define INLINE_F31_1248
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
#ifndef INLINE_F31_1253
static EIF_INTEGER_32 inline_F31_1253 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_view_column_get_width ((GtkTreeViewColumn*) arg1))
	;
}
#define INLINE_F31_1253
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
#ifndef INLINE_F31_1267
static EIF_POINTER inline_F31_1267 (void)
{
	return (EIF_POINTER) (gtk_tree_view_column_new())
	;
}
#define INLINE_F31_1267
#endif
#ifndef INLINE_F31_1268
static void inline_F31_1268 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_view_column_set_title((GtkTreeViewColumn*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1268
#endif
#ifndef INLINE_F31_1269
static void inline_F31_1269 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_tree_view_column_pack_start ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1269
#endif
#ifndef INLINE_F31_1270
static void inline_F31_1270 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	gtk_tree_view_column_pack_end ((GtkTreeViewColumn*) arg1, (GtkCellRenderer*) arg2, (gboolean) arg3)
	;
}
#define INLINE_F31_1270
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
#ifndef INLINE_F31_1287
static void inline_F31_1287 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	g_value_take_string ((GValue*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1287
#endif
#ifndef INLINE_F31_1291
static EIF_POINTER inline_F31_1291 (EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (gtk_list_store_newv ((gint) arg1, (GType*) arg2))
	;
}
#define INLINE_F31_1291
#endif
#ifndef INLINE_F31_1294
static void inline_F31_1294 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_tree_store_insert ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (GtkTreeIter*) arg3, (gint) arg4)
	;
}
#define INLINE_F31_1294
#endif
#ifndef INLINE_F31_1295
static void inline_F31_1295 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_list_store_insert ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1295
#endif
#ifndef INLINE_F31_1296
static void inline_F31_1296 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_store_remove ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1296
#endif
#ifndef INLINE_F31_1297
static void inline_F31_1297 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_list_store_remove ((GtkListStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1297
#endif
#ifndef INLINE_F31_1298
static void inline_F31_1298 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_tree_store_set_value ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GValue*) arg4)
	;
}
#define INLINE_F31_1298
#endif
#ifndef INLINE_F31_1299
static void inline_F31_1299 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set_value ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GValue*) arg4)
	;
}
#define INLINE_F31_1299
#endif
#ifndef INLINE_F31_1300
static void inline_F31_1300 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_tree_store_set ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GdkPixbuf*) arg4, -1)
	;
}
#define INLINE_F31_1300
#endif
#ifndef INLINE_F31_1301
static void inline_F31_1301 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GdkPixbuf*) arg4, -1)
	;
}
#define INLINE_F31_1301
#endif
#ifndef INLINE_F31_1329
static EIF_POINTER inline_F31_1329 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (((GValue*)arg1 + (int)(arg2)))
	;
}
#define INLINE_F31_1329
#endif
#ifndef INLINE_F31_1330
static EIF_POINTER inline_F31_1330 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (((GValue*)arg1 + (int)(arg2 - 1)))
	;
}
#define INLINE_F31_1330
#endif
#ifndef INLINE_F31_1335
static EIF_POINTER inline_F31_1335 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	return (EIF_POINTER) (gdk_pixbuf_scale_simple ((GdkPixbuf*) arg1, (int) arg2, (int) arg3, (int) arg4))
	;
}
#define INLINE_F31_1335
#endif
#ifndef INLINE_F31_1406
static void inline_F31_1406 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	g_object_set ((gpointer) arg1, (gchar*) arg2, (gchar*) arg3, NULL)
	;
}
#define INLINE_F31_1406
#endif
#ifndef INLINE_F31_1407
static void inline_F31_1407 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gchar**) arg3, NULL)
	;
}
#define INLINE_F31_1407
#endif
#ifndef INLINE_F31_1408
static void inline_F31_1408 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gint*) arg3, NULL)
	;
}
#define INLINE_F31_1408
#endif
#ifndef INLINE_F31_1409
static void inline_F31_1409 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, arg3, NULL)
	;
}
#define INLINE_F31_1409
#endif
#ifndef INLINE_F31_1410
static void inline_F31_1410 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_REAL_64 arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, (gfloat) arg3, NULL)
	;
}
#define INLINE_F31_1410
#endif
#ifndef INLINE_F31_1411
static void inline_F31_1411 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, (gboolean) arg3, NULL)
	;
}
#define INLINE_F31_1411
#endif
#ifndef INLINE_F31_1413
static void inline_F31_1413 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	g_signal_handlers_disconnect_matched ((gpointer) arg1, G_SIGNAL_MATCH_DATA, 0, 0, NULL, NULL, (gpointer) (rt_int_ptr) arg2)
	;
}
#define INLINE_F31_1413
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GTK2}.gtk_im_context_simple_new */
EIF_POINTER F31_1006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_im_context_simple_new();
	
	return Result;
}

/* {GTK2}.gtk_im_context_reset */
void F31_1007 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_im_context_reset((GtkIMContext*) arg1);
	
}

/* {GTK2}.gtk_im_context_focus_in */
void F31_1008 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_im_context_focus_in((GtkIMContext*) arg1);
	
}

/* {GTK2}.gtk_im_context_filter_keypress */
EIF_BOOLEAN F31_1010 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_im_context_filter_keypress((GtkIMContext*) arg1, (GdkEventKey*) arg2));
	
	return Result;
}

/* {GTK2}.gtk_im_context_set_client_window */
void F31_1011 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_im_context_set_client_window((GtkIMContext*) arg1, (GdkWindow*) arg2);
	
}

/* {GTK2}.gdk_region_copy */
EIF_POINTER F31_1018 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_region_copy((GdkRegion*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_window_set_accept_focus */
void F31_1020 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_window_set_accept_focus((GtkWindow*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gdk_display_get_default_cursor_size */
EIF_INTEGER_32 F31_1021 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_display_get_default_cursor_size((GdkDisplay*) arg1);
	
	return Result;
}

/* {GTK2}.events_pending */
EIF_BOOLEAN F31_1023 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(g_main_context_pending (NULL));
	return Result;
}

/* {GTK2}.dispatch_events */
void F31_1025 (EIF_REFERENCE Current)
{
	GTCX
	
	
	g_main_context_dispatch(g_main_context_default());
}

/* {GTK2}.gtk_widget_toplevel */
EIF_BOOLEAN F31_1026 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_TOPLEVEL((arg1)));
	return Result;
}

/* {GTK2}.gtk_fixed_set_has_window */
void F31_1027 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_fixed_set_has_window((GtkFixed*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_toolbar_set_orientation */
void F31_1028 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_toolbar_set_orientation((GtkToolbar*) arg1, (gint) arg2);
	
}

/* {GTK2}.gtk_toolbar_set_style */
void F31_1029 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_toolbar_set_style((GtkToolbar*) arg1, (GtkToolbarStyle) arg2);
	
}

/* {GTK2}.gdk_screen_get_primary_monitor */
EIF_INTEGER_32 F31_1043 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_1043 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gdk_screen_get_rgb_colormap */
EIF_POINTER F31_1044 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1044 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gdk_screen_get_rgb_visual */
EIF_POINTER F31_1045 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1045 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gdk_draw_drawable */
void F31_1049 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	
	gdk_draw_drawable((GdkDrawable*) arg1, (GdkGC*) arg2, (GdkDrawable*) arg3, (gint) arg4, (gint) arg5, (gint) arg6, (gint) arg7, (gint) arg8, (gint) arg9);
	
}

/* {GTK2}.gtk_window_get_focus */
EIF_POINTER F31_1058 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_window_get_focus((GtkWindow*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_scrolled_window_set_shadow_type */
void F31_1059 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow*) arg1, (GtkShadowType) arg2);
	
}

/* {GTK2}.gtk_win_pos_center_on_parent_enum */
EIF_INTEGER_32 F31_1060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_WIN_POS_CENTER_ON_PARENT;
	return Result;
}

/* {GTK2}.gtk_label_get_label */
EIF_POINTER F31_1061 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_label_get_label((GtkLabel*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_window_get_position */
void F31_1062 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	gtk_window_get_position((GtkWindow*) arg1, (gint*) arg2, (gint*) arg3);
	
}

/* {GTK2}.gtk_window_move */
void F31_1064 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_window_move((GtkWindow*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK2}.gtk_icon_size_dialog_enum */
EIF_INTEGER_32 F31_1065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_ICON_SIZE_DIALOG;
	return Result;
}

/* {GTK2}.g_signal_handler_disconnect */
void F31_1066 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1066 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_container_set_focus_chain */
void F31_1067 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1067 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gdk_drawable_get_size */
void F31_1070 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	gdk_drawable_get_size((GdkDrawable*) arg1, (gint*) arg2, (gint*) arg3);
	
}

/* {GTK2}.gtk_combo_box_popdown */
void F31_1071 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_combo_box_popdown((GtkComboBox*) arg1);
	
}

/* {GTK2}.gtk_entry_set_alignment */
void F31_1074 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	gtk_entry_set_alignment((GtkEntry*) arg1, (gfloat) arg2);
	
}

/* {GTK2}.gtk_file_chooser_set_current_folder */
void F31_1075 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_file_chooser_set_current_folder((GtkFileChooser*) arg1, (gchar*) arg2);
	
}

/* {GTK2}.add_g_type_string */
void F31_1077 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1077 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.add_gdk_type_pixbuf */
void F31_1078 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1078 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.sizeof_gtype */
EIF_INTEGER_32 F31_1079 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(GType);
	return Result;
}

/* {GTK2}.gtk_get_current_event_time */
EIF_NATURAL_32 F31_1080 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) gtk_get_current_event_time();
	
	return Result;
}

/* {GTK2}.gtk_window_is_active */
EIF_BOOLEAN F31_1082 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_window_is_active((GtkWindow*) arg1));
	
	return Result;
}

/* {GTK2}.gtk_window_resize */
void F31_1083 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_window_resize((GtkWindow*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK2}.gtk_tree_path_list_free_contents */
void F31_1084 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1084 ((EIF_POINTER) arg1);
}

/* {GTK2}.g_value_unset */
void F31_1085 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	g_value_unset((GValue*) arg1);
	
}

/* {GTK2}.gdk_gc_set_rgb_fg_color */
void F31_1086 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_set_rgb_fg_color((GdkGC*) arg1, (GdkColor*) arg2);
	
}

/* {GTK2}.gdk_gc_set_rgb_bg_color */
void F31_1087 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_set_rgb_bg_color((GdkGC*) arg1, (GdkColor*) arg2);
	
}

/* {GTK2}.gtk_tree_view_column_fixed_enum */
EIF_INTEGER_32 F31_1089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_TREE_VIEW_COLUMN_FIXED;
	return Result;
}

/* {GTK2}.pango_tab_array_new */
EIF_POINTER F31_1090 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) pango_tab_array_new((gint) arg1, (gboolean) arg2);
	
	return Result;
}

/* {GTK2}.pango_tab_array_resize */
void F31_1091 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	pango_tab_array_resize((PangoTabArray*) arg1, (gint) arg2);
	
}

/* {GTK2}.pango_tab_array_set_tab */
void F31_1092 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	pango_tab_array_set_tab((PangoTabArray*) arg1, (gint) arg2, (PangoTabAlign) arg3, (gint) arg4);
	
}

/* {GTK2}.gtk_text_view_set_tabs */
void F31_1094 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_text_view_set_tabs((GtkTextView*) arg1, (PangoTabArray*) arg2);
	
}

/* {GTK2}.gdk_event_window_state_struct_changed_mask */
EIF_INTEGER_32 F31_1095 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventWindowState *)arg1)->changed_mask);
	
	return Result;
}

/* {GTK2}.gdk_event_window_state_struct_new_window_state */
EIF_INTEGER_32 F31_1096 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventWindowState *)arg1)->new_window_state);
	
	return Result;
}

/* {GTK2}.gdk_window_state_iconified_enum */
EIF_INTEGER_32 F31_1098 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_WINDOW_STATE_ICONIFIED;
	return Result;
}

/* {GTK2}.gdk_window_state_maximized_enum */
EIF_INTEGER_32 F31_1099 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_WINDOW_STATE_MAXIMIZED;
	return Result;
}

/* {GTK2}.gtk_widget_set_redraw_on_allocate */
void F31_1105 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_widget_set_redraw_on_allocate((GtkWidget*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_widget_set_double_buffered */
void F31_1106 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_widget_set_double_buffered((GtkWidget*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gdk_window_process_updates */
void F31_1111 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gdk_window_process_updates((GdkWindow*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_event_box_set_visible_window */
void F31_1112 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_event_box_set_visible_window((GtkEventBox*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gdk_scroll_up_enum */
EIF_INTEGER_32 F31_1114 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_SCROLL_UP;
	return Result;
}

/* {GTK2}.gtk_widget_set_minimum_size */
void F31_1118 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	inline_F31_1118 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
}

/* {GTK2}.gtk_widget_size_allocate */
void F31_1119 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1119 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.c_pango_rectangle_struct_allocate */
EIF_POINTER F31_1121 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(PangoRectangle), 1);
	return Result;
}

/* {GTK2}.pango_rectangle_struct_x */
EIF_INTEGER_32 F31_1122 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((PangoRectangle *)arg1)->x);
	
	return Result;
}

/* {GTK2}.pango_rectangle_struct_y */
EIF_INTEGER_32 F31_1123 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((PangoRectangle *)arg1)->y);
	
	return Result;
}

/* {GTK2}.pango_rectangle_struct_width */
EIF_INTEGER_32 F31_1124 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((PangoRectangle *)arg1)->width);
	
	return Result;
}

/* {GTK2}.pango_rectangle_struct_height */
EIF_INTEGER_32 F31_1125 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((PangoRectangle *)arg1)->height);
	
	return Result;
}

/* {GTK2}.pango_layout_get_pixel_extents */
void F31_1127 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	pango_layout_get_pixel_extents((PangoLayout*) arg1, (PangoRectangle*) arg2, (PangoRectangle*) arg3);
	
}

/* {GTK2}.gdk_event_scroll_struct_scroll_direction */
EIF_INTEGER_32 F31_1130 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventScroll *)arg1)->direction);
	
	return Result;
}

/* {GTK2}.gtk_tree_view_scroll_to_cell */
void F31_1131 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_BOOLEAN arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6)
{
	GTCX
	
	gtk_tree_view_scroll_to_cell((GtkTreeView*) arg1, (GtkTreePath*) arg2, (GtkTreeViewColumn*) arg3, (gboolean) arg4, (gfloat) arg5, (gfloat) arg6);
	
}

/* {GTK2}.gtk_widget_style_get_integer */
void F31_1132 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F31_1132 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

/* {GTK2}.gdk_display_get_default */
EIF_POINTER F31_1133 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_display_get_default();
	
	return Result;
}

/* {GTK2}.gdk_display_get_default_screen */
EIF_POINTER F31_1135 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1135 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gdk_display_get_pointer */
void F31_1139 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32* arg4, EIF_NATURAL_32* arg5)
{
	GTCX
	
	gdk_display_get_pointer((GdkDisplay*) arg1, (GdkScreen**) arg2, (gint*) arg3, (gint*) arg4, (GdkModifierType*) arg5);
	
}

/* {GTK2}.gdk_display_get_window_at_pointer */
EIF_POINTER F31_1140 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_display_get_window_at_pointer((GdkDisplay*) arg1, (gint*) arg2, (gint*) arg3);
	
	return Result;
}

/* {GTK2}.gdk_cursor_new_from_pixbuf */
EIF_POINTER F31_1141 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_cursor_new_from_pixbuf((GdkDisplay*) arg1, (GdkPixbuf*) arg2, (gint) arg3, (gint) arg4);
	
	return Result;
}

/* {GTK2}.gdk_pixbuf_add_alpha */
EIF_POINTER F31_1144 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2, EIF_NATURAL_8 arg3, EIF_NATURAL_8 arg4, EIF_NATURAL_8 arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_pixbuf_add_alpha((GdkPixbuf*) arg1, (gboolean) arg2, (guchar) arg3, (guchar) arg4, (guchar) arg5);
	
	return Result;
}

/* {GTK2}.gtk_separator_tool_item_new */
EIF_POINTER F31_1147 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_separator_tool_item_new();
	
	return Result;
}

/* {GTK2}.gtk_toolbar_set_show_arrow */
void F31_1149 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_toolbar_set_show_arrow((GtkToolbar*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_tool_item_set_is_important */
void F31_1150 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_tool_item_set_is_important((GtkToolItem*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_toggle_tool_button_set_active */
void F31_1151 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_toggle_tool_button_set_active((GtkToggleToolButton*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_toggle_tool_button_get_active */
EIF_BOOLEAN F31_1152 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_toggle_tool_button_get_active((GtkToggleToolButton*) arg1));
	
	return Result;
}

/* {GTK2}.gtk_toolbar_new */
EIF_POINTER F31_1154 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_toolbar_new();
	
	return Result;
}

/* {GTK2}.gtk_tool_button_new */
EIF_POINTER F31_1155 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_tool_button_new((GtkWidget*) arg1, (gchar*) arg2);
	
	return Result;
}

/* {GTK2}.gtk_radio_tool_button_new */
EIF_POINTER F31_1156 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_tool_button_new((GSList*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_radio_tool_button_set_group */
void F31_1157 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_radio_tool_button_set_group((GtkRadioToolButton*) arg1, (GSList*) arg2);
	
}

/* {GTK2}.gtk_radio_tool_button_get_group */
EIF_POINTER F31_1158 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_tool_button_get_group((GtkRadioToolButton*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_toolbar_icons_enum */
EIF_INTEGER_32 F31_1159 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_TOOLBAR_ICONS;
	return Result;
}

/* {GTK2}.gtk_toolbar_text_enum */
EIF_INTEGER_32 F31_1160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_TOOLBAR_TEXT;
	return Result;
}

/* {GTK2}.gtk_toolbar_both_enum */
EIF_INTEGER_32 F31_1161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_TOOLBAR_BOTH;
	return Result;
}

/* {GTK2}.gtk_toolbar_both_horiz_enum */
EIF_INTEGER_32 F31_1162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_TOOLBAR_BOTH_HORIZ;
	return Result;
}

/* {GTK2}.gtk_tool_button_set_icon_widget */
void F31_1164 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_tool_button_set_icon_widget((GtkToolButton*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK2}.gtk_tool_button_set_label */
void F31_1165 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_tool_button_set_label((GtkToolButton*) arg1, (gchar*) arg2);
	
}

/* {GTK2}.gtk_tool_button_get_label */
EIF_POINTER F31_1166 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_tool_button_get_label((GtkToolButton*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_toolbar_insert */
void F31_1167 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_toolbar_insert((GtkToolbar*) arg1, (GtkToolItem*) arg2, (gint) arg3);
	
}

/* {GTK2}.gtk_file_chooser_action_select_folder_enum */
EIF_INTEGER_32 F31_1176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER;
	return Result;
}

/* {GTK2}.gtk_dialog_add_button */
EIF_POINTER F31_1178 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1178 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

/* {GTK2}.gtk_dialog_set_default_response */
void F31_1179 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1179 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_stock_ok_enum */
EIF_POINTER F31_1180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GTK_STOCK_OK;
	return Result;
}

/* {GTK2}.gtk_response_accept_enum */
EIF_INTEGER_32 F31_1182 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_RESPONSE_ACCEPT;
	return Result;
}

/* {GTK2}.gtk_response_cancel_enum */
EIF_INTEGER_32 F31_1183 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_RESPONSE_CANCEL;
	return Result;
}

/* {GTK2}.gtk_stock_cancel_enum */
EIF_POINTER F31_1185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GTK_STOCK_CANCEL;
	return Result;
}

/* {GTK2}.gtk_file_chooser_dialog_new */
EIF_POINTER F31_1186 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1186 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

/* {GTK2}.gtk_file_chooser_get_filename */
EIF_POINTER F31_1188 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1188 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_file_chooser_set_filename */
void F31_1190 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1190 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_file_chooser_set_local_only */
void F31_1192 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F31_1192 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK2}.gtk_combo_box_get_entry */
EIF_POINTER F31_1195 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1195 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_combo_box_get_active */
EIF_INTEGER_32 F31_1196 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_1196 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_combo_box_set_active */
void F31_1197 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1197 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_combo_box_entry_new */
EIF_POINTER F31_1199 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_combo_box_entry_new();
	
	return Result;
}

/* {GTK2}.gtk_combo_box_set_model */
void F31_1201 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1201 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_combo_box_entry_set_text_column */
void F31_1202 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1202 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_cell_layout_pack_start */
void F31_1203 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	inline_F31_1203 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_BOOLEAN) arg3);
}

/* {GTK2}.gtk_cell_layout_set_attribute */
void F31_1204 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	inline_F31_1204 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
}

/* {GTK2}.gtk_cell_layout_reorder */
void F31_1205 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	inline_F31_1205 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
}

/* {GTK2}.gtk_cell_layout_clear */
void F31_1206 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1206 ((EIF_POINTER) arg1);
}

/* {GTK2}.gtk_tree_path_free */
void F31_1207 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1207 ((EIF_POINTER) arg1);
}

/* {GTK2}.gtk_tree_view_get_path_at_pos */
EIF_BOOLEAN F31_1208 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F31_1208 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_POINTER) arg5, (EIF_POINTER) arg6, (EIF_POINTER) arg7));
	return Result;
}

/* {GTK2}.gtk_tree_view_column_get_cell_renderers */
EIF_POINTER F31_1210 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1210 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_view_column_cell_get_size */
void F31_1211 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3, EIF_INTEGER_32* arg4, EIF_INTEGER_32* arg5, EIF_INTEGER_32* arg6)
{
	GTCX
	
	
	inline_F31_1211 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3, (EIF_INTEGER_32*) arg4, (EIF_INTEGER_32*) arg5, (EIF_INTEGER_32*) arg6);
}

/* {GTK2}.gtk_list_store_clear */
void F31_1214 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1214 ((EIF_POINTER) arg1);
}

/* {GTK2}.gtk_tree_view_set_headers_visible */
void F31_1216 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F31_1216 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK2}.gtk_tree_view_set_enable_search */
void F31_1217 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F31_1217 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK2}.gtk_tree_path_get_depth */
EIF_INTEGER_32 F31_1218 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_1218 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_path_get_indices */
EIF_POINTER F31_1219 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_tree_path_get_indices((GtkTreePath*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_tree_selection_get_selected_rows */
EIF_POINTER F31_1225 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1225 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2);
	return Result;
}

/* {GTK2}.gtk_tree_selection_select_iter */
void F31_1227 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1227 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_tree_selection_unselect_all */
void F31_1230 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1230 ((EIF_POINTER) arg1);
}

/* {GTK2}.gtk_tree_model_get_n_columns */
EIF_INTEGER_32 F31_1231 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_1231 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_model_get_path */
EIF_POINTER F31_1233 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1233 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {GTK2}.gtk_tree_view_row_expanded */
EIF_BOOLEAN F31_1235 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F31_1235 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {GTK2}.gtk_tree_view_expand_to_path */
void F31_1237 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1237 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_tree_view_collapse_row */
EIF_BOOLEAN F31_1238 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F31_1238 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {GTK2}.gtk_tree_view_get_column */
EIF_POINTER F31_1239 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1239 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {GTK2}.gtk_tree_view_get_columns */
EIF_POINTER F31_1241 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1241 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_view_get_selection */
EIF_POINTER F31_1242 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1242 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_selection_set_mode */
void F31_1243 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1243 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_tree_view_column_set_alignment */
void F31_1245 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	
	inline_F31_1245 ((EIF_POINTER) arg1, (EIF_REAL_32) arg2);
}

/* {GTK2}.gtk_tree_view_column_set_fixed_width */
void F31_1246 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1246 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_tree_view_column_set_sizing */
void F31_1248 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1248 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.gtk_tree_view_column_set_resizable */
void F31_1249 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F31_1249 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK2}.gtk_tree_view_column_set_clickable */
void F31_1250 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F31_1250 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK2}.gtk_tree_view_column_get_width */
EIF_INTEGER_32 F31_1253 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F31_1253 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK2}.gtk_tree_view_column_add_attribute */
void F31_1257 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	inline_F31_1257 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
}

/* {GTK2}.gtk_cell_renderer_text_new */
EIF_POINTER F31_1258 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1258 ();
	return Result;
}

/* {GTK2}.gtk_cell_renderer_pixbuf_new */
EIF_POINTER F31_1259 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1259 ();
	return Result;
}

/* {GTK2}.gtk_cell_renderer_get_fixed_size */
void F31_1261 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_cell_renderer_get_fixed_size((GtkCellRenderer*) arg1, (gint*) arg2, (gint*) arg3);
	
}

/* {GTK2}.gtk_tree_view_insert_column */
void F31_1264 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	inline_F31_1264 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
}

/* {GTK2}.gtk_tree_view_column_new */
EIF_POINTER F31_1267 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1267 ();
	return Result;
}

/* {GTK2}.gtk_tree_view_column_set_title */
void F31_1268 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1268 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_tree_view_column_pack_start */
void F31_1269 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	inline_F31_1269 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_BOOLEAN) arg3);
}

/* {GTK2}.gtk_tree_view_column_pack_end */
void F31_1270 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	inline_F31_1270 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_BOOLEAN) arg3);
}

/* {GTK2}.c_g_value_struct_allocate */
EIF_POINTER F31_1274 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(GValue), 1);
	return Result;
}

/* {GTK2}.g_value_init_string */
void F31_1278 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F31_1278 ((EIF_POINTER) arg1);
}

/* {GTK2}.g_value_set_string */
void F31_1285 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1285 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.g_value_take_string */
void F31_1287 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1287 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_tree_view_new */
EIF_POINTER F31_1288 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_tree_view_new();
	
	return Result;
}

/* {GTK2}.gtk_tree_view_set_model */
void F31_1289 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_tree_view_set_model((GtkTreeView*) arg1, (GtkTreeModel*) arg2);
	
}

/* {GTK2}.gtk_list_store_newv */
EIF_POINTER F31_1291 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1291 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {GTK2}.gtk_tree_store_insert */
void F31_1294 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	inline_F31_1294 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
}

/* {GTK2}.gtk_list_store_insert */
void F31_1295 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	inline_F31_1295 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
}

/* {GTK2}.gtk_tree_store_remove */
void F31_1296 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1296 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_list_store_remove */
void F31_1297 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F31_1297 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {GTK2}.gtk_tree_store_set_value */
void F31_1298 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F31_1298 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
}

/* {GTK2}.gtk_list_store_set_value */
void F31_1299 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F31_1299 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
}

/* {GTK2}.gtk_tree_store_set_pixbuf */
void F31_1300 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F31_1300 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
}

/* {GTK2}.gtk_list_store_set_pixbuf */
void F31_1301 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F31_1301 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
}

/* {GTK2}.pango_underline_none_enum */
EIF_INTEGER_32 F31_1302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) PANGO_UNDERLINE_NONE;
	return Result;
}

/* {GTK2}.pango_underline_single_enum */
EIF_INTEGER_32 F31_1303 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) PANGO_UNDERLINE_SINGLE;
	return Result;
}

/* {GTK2}.gdk_screen_get_default */
EIF_POINTER F31_1305 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_screen_get_default();
	
	return Result;
}

/* {GTK2}.gdk_screen_get_root_window */
EIF_POINTER F31_1306 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_screen_get_root_window((GdkScreen*) arg1);
	
	return Result;
}

/* {GTK2}.gdk_screen_get_n_monitors */
EIF_INTEGER_32 F31_1309 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_screen_get_n_monitors((GdkScreen*) arg1);
	
	return Result;
}

/* {GTK2}.gdk_screen_get_monitor_geometry */
void F31_1310 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	gdk_screen_get_monitor_geometry((GdkScreen*) arg1, (gint) arg2, (GdkRectangle*) arg3);
	
}

/* {GTK2}.gdk_visual_get_best_depth */
EIF_INTEGER_32 F31_1316 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_visual_get_best_depth();
	
	return Result;
}

/* {GTK2}.gtk_fixed_new */
EIF_POINTER F31_1323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_fixed_new();
	
	return Result;
}

/* {GTK2}.gtk_args_array_i_th */
EIF_POINTER F31_1329 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1329 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {GTK2}.g_value_array_i_th */
EIF_POINTER F31_1330 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1330 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {GTK2}.gdk_pixbuf_scale_simple */
EIF_POINTER F31_1335 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F31_1335 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	return Result;
}

/* {GTK2}.gdk_interp_bilinear */
EIF_INTEGER_32 F31_1337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_INTERP_BILINEAR;
	return Result;
}

/* {GTK2}.gdk_interp_nearest */
EIF_INTEGER_32 F31_1339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_INTERP_NEAREST;
	return Result;
}

/* {GTK2}.gdk_pixbuf_composite */
void F31_1341 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_REAL_64 arg7, EIF_REAL_64 arg8, EIF_REAL_64 arg9, EIF_REAL_64 arg10, EIF_INTEGER_32 arg11, EIF_INTEGER_32 arg12)
{
	GTCX
	
	gdk_pixbuf_composite((GdkPixbuf*) arg1, (GdkPixbuf*) arg2, (int) arg3, (int) arg4, (int) arg5, (int) arg6, (double) arg7, (double) arg8, (double) arg9, (double) arg10, (GdkInterpType) arg11, (int) arg12);
	
}

/* {GTK2}.gtk_widget_render_icon */
EIF_POINTER F31_1343 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_widget_render_icon((GtkWidget*) arg1, (gchar*) arg2, (GtkIconSize) arg3, (gchar*) arg4);
	
	return Result;
}

/* {GTK2}.gtk_widget_modify_text */
void F31_1345 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_widget_modify_text((GtkWidget*) arg1, (GtkStateType) arg2, (GdkColor*) arg3);
	
}

/* {GTK2}.gtk_widget_modify_base */
void F31_1346 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) arg2, (GdkColor*) arg3);
	
}

/* {GTK2}.gtk_image_menu_item_new */
EIF_POINTER F31_1347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_image_menu_item_new();
	
	return Result;
}

/* {GTK2}.gtk_image_menu_item_set_image */
void F31_1350 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_image_menu_item_set_image((GtkImageMenuItem*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK2}.gtk_label_set_text_with_mnemonic */
void F31_1352 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_label_set_text_with_mnemonic((GtkLabel*) arg1, (gchar*) arg2);
	
}

/* {GTK2}.gtk_window_deiconify */
void F31_1356 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_window_deiconify((GtkWindow*) arg1);
	
}

/* {GTK2}.gtk_window_unmaximize */
void F31_1360 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_window_unmaximize((GtkWindow*) arg1);
	
}

/* {GTK2}.gdk_pixbuf_get_has_alpha */
EIF_BOOLEAN F31_1364 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gdk_pixbuf_get_has_alpha((GdkPixbuf*) arg1));
	
	return Result;
}

/* {GTK2}.gdk_pixbuf_get_from_drawable */
EIF_POINTER F31_1368 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_pixbuf_get_from_drawable((GdkPixbuf*) arg1, (GdkDrawable*) arg2, (GdkColormap*) arg3, (int) arg4, (int) arg5, (int) arg6, (int) arg7, (int) arg8, (int) arg9);
	
	return Result;
}

/* {GTK2}.gtk_value_pointer */
EIF_POINTER F31_1372 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_value_peek_pointer((GValue*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_value_uint */
EIF_NATURAL_32 F31_1377 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) g_value_get_uint((GValue*) arg1);
	
	return Result;
}

/* {GTK2}.pango_layout_set_font_description */
void F31_1379 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	pango_layout_set_font_description((PangoLayout*) arg1, (PangoFontDescription*) arg2);
	
}

/* {GTK2}.pango_layout_get_pixel_size */
void F31_1381 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	pango_layout_get_pixel_size((PangoLayout*) arg1, (gint*) arg2, (gint*) arg3);
	
}

/* {GTK2}.pango_layout_get_iter */
EIF_POINTER F31_1382 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) pango_layout_get_iter((PangoLayout*) arg1);
	
	return Result;
}

/* {GTK2}.pango_layout_set_text */
void F31_1383 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	pango_layout_set_text((PangoLayout*) arg1, (char*) arg2, (int) arg3);
	
}

/* {GTK2}.pango_layout_iter_get_baseline */
EIF_INTEGER_32 F31_1384 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) pango_layout_iter_get_baseline((PangoLayoutIter*) arg1);
	
	return Result;
}

/* {GTK2}.pango_layout_iter_free */
void F31_1385 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	pango_layout_iter_free((PangoLayoutIter*) arg1);
	
}

/* {GTK2}.gtk_widget_create_pango_layout */
EIF_POINTER F31_1387 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_widget_create_pango_layout((GtkWidget*) arg1, (gchar*) arg2);
	
	return Result;
}

/* {GTK2}.gtk_widget_modify_fg */
void F31_1388 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_widget_modify_fg((GtkWidget*) arg1, (GtkStateType) arg2, (GdkColor*) arg3);
	
}

/* {GTK2}.gtk_widget_modify_bg */
void F31_1389 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) arg2, (GdkColor*) arg3);
	
}

/* {GTK2}.pango_scale */
EIF_INTEGER_32 F31_1391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) PANGO_SCALE;
	return Result;
}

/* {GTK2}.pango_font_description_new */
EIF_POINTER F31_1392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) pango_font_description_new();
	
	return Result;
}

/* {GTK2}.pango_font_description_free */
void F31_1393 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	pango_font_description_free((PangoFontDescription*) arg1);
	
}

/* {GTK2}.pango_font_description_set_family */
void F31_1396 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	pango_font_description_set_family((PangoFontDescription*) arg1, (char*) arg2);
	
}

/* {GTK2}.pango_font_description_set_style */
void F31_1398 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	pango_font_description_set_style((PangoFontDescription*) arg1, (PangoStyle) arg2);
	
}

/* {GTK2}.pango_font_description_set_weight */
void F31_1400 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	pango_font_description_set_weight((PangoFontDescription*) arg1, (PangoWeight) arg2);
	
}

/* {GTK2}.pango_font_description_set_size */
void F31_1402 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	pango_font_description_set_size((PangoFontDescription*) arg1, (gint) arg2);
	
}

/* {GTK2}.g_object_set_string */
void F31_1406 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	inline_F31_1406 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
}

/* {GTK2}.g_object_get_string */
void F31_1407 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	GTCX
	
	
	inline_F31_1407 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER*) arg3);
}

/* {GTK2}.g_object_get_integer */
void F31_1408 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F31_1408 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

/* {GTK2}.g_object_set_integer */
void F31_1409 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	inline_F31_1409 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
}

/* {GTK2}.g_object_set_double */
void F31_1410 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_REAL_64 arg3)
{
	GTCX
	
	
	inline_F31_1410 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_REAL_64) arg3);
}

/* {GTK2}.g_object_set_boolean */
void F31_1411 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	inline_F31_1411 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_BOOLEAN) arg3);
}

/* {GTK2}.signal_disconnect */
void F31_1412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	g_signal_handler_disconnect((gpointer) arg1, (gulong) arg2);
	
}

/* {GTK2}.signal_disconnect_by_data */
void F31_1413 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F31_1413 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {GTK2}.object_destroy */
void F31_1418 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_object_destroy((GtkObject*) arg1);
	
}

/* {GTK2}.object_ref */
void F31_1419 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	g_object_ref((gpointer) arg1);
	
}

/* {GTK2}.object_unref */
void F31_1420 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	g_object_unref((gpointer) arg1);
	
}

/* {GTK2}.gtk_text_view_new */
EIF_POINTER F31_1422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_view_new();
	
	return Result;
}

/* {GTK2}.gtk_text_view_get_buffer */
EIF_POINTER F31_1425 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_view_get_buffer((GtkTextView*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_text_buffer_set_text */
void F31_1428 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_text_buffer_set_text((GtkTextBuffer*) arg1, (gchar*) arg2, (gint) arg3);
	
}

/* {GTK2}.gtk_text_buffer_get_bounds */
void F31_1434 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_text_buffer_get_bounds((GtkTextBuffer*) arg1, (GtkTextIter*) arg2, (GtkTextIter*) arg3);
	
}

/* {GTK2}.gtk_text_buffer_get_selection_bounds */
EIF_BOOLEAN F31_1435 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_text_buffer_get_selection_bounds((GtkTextBuffer*) arg1, (GtkTextIter*) arg2, (GtkTextIter*) arg3));
	
	return Result;
}

/* {GTK2}.gtk_text_buffer_get_insert */
EIF_POINTER F31_1437 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_buffer_get_insert((GtkTextBuffer*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_text_buffer_get_text */
EIF_POINTER F31_1439 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_buffer_get_text((GtkTextBuffer*) arg1, (GtkTextIter*) arg2, (GtkTextIter*) arg3, (gboolean) arg4);
	
	return Result;
}

/* {GTK2}.gtk_text_view_set_editable */
void F31_1444 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_text_view_set_editable((GtkTextView*) arg1, (gboolean) arg2);
	
}

/* {GTK2}.gtk_text_view_set_wrap_mode */
void F31_1445 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_text_view_set_wrap_mode((GtkTextView*) arg1, (GtkWrapMode) arg2);
	
}

/* {GTK2}.gtk_text_tag_new */
EIF_POINTER F31_1449 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_tag_new((gchar*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_text_buffer_apply_tag */
void F31_1451 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	gtk_text_buffer_apply_tag((GtkTextBuffer*) arg1, (GtkTextTag*) arg2, (GtkTextIter*) arg3, (GtkTextIter*) arg4);
	
}

/* {GTK2}.gtk_text_buffer_get_tag_table */
EIF_POINTER F31_1452 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_text_buffer_get_tag_table((GtkTextBuffer*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_text_tag_table_add */
void F31_1453 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_text_tag_table_add((GtkTextTagTable*) arg1, (GtkTextTag*) arg2);
	
}

/* {GTK2}.gtk_text_buffer_get_iter_at_mark */
void F31_1456 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_text_buffer_get_iter_at_mark((GtkTextBuffer*) arg1, (GtkTextIter*) arg2, (GtkTextMark*) arg3);
	
}

/* {GTK2}.gtk_text_buffer_get_iter_at_offset */
void F31_1457 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_text_buffer_get_iter_at_offset((GtkTextBuffer*) arg1, (GtkTextIter*) arg2, (gint) arg3);
	
}

/* {GTK2}.gtk_text_iter_get_offset */
EIF_INTEGER_32 F31_1469 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gtk_text_iter_get_offset((GtkTextIter*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_clipboard_get */
EIF_POINTER F31_1470 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_clipboard_get((GdkAtom) arg1);
	
	return Result;
}

/* {GTK2}.gtk_image_set_from_pixmap */
void F31_1482 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_image_set_from_pixmap((GtkImage*) arg1, (GdkPixmap*) arg2, (GdkBitmap*) arg3);
	
}

/* {GTK2}.gtk_image_set_from_pixbuf */
void F31_1483 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_image_set_from_pixbuf((GtkImage*) arg1, (GdkPixbuf*) arg2);
	
}

/* {GTK2}.gtk_image_get_pixbuf */
EIF_POINTER F31_1485 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_image_get_pixbuf((GtkImage*) arg1);
	
	return Result;
}

/* {GTK2}.gtk_image_new */
EIF_POINTER F31_1488 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_image_new();
	
	return Result;
}

/* {GTK2}.gtk_dialog_new */
EIF_POINTER F31_1489 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_dialog_new();
	
	return Result;
}

/* {GTK2}.gtk_widget_modify_font */
void F31_1490 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_widget_modify_font((GtkWidget*) arg1, (PangoFontDescription*) arg2);
	
}

void EIF_Minit29 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
