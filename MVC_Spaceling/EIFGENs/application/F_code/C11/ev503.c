/*
 * Code for class EV_CLIPBOARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev503.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CLIPBOARD}.implementation */
EIF_REFERENCE F934_10813 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_CLIPBOARD}.create_interface_objects */
void F934_10814 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CLIPBOARD}.create_implementation */
void F934_10815 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1091, 1091, _OBJSIZ_1_1_0_0_0_2_0_0_);
	F1092_14286(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit503 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
