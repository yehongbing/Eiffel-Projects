/*
 * Code for class EV_TITLED_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev579.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TITLED_WINDOW}.initialize */
void F982_12362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(1627,F33_1627,(RTCV(RTOSCF(8143,F792_8143,(Current)))));
	F982_12374(Current, tr1);
	F980_12322(Current);
	RTLE;
}

/* {EV_TITLED_WINDOW}.raise */
void F982_12367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1125_15492(RTCV(tr1));
	RTLE;
}

/* {EV_TITLED_WINDOW}.set_icon_pixmap */
void F982_12374 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1125_15498(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_TITLED_WINDOW}.implementation */
EIF_REFERENCE F982_12375 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_TITLED_WINDOW}.create_implementation */
void F982_12376 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1124, 1124, _OBJSIZ_63_23_10_7_0_4_0_0_);
	F1123_15409(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit579 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
