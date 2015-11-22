/*
 * Code for class EV_STOCK_COLORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev41.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_COLORS}.white */
static EIF_REFERENCE F34_1826_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1826);
#define Result RTOSR(1826)
	RTOC_NEW(Result);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1826);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F34_1826 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1826,F34_1826_body,(Current));
}

/* {EV_STOCK_COLORS}.black */
static EIF_REFERENCE F34_1827_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1827);
#define Result RTOSR(1827)
	RTOC_NEW(Result);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1827);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F34_1827 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1827,F34_1827_body,(Current));
}

/* {EV_STOCK_COLORS}.gray */
static EIF_REFERENCE F34_1829_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1829);
#define Result RTOSR(1829)
	RTOC_NEW(Result);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F938_10888(RTCV(tr1), (EIF_REAL_32) 0.7, (EIF_REAL_32) 0.7, (EIF_REAL_32) 0.7);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1829);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F34_1829 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1829,F34_1829_body,(Current));
}

/* {EV_STOCK_COLORS}.default_background_color */
EIF_REFERENCE F34_1850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F40_2109(RTCV(RTOSCF(1853,F34_1853,(Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.default_foreground_color */
EIF_REFERENCE F34_1851 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F40_2112(RTCV(RTOSCF(1853,F34_1853,(Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.implementation */
static EIF_REFERENCE F34_1853_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (1853);
#define Result RTOSR(1853)
	RTOC_NEW(Result);
	tr1 = RTLNS(39, 39, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (1853);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F34_1853 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(1853,F34_1853_body,(Current));
}

void EIF_Minit41 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
