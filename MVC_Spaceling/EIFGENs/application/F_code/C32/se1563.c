/*
 * Code for class SEQUENCE [INTEGER_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se1563.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SEQUENCE}.prune */
void F436_5133 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F288_4471(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
	}
	RTLE;
}

/* {SEQUENCE}.prune_all */
void F436_5134 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	for (;;) {
		if (F288_4471(Current)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
		if ((EIF_BOOLEAN) !F288_4471(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
		}
	}
	RTLE;
}

void EIF_Minit1563 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
