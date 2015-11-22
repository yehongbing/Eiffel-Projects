/*
 * Code for class EV_STANDARD_DIALOG_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev880.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STANDARD_DIALOG_I}.internal_accept */
EIF_REFERENCE F1183_16642 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) RTOSCF(2388,F65_2388,(Current));
}

/* {EV_STANDARD_DIALOG_I}.interface */
static EIF_REFERENCE F1183_16643_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1183_16643 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1183_16643_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit880 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
