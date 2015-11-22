/*
 * Code for class EV_TIMEOUT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev675.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TIMEOUT_I}.on_timeout */
void F1041_13307 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10321[dtype-1040]);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current + O10321[dtype-1040]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(RTCV(F1029_13066(Current)) + _REFACS_2_);
		F732_6800(RTCV(tr1), NULL);
		(*(EIF_INTEGER_32 *)(Current + O10317[dtype-1040]))++;
		*(EIF_BOOLEAN *)(Current + O10321[dtype-1040]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_TIMEOUT_I}.interface */
static EIF_REFERENCE F1041_13309_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1041_13309 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1041_13309_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit675 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
