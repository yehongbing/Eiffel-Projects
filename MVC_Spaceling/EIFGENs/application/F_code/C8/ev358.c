/*
 * Code for class EV_RECTANGLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev358.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RECTANGLE}.out */
EIF_REFERENCE F752_6923 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTMS_EX_H("(X: ",4,676870688);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr2 = c_outi(ti4_1);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H(", Y: ",5,543056416);
	tr1 = F923_10437(RTCV(tr1), tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr2 = c_outi(ti4_1);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H(", Width: ",9,1306770464);
	tr1 = F923_10437(RTCV(tr1), tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_);
	tr2 = c_outi(ti4_1);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H(", Height: ",10,1818164768);
	tr1 = F923_10437(RTCV(tr1), tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_3_);
	tr2 = c_outi(ti4_1);
	tr1 = F923_10437(RTCV(tr1), tr2);
	tr2 = RTMS_EX_H(")",1,41);
	Result = F923_10437(RTCV(tr1), tr2);
	RTLE;
	return Result;
}

void EIF_Minit358 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
