/*
 * Code for class DYNAMIC_CHAIN [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy1319.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.extendible */
EIF_BOOLEAN F609_5820 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F609_5821 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F609_5827 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F284_4471(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F609_5830 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	for (;;) {
		if (F284_4471(Current)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F609_5831 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[dtype-303])(Current);
	for (;;) {
		if (F416_5127(Current)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[dtype-404])(Current);
	}
	RTLE;
}

void EIF_Minit1319 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
