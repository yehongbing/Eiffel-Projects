/*
 * Code for class EV_CONTAINER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev550.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CONTAINER}.item */
EIF_REFERENCE F969_11602 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11275[Dtype(tr1)-1096])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.background_pixmap */
EIF_REFERENCE F969_11605 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F953_11110(Current);
}

/* {EV_CONTAINER}.extend */
void F969_11611 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	loc2 = arg1;
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11282[Dtype(tr1)-1098])(RTCV(tr1), loc2);
	RTLE;
}

/* {EV_CONTAINER}.put */
void F969_11612 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11283[Dtype(tr1)-1097])(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_CONTAINER}.client_width */
EIF_INTEGER_32 F969_11615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = F1098_14652(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.client_height */
EIF_INTEGER_32 F969_11616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = F1098_14653(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.propagate_foreground_color */
void F969_11617 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11286[Dtype(tr1)-1096])(RTCV(tr1));
	RTLE;
}

/* {EV_CONTAINER}.propagate_background_color */
void F969_11618 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11287[Dtype(tr1)-1096])(RTCV(tr1));
	RTLE;
}

/* {EV_CONTAINER}.implementation */
EIF_REFERENCE F969_11630 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_CONTAINER}.cl_extend */
void F969_11633 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9021[Dtype(Current)-968])(Current, arg1);
}

/* {EV_CONTAINER}.cl_prune */
void F969_11634 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9024[Dtype(Current)-969])(Current, arg1);
}

void EIF_Minit550 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
