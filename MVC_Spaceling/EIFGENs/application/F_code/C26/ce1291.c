/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce1291.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_BOOLEAN F235_4164 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3869[Dtype(Current) - 233]);
}


/* {CELL}.put */
void F235_4165 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O3869[Dtype(Current)-233]) = (EIF_BOOLEAN) arg1;
}

/* {CELL}.replace */
void F235_4166 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O3869[Dtype(Current)-233]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit1291 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
