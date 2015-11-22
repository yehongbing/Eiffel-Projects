/*
 * Code for class CELL [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce1430.h"

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
EIF_INTEGER_32 F236_4164 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3869[Dtype(Current) - 233]);
}


/* {CELL}.put */
void F236_4165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3869[Dtype(Current)-233]) = (EIF_INTEGER_32) arg1;
}

/* {CELL}.replace */
void F236_4166 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3869[Dtype(Current)-233]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit1430 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
