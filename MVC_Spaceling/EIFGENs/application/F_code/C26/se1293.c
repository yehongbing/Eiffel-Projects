/*
 * Code for class SEQUENCE [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se1293.h"

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
void F431_5133 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F284_4471(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
	}
	RTLE;
}

/* {SEQUENCE}.prune_all */
void F431_5134 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	for (;;) {
		if (F284_4471(Current)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
		if ((EIF_BOOLEAN) !F284_4471(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
		}
	}
	RTLE;
}

void EIF_Minit1293 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
