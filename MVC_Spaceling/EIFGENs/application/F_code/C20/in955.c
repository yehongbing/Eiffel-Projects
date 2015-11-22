/*
 * Code for class INDEXABLE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in955.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INDEXABLE_ITERATION_CURSOR}.make */
void F529_5658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O5028[dtype-528]) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(29),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		*(EIF_NATURAL_32 *)(Current + O5020[dtype-528]) = (EIF_NATURAL_32) tu4_1;
	} else {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_32 *)(Current + O5020[dtype-528]) = (EIF_NATURAL_32) tu4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O5015[dtype-528]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O5021[dtype-528]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F529_5671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5022[dtype-528])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O5028[dtype-528]);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R5033[Dtype(tr1)-582])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O5012[dtype-528]));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F529_5673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + O5028[dtype-528]);
	loc1 = tr1;
	loc1 = RTRV(eif_non_attached_type(29),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(RTCV(loc1)+ _LNGOFF_0_0_0_0_);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O5020[dtype-528]));
	}
	RTLE;
	return Result;
}

/* {INDEXABLE_ITERATION_CURSOR}.start */
void F529_5678 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5029[dtype-528])(Current);
	if (*(EIF_BOOLEAN *)(Current + O5021[dtype-528])) {
		ti4_1 = F583_5714(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O5013[dtype-528]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F583_5712(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O5014[dtype-528]) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F583_5714(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O5014[dtype-528]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F583_5712(RTCV(loc1));
		*(EIF_INTEGER_32 *)(Current + O5013[dtype-528]) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O5012[dtype-528]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O5013[dtype-528]);
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.forth */
void F529_5679 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O5021[dtype-528])) {
		(*(EIF_INTEGER_32 *)(Current + O5012[dtype-528])) -= *(EIF_INTEGER_32 *)(Current + O5015[dtype-528]);
	} else {
		(*(EIF_INTEGER_32 *)(Current + O5012[dtype-528])) += *(EIF_INTEGER_32 *)(Current + O5015[dtype-528]);
	}
	RTLE;
}

/* {INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F529_5680 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O5028[Dtype(Current) - 528]);
}


/* {INDEXABLE_ITERATION_CURSOR}.index_set */
EIF_REFERENCE F529_5681 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O5028[Dtype(Current)-528]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5032[Dtype(tr1)-582])(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
