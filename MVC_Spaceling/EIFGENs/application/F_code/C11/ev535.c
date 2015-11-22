/*
 * Code for class EV_SCREEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev535.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCREEN}.pointer_position */
EIF_REFERENCE F962_11297 (EIF_REFERENCE Current)
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
	Result = F1201_17140(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN}.widget_at_mouse_pointer */
EIF_REFERENCE F962_11299 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12640[Dtype(tr1)-1196])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN}.set_pointer_position */
void F962_11303 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1201_17151(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EV_SCREEN}.width */
EIF_INTEGER_32 F962_11312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1201_17162(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN}.height */
EIF_INTEGER_32 F962_11313 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1201_17161(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN}.implementation */
EIF_REFERENCE F962_11317 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_SCREEN}.create_interface_objects */
void F962_11318 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_SCREEN}.create_implementation */
void F962_11319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1200, 1200, _OBJSIZ_6_1_2_1_0_3_0_0_);
	F1201_17139(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit535 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
