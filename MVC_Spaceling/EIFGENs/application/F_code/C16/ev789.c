/*
 * Code for class EV_TEXT_FIELD_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev789.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_FIELD_I}.interface */
static EIF_REFERENCE F1135_15673_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1135_15673 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1135_15673_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit789 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
