/*
 * Code for class EV_ACCELERATOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev665.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR_I}.enable_parented */
void F1032_13114 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O10185[Dtype(Current)-1031]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_I}.disable_parented */
void F1032_13115 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O10185[Dtype(Current)-1031]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_ACCELERATOR_I}.actions */
EIF_REFERENCE F1032_13120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(737));
		F726_6713(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_1_);
}

/* {EV_ACCELERATOR_I}.hash_code */
EIF_INTEGER_32 F1032_13128 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_0_0_0_);
	Result = F1032_13129(Current, ti4_1, *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR_I}.hash_code_function */
EIF_INTEGER_32 F1032_13129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) arg1;
	if (arg2) {
		Result += ((EIF_INTEGER_32) 2048L);
	}
	if (arg3) {
		Result += ((EIF_INTEGER_32) 1024L);
	}
	if (arg4) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 512L));
	}
	return Result;
}

/* {EV_ACCELERATOR_I}.actions_internal */
static EIF_REFERENCE F1032_13130_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1032_13130 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1032_13130_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ACCELERATOR_I}.interface */
static EIF_REFERENCE F1032_13131_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1032_13131 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1032_13131_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit665 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
