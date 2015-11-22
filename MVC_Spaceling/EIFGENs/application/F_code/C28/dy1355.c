/*
 * Code for class DYNAMIC_CHAIN [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy1355.h"

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
EIF_BOOLEAN F610_5820 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F610_5821 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F610_5827 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[Dtype(Current)-273])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F285_4471(Current)) {
		F711_6631(Current);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F610_5830 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
		if (F285_4471(Current)) break;
		F711_6631(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F610_5831 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(Current)-303])(Current);
	for (;;) {
		if (F417_5127(Current)) break;
		F711_6631(Current);
	}
	RTLE;
}

void EIF_Minit1355 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
