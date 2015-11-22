/*
 * Code for class EV_DIALOG_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev777.h"
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_IMP}.new_gtk_window */
EIF_POINTER F1126_15503 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) F206_4006(Current);
}

/* {EV_DIALOG_IMP}.make */
void F1126_15504 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1123_15409(Current);
	F1126_15507(Current);
	RTLE;
}

/* {EV_DIALOG_IMP}.enable_closeable */
void F1126_15507 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1126_15511(Current, (EIF_BOOLEAN) 1);
}

/* {EV_DIALOG_IMP}.disable_closeable */
void F1126_15508 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1126_15511(Current, (EIF_BOOLEAN) 0);
}

/* {EV_DIALOG_IMP}.default_window_position */
EIF_INTEGER_32 F1126_15509 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GTK_WIN_POS_CENTER;
}

/* {EV_DIALOG_IMP}.client_area */
EIF_POINTER F1126_15510 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) F206_4007(Current, *(EIF_POINTER *)(Current+ _PTROFF_66_24_10_7_0_0_));
}

/* {EV_DIALOG_IMP}.set_closeable */
void F1126_15511 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (arg1) {
		loc1 = (EIF_INTEGER_32) GDK_FUNC_CLOSE;
	}
	ti4_1 = (EIF_INTEGER_32) GDK_FUNC_MOVE;
	loc1 = eif_bit_or(loc1,ti4_1);
	ti4_1 = (EIF_INTEGER_32) GDK_FUNC_RESIZE;
	loc1 = eif_bit_or(loc1,ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_66_24_10_7_0_0_);
	tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	gdk_window_set_functions((GdkWindow*) tp1, (GdkWMFunction) loc1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_66_21_) = (EIF_BOOLEAN) arg1;
	RTLE;
}

/* {EV_DIALOG_IMP}.call_close_request_actions */
void F1126_15512 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN) !F1123_15451(Current)) {
		tb3 = *(EIF_BOOLEAN *)(Current+ _CHROFF_66_21_);
	}
	if (tb3) {
		tb3 = F1049_13621(RTCV(RTOSCF(14148,F1079_14148,(Current))));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1029_13065(Current);
	}
	if (tb1) {
		tr1 = RTLNS(1205, 1205, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1206_17317(RTCV(tr1), ((EIF_INTEGER_32) 42L));
		F1118_15316(Current, tr1);
		F1123_15461(Current);
	}
	RTLE;
}

/* {EV_DIALOG_IMP}.interface */
static EIF_REFERENCE F1126_15514_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1126_15514 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_32_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1126_15514_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_32_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit777 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
