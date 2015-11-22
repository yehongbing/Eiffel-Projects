/*
 * Code for class EV_TEXT_ALIGNABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev532.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_ALIGNABLE}.align_text_center */
void F959_11236 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11083[Dtype(tr1)-1119])(RTCV(tr1));
	RTLE;
}

/* {EV_TEXT_ALIGNABLE}.align_text_left */
void F959_11238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11084[Dtype(tr1)-1119])(RTCV(tr1));
	RTLE;
}

/* {EV_TEXT_ALIGNABLE}.implementation */
EIF_REFERENCE F959_11239 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit532 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
