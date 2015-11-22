/*
 * Code for class EV_TOOL_BAR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev780.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_I}.update_for_pick_and_drop */
void F1128_15527 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = F1057_13792(Current);
	F1057_13802(Current);
	for (;;) {
		if (F1057_13795(Current)) break;
		tr1 = F1057_13790(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R12328[Dtype(tr1)-1159])(RTCV(tr1), arg1);
		F1057_13804(Current);
	}
	F1057_13806(Current, loc1);
	RTLE;
}

/* {EV_TOOL_BAR_I}.interface */
static EIF_REFERENCE F1128_15528_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1128_15528 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1128_15528_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit780 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
