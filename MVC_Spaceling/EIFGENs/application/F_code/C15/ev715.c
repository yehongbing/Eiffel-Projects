/*
 * Code for class EV_MENU_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev715.h"
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

/* {EV_MENU_BAR_IMP}.make */
void F1080_14151 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_menu_bar_new();
	F1079_14134(Current, tp1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_1_0_2_0_0_);
	gtk_widget_show((GtkWidget*) tp1);
	F1058_13825(Current);
	RTLE;
}

/* {EV_MENU_BAR_IMP}.screen_x */
EIF_INTEGER_32 F1080_14154 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_BAR_IMP}.screen_y */
EIF_INTEGER_32 F1080_14155 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_BAR_IMP}.width */
EIF_INTEGER_32 F1080_14156 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_BAR_IMP}.height */
EIF_INTEGER_32 F1080_14157 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_BAR_IMP}.minimum_width */
EIF_INTEGER_32 F1080_14158 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_BAR_IMP}.parent */
EIF_REFERENCE F1080_14161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_BAR_IMP}.parent_imp */
EIF_REFERENCE F1080_14163 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EV_MENU_BAR_IMP}.interface */
static EIF_REFERENCE F1080_14164_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1080_14164 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1080_14164_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit715 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
