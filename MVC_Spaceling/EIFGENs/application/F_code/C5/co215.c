/*
 * Code for class COMPARABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co215.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COMPARABLE}.is_less_equal */
EIF_BOOLEAN F168_3568 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTCCL(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {COMPARABLE}.is_greater */
EIF_BOOLEAN F168_3569 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTCCL(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
	RTLE;
	return Result;
}

/* {COMPARABLE}.is_greater_equal */
EIF_BOOLEAN F168_3570 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTCCL(arg1);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(Current)-168])(RTCV(Current), tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {COMPARABLE}.is_equal */
EIF_BOOLEAN F168_3571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	tr1 = RTCCL(arg1);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(Current)-168])(RTCV(Current), tr1);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTCCL(Current);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3336[Dtype(arg1)-168])(RTCV(arg1), tr1);
		Result = (EIF_BOOLEAN) !tb1;
	}
	Result = (EIF_BOOLEAN) Result;
	RTLE;
	return Result;
}

/* {COMPARABLE}.max */
EIF_REFERENCE F168_3573 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTCCL(arg1);
	tb1 = F168_3570(RTCV(Current), tr1);
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

/* {COMPARABLE}.min */
EIF_REFERENCE F168_3574 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = RTCCL(arg1);
	tb1 = F168_3568(RTCV(Current), tr1);
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
