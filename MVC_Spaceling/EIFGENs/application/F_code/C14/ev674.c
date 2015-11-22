/*
 * Code for class EV_PARAGRAPH_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev674.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PARAGRAPH_FORMAT_IMP}.make */
void F1040_13281 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13080(Current, (EIF_BOOLEAN) 1);
}

/* {EV_PARAGRAPH_FORMAT_IMP}.alignment */
EIF_INTEGER_32 F1040_13282 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
}


/* {EV_PARAGRAPH_FORMAT_IMP}.set_alignment */
void F1040_13295 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) arg1;
}

/* {EV_PARAGRAPH_FORMAT_IMP}.destroy */
void F1040_13302 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit674 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
