/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li987.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.right */
EIF_REFERENCE F239_4167 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3873[Dtype(Current) - 238]);
}


/* {LINKABLE}.put_right */
void F239_4168 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3873[Dtype(Current)-238]) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F239_4169 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + O3873[Dtype(Current)-238]) = (EIF_REFERENCE) NULL;
}

void EIF_Minit987 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
