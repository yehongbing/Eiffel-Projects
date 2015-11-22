/*
 * Code for class EV_LITE_ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev983.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LITE_ACTION_SEQUENCE}.call */
void F732_6800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) (F701_6600(Current) > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(6799,F731_6799,(Current))) + _REFACS_1_);
		tr1 = F1030_13088(RTCV(tr1));
		F1048_13488(RTCV(tr1));
		F726_6716(Current, arg1);
	}
	RTLE;
}

void EIF_Minit983 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
