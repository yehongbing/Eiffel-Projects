/*
 * Code for class EV_WIDGET_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev735.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_I}.internal_pointer_style */
EIF_REFERENCE F1095_14473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,Result);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O11014[Dtype(Current)-1080]);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc1 = Current;
		loc1 = RTRV(eif_non_attached_type(991), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = RTOSCF(1632,F33_1632,(RTCV(RTOSCF(3892,F199_3892,(Current)))));
		} else {
			Result = RTOSCF(1629,F33_1629,(RTCV(RTOSCF(3892,F199_3892,(Current)))));
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) loc2;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_I}.actual_drop_target_agent */
EIF_REFERENCE F1095_14474 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11239[Dtype(Current) - 1094]);
}


/* {EV_WIDGET_I}.real_target */
EIF_REFERENCE F1095_14475 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11240[Dtype(Current) - 1094]);
}


/* {EV_WIDGET_I}.default_key_processing_handler */
EIF_REFERENCE F1095_14476 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11241[Dtype(Current) - 1094]);
}


/* {EV_WIDGET_I}.interface */
static EIF_REFERENCE F1095_14494_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1095_14494 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1095_14494_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_I}.disable_default_processing_on_key */
EIF_BOOLEAN F1095_14495 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O11241[Dtype(Current)-1094]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_), arg1);
		;
		tb1 = tb1;
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit735 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
