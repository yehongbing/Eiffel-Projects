/*
 * Code for class EV_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev865.h"
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

/* {EV_MENU_ITEM_IMP}.needs_event_box */
EIF_BOOLEAN F1172_16477 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EV_MENU_ITEM_IMP}.is_dockable */
EIF_BOOLEAN F1172_16478 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EV_MENU_ITEM_IMP}.initialize_menu_item */
void F1172_16480 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_image_menu_item_new();
	F1079_14134(Current, tp1);
	F1086_14245(Current);
	tp1 = F1172_16484(Current);
	tp2 = *(EIF_POINTER *)(Current + O11069[Dtype(Current)-1085]);
	gtk_image_menu_item_set_image((GtkImageMenuItem*) tp1, (GtkWidget*) tp2);
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.make */
RTEOMS(16480,1);
void F1172_16481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12387[dtype-1171])(Current);
	F1081_14166(Current);
	tp1 = F1172_16484(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tp2 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	((EIF_TYPED_VALUE *)tr1+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_331, (EIF_POINTER) _A412_331, (EIF_POINTER)(F790_8080),tr1, 1, 0);
	}
	F1079_14140(Current, tp1, RTOMS(16480,0), tr2, NULL);
	F1088_14258(Current);
	loc1 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	tp1 = F1172_16484(Current);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) loc1);
	gtk_widget_show((GtkWidget*) loc1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O11069[dtype-1085]) == tp1)) {
		F1086_14245(Current);
		tp1 = *(EIF_POINTER *)(Current + O11069[dtype-1085]);
		gtk_box_pack_start((GtkBox*) loc1, (GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	}
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	gtk_box_pack_start((GtkBox*) loc1, (GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 0L));
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	tp1 = (EIF_POINTER) gtk_label_new((gchar*) tp2);
	*(EIF_POINTER *)(Current + O12388[dtype-1171]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
	gtk_misc_set_alignment((GtkMisc*) tp1, (gfloat) (EIF_REAL_32) 1.0, (gfloat) (EIF_REAL_32) 0.5);
	tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
	gtk_misc_set_padding((GtkMisc*) tp1, (gint) ((EIF_INTEGER_32) 0L), (gint) ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
	gtk_box_pack_start((GtkBox*) loc1, (GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 1, (gboolean) (EIF_BOOLEAN) 1, (guint) ((EIF_INTEGER_32) 2L));
	tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
	ti4_1 = (EIF_INTEGER_32) GTK_JUSTIFY_RIGHT;
	gtk_label_set_justify((GtkLabel*) tp1, (GtkJustification) ti4_1);
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.set_text */
void F1172_16483 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	
	RTGC;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R8026[Dtype(arg1)-919])(RTCV(arg1), tw1);
	if (tb1) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
		loc1 = F920_10313(RTCV(arg1), tw1);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[Dtype(loc1)-489])(RTCV(loc1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	}
	if (tb1) {
		ti4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4241[Dtype(loc1)-584])(RTCV(loc1), (EIF_REFERENCE) &ti4_1);
		F1088_14264(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + O11080[dtype-1087]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
			F926_10657(RTCV(loc3), tw1);
			ti4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4241[Dtype(loc1)-584])(RTCV(loc1), (EIF_REFERENCE) &ti4_1);
			F926_10642(RTCV(loc3), tr1);
		} else {
		}
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr2 = RTMS32_EX_H(" \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000 \000\000\000",12,286432288);
		ti4_1 = ((EIF_INTEGER_32) 2L);
		tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4241[Dtype(loc1)-584])(RTCV(loc1), (EIF_REFERENCE) &ti4_1);
		tr2 = F926_10645(RTCV(tr2), tr3);
		F781_7428(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
		tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		gtk_label_set_text((GtkLabel*) tp1, (gchar*) tp2);
		tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
		gtk_widget_show((GtkWidget*) tp1);
	} else {
		F1088_14264(Current, arg1);
		tp1 = *(EIF_POINTER *)(Current + O12388[dtype-1171]);
		gtk_widget_hide((GtkWidget*) tp1);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.menu_item */
EIF_POINTER F1172_16484 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
}

/* {EV_MENU_ITEM_IMP}.allow_on_activate */
EIF_BOOLEAN F1172_16485 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1165_16458(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.accelerators_enabled */
EIF_BOOLEAN F1172_16486 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_MENU_ITEM_IMP}.on_activate */
void F1172_16487 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	loc1 = F1165_16458(Current);
	loc1 = RTRV(eif_non_attached_type(1063), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O3547[Dtype(loc1)-182]);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F183_3816(RTCV(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1005,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F1029_13066(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			F732_6800(RTCV(tr1), tr2);
		}
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10735[Dtype(loc1)-1063])(RTCV(loc1));
		gtk_menu_shell_deactivate((GtkMenuShell*) tp1);
	}
	tp1 = F1172_16484(Current);
	gtk_menu_item_deselect((GtkMenuItem*) tp1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.interface */
static EIF_REFERENCE F1172_16488_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1172_16488 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1172_16488_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit865 (void)
{
	GTCX
	RTPOMS(16480,0,"activate",8,526134885);
}


#ifdef __cplusplus
}
#endif
