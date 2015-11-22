/*
 * Code for class EV_MENU_ITEM_LIST_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev239.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM_LIST_ACTION_SEQUENCES_I}.item_select_actions */
EIF_REFERENCE F183_3816 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3547[dtype-182]) == NULL)) {
		tr1 = F184_3819(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3547[dtype-182]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3547[dtype-182]);
}

/* {EV_MENU_ITEM_LIST_ACTION_SEQUENCES_I}.item_select_actions_internal */
static EIF_REFERENCE F183_3818_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F183_3818 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3547[Dtype(Current) - 182]);
	if (!r) {
		if (RTAT(741)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F183_3818_body (Current));
			*(EIF_REFERENCE *)(Current + O3547[Dtype(Current) - 182]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit239 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
