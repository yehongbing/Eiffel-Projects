/*
 * Code for class EV_TOOL_BAR_RADIO_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev878.h"
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

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.new_tool_bar_button */
EIF_POINTER F1182_16623 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	Result = (EIF_POINTER) gtk_radio_tool_button_new((GSList*) tp1);
	return Result;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.enable_select */
void F1182_16624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1182_16625(Current)) {
		tp1 = F1079_14146(Current);
		gtk_toggle_tool_button_set_active((GtkToggleToolButton*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.is_selected */
EIF_BOOLEAN F1182_16625 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_toggle_tool_button_get_active((GtkToggleToolButton*) tp1));
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.set_item_parent_imp */
void F1182_16627 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1165_16461(Current, arg1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		tp1 = F1079_14146(Current);
		tp2 = (EIF_POINTER) NULL;
		gtk_radio_tool_button_set_group((GtkRadioToolButton*) tp1, (GSList*) tp2);
	}
	RTLE;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.radio_group */
EIF_POINTER F1182_16629 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	Result = (EIF_POINTER) gtk_radio_tool_button_get_group((GtkRadioToolButton*) tp1);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.interface */
static EIF_REFERENCE F1182_16630_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1182_16630 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1182_16630_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_14_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit878 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
