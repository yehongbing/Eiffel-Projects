/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi320.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F690_6365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,Current);
	
	RTGC;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = RTMS_EX_H("Mismatch: ",10,1538098208);
	F921_10332(RTCV(tr1), tr2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(115, 115, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = F1_5(Current);
	tr1 = F796_8509(RTCV(tr1));
	F923_10435(RTCV(loc1), tr1);
	F116_3290(RTCV(loc2), loc1);
	RTLE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F690_6366_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (6366);
#define Result RTOSR(6366)
	RTOC_NEW(Result);
	tr1 = RTLNS(699, 699, _OBJSIZ_9_3_0_7_0_0_0_0_);
	F700_6550(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (6366);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F690_6366 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(6366,F690_6366_body,(Current));
}

void EIF_Minit320 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
