/*
 * Code for class EV_SCROLLABLE_AREA
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev574.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCROLLABLE_AREA}.show_horizontal_scroll_bar */
void F979_12294 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1122_15391(RTCV(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.show_vertical_scroll_bar */
void F979_12296 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1122_15393(RTCV(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.hide_vertical_scroll_bar */
void F979_12297 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1122_15394(RTCV(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.implementation */
EIF_REFERENCE F979_12299 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_SCROLLABLE_AREA}.create_implementation */
void F979_12300 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1121, 1121, _OBJSIZ_47_11_10_6_0_5_0_0_);
	F1122_15379(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit574 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
