/*
 * Code for class EV_POINTER_STYLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev511.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POINTER_STYLE}.make_predefined */
void F940_10957 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F930_10736(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1037_13248(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.set_x_hotspot */
void F940_10961 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1037_13251(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.set_y_hotspot */
void F940_10962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1037_13252(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.x_hotspot */
EIF_INTEGER_32 F940_10963 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.y_hotspot */
EIF_INTEGER_32 F940_10964 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_1_);
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.width */
EIF_INTEGER_32 F940_10965 (EIF_REFERENCE Current)
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
	Result = F1037_13254(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.height */
EIF_INTEGER_32 F940_10966 (EIF_REFERENCE Current)
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
	Result = F1037_13255(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.copy */
void F940_10967 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F930_10736(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1037_13262(RTCV(tr1), arg1);
	ti4_1 = F940_10963(RTCV(arg1));
	F940_10961(Current, ti4_1);
	ti4_1 = F940_10964(RTCV(arg1));
	F940_10962(Current, ti4_1);
	RTLE;
}

/* {EV_POINTER_STYLE}.is_equal */
EIF_BOOLEAN F940_10968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		Result = '\0';
		ti4_1 = F940_10966(RTCV(arg1));
		ti4_2 = F940_10965(RTCV(arg1));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (F940_10965(Current) * ti4_1) == (EIF_INTEGER_32) (ti4_2 * F940_10966(Current)))) {
			tb1 = '\0';
			ti4_1 = F940_10963(RTCV(arg1));
			if ((EIF_BOOLEAN)(ti4_1 == F940_10963(Current))) {
				ti4_1 = F940_10964(RTCV(arg1));
				tb1 = (EIF_BOOLEAN)(ti4_1 == F940_10964(Current));
			}
			Result = tb1;
		}
		Result = (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.create_interface_objects */
void F940_10969 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_POINTER_STYLE}.create_implementation */
void F940_10970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1036, 1036, _OBJSIZ_1_1_0_3_0_1_0_0_);
	F1037_13246(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_POINTER_STYLE}.implementation */
EIF_REFERENCE F940_10971 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


void EIF_Minit511 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
