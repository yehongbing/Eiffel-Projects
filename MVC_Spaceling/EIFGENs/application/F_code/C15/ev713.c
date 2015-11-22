/*
 * Code for class EV_PND_DEFERRED_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev713.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PND_DEFERRED_ITEM}.create_drop_actions */
EIF_REFERENCE F1078_14131 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(732, 732, _OBJSIZ_10_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = F1029_13066(Current);
	F792_8140(RTCV(tr1), Result);
	RTLE;
	return Result;
}

/* {EV_PND_DEFERRED_ITEM}.interface */
static EIF_REFERENCE F1078_14132_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1078_14132 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1078_14132_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit713 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
