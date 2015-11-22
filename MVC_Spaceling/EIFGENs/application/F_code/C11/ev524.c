/*
 * Code for class EV_PIXMAPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev524.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAPABLE}.pixmap */
EIF_REFERENCE F953_11110 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11060[Dtype(tr1)-1085])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_PIXMAPABLE}.set_pixmap */
void F953_11112 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11061[Dtype(tr1)-1085])(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_PIXMAPABLE}.implementation */
EIF_REFERENCE F953_11117 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit524 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
