/*
 * Code for class EV_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev505.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ENVIRONMENT}.application */
EIF_REFERENCE F936_10837 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1030_13087(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT}.implementation */
EIF_REFERENCE F936_10847 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_ENVIRONMENT}.create_interface_objects */
void F936_10848 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ENVIRONMENT}.create_implementation */
void F936_10849 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(10748,F930_10748,(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1029_13080(RTCV(tr1), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1029_13075(RTCV(tr1), ((EIF_INTEGER_8) 5L), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1029_13075(RTCV(tr1), ((EIF_INTEGER_8) 4L), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1029_13075(RTCV(tr1), ((EIF_INTEGER_8) 0L), (EIF_BOOLEAN) 0);
	RTLE;
}

void EIF_Minit505 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
