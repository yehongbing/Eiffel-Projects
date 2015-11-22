/*
 * Code for class EV_PIXEL_BUFFER_ITERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev283.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_ITERATOR}.start */
void F304_4488 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1053_13755(RTCV(tr1));
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 - tu4_2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1053_13754(RTCV(tr1));
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 - tu4_2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_NATURAL_32) tu4_1;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_) = (EIF_NATURAL_32) tu4_1;
	RTLE;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.after */
EIF_BOOLEAN F304_4489 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_) > *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_));
}

/* {EV_PIXEL_BUFFER_ITERATOR}.forth */
void F304_4491 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_) == *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_))) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_NATURAL_32) tu4_1;
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_)) += tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_)) += tu4_1;
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.before */
EIF_BOOLEAN F304_4492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.back */
void F304_4493 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_) == tu4_1)) {
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_) = (EIF_NATURAL_32) *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_)) -= tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_)) -= tu4_1;
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.is_empty */
EIF_BOOLEAN F304_4494 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.item */
EIF_REFERENCE F304_4499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCV(tr1) + O10657[Dtype(tr1)-1051]);
	if (tb1) {
		Result = *(EIF_REFERENCE *)(Current);
		F27_871(RTCV(Result), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_));
	} else {
		tr1 = RTLNS(26, 26, _OBJSIZ_1_4_0_3_0_0_0_0_);
		F27_858(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.index */
EIF_INTEGER_32 F304_4501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_);
	tu4_2 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_);
	tu4_3 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 * tu4_2) + tu4_3);
	RTLE;
	return Result;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.internal_item */
EIF_REFERENCE F304_4504 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EV_PIXEL_BUFFER_ITERATOR}.pixel_buffer */
EIF_REFERENCE F304_4505 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit283 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
