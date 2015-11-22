/*
 * Code for class DYNAMIC_CHAIN [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy1198.h"

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
EIF_BOOLEAN F606_5820 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F606_5821 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F606_5827 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[Dtype(Current)-273])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F280_4471(Current)) {
		F707_6631(Current);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F606_5830 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
		if (F280_4471(Current)) break;
		F707_6631(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4171[dtype-273])(Current, (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F606_5831 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(Current)-303])(Current);
	for (;;) {
		if (F413_5127(Current)) break;
		F707_6631(Current);
	}
	RTLE;
}

void EIF_Minit1198 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
