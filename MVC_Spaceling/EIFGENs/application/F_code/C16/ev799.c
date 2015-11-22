/*
 * Code for class EV_COMBO_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev799.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COMBO_BOX_I}.interface */
static EIF_REFERENCE F1139_15697_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1139_15697 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1139_15697_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_COMBO_BOX_I}.initialize_hints */
void F1139_15698 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O12124[dtype-1138]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O12125[dtype-1138]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTLE;
}

void EIF_Minit799 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
