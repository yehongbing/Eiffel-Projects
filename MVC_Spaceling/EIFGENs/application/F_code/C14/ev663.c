/*
 * Code for class EV_ENVIRONMENT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev663.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ENVIRONMENT_I}.application */
EIF_REFERENCE F1030_13087 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = RTOSCF(13099,F1030_13099,(Current));
	Result = F1030_13100(Current, tr1);
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT_I}.application_i */
EIF_REFERENCE F1030_13088 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = RTOSCF(13099,F1030_13099,(Current));
	tr1 = F1030_13101(Current, tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT_I}.string_from_separate_string */
EIF_REFERENCE F1030_13097 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	loc5 = arg1;
	if (EIF_TEST(loc5)) {
		RTLE;
		return (EIF_REFERENCE) loc5;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8045[Dtype(arg1)-920])(RTCV(arg1));
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R8020[Dtype(arg1)-920])(RTCV(arg1));
		if (tb1) {
			tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F921_10331(RTCV(tr1), (EIF_CHARACTER_8) '\000', loc2);
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
			F925_10553(RTCV(tr1), tw1, loc2);
			loc3 = (EIF_REFERENCE) tr1;
		}
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc4 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R8008[Dtype(arg1)-922])(RTCV(arg1), loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R8132[Dtype(loc3)-922])(RTCV(loc3), loc4, loc1);
			loc1++;
		}
		RTLE;
		return (EIF_REFERENCE) loc3;
	}/* NOTREACHED */
	
}

/* {EV_ENVIRONMENT_I}.interface */
static EIF_REFERENCE F1030_13098_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1030_13098 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1030_13098_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ENVIRONMENT_I}.environment_handler */
static EIF_REFERENCE F1030_13099_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13099);
#define Result RTOSR(13099)
	RTOC_NEW(Result);
	tr1 = RTLNS(729, 729, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F730_6791(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13099);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1030_13099 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13099,F1030_13099_body,(Current));
}

/* {EV_ENVIRONMENT_I}.application_internal */
EIF_REFERENCE F1030_13100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = F730_6792(RTCV(arg1));
	return (EIF_REFERENCE) tr1;
}

/* {EV_ENVIRONMENT_I}.application_i_internal */
EIF_REFERENCE F1030_13101 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
	return (EIF_REFERENCE) tr1;
}

/* {EV_ENVIRONMENT_I}.destroy */
void F1030_13104 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit663 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
