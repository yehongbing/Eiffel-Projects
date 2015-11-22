/*
 * Code for class EV_REGION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev501.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_REGION}.copy */
void F932_10778 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F930_10736(Current);
	}
	tb1 = F930_10740(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1047_13428(RTCV(tr1), arg1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1047_13431(RTCV(tr1));
	}
	RTLE;
}

/* {EV_REGION}.is_equal */
EIF_BOOLEAN F932_10779 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = '\0';
		tb2 = F930_10740(RTCV(arg1));
		if (tb2) {
			tb1 = F930_10740(Current);
		}
		if (tb1) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			Result = F1047_13430(RTCV(tr1), arg1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_REGION}.create_interface_objects */
void F932_10780 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_REGION}.create_implementation */
void F932_10781 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1046, 1046, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1047_13421(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_REGION}.implementation */
EIF_REFERENCE F932_10782 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit501 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
