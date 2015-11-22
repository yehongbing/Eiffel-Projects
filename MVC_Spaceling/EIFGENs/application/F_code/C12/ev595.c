/*
 * Code for class EV_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev595.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CURSOR}.set_x_hotspot */
void F991_12512 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_3_0_1_) = (EIF_INTEGER_32) arg1;
}

/* {EV_CURSOR}.set_y_hotspot */
void F991_12513 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_3_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {EV_CURSOR}.copy */
void F991_12514 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL)) {
		F930_10736(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1202_17208(RTCV(tr1), arg1);
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(990), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_6_3_0_1_);
		F991_12512(Current, ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_6_3_0_2_);
		F991_12513(Current, ti4_1);
	} else {
		F991_12512(Current, ((EIF_INTEGER_32) 0L));
		F991_12513(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

void EIF_Minit595 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
