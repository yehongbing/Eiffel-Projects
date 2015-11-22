/*
 * Code for class EV_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev620.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM}.parent */
EIF_REFERENCE F999_12677 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12326[Dtype(tr1)-1156])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_ITEM}.implementation */
EIF_REFERENCE F999_12680 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit620 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
