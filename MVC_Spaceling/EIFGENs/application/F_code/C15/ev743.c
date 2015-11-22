/*
 * Code for class EV_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev743.h"
#include <string.h>
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_built_in.h"
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1079_14135
static EIF_REFERENCE inline_F1079_14135 (EIF_POINTER arg1)
{
	return (EIF_REFERENCE) (c_ev_any_imp_get_eif_reference_from_object_id (arg1))
	;
}
#define INLINE_F1079_14135
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CONTAINER_IMP}.make */
void F1098_14650 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1096_14500(Current);
	tr1 = RTLNSMART(eif_non_attached_type(881));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11380[Dtype(Current)-1097]) = (EIF_REFERENCE) RTCCL(tr1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.container_widget */
EIF_POINTER F1098_14651 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[Dtype(Current)-1095])(Current);
}

/* {EV_CONTAINER_IMP}.client_width */
EIF_INTEGER_32 F1098_14652 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[Dtype(Current)-1079])(Current);
}

/* {EV_CONTAINER_IMP}.client_height */
EIF_INTEGER_32 F1098_14653 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[Dtype(Current)-1079])(Current);
}

/* {EV_CONTAINER_IMP}.background_pixmap */
EIF_REFERENCE F1098_14654 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11395[Dtype(Current) - 1097]);
}


/* {EV_CONTAINER_IMP}.replace */
void F1098_14655 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11278[dtype-1098])(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
		loc1 = RTRV(eif_non_attached_type(1095), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11389[dtype-1097])(Current, loc1);
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11379[dtype-1097])(Current);
			tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R11392[dtype-1097])(Current, tp1, tp2);
		} else {
		}
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
		loc1 = RTRV(eif_non_attached_type(1095), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11379[dtype-1097])(Current);
			tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32)) R11391[dtype-1097])(Current, tp1, tp2, ((EIF_INTEGER_32) 1L));
			F1098_14671(Current, loc1);
		} else {
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.shared_pointer */
EIF_REFERENCE F1098_14656 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11380[Dtype(Current) - 1097]);
}


/* {EV_CONTAINER_IMP}.set_radio_group */
void F1098_14658 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11380[Dtype(Current)-1097]);
	F882_9654(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.radio_group */
EIF_POINTER F1098_14659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11380[Dtype(Current)-1097]);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.add_radio_button */
void F1098_14662 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(1154), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if ((EIF_BOOLEAN)(F1098_14659(Current) != (EIF_POINTER) NULL)) {
			tp1 = F1079_14146(RTCV(loc1));
			tp2 = F1098_14659(Current);
			gtk_radio_button_set_group((GtkRadioButton*) tp1, (GSList*) tp2);
		} else {
			tp1 = F1079_14146(RTCV(loc1));
			gtk_toggle_button_set_active((GtkToggleButton*) tp1, (gboolean) (EIF_BOOLEAN) 0);
		}
		tp1 = F1079_14146(RTCV(loc1));
		tp1 = (EIF_POINTER) gtk_radio_button_group((GtkRadioButton*) tp1);
		F1098_14658(Current, tp1);
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.remove_radio_button */
void F1098_14663 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc5);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(1154), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = F1098_14659(Current);
		loc2 = (EIF_INTEGER_32) g_slist_length((GSList*) tp1);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
		tp1 = F1098_14659(Current);
		tp2 = F1079_14146(RTCV(loc1));
		loc3 = (EIF_INTEGER_32) g_slist_index((GSList*) tp1, (gpointer) tp2);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 - loc3) > ((EIF_INTEGER_32) 0L))) {
			tp1 = F1098_14659(Current);
			loc4 = (EIF_POINTER) g_slist_nth_data((GSList*) tp1, (guint) loc2);
		} else {
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				tp1 = F1098_14659(Current);
				loc4 = (EIF_POINTER) g_slist_nth_data((GSList*) tp1, (guint) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			}
		}
		tp1 = F1079_14146(RTCV(loc1));
		tp2 = (EIF_POINTER) NULL;
		gtk_radio_button_set_group((GtkRadioButton*) tp1, (GSList*) tp2);
		if ((EIF_BOOLEAN)(loc4 != (EIF_POINTER) NULL)) {
			tp1 = (EIF_POINTER) (((GtkWidget *)loc4)->parent);
			loc5 = inline_F1079_14135(tp1);
			loc5 = RTRV(eif_non_attached_type(1154), loc5);
			RTCT0("an_item_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tp1 = F1155_16208(RTCV(loc5));
			F1098_14658(Current, tp1);
		} else {
			tp1 = (EIF_POINTER) NULL;
			F1098_14658(Current, tp1);
		}
		tb1 = F1155_16205(RTCV(loc1));
		if (tb1) {
			if ((EIF_BOOLEAN)(F1098_14659(Current) != (EIF_POINTER) NULL)) {
				tp1 = F1098_14659(Current);
				tp1 = (EIF_POINTER) (((GSList *)tp1)->data);
				gtk_toggle_button_set_active((GtkToggleButton*) tp1, (gboolean) (EIF_BOOLEAN) 1);
			}
		} else {
			tp1 = F1079_14146(RTCV(loc1));
			gtk_toggle_button_set_active((GtkToggleButton*) tp1, (gboolean) (EIF_BOOLEAN) 1);
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.internal_set_background_pixmap */
void F1098_14664 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc6);
	RTLR(3,loc2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(1829,F34_1829,(RTCV(tr1)));
	F1066_13866(Current, tp1, tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O11395[dtype-1097]);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(loc6) + _REFACS_3_);
		loc2 = RTRV(eif_non_attached_type(1201), loc2);
	}
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->style);
	loc1 = (EIF_POINTER) gtk_style_copy((GtkStyle*) tp1);
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_46_11_12_3_0_5_);
	loc4 = (EIF_POINTER) gdk_pixmap_ref((GdkPixmap*) tp1);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 12L))) break;
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_46_11_12_3_0_5_);
		loc4 = (EIF_POINTER) gdk_pixmap_ref((GdkPixmap*) tp1);
		loc5++;
	}
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 5L))) break;
		tp1 = (EIF_POINTER) &(((GtkStyle *)loc1)->bg_pixmap);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes;
		loc3 = RTPOF(tp1,(EIF_INTEGER_32) (loc5 * ti4_1));
		ti4_1 = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes;
		memcpy((void *)loc3, (const void *) (EIF_POINTER *) &(loc4), (size_t) ti4_1);
		loc5++;
	}
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[dtype-1095])(Current);
	gtk_widget_set_style((GtkWidget*) tp1, (GtkStyle*) loc1);
	gtk_style_unref((GtkStyle*) loc1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.set_background_pixmap */
void F1098_14665 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11395[Dtype(Current)-1097]) = (EIF_REFERENCE) tr1;
	F1098_14664(Current, arg1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.bg_pixmap */
EIF_POINTER F1098_14666 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) &(((GtkStyle *)arg1)->bg_pixmap);
	
	return Result;
}

/* {EV_CONTAINER_IMP}.propagate_foreground_color */
void F1098_14668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1097_14537(Current);
	tr1 = F1065_13855(Current);
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	F1096_14520(Current, tr1, tp1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.propagate_background_color */
void F1098_14669 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1097_14538(Current);
	tr1 = F1065_13856(Current);
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	F1096_14521(Current, tr1, tp1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.destroy */
void F1098_14670 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1029_13066(Current);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4198[Dtype(tr1)-404])(RTCV(tr1));
	if (tb1) {
		tr1 = F1029_13066(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4205[Dtype(tr1)-404])(RTCV(tr1));
	}
	F1096_14516(Current);
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_new_item */
void F1098_14671 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1098_14662(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11266[Dtype(arg1)-1095])(RTCV(arg1), Current);
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_removed_item */
void F1098_14672 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11266[Dtype(arg1)-1095])(RTCV(arg1), NULL);
	F1098_14663(Current, arg1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.child_has_resized */
void F1098_14673 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CONTAINER_IMP}.set_parent_imp */
void F1098_14674 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	F1096_14515(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O11395[dtype-1097]);
	loc1 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc1) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11267[dtype-1095]) == NULL))) {
		F1098_14664(Current, loc1);
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.gtk_insert_i_th */
void F1098_14675 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) arg2);
}

/* {EV_CONTAINER_IMP}.gtk_container_remove */
void F1098_14676 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	gtk_container_remove((GtkContainer*) arg1, (GtkWidget*) arg2);
}

/* {EV_CONTAINER_IMP}.interface */
static EIF_REFERENCE F1098_14679_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1098_14679 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1098_14679_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit743 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
