/*
 * Code for class FINITE [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi1302.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FINITE}.is_empty */
EIF_BOOLEAN F416_5127 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[Dtype(Current)-489])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit1302 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
