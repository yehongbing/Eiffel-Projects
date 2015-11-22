/*
 * Code for class MISMATCH_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi322.h"
#include <eif_retrieve.h>
#include "../C20/ha994.h"
#include "../C7/mi322.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_INFORMATION}.default_create */
void F700_6550 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F692_6432(Current, ((EIF_INTEGER_32) 5L));
	RTOSCP(6560,F700_6560,(Current));
	RTLE;
}

/* {MISMATCH_INFORMATION}.class_name */
EIF_REFERENCE F700_6551 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(6554,F700_6554,(Current));
	tr1 = F692_6436(Current, tr1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(922),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.stored_version */
EIF_REFERENCE F700_6552 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {MISMATCH_INFORMATION}.current_version */
EIF_REFERENCE F700_6553 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {MISMATCH_INFORMATION}.type_name_key */

EIF_REFERENCE F700_6554 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (6554,RTMS_EX_H("_type_name",10,803527013));
}

/* {MISMATCH_INFORMATION}.out */
EIF_REFERENCE F700_6557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F700_6551(Current))+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	F921_10330(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 40L) * ti4_2)));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("Attributes of original class ",29,488257824);
	F923_10435(RTCV(Result), tr1);
	tr1 = F700_6551(Current);
	F923_10435(RTCV(Result), tr1);
	tr1 = RTMS_EX_H(": ",2,14880);
	F923_10435(RTCV(Result), tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_);
	F923_10439(RTCV(Result), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	tr1 = RTMS_EX_H(" item",5,1769481581);
	F923_10435(RTCV(Result), tr1);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_3_0_6_) - ((EIF_INTEGER_32) 1L)) != ((EIF_INTEGER_32) 1L))) {
		F923_10449(RTCV(Result), (EIF_CHARACTER_8) 's');
	}
	F923_10449(RTCV(Result), (EIF_CHARACTER_8) '\012');
	F692_6469(Current);
	for (;;) {
		if (F692_6464(Current)) break;
		loc2 = F692_6443(Current);
		if (!RTEQ(loc2, RTOSCF(6554,F700_6554,(Current)))) {
			tr1 = RTMS_EX_H("  ",2,8224);
			F923_10435(RTCV(Result), tr1);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F923_10435(RTCV(Result), tr1);
			} else {
				F923_10435(RTCV(Result), loc2);
			}
			tr1 = RTMS_EX_H(": ",2,14880);
			F923_10435(RTCV(Result), tr1);
			loc1 = F692_6442(Current);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				tr1 = RTMS_EX_H("Void",4,1450142052);
				F923_10435(RTCV(Result), tr1);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc1)-0])(RTCV(loc1));
				F923_10435(RTCV(Result), tr1);
			}
			F923_10449(RTCV(Result), (EIF_CHARACTER_8) '\012');
		}
		F692_6470(Current);
	}
	RTLE;
	return Result;
}

/* {MISMATCH_INFORMATION}.internal_put */
void F700_6558 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(922, 922, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F921_10333(RTCV(tr1), arg2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTCCL(arg1);
	F692_6476(Current, tr1, loc1);
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_string_versions */
void F700_6559 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != loc1)) {
		tr1 = RTLNS(927, 927, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F921_10333(RTCV(tr1), arg1);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = F928_10709(RTCV(loc2));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc2;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(arg2 != loc1)) {
		tr1 = RTLNS(927, 927, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F921_10333(RTCV(tr1), arg2);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = F928_10709(RTCV(loc2));
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
		} else {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc2;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {MISMATCH_INFORMATION}.set_callback_pointers */
static void F700_6560_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (6560);
	F700_6561(Current, Current, (EIF_POINTER) F692_6485, (EIF_POINTER) F700_6558, (EIF_POINTER) F700_6559);
	RTOSE (6560);
	RTEE;
#undef Result
}

void F700_6560 (EIF_REFERENCE Current)
{
	GTCX
	RTOSCP(6560,F700_6560_body,(Current));
}

/* {MISMATCH_INFORMATION}.set_mismatch_information_access */
void F700_6561 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	{
		EIF_OBJECT larg1 = RTHP(arg1);
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;
		EIF_POINTER larg4 = arg4;set_mismatch_information_access((EIF_OBJECT) larg1, (EIF_PROCEDURE) larg2, (EIF_PROCEDURE) larg3, (EIF_PROCEDURE) larg4);
		
		RTHF(1);
	}
	RTLE;
}

void EIF_Minit322 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
