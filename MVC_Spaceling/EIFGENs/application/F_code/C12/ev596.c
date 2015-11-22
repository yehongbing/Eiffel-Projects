/*
 * Code for class EV_TEXT_COMPONENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev596.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_COMPONENT}.disable_edit */
void F992_12526 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R12044[Dtype(tr1)-1149])(RTCV(tr1), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_TEXT_COMPONENT}.implementation */
EIF_REFERENCE F992_12544 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit596 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
