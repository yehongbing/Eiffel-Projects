/*
 * Code for class EV_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev537.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BITMAP}.implementation */
EIF_REFERENCE F963_11335 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_BITMAP}.create_interface_objects */
void F963_11336 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_BITMAP}.create_implementation */
void F963_11337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1198, 1198, _OBJSIZ_6_1_2_1_0_3_0_0_);
	F1199_17087(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit537 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
