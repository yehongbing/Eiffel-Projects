/*
 * Code for class EV_STOCK_COLORS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev54.h"
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

/* {EV_STOCK_COLORS_IMP}.default_background_color */
EIF_REFERENCE F40_2109 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) gtk_dialog_new();
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	Result = F40_2116(Current, loc1, ((EIF_INTEGER_32) 4L), ti4_1);
	gtk_widget_destroy((GtkWidget*) loc1);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.default_foreground_color */
EIF_REFERENCE F40_2112 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) gtk_dialog_new();
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	Result = F40_2116(Current, loc1, ((EIF_INTEGER_32) 3L), ti4_1);
	gtk_widget_destroy((GtkWidget*) loc1);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.color_from_state */
EIF_REFERENCE F40_2116 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) arg1);
	switch (arg2) {
		case 1L:
			loc2 = (EIF_POINTER) (((GtkStyle *)loc1)->text);
			break;
		case 2L:
			loc2 = (EIF_POINTER) (((GtkStyle *)loc1)->base);
			break;
		case 4L:
			loc2 = (EIF_POINTER) (((GtkStyle *)loc1)->bg);
			break;
		case 3L:
			loc2 = (EIF_POINTER) (((GtkStyle *)loc1)->fg);
			break;
		default:
			RTEC(EN_WHEN);
	}
	ti4_1 = (EIF_INTEGER_32) sizeof(GdkColor);
	loc2 = RTPOF(loc2,(EIF_INTEGER_32) (arg3 * ti4_1));
	loc3 = (EIF_INTEGER_32) (((GdkColor *)loc2)->red);
	loc4 = (EIF_INTEGER_32) (((GdkColor *)loc2)->green);
	loc5 = (EIF_INTEGER_32) (((GdkColor *)loc2)->blue);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F938_10908(RTCV(Result), loc3, loc4, loc5);
	RTLE;
	return Result;
}

void EIF_Minit54 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
