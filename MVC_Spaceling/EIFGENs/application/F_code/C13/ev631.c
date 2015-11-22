/*
 * Code for class EV_MENU_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev631.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM}.make_with_text_and_action */
void F1006_12732 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	
	RTGC;
	F930_10736(Current);
	F958_11228(Current, arg1);
	tr1 = F49_2224(Current);
	F719_6679(RTCV(tr1), arg2);
	RTLE;
}

/* {EV_MENU_ITEM}.implementation */
EIF_REFERENCE F1006_12738 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_MENU_ITEM}.create_implementation */
void F1006_12739 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1171, 1171, _OBJSIZ_22_6_6_1_0_4_0_0_);
	F1172_16481(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit631 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
