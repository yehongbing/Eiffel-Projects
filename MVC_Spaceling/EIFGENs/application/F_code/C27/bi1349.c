/*
 * Code for class BILINEAR [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi1349.h"

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
EIF_BOOLEAN F299_4481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!F625_5837(Current)) {
		Result = F625_5836(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F299_4484 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if (F625_5837(Current)) {
		tb1 = (EIF_BOOLEAN) !F417_5127(Current);
	}
	if (tb1) {
		F711_6611(Current);
	}
	F285_4467(Current, arg1);
	RTLE;
}

void EIF_Minit1349 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
