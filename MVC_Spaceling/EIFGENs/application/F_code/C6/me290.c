/*
 * Code for class MEMORY_STRUCTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me290.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEMORY_STRUCTURE}.make */
void F492_5199 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_POINTER *)(Current + O4591[dtype-491]) = (EIF_POINTER) loc1;
	tr1 = RTLNSMART(eif_non_attached_type(777));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4590[dtype-492])(Current);
	F778_7233(RTCV(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {MEMORY_STRUCTURE}.item */
EIF_POINTER F492_5202 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTLE;
		return (EIF_POINTER) *(EIF_POINTER *)(Current + O4591[Dtype(Current)-491]);
	} else {
		loc1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
			RTLE;
			return (EIF_POINTER) tp1;
		}
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {MEMORY_STRUCTURE}.managed_pointer */
EIF_REFERENCE F492_5206 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit290 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
