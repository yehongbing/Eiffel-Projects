/*
 * Code for class EV_CLIPBOARD_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev727.h"
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

/* {EV_CLIPBOARD_IMP}.make */
RTEOMS(14285,2);
void F1092_14286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(14285,0));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) gdk_atom_intern((gchar*) tp1, (gint) ((EIF_INTEGER_32) 1L));
	tp1 = (EIF_POINTER) gtk_clipboard_get((GdkAtom) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp1;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(14285,1));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) gdk_atom_intern((gchar*) tp1, (gint) ((EIF_INTEGER_32) 1L));
	tp1 = (EIF_POINTER) gtk_clipboard_get((GdkAtom) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_) = (EIF_POINTER) tp1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_CLIPBOARD_IMP}.destroy */
void F1092_14292 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

/* {EV_CLIPBOARD_IMP}.interface */
static EIF_REFERENCE F1092_14293_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1092_14293 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1092_14293_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit727 (void)
{
	GTCX
	RTPOMS(14285,1,"PRIMARY",7,921107801);
	RTPOMS(14285,0,"CLIPBOARD",9,1396792132);
}


#ifdef __cplusplus
}
#endif
