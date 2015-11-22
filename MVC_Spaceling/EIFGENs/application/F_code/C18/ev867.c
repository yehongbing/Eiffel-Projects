/*
 * Code for class EV_MENU_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev867.h"
#include "ev_c_util.h"
#include <ev_gtk.h>
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1174_16503
static void inline_F1174_16503 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	g_object_set_data (
    G_OBJECT (arg1),
    "eif_oid",
    (gpointer) (rt_int_ptr) arg2
);
	;
}
#define INLINE_F1174_16503
#endif
#ifndef INLINE_F1174_16504
static void inline_F1174_16504 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_NATURAL_32 arg5)
{
	{
	menu_position *pos = malloc (sizeof (menu_position));
	pos->x_position = (gint) arg2;
	pos->y_position = (gint) arg3;
	gtk_menu_popup ((GtkMenu*) arg1, NULL, NULL, (GtkMenuPositionFunc) c_gtk_menu_position_func, (gpointer) pos, (guint) arg4, (guint32) arg5);
}
	;
}
#define INLINE_F1174_16504
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_IMP}.make */
void F1174_16500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1172_16481(Current);
	tp1 = (EIF_POINTER) gtk_menu_new();
	*(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = F1172_16484(Current);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = F1172_16484(Current);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_);
	gtk_menu_item_set_submenu((GtkMenuItem*) tp1, (GtkWidget*) tp2);
	F1058_13825(Current);
	F1086_14245(Current);
	tp1 = F1172_16484(Current);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_1_);
	gtk_image_menu_item_set_image((GtkImageMenuItem*) tp1, (GtkWidget*) tp2);
	RTLE;
}

/* {EV_MENU_IMP}.show_at */
void F1174_16502 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	if ((EIF_BOOLEAN) (F1058_13827(Current) > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			loc1 = F950_11089(RTCV(arg1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg2);
			loc2 = F950_11090(RTCV(arg1));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg3);
		} else {
			loc1 = (EIF_INTEGER_32) arg2;
			loc2 = (EIF_INTEGER_32) arg3;
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_11_);
		loc1 -= ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOSCF(14148,F1079_14148,(Current)))+ _LNGOFF_49_16_0_12_);
		loc2 -= ti4_1;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_);
		ti4_1 = F788_7991(Current);
		inline_F1174_16503(tp1, ti4_1);
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		F1049_13554(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_12_));
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,6,841,0,913,874,874,874,868,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0, 7, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_);
		((EIF_TYPED_VALUE *)tr2+2)->it_p = tp1;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = loc1;
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = loc2;
		((EIF_TYPED_VALUE *)tr2+5)->it_i4 = ((EIF_INTEGER_32) 0L);
		tu4_1 = (EIF_NATURAL_32) gtk_get_current_event_time();
		((EIF_TYPED_VALUE *)tr2+6)->it_n4 = tu4_1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr3 = RTLNRF(typres0, (EIF_POINTER) __A867_313, (EIF_POINTER) _A867_313, (EIF_POINTER)(F1174_16504),tr2, 1, 0);
		}
		F1048_13486(RTCV(tr1), tr3);
	}
	RTLE;
}

/* {EV_MENU_IMP}.couple_object_id_with_gtk_object */
void F1174_16503 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F1174_16503 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {EV_MENU_IMP}.c_gtk_menu_popup */
void F1174_16504 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_NATURAL_32 arg5)
{
	GTCX
	
	
	inline_F1174_16504 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_NATURAL_32) arg5);
}

/* {EV_MENU_IMP}.on_activate */
void F1174_16505 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1026,0xFFFF};
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
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F732_6800(RTCV(tr1), NULL);
	}
	RTLE;
}

/* {EV_MENU_IMP}.interface */
static EIF_REFERENCE F1174_16506_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1174_16506 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1174_16506_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_12_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MENU_IMP}.list_widget */
EIF_POINTER F1174_16507 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_2_0_4_);
}


/* {EV_MENU_IMP}.destroy */
void F1174_16508 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1057_13821(Current);
	F1165_16459(Current);
	RTLE;
}

void EIF_Minit867 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
