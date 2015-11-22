/*
 * Code for class EV_DIALOG_NAMES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev83.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_NAMES}.ev_ok */
static EIF_REFERENCE F65_2388_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (2388);
#define Result RTOSR(2388)
	RTOC_NEW(Result);
	tr1 = RTLNS(928, 928, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("OK",2,20299);
	F929_10714(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2388);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F65_2388 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2388,F65_2388_body,(Current));
}

/* {EV_DIALOG_NAMES}.ev_cancel */
static EIF_REFERENCE F65_2392_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (2392);
#define Result RTOSR(2392)
	RTOC_NEW(Result);
	tr1 = RTLNS(928, 928, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Cancel",6,1984480108);
	F929_10714(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (2392);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F65_2392 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(2392,F65_2392_body,(Current));
}

void EIF_Minit83 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
