/*
 * Code for class EV_VIEWPORT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev763.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_VIEWPORT_I}.set_offset */
void F1113_15232 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11820[dtype-1120])(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11821[dtype-1120])(Current, arg2);
	RTLE;
}

/* {EV_VIEWPORT_I}.set_item_width */
void F1113_15233 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F950_11092(RTCV(F1097_14526(Current)));
	ti4_1 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	F1121_15365(Current, arg1, ti4_1);
	RTLE;
}

/* {EV_VIEWPORT_I}.set_item_height */
void F1113_15234 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = F950_11091(RTCV(F1097_14526(Current)));
	ti4_1 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	F1121_15365(Current, ti4_1, arg1);
	RTLE;
}

void EIF_Minit763 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
