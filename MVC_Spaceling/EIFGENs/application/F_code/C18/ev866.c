/*
 * Code for class EV_RADIO_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev866.h"
#include <stdio.h>
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

/* {EV_RADIO_MENU_ITEM_IMP}.make */
void F1173_16489 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1172_16481(Current);
	tp1 = F1172_16484(Current);
	gtk_check_menu_item_set_show_toggle((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	F1173_16492(Current);
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.initialize_menu_item */
void F1173_16490 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_radio_menu_item_new((GSList*) tp1);
	F1079_14134(Current, tp1);
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.is_selected */
EIF_BOOLEAN F1173_16491 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F1172_16484(Current);
	ti4_1 = (EIF_INTEGER_32) (((GtkCheckMenuItem *)tp1)->active);
	tr1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ti4_1;
	
	Result = F873_9402(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_RADIO_MENU_ITEM_IMP}.enable_select */
void F1173_16492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1173_16491(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_22_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tp1 = F1172_16484(Current);
		gtk_check_menu_item_set_active((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 1);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_22_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.disable_select */
void F1173_16493 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F1173_16491(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_22_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tp1 = F1172_16484(Current);
		gtk_check_menu_item_set_active((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 0);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_22_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.allow_on_activate */
EIF_BOOLEAN F1173_16495 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_22_4_)) {
		tb1 = F1173_16491(Current);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN)(F1165_16458(Current) != NULL);
	}
	RTLE;
	return Result;
}

/* {EV_RADIO_MENU_ITEM_IMP}.set_radio_group */
void F1173_16496 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1172_16484(Current);
	gtk_radio_menu_item_set_group((GtkRadioMenuItem*) tp1, (GSList*) arg1);
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.radio_group */
EIF_POINTER F1173_16497 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1172_16484(Current);
	Result = (EIF_POINTER) gtk_radio_menu_item_group((GtkRadioMenuItem*) tp1);
	RTLE;
	return Result;
}

/* {EV_RADIO_MENU_ITEM_IMP}.interface */
static EIF_REFERENCE F1173_16498_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1173_16498 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1173_16498_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_11_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit866 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
