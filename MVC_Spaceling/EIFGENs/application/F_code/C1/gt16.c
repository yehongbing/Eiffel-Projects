/*
 * Code for class GTK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gt16.h"
#include <stdlib.h>
#include <ev_gtk.h>
#include <glib.h>
#include <gmodule.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_244
static EIF_POINTER inline_F24_244 (void)
{
	#if GTK_MAJOR_VERSION > 1
	return gtk_settings_get_default();
#endif
	;
}
#define INLINE_F24_244
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
#ifndef INLINE_F24_247
static void inline_F24_247 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	#if GTK_MAJOR_VERSION > 1
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) arg1, (gboolean) arg2);
#endif
	;
}
#define INLINE_F24_247
#endif
#ifndef INLINE_F24_250
static EIF_POINTER inline_F24_250 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_pixels ((GdkPixbuf*) arg1);
#endif
	;
}
#define INLINE_F24_250
#endif
#ifndef INLINE_F24_251
static EIF_POINTER inline_F24_251 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_copy ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_251
#endif
#ifndef INLINE_F24_252
static EIF_INTEGER_32 inline_F24_252 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_width ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_252
#endif
#ifndef INLINE_F24_253
static EIF_INTEGER_32 inline_F24_253 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_height ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_253
#endif
#ifndef INLINE_F24_254
static EIF_NATURAL_32 inline_F24_254 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_rowstride ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_254
#endif
#ifndef INLINE_F24_255
static EIF_NATURAL_32 inline_F24_255 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_n_channels ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_255
#endif
#ifndef INLINE_F24_256
static EIF_NATURAL_32 inline_F24_256 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_get_bits_per_sample ((GdkPixbuf*)arg1);
#endif
	;
}
#define INLINE_F24_256
#endif
#ifndef INLINE_F24_259
static EIF_POINTER inline_F24_259 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_new_from_xpm_data ((const char**) arg1);
#endif
	;
}
#define INLINE_F24_259
#endif
#ifndef INLINE_F24_261
static void inline_F24_261 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_POINTER* arg3, EIF_INTEGER_32 arg4)
{
	#if GTK_MAJOR_VERSION > 1
	gdk_pixbuf_render_pixmap_and_mask ((GdkPixbuf*) arg1, (GdkPixmap**) arg2, (GdkBitmap**) arg3, (int) arg4);
#endif
	;
}
#define INLINE_F24_261
#endif
#ifndef INLINE_F24_262
static EIF_POINTER inline_F24_262 (EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	#if GTK_MAJOR_VERSION > 1
	return gdk_pixbuf_new ((GdkColorspace) arg1, (gboolean) arg2, (int) arg3, (int) arg4, (int) arg5);
#endif
	;
}
#define INLINE_F24_262
#endif
#ifndef INLINE_F24_307
static EIF_INTEGER_32 inline_F24_307 (void)
{
	return (EIF_INTEGER_32) (GTK_JUSTIFY_CENTER)
	;
}
#define INLINE_F24_307
#endif
#ifndef INLINE_F24_562
static void inline_F24_562 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	gtk_menu_shell_cancel((GtkMenuShell*)arg1);
#endif
	;
}
#define INLINE_F24_562
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GTK}.null_pointer */
EIF_POINTER F24_239 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) NULL;
	return Result;
}

/* {GTK}.g_module_supported */
EIF_BOOLEAN F24_240 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(g_module_supported());
	
	return Result;
}

/* {GTK}.g_module_symbol */
EIF_BOOLEAN F24_241 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(g_module_symbol((GModule*) arg1, (gchar*) arg2, (gpointer*) arg3));
	
	return Result;
}

/* {GTK}.g_module_open */
EIF_POINTER F24_242 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_module_open((gchar*) arg1, (GModuleFlags) arg2);
	
	return Result;
}

/* {GTK}.gtk_settings_get_default */
EIF_POINTER F24_244 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F24_244 ();
	return Result;
}

/* {GTK}.gtk_settings_set_string_property */
void F24_245 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F24_245 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
}

/* {GTK}.gtk_window_set_skip_taskbar_hint */
void F24_247 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F24_247 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {GTK}.gdk_pixbuf_get_pixels */
EIF_POINTER F24_250 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F24_250 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_copy */
EIF_POINTER F24_251 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F24_251 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_get_width */
EIF_INTEGER_32 F24_252 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F24_252 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_get_height */
EIF_INTEGER_32 F24_253 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F24_253 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_get_rowstride */
EIF_NATURAL_32 F24_254 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F24_254 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_get_n_channels */
EIF_NATURAL_32 F24_255 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F24_255 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_get_bits_per_sample */
EIF_NATURAL_32 F24_256 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F24_256 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_new_from_xpm_data */
EIF_POINTER F24_259 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F24_259 ((EIF_POINTER) arg1);
	return Result;
}

/* {GTK}.gdk_pixbuf_render_pixmap_and_mask */
void F24_261 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2, EIF_POINTER* arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	inline_F24_261 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2, (EIF_POINTER*) arg3, (EIF_INTEGER_32) arg4);
}

/* {GTK}.gdk_pixbuf_new */
EIF_POINTER F24_262 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F24_262 ((EIF_INTEGER_32) arg1, (EIF_BOOLEAN) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5);
	return Result;
}

/* {GTK}.gtk_fixed_child_struct_x */
EIF_INTEGER_32 F24_265 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkFixedChild *)arg1)->x);
	
	return Result;
}

/* {GTK}.gtk_fixed_child_struct_y */
EIF_INTEGER_32 F24_266 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkFixedChild *)arg1)->y);
	
	return Result;
}

/* {GTK}.gtk_maj_ver */
EIF_INTEGER_32 F24_270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) gtk_major_version;
	return Result;
}

/* {GTK}.gtk_min_ver */
EIF_INTEGER_32 F24_271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) gtk_minor_version;
	return Result;
}

/* {GTK}.gtk_widget_set_flags */
void F24_273 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	GTK_WIDGET_SET_FLAGS((arg1), (arg2));
}

/* {GTK}.gtk_widget_flags */
EIF_INTEGER_32 F24_274 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_WIDGET_FLAGS((arg1));
	return Result;
}

/* {GTK}.gtk_widget_unset_flags */
void F24_275 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	GTK_WIDGET_UNSET_FLAGS((arg1), (arg2));
}

/* {GTK}.gtk_widget_is_sensitive */
EIF_BOOLEAN F24_276 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_IS_SENSITIVE((arg1)));
	return Result;
}

/* {GTK}.gtk_widget_no_window */
EIF_BOOLEAN F24_277 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_WIDGET_NO_WINDOW((arg1)));
	return Result;
}

/* {GTK}.c_gdk_color_struct_size */
EIF_INTEGER_32 F24_278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(GdkColor);
	return Result;
}

/* {GTK}.c_gtk_requisition_struct_size */
EIF_INTEGER_32 F24_280 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(GtkRequisition);
	return Result;
}

/* {GTK}.c_gtk_allocation_struct_size */
EIF_INTEGER_32 F24_281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(GtkAllocation);
	return Result;
}

/* {GTK}.gtk_is_container */
EIF_BOOLEAN F24_282 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_IS_CONTAINER((arg1)));
	return Result;
}

/* {GTK}.gtk_is_window */
EIF_BOOLEAN F24_283 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((arg1)));
	return Result;
}

/* {GTK}.gtk_is_menu */
EIF_BOOLEAN F24_284 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_IS_MENU((arg1)));
	return Result;
}

/* {GTK}.gdk_control_mask_enum */
EIF_NATURAL_32 F24_285 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_CONTROL_MASK;
	return Result;
}

/* {GTK}.gdk_mod1_mask_enum */
EIF_NATURAL_32 F24_286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_MOD1_MASK;
	return Result;
}

/* {GTK}.gdk_shift_mask_enum */
EIF_NATURAL_32 F24_287 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_SHIFT_MASK;
	return Result;
}

/* {GTK}.gdk_button_press_enum */
EIF_INTEGER_32 F24_289 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_BUTTON_PRESS;
	return Result;
}

/* {GTK}.gdk_2button_press_enum */
EIF_INTEGER_32 F24_290 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_2BUTTON_PRESS;
	return Result;
}

/* {GTK}.gdk_3button_press_enum */
EIF_INTEGER_32 F24_291 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_3BUTTON_PRESS;
	return Result;
}

/* {GTK}.gdk_button_release_enum */
EIF_INTEGER_32 F24_292 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_BUTTON_RELEASE;
	return Result;
}

/* {GTK}.gtk_state_normal_enum */
EIF_INTEGER_32 F24_293 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	return Result;
}

/* {GTK}.gtk_state_prelight_enum */
EIF_INTEGER_32 F24_295 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_STATE_PRELIGHT;
	return Result;
}

/* {GTK}.gtk_state_selected_enum */
EIF_INTEGER_32 F24_297 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_STATE_SELECTED;
	return Result;
}

/* {GTK}.gtk_state_active_enum */
EIF_INTEGER_32 F24_299 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_STATE_ACTIVE;
	return Result;
}

/* {GTK}.gtk_state_insensitive_enum */
EIF_INTEGER_32 F24_301 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_STATE_INSENSITIVE;
	return Result;
}

/* {GTK}.gtk_sensitive_enum */
EIF_INTEGER_32 F24_303 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SENSITIVE;
	return Result;
}

/* {GTK}.gtk_mapped_enum */
EIF_INTEGER_32 F24_304 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_MAPPED;
	return Result;
}

/* {GTK}.gdk_invert_enum */
EIF_INTEGER_32 F24_305 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_INVERT;
	return Result;
}

/* {GTK}.gdk_include_inferiors_enum */
EIF_INTEGER_32 F24_306 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_INCLUDE_INFERIORS;
	return Result;
}

/* {GTK}.gtk_justify_center_enum */
EIF_INTEGER_32 F24_307 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F24_307 ();
	return Result;
}

/* {GTK}.gtk_justify_left_enum */
EIF_INTEGER_32 F24_308 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_JUSTIFY_LEFT;
	return Result;
}

/* {GTK}.gtk_justify_right_enum */
EIF_INTEGER_32 F24_309 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_JUSTIFY_RIGHT;
	return Result;
}

/* {GTK}.gtk_shadow_none_enum */
EIF_INTEGER_32 F24_311 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SHADOW_NONE;
	return Result;
}

/* {GTK}.gtk_shadow_etched_in_enum */
EIF_INTEGER_32 F24_312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SHADOW_ETCHED_IN;
	return Result;
}

/* {GTK}.gtk_shadow_etched_out_enum */
EIF_INTEGER_32 F24_313 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SHADOW_ETCHED_OUT;
	return Result;
}

/* {GTK}.gtk_shadow_in_enum */
EIF_INTEGER_32 F24_314 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SHADOW_IN;
	return Result;
}

/* {GTK}.gtk_shadow_out_enum */
EIF_INTEGER_32 F24_315 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SHADOW_OUT;
	return Result;
}

/* {GTK}.gdk_exposure_mask_enum */
EIF_INTEGER_32 F24_316 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_EXPOSURE_MASK;
	return Result;
}

/* {GTK}.gdk_pointer_motion_mask_enum */
EIF_INTEGER_32 F24_317 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_POINTER_MOTION_MASK;
	return Result;
}

/* {GTK}.gdk_pointer_motion_hint_mask_enum */
EIF_INTEGER_32 F24_318 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_POINTER_MOTION_HINT_MASK;
	return Result;
}

/* {GTK}.gdk_button_press_mask_enum */
EIF_INTEGER_32 F24_322 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_BUTTON_PRESS_MASK;
	return Result;
}

/* {GTK}.gdk_button_release_mask_enum */
EIF_INTEGER_32 F24_323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_BUTTON_RELEASE_MASK;
	return Result;
}

/* {GTK}.gdk_key_press_enum */
EIF_INTEGER_32 F24_325 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_KEY_PRESS;
	return Result;
}

/* {GTK}.gdk_key_press_mask_enum */
EIF_INTEGER_32 F24_327 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_KEY_PRESS_MASK;
	return Result;
}

/* {GTK}.gdk_key_release_mask_enum */
EIF_INTEGER_32 F24_328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_KEY_RELEASE_MASK;
	return Result;
}

/* {GTK}.gdk_enter_notify_mask_enum */
EIF_INTEGER_32 F24_329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_ENTER_NOTIFY_MASK;
	return Result;
}

/* {GTK}.gdk_leave_notify_mask_enum */
EIF_INTEGER_32 F24_330 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_LEAVE_NOTIFY_MASK;
	return Result;
}

/* {GTK}.gdk_focus_change_mask_enum */
EIF_INTEGER_32 F24_331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_FOCUS_CHANGE_MASK;
	return Result;
}

/* {GTK}.gdk_visibility_notify_mask_enum */
EIF_INTEGER_32 F24_332 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_VISIBILITY_NOTIFY_MASK;
	return Result;
}

/* {GTK}.gtk_has_focus_enum */
EIF_INTEGER_32 F24_333 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_HAS_FOCUS;
	return Result;
}

/* {GTK}.gtk_visible_enum */
EIF_INTEGER_32 F24_335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_VISIBLE;
	return Result;
}

/* {GTK}.gtk_window_toplevel_enum */
EIF_INTEGER_32 F24_336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_WINDOW_TOPLEVEL;
	return Result;
}

/* {GTK}.gdk_decor_all_enum */
EIF_INTEGER_32 F24_337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_DECOR_ALL;
	return Result;
}

/* {GTK}.gdk_decor_border_enum */
EIF_INTEGER_32 F24_338 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_DECOR_BORDER;
	return Result;
}

/* {GTK}.gdk_hint_max_size_enum */
EIF_INTEGER_32 F24_339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_HINT_MAX_SIZE;
	return Result;
}

/* {GTK}.gdk_hint_min_size_enum */
EIF_INTEGER_32 F24_340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_HINT_MIN_SIZE;
	return Result;
}

/* {GTK}.gtk_win_pos_center_enum */
EIF_INTEGER_32 F24_341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_WIN_POS_CENTER;
	return Result;
}

/* {GTK}.gtk_win_pos_none_enum */
EIF_INTEGER_32 F24_342 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_WIN_POS_NONE;
	return Result;
}

/* {GTK}.gdk_func_close_enum */
EIF_INTEGER_32 F24_343 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_FUNC_CLOSE;
	return Result;
}

/* {GTK}.gdk_func_move_enum */
EIF_INTEGER_32 F24_344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_FUNC_MOVE;
	return Result;
}

/* {GTK}.gdk_func_resize_enum */
EIF_INTEGER_32 F24_345 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_FUNC_RESIZE;
	return Result;
}

/* {GTK}.gtk_can_focus_enum */
EIF_INTEGER_32 F24_349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	return Result;
}

/* {GTK}.gtk_policy_automatic_enum */
EIF_INTEGER_32 F24_350 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_POLICY_AUTOMATIC;
	return Result;
}

/* {GTK}.gtk_policy_always_enum */
EIF_INTEGER_32 F24_351 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_POLICY_ALWAYS;
	return Result;
}

/* {GTK}.gtk_policy_never_enum */
EIF_INTEGER_32 F24_352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_POLICY_NEVER;
	return Result;
}

/* {GTK}.gtk_selection_browse_enum */
EIF_INTEGER_32 F24_354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SELECTION_BROWSE;
	return Result;
}

/* {GTK}.gtk_selection_single_enum */
EIF_INTEGER_32 F24_355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GTK_SELECTION_SINGLE;
	return Result;
}

/* {GTK}.gdk_copy_enum */
EIF_INTEGER_32 F24_358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_COPY;
	return Result;
}

/* {GTK}.gdk_xor_enum */
EIF_INTEGER_32 F24_360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_XOR;
	return Result;
}

/* {GTK}.gdk_and_enum */
EIF_INTEGER_32 F24_361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_AND;
	return Result;
}

/* {GTK}.gdk_or_enum */
EIF_INTEGER_32 F24_362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_OR;
	return Result;
}

/* {GTK}.gdk_line_on_off_dash_enum */
EIF_INTEGER_32 F24_363 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_LINE_ON_OFF_DASH;
	return Result;
}

/* {GTK}.gdk_line_solid_enum */
EIF_INTEGER_32 F24_364 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_LINE_SOLID;
	return Result;
}

/* {GTK}.gdk_cap_round_enum */
EIF_INTEGER_32 F24_367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_CAP_ROUND;
	return Result;
}

/* {GTK}.gdk_join_bevel_enum */
EIF_INTEGER_32 F24_368 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GDK_JOIN_BEVEL;
	return Result;
}

/* {GTK}.g_free */
void F24_369 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	g_free((gpointer) arg1);
	
}

/* {GTK}.g_list_append */
EIF_POINTER F24_370 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_list_append((GList*) arg1, (gpointer) arg2);
	
	return Result;
}

/* {GTK}.g_list_free */
void F24_371 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	g_list_free((GList*) arg1);
	
}

/* {GTK}.g_list_index */
EIF_INTEGER_32 F24_372 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) g_list_index((GList*) arg1, (gpointer) arg2);
	
	return Result;
}

/* {GTK}.g_list_insert */
EIF_POINTER F24_373 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_list_insert((GList*) arg1, (gpointer) arg2, (gint) arg3);
	
	return Result;
}

/* {GTK}.g_list_length */
EIF_INTEGER_32 F24_374 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) g_list_length((GList*) arg1);
	
	return Result;
}

/* {GTK}.g_list_nth_data */
EIF_POINTER F24_376 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_list_nth_data((GList*) arg1, (guint) arg2);
	
	return Result;
}

/* {GTK}.g_list_remove */
EIF_POINTER F24_377 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_list_remove((GList*) arg1, (gpointer) arg2);
	
	return Result;
}

/* {GTK}.g_malloc */
EIF_POINTER F24_378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_malloc((gulong) arg1);
	
	return Result;
}

/* {GTK}.g_realloc */
EIF_POINTER F24_379 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_realloc((gpointer) arg1, (gulong) arg2);
	
	return Result;
}

/* {GTK}.g_slist_index */
EIF_INTEGER_32 F24_381 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) g_slist_index((GSList*) arg1, (gpointer) arg2);
	
	return Result;
}

/* {GTK}.g_slist_length */
EIF_INTEGER_32 F24_382 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) g_slist_length((GSList*) arg1);
	
	return Result;
}

/* {GTK}.g_slist_nth_data */
EIF_POINTER F24_383 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) g_slist_nth_data((GSList*) arg1, (guint) arg2);
	
	return Result;
}

/* {GTK}.gdk_bitmap_unref */
void F24_385 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_bitmap_unref((GdkBitmap*) arg1);
	
}

/* {GTK}.gdk_atom_intern */
EIF_POINTER F24_386 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_atom_intern((gchar*) arg1, (gint) arg2);
	
	return Result;
}

/* {GTK}.gdk_atom_name */
EIF_POINTER F24_387 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_atom_name((GdkAtom) arg1);
	
	return Result;
}

/* {GTK}.gdk_colormap_alloc_color */
EIF_BOOLEAN F24_388 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gdk_colormap_alloc_color((GdkColormap*) arg1, (GdkColor*) arg2, (gboolean) arg3, (gboolean) arg4));
	
	return Result;
}

/* {GTK}.gdk_cursor_new */
EIF_POINTER F24_390 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_cursor_new((GdkCursorType) arg1);
	
	return Result;
}

/* {GTK}.gdk_selection_property_get */
EIF_INTEGER_32 F24_391 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_selection_property_get((GdkWindow*) arg1, (guchar**) arg2, (GdkAtom*) arg3, (gint*) arg4);
	
	return Result;
}

/* {GTK}.gdk_drag_get_selection */
EIF_POINTER F24_392 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_drag_get_selection((GdkDragContext*) arg1);
	
	return Result;
}

/* {GTK}.gdk_drag_context_struct_source_window */
EIF_POINTER F24_393 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkDragContext *)arg1)->source_window);
	
	return Result;
}

/* {GTK}.gdk_drag_context_struct_dest_window */
EIF_POINTER F24_394 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkDragContext *)arg1)->dest_window);
	
	return Result;
}

/* {GTK}.gdk_drag_context_struct_targets */
EIF_POINTER F24_395 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkDragContext *)arg1)->targets);
	
	return Result;
}

/* {GTK}.gdk_selection_convert */
void F24_396 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	
	gdk_selection_convert((GdkWindow*) arg1, (GdkAtom) arg2, (GdkAtom) arg3, (guint32) arg4);
	
}

/* {GTK}.gdk_draw_line */
void F24_401 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	
	gdk_draw_line((GdkDrawable*) arg1, (GdkGC*) arg2, (gint) arg3, (gint) arg4, (gint) arg5, (gint) arg6);
	
}

/* {GTK}.gdk_draw_point */
void F24_404 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	gdk_draw_point((GdkDrawable*) arg1, (GdkGC*) arg2, (gint) arg3, (gint) arg4);
	
}

/* {GTK}.gdk_draw_rectangle */
void F24_407 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	
	gdk_draw_rectangle((GdkDrawable*) arg1, (GdkGC*) arg2, (gint) arg3, (gint) arg4, (gint) arg5, (gint) arg6, (gint) arg7);
	
}

/* {GTK}.gdk_drop_finish */
void F24_415 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	
	gdk_drop_finish((GdkDragContext*) arg1, (gboolean) arg2, (guint32) arg3);
	
}

/* {GTK}.gdk_error_trap_push */
void F24_417 (EIF_REFERENCE Current)
{
	GTCX
	
	gdk_error_trap_push();
	
}

/* {GTK}.gdk_event_free */
void F24_418 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_event_free((GdkEvent*) arg1);
	
}

/* {GTK}.gdk_event_get */
EIF_POINTER F24_419 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_event_get();
	
	return Result;
}

/* {GTK}.gdk_flush */
void F24_421 (EIF_REFERENCE Current)
{
	GTCX
	
	gdk_flush();
	
}

/* {GTK}.gdk_gc_get_values */
void F24_424 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_get_values((GdkGC*) arg1, (GdkGCValues*) arg2);
	
}

/* {GTK}.gdk_gc_new */
EIF_POINTER F24_425 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_gc_new((GdkWindow*) arg1);
	
	return Result;
}

/* {GTK}.gdk_gc_set_background */
void F24_428 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_set_background((GdkGC*) arg1, (GdkColor*) arg2);
	
}

/* {GTK}.gdk_gc_set_clip_mask */
void F24_429 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_set_clip_mask((GdkGC*) arg1, (GdkBitmap*) arg2);
	
}

/* {GTK}.gdk_gc_set_clip_origin */
void F24_430 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gdk_gc_set_clip_origin((GdkGC*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gdk_gc_set_foreground */
void F24_437 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_gc_set_foreground((GdkGC*) arg1, (GdkColor*) arg2);
	
}

/* {GTK}.gdk_gc_set_function */
void F24_438 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gdk_gc_set_function((GdkGC*) arg1, (GdkFunction) arg2);
	
}

/* {GTK}.gdk_gc_set_line_attributes */
void F24_439 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	gdk_gc_set_line_attributes((GdkGC*) arg1, (gint) arg2, (GdkLineStyle) arg3, (GdkCapStyle) arg4, (GdkJoinStyle) arg5);
	
}

/* {GTK}.gdk_gc_set_subwindow */
void F24_441 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gdk_gc_set_subwindow((GdkGC*) arg1, (GdkSubwindowMode) arg2);
	
}

/* {GTK}.gdk_gc_unref */
void F24_444 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_gc_unref((GdkGC*) arg1);
	
}

/* {GTK}.gdk_image_new */
EIF_POINTER F24_448 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_image_new((GdkImageType) arg1, (GdkVisual*) arg2, (gint) arg3, (gint) arg4);
	
	return Result;
}

/* {GTK}.gdk_keyboard_grab */
EIF_INTEGER_32 F24_449 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_keyboard_grab((GdkWindow*) arg1, (gboolean) arg2, (guint32) arg3);
	
	return Result;
}

/* {GTK}.gdk_keyboard_ungrab */
void F24_450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	gdk_keyboard_ungrab((guint32) arg1);
	
}

/* {GTK}.gdk_pixmap_create_from_xpm_d */
EIF_POINTER F24_457 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_pixmap_create_from_xpm_d((GdkWindow*) arg1, (GdkBitmap**) arg2, (GdkColor*) arg3, (gchar**) arg4);
	
	return Result;
}

/* {GTK}.gdk_pixmap_new */
EIF_POINTER F24_458 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_pixmap_new((GdkWindow*) arg1, (gint) arg2, (gint) arg3, (gint) arg4);
	
	return Result;
}

/* {GTK}.gdk_pixmap_ref */
EIF_POINTER F24_459 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_pixmap_ref((GdkPixmap*) arg1);
	
	return Result;
}

/* {GTK}.gdk_pixmap_unref */
void F24_460 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_pixmap_unref((GdkPixmap*) arg1);
	
}

/* {GTK}.gdk_pointer_grab */
EIF_INTEGER_32 F24_461 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_pointer_grab((GdkWindow*) arg1, (gint) arg2, (GdkEventMask) arg3, (GdkWindow*) arg4, (GdkCursor*) arg5, (guint32) arg6);
	
	return Result;
}

/* {GTK}.gdk_pointer_ungrab */
void F24_462 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	gdk_pointer_ungrab((guint32) arg1);
	
}

/* {GTK}.gdk_region_destroy */
void F24_463 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_region_destroy((GdkRegion*) arg1);
	
}

/* {GTK}.gdk_region_equal */
EIF_BOOLEAN F24_464 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gdk_region_equal((GdkRegion*) arg1, (GdkRegion*) arg2));
	
	return Result;
}

/* {GTK}.gdk_region_new */
EIF_POINTER F24_466 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_region_new();
	
	return Result;
}

/* {GTK}.gdk_screen_height */
EIF_INTEGER_32 F24_470 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_screen_height();
	
	return Result;
}

/* {GTK}.gdk_screen_width */
EIF_INTEGER_32 F24_471 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_screen_width();
	
	return Result;
}

/* {GTK}.gdk_set_show_events */
void F24_472 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	gdk_set_show_events((gboolean) arg1);
	
}

/* {GTK}.gdk_window_at_pointer */
EIF_POINTER F24_473 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_window_at_pointer((gint*) arg1, (gint*) arg2);
	
	return Result;
}

/* {GTK}.gdk_window_get_origin */
EIF_INTEGER_32 F24_474 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gdk_window_get_origin((GdkWindow*) arg1, (gint*) arg2, (gint*) arg3);
	
	return Result;
}

/* {GTK}.gdk_window_get_pointer */
EIF_POINTER F24_475 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gdk_window_get_pointer((GdkWindow*) arg1, (gint*) arg2, (gint*) arg3, (GdkModifierType*) arg4);
	
	return Result;
}

/* {GTK}.gdk_window_get_size */
void F24_476 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gdk_window_get_size((GdkWindow*) arg1, (gint*) arg2, (gint*) arg3);
	
}

/* {GTK}.gdk_window_get_user_data */
void F24_477 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_window_get_user_data((GdkWindow*) arg1, (gpointer*) arg2);
	
}

/* {GTK}.gdk_window_hide */
void F24_478 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_window_hide((GdkWindow*) arg1);
	
}

/* {GTK}.gdk_window_move */
void F24_480 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gdk_window_move((GdkWindow*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gdk_window_raise */
void F24_482 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gdk_window_raise((GdkWindow*) arg1);
	
}

/* {GTK}.gdk_window_set_cursor */
void F24_483 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gdk_window_set_cursor((GdkWindow*) arg1, (GdkCursor*) arg2);
	
}

/* {GTK}.gdk_window_set_decorations */
void F24_484 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gdk_window_set_decorations((GdkWindow*) arg1, (GdkWMDecoration) arg2);
	
}

/* {GTK}.gdk_window_set_functions */
void F24_486 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gdk_window_set_functions((GdkWindow*) arg1, (GdkWMFunction) arg2);
	
}

/* {GTK}.gdk_window_set_icon */
void F24_488 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	gdk_window_set_icon((GdkWindow*) arg1, (GdkWindow*) arg2, (GdkPixmap*) arg3, (GdkBitmap*) arg4);
	
}

/* {GTK}.gdk_window_set_override_redirect */
void F24_490 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gdk_window_set_override_redirect((GdkWindow*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_adjustment_changed */
void F24_493 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_adjustment_changed((GtkAdjustment*) arg1);
	
}

/* {GTK}.gtk_adjustment_new */
EIF_POINTER F24_494 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5, EIF_REAL_32 arg6)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_adjustment_new((gfloat) arg1, (gfloat) arg2, (gfloat) arg3, (gfloat) arg4, (gfloat) arg5, (gfloat) arg6);
	
	return Result;
}

/* {GTK}.gtk_adjustment_set_value */
void F24_495 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	gtk_adjustment_set_value((GtkAdjustment*) arg1, (gfloat) arg2);
	
}

/* {GTK}.gtk_adjustment_value_changed */
void F24_496 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_adjustment_value_changed((GtkAdjustment*) arg1);
	
}

/* {GTK}.gtk_alignment_new */
EIF_POINTER F24_497 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_alignment_new((gfloat) arg1, (gfloat) arg2, (gfloat) arg3, (gfloat) arg4);
	
	return Result;
}

/* {GTK}.gtk_alignment_set */
void F24_498 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3, EIF_REAL_32 arg4, EIF_REAL_32 arg5)
{
	GTCX
	
	gtk_alignment_set((GtkAlignment*) arg1, (gfloat) arg2, (gfloat) arg3, (gfloat) arg4, (gfloat) arg5);
	
}

/* {GTK}.gtk_box_pack_start */
void F24_500 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	gtk_box_pack_start((GtkBox*) arg1, (GtkWidget*) arg2, (gboolean) arg3, (gboolean) arg4, (guint) arg5);
	
}

/* {GTK}.gtk_box_query_child_packing */
void F24_501 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	GTCX
	
	gtk_box_query_child_packing((GtkBox*) arg1, (GtkWidget*) arg2, (gboolean*) arg3, (gboolean*) arg4, (guint*) arg5, (GtkPackType*) arg6);
	
}

/* {GTK}.gtk_box_reorder_child */
void F24_502 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_box_reorder_child((GtkBox*) arg1, (GtkWidget*) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_box_set_child_packing */
void F24_503 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	
	gtk_box_set_child_packing((GtkBox*) arg1, (GtkWidget*) arg2, (gboolean) arg3, (gboolean) arg4, (guint) arg5, (GtkPackType) arg6);
	
}

/* {GTK}.gtk_box_set_homogeneous */
void F24_504 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_box_set_homogeneous((GtkBox*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_box_set_spacing */
void F24_505 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_box_set_spacing((GtkBox*) arg1, (gint) arg2);
	
}

/* {GTK}.gtk_button_new */
EIF_POINTER F24_506 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_button_new();
	
	return Result;
}

/* {GTK}.gtk_check_menu_item_new */
EIF_POINTER F24_508 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_check_menu_item_new();
	
	return Result;
}

/* {GTK}.gtk_check_menu_item_set_active */
void F24_509 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_check_menu_item_set_active((GtkCheckMenuItem*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_check_menu_item_set_show_toggle */
void F24_510 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_check_menu_item_set_show_toggle((GtkCheckMenuItem*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_color_selection_dialog_new */
EIF_POINTER F24_511 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_color_selection_dialog_new((gchar*) arg1);
	
	return Result;
}

/* {GTK}.gtk_container_add */
void F24_512 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK}.gtk_container_check_resize */
void F24_513 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_container_check_resize((GtkContainer*) arg1);
	
}

/* {GTK}.gtk_container_children */
EIF_POINTER F24_514 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_container_children((GtkContainer*) arg1);
	
	return Result;
}

/* {GTK}.gtk_container_remove */
void F24_515 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_container_remove((GtkContainer*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK}.gtk_container_set_border_width */
void F24_516 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_container_set_border_width((GtkContainer*) arg1, (guint) arg2);
	
}

/* {GTK}.gtk_drawing_area_new */
EIF_POINTER F24_517 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_drawing_area_new();
	
	return Result;
}

/* {GTK}.gtk_editable_set_editable */
void F24_524 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_editable_set_editable((GtkEditable*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_entry_get_text */
EIF_POINTER F24_527 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_entry_get_text((GtkEntry*) arg1);
	
	return Result;
}

/* {GTK}.gtk_entry_new */
EIF_POINTER F24_528 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_entry_new();
	
	return Result;
}

/* {GTK}.gtk_entry_set_text */
void F24_530 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_entry_set_text((GtkEntry*) arg1, (gchar*) arg2);
	
}

/* {GTK}.gtk_event_box_new */
EIF_POINTER F24_532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_event_box_new();
	
	return Result;
}

/* {GTK}.gtk_is_event_box */
EIF_BOOLEAN F24_533 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GTK_IS_EVENT_BOX((arg1)));
	return Result;
}

/* {GTK}.gtk_font_selection_dialog_new */
EIF_POINTER F24_535 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_font_selection_dialog_new((gchar*) arg1);
	
	return Result;
}

/* {GTK}.gtk_frame_new */
EIF_POINTER F24_537 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_frame_new((gchar*) arg1);
	
	return Result;
}

/* {GTK}.gtk_frame_set_label */
void F24_538 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_frame_set_label((GtkFrame*) arg1, (gchar*) arg2);
	
}

/* {GTK}.gtk_frame_set_label_align */
void F24_539 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	
	gtk_frame_set_label_align((GtkFrame*) arg1, (gfloat) arg2, (gfloat) arg3);
	
}

/* {GTK}.gtk_frame_set_shadow_type */
void F24_540 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_frame_set_shadow_type((GtkFrame*) arg1, (GtkShadowType) arg2);
	
}

/* {GTK}.gtk_get_event_widget */
EIF_POINTER F24_541 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_get_event_widget((GdkEvent*) arg1);
	
	return Result;
}

/* {GTK}.gtk_grab_add */
void F24_542 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_grab_add((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_grab_get_current */
EIF_POINTER F24_543 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_grab_get_current();
	
	return Result;
}

/* {GTK}.gtk_grab_remove */
void F24_544 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_grab_remove((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_hbox_new */
EIF_POINTER F24_545 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_hbox_new((gboolean) arg1, (gint) arg2);
	
	return Result;
}

/* {GTK}.gtk_label_new */
EIF_POINTER F24_550 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_label_new((gchar*) arg1);
	
	return Result;
}

/* {GTK}.gtk_label_set_justify */
void F24_551 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_label_set_justify((GtkLabel*) arg1, (GtkJustification) arg2);
	
}

/* {GTK}.gtk_label_set_text */
void F24_552 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_label_set_text((GtkLabel*) arg1, (gchar*) arg2);
	
}

/* {GTK}.gtk_main_do_event */
void F24_553 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_main_do_event((GdkEvent*) arg1);
	
}

/* {GTK}.gtk_menu_bar_new */
EIF_POINTER F24_554 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_menu_bar_new();
	
	return Result;
}

/* {GTK}.gtk_menu_item_deselect */
void F24_556 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_menu_item_deselect((GtkMenuItem*) arg1);
	
}

/* {GTK}.gtk_menu_item_new */
EIF_POINTER F24_557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_menu_item_new();
	
	return Result;
}

/* {GTK}.gtk_menu_item_set_submenu */
void F24_559 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_menu_item_set_submenu((GtkMenuItem*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK}.gtk_menu_new */
EIF_POINTER F24_560 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_menu_new();
	
	return Result;
}

/* {GTK}.gtk_menu_shell_cancel */
void F24_562 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F24_562 ((EIF_POINTER) arg1);
}

/* {GTK}.gtk_menu_shell_deactivate */
void F24_563 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_menu_shell_deactivate((GtkMenuShell*) arg1);
	
}

/* {GTK}.gtk_menu_shell_insert */
void F24_565 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_menu_shell_insert((GtkMenuShell*) arg1, (GtkWidget*) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_misc_set_alignment */
void F24_566 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	
	gtk_misc_set_alignment((GtkMisc*) arg1, (gfloat) arg2, (gfloat) arg3);
	
}

/* {GTK}.gtk_misc_set_padding */
void F24_567 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_misc_set_padding((GtkMisc*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_notebook_get_current_page */
EIF_INTEGER_32 F24_568 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gtk_notebook_get_current_page((GtkNotebook*) arg1);
	
	return Result;
}

/* {GTK}.gtk_notebook_get_tab_label */
EIF_POINTER F24_570 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) arg1, (GtkWidget*) arg2);
	
	return Result;
}

/* {GTK}.gtk_notebook_new */
EIF_POINTER F24_571 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_notebook_new();
	
	return Result;
}

/* {GTK}.gtk_notebook_page_num */
EIF_INTEGER_32 F24_572 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) gtk_notebook_page_num((GtkNotebook*) arg1, (GtkWidget*) arg2);
	
	return Result;
}

/* {GTK}.gtk_notebook_reorder_child */
void F24_573 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_notebook_reorder_child((GtkNotebook*) arg1, (GtkWidget*) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_notebook_set_page */
void F24_574 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_notebook_set_page((GtkNotebook*) arg1, (gint) arg2);
	
}

/* {GTK}.gtk_notebook_set_scrollable */
void F24_575 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_notebook_set_scrollable((GtkNotebook*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_notebook_set_show_border */
void F24_576 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_notebook_set_show_border((GtkNotebook*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_notebook_set_tab_label */
void F24_577 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_notebook_set_tab_label((GtkNotebook*) arg1, (GtkWidget*) arg2, (GtkWidget*) arg3);
	
}

/* {GTK}.gtk_object_get_data */
EIF_POINTER F24_579 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_object_get_data((GtkObject*) arg1, (gchar*) arg2);
	
	return Result;
}

/* {GTK}.gtk_object_sink */
void F24_580 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_object_sink((GtkObject*) arg1);
	
}

/* {GTK}.gtk_pixmap_new */
EIF_POINTER F24_584 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_pixmap_new((GdkPixmap*) arg1, (GdkBitmap*) arg2);
	
	return Result;
}

/* {GTK}.gtk_propagate_event */
void F24_588 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_propagate_event((GtkWidget*) arg1, (GdkEvent*) arg2);
	
}

/* {GTK}.gtk_radio_button_group */
EIF_POINTER F24_589 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_button_group((GtkRadioButton*) arg1);
	
	return Result;
}

/* {GTK}.gtk_radio_button_new */
EIF_POINTER F24_590 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_button_new((GSList*) arg1);
	
	return Result;
}

/* {GTK}.gtk_radio_button_set_group */
void F24_591 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_radio_button_set_group((GtkRadioButton*) arg1, (GSList*) arg2);
	
}

/* {GTK}.gtk_radio_menu_item_group */
EIF_POINTER F24_592 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_menu_item_group((GtkRadioMenuItem*) arg1);
	
	return Result;
}

/* {GTK}.gtk_radio_menu_item_new */
EIF_POINTER F24_593 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_radio_menu_item_new((GSList*) arg1);
	
	return Result;
}

/* {GTK}.gtk_radio_menu_item_set_group */
void F24_595 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_radio_menu_item_set_group((GtkRadioMenuItem*) arg1, (GSList*) arg2);
	
}

/* {GTK}.gtk_rc_get_style */
EIF_POINTER F24_596 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) arg1);
	
	return Result;
}

/* {GTK}.gtk_scrolled_window_get_hadjustment */
EIF_POINTER F24_600 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_scrolled_window_get_hadjustment((GtkScrolledWindow*) arg1);
	
	return Result;
}

/* {GTK}.gtk_scrolled_window_get_vadjustment */
EIF_POINTER F24_601 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_scrolled_window_get_vadjustment((GtkScrolledWindow*) arg1);
	
	return Result;
}

/* {GTK}.gtk_scrolled_window_new */
EIF_POINTER F24_602 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_scrolled_window_new((GtkAdjustment*) arg1, (GtkAdjustment*) arg2);
	
	return Result;
}

/* {GTK}.gtk_scrolled_window_set_policy */
void F24_603 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_scrolled_window_set_policy((GtkScrolledWindow*) arg1, (GtkPolicyType) arg2, (GtkPolicyType) arg3);
	
}

/* {GTK}.gtk_set_locale */
EIF_POINTER F24_604 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_set_locale();
	
	return Result;
}

/* {GTK}.gtk_style_copy */
EIF_POINTER F24_607 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_style_copy((GtkStyle*) arg1);
	
	return Result;
}

/* {GTK}.gtk_style_unref */
void F24_608 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_style_unref((GtkStyle*) arg1);
	
}

/* {GTK}.gtk_timeout_remove */
void F24_616 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	gtk_timeout_remove((guint) arg1);
	
}

/* {GTK}.gtk_toggle_button_get_active */
EIF_BOOLEAN F24_617 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_toggle_button_get_active((GtkToggleButton*) arg1));
	
	return Result;
}

/* {GTK}.gtk_toggle_button_set_active */
void F24_619 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_toggle_button_set_active((GtkToggleButton*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_tooltips_new */
EIF_POINTER F24_622 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_tooltips_new();
	
	return Result;
}

/* {GTK}.gtk_tooltips_set_delay */
void F24_623 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_tooltips_set_delay((GtkTooltips*) arg1, (guint) arg2);
	
}

/* {GTK}.gtk_vbox_new */
EIF_POINTER F24_625 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_vbox_new((gboolean) arg1, (gint) arg2);
	
	return Result;
}

/* {GTK}.gtk_viewport_get_hadjustment */
EIF_POINTER F24_626 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_viewport_get_hadjustment((GtkViewport*) arg1);
	
	return Result;
}

/* {GTK}.gtk_viewport_get_vadjustment */
EIF_POINTER F24_627 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_viewport_get_vadjustment((GtkViewport*) arg1);
	
	return Result;
}

/* {GTK}.gtk_viewport_new */
EIF_POINTER F24_628 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_viewport_new((GtkAdjustment*) arg1, (GtkAdjustment*) arg2);
	
	return Result;
}

/* {GTK}.gtk_viewport_set_shadow_type */
void F24_629 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_viewport_set_shadow_type((GtkViewport*) arg1, (GtkShadowType) arg2);
	
}

/* {GTK}.gtk_widget_add_events */
void F24_634 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_widget_add_events((GtkWidget*) arg1, (gint) arg2);
	
}

/* {GTK}.gtk_widget_destroy */
void F24_635 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_destroy((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_event */
EIF_BOOLEAN F24_636 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_widget_event((GtkWidget*) arg1, (GdkEvent*) arg2));
	
	return Result;
}

/* {GTK}.gtk_widget_get_toplevel */
EIF_POINTER F24_637 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_widget_get_toplevel((GtkWidget*) arg1);
	
	return Result;
}

/* {GTK}.gtk_widget_hide */
void F24_640 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_hide((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_queue_draw */
void F24_641 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_queue_draw((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_queue_resize */
void F24_643 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_queue_resize((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_realize */
void F24_644 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_realize((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_set_default_colormap */
void F24_645 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_set_default_colormap((GdkColormap*) arg1);
	
}

/* {GTK}.gtk_widget_set_name */
void F24_646 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_widget_set_name((GtkWidget*) arg1, (gchar*) arg2);
	
}

/* {GTK}.gtk_widget_set_sensitive */
void F24_647 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_widget_set_sensitive((GtkWidget*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gtk_widget_set_style */
void F24_648 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_widget_set_style((GtkWidget*) arg1, (GtkStyle*) arg2);
	
}

/* {GTK}.gtk_widget_set_uposition */
void F24_649 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_widget_set_uposition((GtkWidget*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_widget_set_usize */
void F24_650 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_widget_set_usize((GtkWidget*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_widget_show */
void F24_651 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	gtk_widget_show((GtkWidget*) arg1);
	
}

/* {GTK}.gtk_widget_size_request */
void F24_654 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_widget_size_request((GtkWidget*) arg1, (GtkRequisition*) arg2);
	
}

/* {GTK}.gtk_window_new */
EIF_POINTER F24_655 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) gtk_window_new((GtkWindowType) arg1);
	
	return Result;
}

/* {GTK}.gtk_window_set_default_size */
void F24_656 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	gtk_window_set_default_size((GtkWindow*) arg1, (gint) arg2, (gint) arg3);
	
}

/* {GTK}.gtk_window_get_default_size */
void F24_658 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	gtk_window_get_default_size((GtkWindow*) arg1, (EIF_INTEGER_32*) arg2, (EIF_INTEGER_32*) arg3);
	
}

/* {GTK}.gtk_window_set_focus */
void F24_659 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_window_set_focus((GtkWindow*) arg1, (GtkWidget*) arg2);
	
}

/* {GTK}.gtk_window_set_geometry_hints */
void F24_660 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	gtk_window_set_geometry_hints((GtkWindow*) arg1, (GtkWidget*) arg2, (GdkGeometry*) arg3, (GdkWindowHints) arg4);
	
}

/* {GTK}.gtk_window_set_position */
void F24_662 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	gtk_window_set_position((GtkWindow*) arg1, (GtkWindowPosition) arg2);
	
}

/* {GTK}.gtk_window_set_title */
void F24_663 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_window_set_title((GtkWindow*) arg1, (gchar*) arg2);
	
}

/* {GTK}.gtk_window_set_transient_for */
void F24_664 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	gtk_window_set_transient_for((GtkWindow*) arg1, (GtkWindow*) arg2);
	
}

/* {GTK}.gtk_window_set_accept_focus */
void F24_665 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	gtk_window_set_accept_focus((GtkWindow*) arg1, (gboolean) arg2);
	
}

/* {GTK}.gdk_color_struct_blue */
EIF_INTEGER_32 F24_666 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkColor *)arg1)->blue);
	
	return Result;
}

/* {GTK}.gdk_color_struct_green */
EIF_INTEGER_32 F24_667 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkColor *)arg1)->green);
	
	return Result;
}

/* {GTK}.gdk_color_struct_red */
EIF_INTEGER_32 F24_669 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkColor *)arg1)->red);
	
	return Result;
}

/* {GTK}.gdk_event_focus_struct_in */
EIF_INTEGER_8 F24_670 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	Result = (EIF_INTEGER_8) (((GdkEventFocus *)arg1)->in);
	
	return Result;
}

/* {GTK}.gdk_event_any_struct_send_event */
EIF_INTEGER_8 F24_671 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	Result = (EIF_INTEGER_8) (((GdkEventAny *)arg1)->send_event);
	
	return Result;
}

/* {GTK}.gdk_event_any_struct_window */
EIF_POINTER F24_672 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkEventAny *)arg1)->window);
	
	return Result;
}

/* {GTK}.gdk_event_any_struct_type */
EIF_INTEGER_8 F24_673 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	
	Result = (EIF_INTEGER_8) (((GdkEventAny *)arg1)->type);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_button */
EIF_INTEGER_32 F24_674 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->button);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_window */
EIF_POINTER F24_675 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkEventButton *)arg1)->window);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_state */
EIF_NATURAL_32 F24_676 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((GdkEventButton *)arg1)->state);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_type */
EIF_INTEGER_32 F24_677 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventButton *)arg1)->type);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_x */
EIF_REAL_64 F24_678 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventButton *)arg1)->x);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_x_root */
EIF_REAL_64 F24_679 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventButton *)arg1)->x_root);
	
	return Result;
}

/* {GTK}.gdk_event_scroll_struct_x_root */
EIF_REAL_64 F24_680 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventScroll *)arg1)->x_root);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_y */
EIF_REAL_64 F24_681 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventButton *)arg1)->y);
	
	return Result;
}

/* {GTK}.gdk_event_button_struct_y_root */
EIF_REAL_64 F24_682 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventButton *)arg1)->y_root);
	
	return Result;
}

/* {GTK}.gdk_event_scroll_struct_y_root */
EIF_REAL_64 F24_683 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventScroll *)arg1)->y_root);
	
	return Result;
}

/* {GTK}.gdk_event_configure_struct_height */
EIF_INTEGER_32 F24_684 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventConfigure *)arg1)->height);
	
	return Result;
}

/* {GTK}.gdk_event_configure_struct_width */
EIF_INTEGER_32 F24_685 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventConfigure *)arg1)->width);
	
	return Result;
}

/* {GTK}.gdk_event_setting_struct_name */
EIF_POINTER F24_686 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkEventSetting *)arg1)->name);
	
	return Result;
}

/* {GTK}.gdk_event_configure_struct_x */
EIF_INTEGER_32 F24_687 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventConfigure *)arg1)->x);
	
	return Result;
}

/* {GTK}.gdk_event_configure_struct_y */
EIF_INTEGER_32 F24_688 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventConfigure *)arg1)->y);
	
	return Result;
}

/* {GTK}.gdk_event_crossing_struct_mode */
EIF_INTEGER_32 F24_690 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventCrossing *)arg1)->mode);
	
	return Result;
}

/* {GTK}.gdk_event_key_struct_keyval */
EIF_NATURAL_32 F24_694 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((GdkEventKey *)arg1)->keyval);
	
	return Result;
}

/* {GTK}.gdk_event_key_struct_state */
EIF_NATURAL_32 F24_695 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((GdkEventKey *)arg1)->state);
	
	return Result;
}

/* {GTK}.gdk_event_key_struct_type */
EIF_INTEGER_32 F24_696 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventKey *)arg1)->type);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_is_hint */
EIF_INTEGER_32 F24_697 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkEventMotion *)arg1)->is_hint);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_state */
EIF_NATURAL_32 F24_698 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((GdkEventMotion *)arg1)->state);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_window */
EIF_POINTER F24_699 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkEventMotion *)arg1)->window);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_x */
EIF_REAL_64 F24_700 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventMotion *)arg1)->x);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_x_root */
EIF_REAL_64 F24_701 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventMotion *)arg1)->x_root);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_y */
EIF_REAL_64 F24_702 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventMotion *)arg1)->y);
	
	return Result;
}

/* {GTK}.gdk_event_motion_struct_y_root */
EIF_REAL_64 F24_703 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	Result = (EIF_REAL_64) (((GdkEventMotion *)arg1)->y_root);
	
	return Result;
}

/* {GTK}.gdk_event_dnd_struct_context */
EIF_POINTER F24_704 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GdkEventDND *)arg1)->context);
	
	return Result;
}

/* {GTK}.gdk_event_dnd_struct_time */
EIF_NATURAL_32 F24_705 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	Result = (EIF_NATURAL_32) (((GdkEventDND *)arg1)->time);
	
	return Result;
}

/* {GTK}.gdk_gcvalues_struct_line_width */
EIF_INTEGER_32 F24_710 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkGCValues *)arg1)->line_width);
	
	return Result;
}

/* {GTK}.gdk_rectangle_struct_height */
EIF_INTEGER_32 F24_713 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkRectangle *)arg1)->height);
	
	return Result;
}

/* {GTK}.gdk_rectangle_struct_width */
EIF_INTEGER_32 F24_714 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkRectangle *)arg1)->width);
	
	return Result;
}

/* {GTK}.gdk_rectangle_struct_x */
EIF_INTEGER_32 F24_715 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkRectangle *)arg1)->x);
	
	return Result;
}

/* {GTK}.gdk_rectangle_struct_y */
EIF_INTEGER_32 F24_716 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GdkRectangle *)arg1)->y);
	
	return Result;
}

/* {GTK}.glist_struct_data */
EIF_POINTER F24_718 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GList *)arg1)->data);
	
	return Result;
}

/* {GTK}.glist_struct_next */
EIF_POINTER F24_719 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GList *)arg1)->next);
	
	return Result;
}

/* {GTK}.gslist_struct_data */
EIF_POINTER F24_721 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GSList *)arg1)->data);
	
	return Result;
}

/* {GTK}.gtk_adjustment_struct_lower */
EIF_REAL_32 F24_723 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) (((GtkAdjustment *)arg1)->lower);
	
	return Result;
}

/* {GTK}.gtk_adjustment_struct_step_increment */
EIF_REAL_32 F24_726 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) (((GtkAdjustment *)arg1)->step_increment);
	
	return Result;
}

/* {GTK}.gtk_adjustment_struct_upper */
EIF_REAL_32 F24_727 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) (((GtkAdjustment *)arg1)->upper);
	
	return Result;
}

/* {GTK}.gtk_adjustment_struct_value */
EIF_REAL_32 F24_728 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) (((GtkAdjustment *)arg1)->value);
	
	return Result;
}

/* {GTK}.gtk_allocation_struct_height */
EIF_INTEGER_32 F24_729 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkAllocation *)arg1)->height);
	
	return Result;
}

/* {GTK}.gtk_allocation_struct_width */
EIF_INTEGER_32 F24_730 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkAllocation *)arg1)->width);
	
	return Result;
}

/* {GTK}.gtk_allocation_struct_x */
EIF_INTEGER_32 F24_731 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkAllocation *)arg1)->x);
	
	return Result;
}

/* {GTK}.gtk_allocation_struct_y */
EIF_INTEGER_32 F24_732 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkAllocation *)arg1)->y);
	
	return Result;
}

/* {GTK}.set_gtk_allocation_struct_height */
void F24_733 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GtkAllocation *)arg1)->height = (gint)(arg2));
	
}

/* {GTK}.set_gtk_allocation_struct_width */
void F24_734 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GtkAllocation *)arg1)->width = (gint)(arg2));
	
}

/* {GTK}.set_gtk_allocation_struct_x */
void F24_735 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GtkAllocation *)arg1)->x = (gint)(arg2));
	
}

/* {GTK}.set_gtk_allocation_struct_y */
void F24_736 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GtkAllocation *)arg1)->y = (gint)(arg2));
	
}

/* {GTK}.gtk_bin_struct_child */
EIF_POINTER F24_737 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkBin *)arg1)->child);
	
	return Result;
}

/* {GTK}.gtk_box_struct_container */
EIF_POINTER F24_738 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) &(((GtkBox *)arg1)->container);
	
	return Result;
}

/* {GTK}.gtk_box_struct_spacing */
EIF_INTEGER_32 F24_740 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkBox *)arg1)->spacing);
	
	return Result;
}

/* {GTK}.gtk_check_menu_item_struct_active */
EIF_INTEGER_32 F24_741 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkCheckMenuItem *)arg1)->active);
	
	return Result;
}

/* {GTK}.gtk_color_selection_dialog_struct_help_button */
EIF_POINTER F24_742 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkColorSelectionDialog *)arg1)->help_button);
	
	return Result;
}

/* {GTK}.gtk_container_struct_border_width */
EIF_INTEGER_32 F24_743 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkContainer *)arg1)->border_width);
	
	return Result;
}

/* {GTK}.gtk_fixed_struct_children */
EIF_POINTER F24_745 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkFixed *)arg1)->children);
	
	return Result;
}

/* {GTK}.gtk_label_struct_label */
EIF_POINTER F24_748 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkLabel *)arg1)->label);
	
	return Result;
}

/* {GTK}.gtk_object_struct_flags */
EIF_INTEGER_32 F24_750 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkObject *)arg1)->flags);
	
	return Result;
}

/* {GTK}.gtk_requisition_struct_height */
EIF_INTEGER_32 F24_754 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkRequisition *)arg1)->height);
	
	return Result;
}

/* {GTK}.gtk_requisition_struct_width */
EIF_INTEGER_32 F24_755 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkRequisition *)arg1)->width);
	
	return Result;
}

/* {GTK}.gtk_style_struct_base */
EIF_POINTER F24_757 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkStyle *)arg1)->base);
	
	return Result;
}

/* {GTK}.gtk_style_struct_bg */
EIF_POINTER F24_758 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkStyle *)arg1)->bg);
	
	return Result;
}

/* {GTK}.gtk_style_struct_fg */
EIF_POINTER F24_760 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkStyle *)arg1)->fg);
	
	return Result;
}

/* {GTK}.gtk_style_struct_text */
EIF_POINTER F24_761 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkStyle *)arg1)->text);
	
	return Result;
}

/* {GTK}.gtk_tooltips_struct_tip_window */
EIF_POINTER F24_763 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkTooltips *)arg1)->tip_window);
	
	return Result;
}

/* {GTK}.gtk_viewport_struct_bin_window */
EIF_POINTER F24_764 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkViewport *)arg1)->bin_window);
	
	return Result;
}

/* {GTK}.gtk_widget_aux_info_struct_x */
EIF_INTEGER_32 F24_765 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkWidgetAuxInfo *)arg1)->x);
	
	return Result;
}

/* {GTK}.gtk_widget_aux_info_struct_y */
EIF_INTEGER_32 F24_766 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((GtkWidgetAuxInfo *)arg1)->y);
	
	return Result;
}

/* {GTK}.gtk_widget_struct_allocation */
EIF_POINTER F24_767 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) &(((GtkWidget *)arg1)->allocation);
	
	return Result;
}

/* {GTK}.gtk_widget_struct_parent */
EIF_POINTER F24_768 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkWidget *)arg1)->parent);
	
	return Result;
}

/* {GTK}.gtk_widget_struct_style */
EIF_POINTER F24_770 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkWidget *)arg1)->style);
	
	return Result;
}

/* {GTK}.gtk_widget_struct_window */
EIF_POINTER F24_771 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkWidget *)arg1)->window);
	
	return Result;
}

/* {GTK}.gtk_window_struct_focus_widget */
EIF_POINTER F24_773 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkWindow *)arg1)->focus_widget);
	
	return Result;
}

/* {GTK}.set_gdk_color_struct_blue */
void F24_776 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkColor *)arg1)->blue = (gushort)(arg2));
	
}

/* {GTK}.set_gdk_color_struct_green */
void F24_777 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkColor *)arg1)->green = (gushort)(arg2));
	
}

/* {GTK}.set_gdk_color_struct_red */
void F24_779 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkColor *)arg1)->red = (gushort)(arg2));
	
}

/* {GTK}.set_gdk_event_any_struct_window */
void F24_780 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	(((GdkEventAny *)arg1)->window = (GdkWindow*)(arg2));
	
}

/* {GTK}.set_gdk_geometry_struct_max_height */
void F24_785 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkGeometry *)arg1)->max_height = (gint)(arg2));
	
}

/* {GTK}.set_gdk_geometry_struct_max_width */
void F24_786 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkGeometry *)arg1)->max_width = (gint)(arg2));
	
}

/* {GTK}.set_gdk_geometry_struct_min_height */
void F24_788 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkGeometry *)arg1)->min_height = (gint)(arg2));
	
}

/* {GTK}.set_gdk_geometry_struct_min_width */
void F24_789 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((GdkGeometry *)arg1)->min_width = (gint)(arg2));
	
}

/* {GTK}.set_gtk_adjustment_struct_lower */
void F24_791 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	(((GtkAdjustment *)arg1)->lower = (gfloat)(arg2));
	
}

/* {GTK}.set_gtk_adjustment_struct_step_increment */
void F24_794 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	(((GtkAdjustment *)arg1)->step_increment = (gfloat)(arg2));
	
}

/* {GTK}.set_gtk_adjustment_struct_upper */
void F24_795 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	(((GtkAdjustment *)arg1)->upper = (gfloat)(arg2));
	
}

/* {GTK}.set_gtk_adjustment_struct_value */
void F24_796 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	
	(((GtkAdjustment *)arg1)->value = (gfloat)(arg2));
	
}

/* {GTK}.set_gtk_fixed_struct_children */
void F24_797 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	(((GtkFixed *)arg1)->children = (GList*)(arg2));
	
}

/* {GTK}.c_gdk_rectangle_struct_allocate */
EIF_POINTER F24_801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(GdkRectangle), 1);
	return Result;
}

/* {GTK}.c_gdk_color_struct_allocate */
EIF_POINTER F24_802 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
	return Result;
}

/* {GTK}.c_gdk_gcvalues_struct_allocate */
EIF_POINTER F24_803 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(GdkGCValues), 1);
	return Result;
}

/* {GTK}.c_gdk_geometry_struct_allocate */
EIF_POINTER F24_804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) calloc (sizeof(GdkGeometry), 1);
	return Result;
}

void EIF_Minit16 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
