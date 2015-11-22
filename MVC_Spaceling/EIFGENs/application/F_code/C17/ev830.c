/*
 * Code for class EV_RADIO_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev830.h"
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

/* {EV_RADIO_BUTTON_IMP}.new_gtk_button */
EIF_POINTER F1155_16203 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	Result = (EIF_POINTER) gtk_radio_button_new((GSList*) tp1);
	return Result;
}

/* {EV_RADIO_BUTTON_IMP}.make */
void F1155_16204 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1154_16185(Current);
	F1154_16192(Current);
	F1155_16206(Current);
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.is_selected */
EIF_BOOLEAN F1155_16205 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	Result = (EIF_BOOLEAN) EIF_TEST(gtk_toggle_button_get_active((GtkToggleButton*) tp1));
	RTLE;
	return Result;
}

/* {EV_RADIO_BUTTON_IMP}.enable_select */
void F1155_16206 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1155_16205(Current)) {
		tp1 = F1079_14146(Current);
		gtk_toggle_button_set_active((GtkToggleButton*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.radio_group */
EIF_POINTER F1155_16208 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1079_14146(Current);
	Result = (EIF_POINTER) gtk_radio_button_group((GtkRadioButton*) tp1);
	RTLE;
	return Result;
}

/* {EV_RADIO_BUTTON_IMP}.interface */
static EIF_REFERENCE F1155_16209_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1155_16209 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1155_16209_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit830 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
