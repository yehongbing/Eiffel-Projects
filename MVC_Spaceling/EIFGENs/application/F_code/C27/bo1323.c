/*
 * Code for class BOUNDED [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo1323.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOUNDED}.full */
EIF_BOOLEAN F469_5148 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4557[dtype-489])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

void EIF_Minit1323 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif