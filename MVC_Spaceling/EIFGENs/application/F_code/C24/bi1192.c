/*
 * Code for class BILINEAR [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi1192.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F295_4481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F621_5837(Current)) {
		Result = F621_5836(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F295_4484 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F621_5837(Current)) {
		tb1 = (EIF_BOOLEAN) !F413_5127(Current);
	}
	if (tb1) {
		F707_6611(Current);
	}
	F280_4467(Current, arg1);
	RTLE;
}

void EIF_Minit1192 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
