/*
 * Code for class EV_COLOR_DIALOG_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev890.h"
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

/* {EV_COLOR_DIALOG_IMP}.make */
void F1190_16728 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("Color selection dialog",22,962004583);
	F781_7428(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) gtk_color_selection_dialog_new((gchar*) tp1);
	F1079_14134(Current, tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_4_0_1_0_0_);
	tp1 = (EIF_POINTER) (((GtkColorSelectionDialog *)tp1)->help_button);
	gtk_widget_hide((GtkWidget*) tp1);
	F1081_14166(Current);
	F1029_13080(Current, (EIF_BOOLEAN) 0);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_4_0_1_0_0_);
	tp1 = (EIF_POINTER) (((GtkColorSelectionDialog *)tp1)->ok_button);
	tr1 = RTMS_EX_H("clicked",7,169941860);
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
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_8_4_0_1_0_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_332, (EIF_POINTER) _A412_332, (EIF_POINTER)(F790_8081),tr2, 1, 0);
	}
	F1079_14139(Current, tp1, tr1, tr3, NULL);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_4_0_1_0_0_);
	tp1 = (EIF_POINTER) (((GtkColorSelectionDialog *)tp1)->cancel_button);
	tr1 = RTMS_EX_H("clicked",7,169941860);
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
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_8_4_0_1_0_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_333, (EIF_POINTER) _A412_333, (EIF_POINTER)(F790_8082),tr2, 1, 0);
	}
	F1079_14139(Current, tp1, tr1, tr3, NULL);
	F1188_16714(Current);
	F1082_14230(Current);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_COLOR_DIALOG_IMP}.gtk_color_selection_dialog_struct_ok_button */
EIF_POINTER F1190_16733 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkColorSelectionDialog *)arg1)->ok_button);
	
	return Result;
}

/* {EV_COLOR_DIALOG_IMP}.gtk_color_selection_dialog_struct_cancel_button */
EIF_POINTER F1190_16734 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((GtkColorSelectionDialog *)arg1)->cancel_button);
	
	return Result;
}

/* {EV_COLOR_DIALOG_IMP}.interface */
static EIF_REFERENCE F1190_16736_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1190_16736 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1190_16736_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit890 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
