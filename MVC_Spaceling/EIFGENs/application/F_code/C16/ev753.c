/*
 * Code for class EV_HORIZONTAL_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev753.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_HORIZONTAL_BOX_I}.pointer_offset */
EIF_INTEGER_32 F1104_14764 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13495,F1048_13495,(RTCV(F1093_14440(Current))));
	tr1 = F962_11297(RTCV(tr1));
	Result = F753_6930(RTCV(tr1));
	ti4_1 = F1081_14167(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {EV_HORIZONTAL_BOX_I}.docking_dimension_of_current_item */
EIF_INTEGER_32 F1104_14765 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F966_11518(RTCV(F1029_13066(Current)));
	Result = F950_11091(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_HORIZONTAL_BOX_I}.docking_dimension_of_current */
EIF_INTEGER_32 F1104_14766 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1081_14187(Current);
}

/* {EV_HORIZONTAL_BOX_I}.interface */
static EIF_REFERENCE F1104_14767_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1104_14767 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1104_14767_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit753 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
