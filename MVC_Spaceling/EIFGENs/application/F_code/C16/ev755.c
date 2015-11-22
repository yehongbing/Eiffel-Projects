/*
 * Code for class EV_NOTEBOOK_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev755.h"
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

/* {EV_NOTEBOOK_IMP}.needs_event_box */
EIF_BOOLEAN F1106_14773 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_NOTEBOOK_IMP}.make */
void F1106_14775 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(8,tr8);
	RTLR(9,tr9);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_notebook_new();
	F1079_14134(Current, tp1);
	tp1 = F1079_14146(Current);
	gtk_notebook_set_show_border((GtkNotebook*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	tp1 = F1079_14146(Current);
	gtk_notebook_set_scrollable((GtkNotebook*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	tp1 = F1079_14146(Current);
	tr1 = RTMS_EX_H("switch-page",11,350618981);
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
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_47_10_10_6_0_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,1,841,868,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A412_323_3, (EIF_POINTER) _A412_323_3, (EIF_POINTER)(F790_8072),tr2, 1, 1);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,792,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr6 = RTLNTS(typres0, 2, 0);
	}
	tr7 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr6+1)->it_r = tr7;
	RTAR(tr6,tr7);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {916,792,0xFFF9,2,841,874,913,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr9 = RTLNRF(typres0, (EIF_POINTER) __A412_317_2_3, (EIF_POINTER) _A412_317_2_3, (EIF_POINTER)(F789_8065),tr6, 1, 2);
	}
	F1079_14139(Current, tp1, tr1, tr5, tr9);
	F1105_14768(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1077_14127(Current);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.item_text */
EIF_REFERENCE F1106_14779 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	loc2 = (EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) tp1, (GtkWidget*) tp2);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		loc3 = (EIF_POINTER) (((GtkBin *)loc2)->child);
		loc4 = (EIF_POINTER) gtk_container_children((GtkContainer*) loc3);
		loc5 = (EIF_POINTER) g_list_nth_data((GList*) loc4, (guint) ((EIF_INTEGER_32) 1L));
		g_list_free((GList*) loc4);
	}
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc5 != tp1)) {
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tp1 = (EIF_POINTER) (((GtkLabel *)loc5)->label);
		F781_7430(RTCV(tr1), tp1);
		loc6 = (EIF_REFERENCE) tr1;
		tr1 = F781_7426(RTCV(loc6));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F920_10235(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_NOTEBOOK_IMP}.item_pixmap */
EIF_REFERENCE F1106_14780 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc7);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	loc2 = (EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) tp1, (GtkWidget*) tp2);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		loc3 = (EIF_POINTER) (((GtkBin *)loc2)->child);
		loc4 = (EIF_POINTER) gtk_container_children((GtkContainer*) loc3);
		loc5 = (EIF_POINTER) g_list_nth_data((GList*) loc4, (guint) ((EIF_INTEGER_32) 0L));
		g_list_free((GList*) loc4);
		loc6 = (EIF_POINTER) gtk_image_get_pixbuf((GtkImage*) loc5);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc6 != tp1)) {
			tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
			F930_10736(RTCV(tr1));
			Result = (EIF_REFERENCE) tr1;
			loc7 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_3_);
			loc7 = RTRV(eif_non_attached_type(1201), loc7);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F1202_17209(RTCV(loc7), loc6);
		}
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.select_item */
void F1106_14785 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0("an_item_has_implementation", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F1079_14146(Current);
	tp2 = F1079_14146(Current);
	tp3 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	ti4_1 = (EIF_INTEGER_32) gtk_notebook_page_num((GtkNotebook*) tp2, (GtkWidget*) tp3);
	gtk_notebook_set_page((GtkNotebook*) tp1, (gint) ti4_1);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.remove_i_th */
void F1106_14786 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1105_14770(Current, arg1);
	if ((EIF_BOOLEAN) (F1058_13827(Current) > ((EIF_INTEGER_32) 0L))) {
		tp1 = F1079_14146(Current);
		ti4_1 = (EIF_INTEGER_32) gtk_notebook_get_current_page((GtkNotebook*) tp1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.replace */
void F1106_14787 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	tp1 = F1079_14146(Current);
	loc1 = (EIF_INTEGER_32) gtk_notebook_get_current_page((GtkNotebook*) tp1);
	F1106_14786(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_1_));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_1_);
	F1105_14769(Current, arg1, ti4_1);
	tp1 = F1079_14146(Current);
	gtk_notebook_set_page((GtkNotebook*) tp1, (gint) loc1);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.ensure_tab_label */
void F1106_14788 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)((EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) tp1, (GtkWidget*) arg1) == tp2)) {
		loc1 = (EIF_POINTER) gtk_event_box_new();
		gtk_event_box_set_visible_window((GtkEventBox*) loc1, (gboolean) (EIF_BOOLEAN) 0);
		gtk_widget_show((GtkWidget*) loc1);
		loc2 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 2L));
		gtk_container_add((GtkContainer*) loc1, (GtkWidget*) loc2);
		gtk_widget_show((GtkWidget*) loc2);
		loc3 = (EIF_POINTER) gtk_image_new();
		gtk_widget_show((GtkWidget*) loc3);
		gtk_container_add((GtkContainer*) loc2, (GtkWidget*) loc3);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		loc4 = (EIF_POINTER) gtk_label_new((gchar*) tp2);
		gtk_widget_show((GtkWidget*) loc4);
		gtk_container_add((GtkContainer*) loc2, (GtkWidget*) loc4);
		tp1 = F1079_14146(Current);
		gtk_notebook_set_tab_label((GtkNotebook*) tp1, (GtkWidget*) arg1, (GtkWidget*) loc1);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_item_text */
void F1106_14790 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,arg2);
	RTLR(5,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), arg2);
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	F1106_14788(Current, tp1);
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	loc3 = (EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) tp1, (GtkWidget*) tp2);
	loc4 = (EIF_POINTER) (((GtkBin *)loc3)->child);
	loc5 = (EIF_POINTER) gtk_container_children((GtkContainer*) loc4);
	loc6 = (EIF_POINTER) g_list_nth_data((GList*) loc5, (guint) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
	gtk_label_set_text((GtkLabel*) loc6, (gchar*) tp1);
	g_list_free((GList*) loc5);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_item_pixmap */
void F1106_14791 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLR(4,loc7);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	F1106_14788(Current, tp1);
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	loc2 = (EIF_POINTER) gtk_notebook_get_tab_label((GtkNotebook*) tp1, (GtkWidget*) tp2);
	loc3 = (EIF_POINTER) (((GtkBin *)loc2)->child);
	loc5 = (EIF_POINTER) gtk_container_children((GtkContainer*) loc3);
	loc4 = (EIF_POINTER) g_list_nth_data((GList*) loc5, (guint) ((EIF_INTEGER_32) 0L));
	g_list_free((GList*) loc5);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc7 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_3_);
		loc7 = RTRV(eif_non_attached_type(1201), loc7);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc6 = F1198_17067(RTCV(loc7), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_4_));
		gtk_image_set_from_pixbuf((GtkImage*) loc4, (GdkPixbuf*) loc6);
	} else {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		gtk_image_set_from_pixbuf((GtkImage*) loc4, (GdkPixbuf*) tp2);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.page_switch */
void F1106_14792 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_47_10_10_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
			tb1 = (EIF_BOOLEAN) (F1058_13827(Current) > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.gtk_insert_i_th */
void F1106_14794 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) arg2);
	if ((EIF_BOOLEAN) (arg3 < F1058_13827(Current))) {
		gtk_notebook_reorder_child((GtkNotebook*) arg1, (GtkWidget*) arg2, (gint) arg3);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.interface */
static EIF_REFERENCE F1106_14795_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1106_14795 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1106_14795_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_25_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit755 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
