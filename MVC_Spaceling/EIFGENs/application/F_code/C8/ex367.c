/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex367.h"
#include "eif_dir.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F775_7089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
	F778_7233(RTCV(tr1), loc1);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		tr1 = RTLNS(794, 794, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H(".",1,46);
		F795_8427(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			loc1 = (EIF_INTEGER_32) loc2;
			F778_7317(RTCV(loc3), loc1);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) tp1, (EIF_INTEGER) loc1);
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			tr1 = RTLNS(794, 794, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
			F795_8431(RTCV(tr1), tp1);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(794, 794, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H(".",1,46);
			F795_8427(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F775_7107 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	
	
	eif_sleep(arg1);
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F775_7112 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F775_7120 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit367 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
