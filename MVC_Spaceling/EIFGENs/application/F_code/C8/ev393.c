/*
 * Code for class EV_GTK_DEPENDENT_APPLICATION_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev393.h"
#include <string.h>
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F791_8118
static void inline_F791_8118 (void)
{
	{
	gtk_rc_parse_string ("style \"default-style\" {\n GtkWindow::resize-grip-height = 0\n GtkWindow::resize-grip-width = 0\n}\n  class \"GtkWidget\" style  \"default-style\" ");
}
	;
}
#define INLINE_F791_8118
#endif
#ifndef INLINE_F791_8119
static void inline_F791_8119 (void)
{
	{
	gtk_rc_parse_string ("style \"v2-combo-style\" {\n GtkComboBox::appears-as-list = 1\n }\n  widget \"*.v2combobox\" style : highest  \"v2-combo-style\" " );
}
	;
}
#define INLINE_F791_8119
#endif
#ifndef INLINE_F791_8120
static void inline_F791_8120 (void)
{
	{
	gtk_rc_parse_string ("style \"v2-toolbar-style\" {\n GtkToolbar::shadow-type = none\n }\n  widget \"*.v2toolbar\" style : highest  \"v2-toolbar-style\" " );
}
	;
}
#define INLINE_F791_8120
#endif
#ifndef INLINE_F31_1407
static void inline_F31_1407 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gchar**) arg3, NULL)
	;
}
#define INLINE_F31_1407
#endif
#ifndef INLINE_F791_8109
static EIF_INTEGER_32 inline_F791_8109 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return strcmp ((const char*) arg1, (const char*) arg2);
	;
}
#define INLINE_F791_8109
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
#ifndef INLINE_F791_8121
static void inline_F791_8121 (EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32* arg3)
{
	{
				PangoFontFamily **families;
				gchar **l_name_array = NULL;
				gint i;
				pango_context_list_families (gtk_widget_get_pango_context ((GtkWidget*) arg1), &families, arg3);

				
				l_name_array = malloc (*arg3 * sizeof (gchar*));
				
				for (i=0; i < *arg3; i++)
				{
					 l_name_array [i] = (gchar *) pango_font_family_get_name (families[i]);
				}
				
				g_free (families);
				
				*(EIF_POINTER *) arg2 = (EIF_POINTER *) l_name_array;
			}
	;
}
#define INLINE_F791_8121
#endif
#ifndef INLINE_F791_8122
static EIF_POINTER inline_F791_8122 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) ((EIF_POINTER) *((gchar**) arg1 + (int) (arg2 - 1)))
	;
}
#define INLINE_F791_8122
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.gtk_dependent_initialize */
void F791_8089 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	inline_F791_8118();
	inline_F791_8119();
	inline_F791_8120();
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.pixel_value_from_point_value */
EIF_INTEGER_32 F791_8091 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 4L));
	Result = (EIF_INTEGER_32) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))) * tr8_1) + (EIF_REAL_64) 0.5));
	return Result;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.point_value_from_pixel_value */
EIF_INTEGER_32 F791_8092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 3L));
	Result = (EIF_INTEGER_32) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 4L))) * tr8_1) + (EIF_REAL_64) 0.5));
	return Result;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.pango_layout */
static EIF_POINTER F791_8093_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (8093);
#define Result RTOSR(8093)
	tp1 = RTOSCF(13642,F1049_13642,(Current));
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_POINTER) gtk_widget_create_pango_layout((GtkWidget*) tp1, (gchar*) tp3);
	RTOSE (8093);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F791_8093 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8093,F791_8093_body,(Current));
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.pango_iter */
EIF_POINTER F791_8094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = RTOSCF(8093,F791_8093,(Current));
	Result = (EIF_POINTER) pango_layout_get_iter((PangoLayout*) tp1);
	RTLE;
	return Result;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.initialize_default_font_values */
RTEOMS(8097,6);
void F791_8098 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc2);
	RTLR(4,loc9);
	RTLR(5,loc8);
	RTLR(6,tr1);
	RTLR(7,loc5);
	
	RTGC;
	loc1 = F926_10677(RTCV(F791_8111(Current)));
	loc3 = RTOSCF(8114,F791_8114,(Current));
	loc2 = RTOSCF(8113,F791_8113,(Current));
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc7 = F701_6600(RTCV(loc2));
	loc9 = (EIF_REFERENCE) RTOMS(8097,0);
	RTAR(Current, loc9);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) loc9;
	for (;;) {
		if ((EIF_BOOLEAN) (loc4 || (EIF_BOOLEAN) (loc6 > loc7))) break;
		loc8 = F701_6584(RTCV(loc3), loc6);
		ti4_1 = F925_10569(RTCV(loc1), loc8, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) == loc9)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc8)+ _LNGOFF_1_1_0_2_);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				tb1 = (EIF_BOOLEAN) (ti4_1 > ti4_2);
			}
			if (tb1) {
				tr1 = F701_6584(RTCV(loc2), loc6);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		loc6++;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	loc5 = F920_10313(RTCV(loc1), tw1);
	F244_4452(RTCV(loc5));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5062[Dtype(loc5)-584])(RTCV(loc5));
	ti4_1 = F920_10300(RTCV(tr1));
	*(EIF_INTEGER_32 *)(Current + O6602[dtype-790]) = (EIF_INTEGER_32) ti4_1;
	tb1 = '\01';
	tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc5)-273])(RTCV(loc5), RTOMS(8097,1));
	if (!tb2) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc5)-273])(RTCV(loc5), RTOMS(8097,2));
		tb1 = tb2;
	}
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current + O6604[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	} else {
		*(EIF_INTEGER_32 *)(Current + O6604[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	}
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc5)-273])(RTCV(loc5), RTOMS(8097,3));
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current + O6606[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	} else {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc5)-273])(RTCV(loc5), RTOMS(8097,4));
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current + O6606[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
		} else {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4151[Dtype(loc5)-273])(RTCV(loc5), RTOMS(8097,5));
			if (tb1) {
				*(EIF_INTEGER_32 *)(Current + O6606[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			} else {
				*(EIF_INTEGER_32 *)(Current + O6606[dtype-790]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			}
		}
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.default_font_name */
EIF_REFERENCE F791_8099 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F791_8107(Current)) {
		F791_8098(Current);
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_22_);
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.default_font_name_internal */
EIF_REFERENCE F791_8100 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.font_settings_changed */
EIF_BOOLEAN F791_8107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = RTOSCF(8110,F791_8110,(Current));
	tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(8112,F791_8112,(Current)))+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1407(tp1, tp2, (EIF_POINTER *) &(loc1));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6608[dtype-790]) != tp1)) {
			tp1 = *(EIF_POINTER *)(Current + O6608[dtype-790]);
			ti4_1 = inline_F791_8109(tp1, loc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
			if (Result) {
				tp1 = *(EIF_POINTER *)(Current + O6608[dtype-790]);
				g_free((gpointer) tp1);
				*(EIF_POINTER *)(Current + O6608[dtype-790]) = (EIF_POINTER) loc1;
			} else {
				g_free((gpointer) loc1);
			}
		} else {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			*(EIF_POINTER *)(Current + O6608[dtype-790]) = (EIF_POINTER) loc1;
		}
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.c_strcmp */
EIF_INTEGER_32 F791_8109 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F791_8109 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.default_gtk_settings */
static EIF_POINTER F791_8110_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (8110);
#define Result RTOSR(8110)
	Result = inline_F24_244();
	RTOSE (8110);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F791_8110 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8110,F791_8110_body,(Current));
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.default_font_description */
RTEOMS(8110,1);
EIF_REFERENCE F791_8111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	tp1 = RTOSCF(8110,F791_8110,(Current));
	tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(8112,F791_8112,(Current)))+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1407(tp1, tp2, (EIF_POINTER *) &(loc1));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		F781_7422(RTCV(tr1), loc1);
		loc2 = (EIF_REFERENCE) tr1;
		loc3 = F781_7426(RTCV(loc2));
	}
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == NULL)) {
		tb2 = F418_5127(RTCV(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) RTOMS(8110,0);
	} else {
		RTLE;
		return (EIF_REFERENCE) loc3;
	}/* NOTREACHED */
	
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.gtk_font_name_setting */
static EIF_REFERENCE F791_8112_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (8112);
#define Result RTOSR(8112)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("gtk-font-name",13,1067777893);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8112);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F791_8112 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8112,F791_8112_body,(Current));
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.font_names_on_system */
static EIF_REFERENCE F791_8113_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,tr2);
	
	RTEV;
	RTGC;
	RTOSP (8113);
#define Result RTOSR(8113)
	RTOC_NEW(Result);
	tp1 = RTOSCF(13642,F1049_13642,(Current));
	inline_F791_8121(tp1, (EIF_POINTER *) &(loc1), (EIF_INTEGER_32 *) &(loc3));
	{
		static EIF_TYPE_INDEX typarr0[] = {700,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F701_6579(RTCV(tr1), loc3);
	Result = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	F781_7428(RTCV(tr1), tr2);
	loc4 = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		tp1 = inline_F791_8122(loc1, loc2);
		F781_7430(RTCV(loc4), tp1);
		tr1 = F781_7426(RTCV(loc4));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), tr1);
		loc2++;
	}
	F244_4452(RTCV(Result));
	free(loc1);
	RTOSE (8113);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F791_8113 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8113,F791_8113_body,(Current));
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.font_names_on_system_as_lower */
static EIF_REFERENCE F791_8114_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8114);
#define Result RTOSR(8114)
	RTOC_NEW(Result);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = RTOSCF(8113,F791_8113,(Current));
	loc2 = F701_6600(RTCV(loc3));
	{
		static EIF_TYPE_INDEX typarr0[] = {700,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F701_6579(RTCV(tr1), loc2);
	Result = (EIF_REFERENCE) tr1;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tr1 = F701_6584(RTCV(loc3), loc1);
		tr1 = F926_10677(RTCV(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), tr1);
		loc1++;
	}
	F244_4452(RTCV(Result));
	RTOSE (8114);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F791_8114 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8114,F791_8114_body,(Current));
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.initialize_window_style */
void F791_8118 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F791_8118 ();
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.initialize_combo_box_style */
void F791_8119 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F791_8119 ();
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.initialize_tool_bar_style */
void F791_8120 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F791_8120 ();
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.retrieve_available_fonts */
void F791_8121 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER* arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F791_8121 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2, (EIF_INTEGER_32*) arg3);
}

/* {EV_GTK_DEPENDENT_APPLICATION_IMP}.gchar_array_i_th */
EIF_POINTER F791_8122 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F791_8122 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

void EIF_Minit393 (void)
{
	GTCX
	RTPOMS32(8097,5,"s\000\000\000u\000\000\000p\000\000\000e\000\000\000r\000\000\000b\000\000\000o\000\000\000l\000\000\000d\000\000\000",9,607903332);
	RTPOMS32(8097,4,"l\000\000\000i\000\000\000g\000\000\000h\000\000\000t\000\000\000",5,1769214068);
	RTPOMS32(8097,3,"b\000\000\000o\000\000\000l\000\000\000d\000\000\000",4,1651469412);
	RTPOMS32(8097,2,"o\000\000\000b\000\000\000l\000\000\000i\000\000\000q\000\000\000u\000\000\000e\000\000\000",7,1996202853);
	RTPOMS32(8097,1,"i\000\000\000t\000\000\000a\000\000\000l\000\000\000i\000\000\000c\000\000\000",6,1841824099);
	RTPOMS32(8097,0,"S\000\000\000a\000\000\000n\000\000\000s\000\000\000",4,1398894195);
	RTPOMS32(8110,0,"S\000\000\000a\000\000\000n\000\000\000s\000\000\000 \000\000\0001\000\000\0000\000\000\000",7,948715824);
}


#ifdef __cplusplus
}
#endif
