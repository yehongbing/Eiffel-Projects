/*
 * Code for class EIFFEL_RUNTIME_PANIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei178.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_RUNTIME_PANIC}.code */
EIF_INTEGER_32 F131_3374 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) == ((EIF_INTEGER_32) 25L))) {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	}/* NOTREACHED */
	
}

/* {EIFFEL_RUNTIME_PANIC}.set_code */
void F131_3376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F131_3374(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

void EIF_Minit178 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
