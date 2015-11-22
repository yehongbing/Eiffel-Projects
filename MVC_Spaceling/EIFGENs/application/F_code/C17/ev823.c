/*
 * Code for class EV_TEXT_COMPONENT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev823.h"
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

/* {EV_TEXT_COMPONENT_IMP}.make */
void F1149_15986 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R12049[Dtype(Current)-1148])(Current, ((EIF_INTEGER_32) 4L));
	F1142_15736(Current);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.set_minimum_width_in_characters */
void F1149_15988 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F1149_15989(Current);
	F1096_14509(Current, (EIF_INTEGER_32) (arg1 * ti4_1));
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.maximum_character_width */
RTEOMS(15988,1);
EIF_INTEGER_32 F1149_15989 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1091_14279(Current);
	Result = F939_10946(RTCV(tr1), RTOMS(15988,0));
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.foreground_color_pointer */
EIF_POINTER F1149_15991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11057[Dtype(Current)-1141])(Current);
	tp1 = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) tp1);
	Result = (EIF_POINTER) (((GtkStyle *)tp1)->text);
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.interface */
static EIF_REFERENCE F1149_15992_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1149_15992 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1149_15992_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit823 (void)
{
	GTCX
	RTPOMS(15988,0,"W",1,87);
}


#ifdef __cplusplus
}
#endif
