/*
 * Code for class EV_NOTEBOOK_TAB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev661.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK_TAB}.notebook */
EIF_REFERENCE F1028_13053 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.widget */
EIF_REFERENCE F1028_13054 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.is_destroyed */
EIF_BOOLEAN F1028_13055 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F1029_13065(RTCV(tr1));
	if (!tb1) {
		tb1 = '\0';
		tb2 = '\0';
		tr1 = F1028_13053(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = F1028_13054(Current);
			loc2 = tr1;
			tb2 = EIF_TEST(loc2);
		}
		if (tb2) {
			tb2 = F585_5761(RTCV(loc1), loc2);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.implementation */
EIF_REFERENCE F1028_13057 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_NOTEBOOK_TAB}.create_interface_objects */
void F1028_13058 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_NOTEBOOK_TAB}.create_implementation */
void F1028_13059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1203, 1203, _OBJSIZ_3_1_0_0_0_0_0_0_);
	F1204_17232(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit661 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
