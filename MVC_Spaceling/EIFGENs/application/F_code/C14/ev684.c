/*
 * Code for class EV_REGION_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev684.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_REGION_IMP}.make */
void F1047_13421 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gdk_region_new();
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_REGION_IMP}.copy_region */
void F1047_13428 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	
	RTGC;
	F1047_13432(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_non_attached_type(1046), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_1_1_0_0_0_0_);
	tp1 = (EIF_POINTER) gdk_region_copy((GdkRegion*) tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_REGION_IMP}.is_region_equal */
EIF_BOOLEAN F1047_13430 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_non_attached_type(1046), loc1);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
		tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_1_1_0_0_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(gdk_region_equal((GdkRegion*) tp1, (GdkRegion*) tp2));
	}
	RTLE;
	return Result;
}

/* {EV_REGION_IMP}.destroy */
void F1047_13431 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1029_13082(Current, (EIF_BOOLEAN) 1);
	F1047_13432(Current);
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_REGION_IMP}.dispose */
void F1047_13432 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
		gdk_region_destroy((GdkRegion*) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

void EIF_Minit684 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
