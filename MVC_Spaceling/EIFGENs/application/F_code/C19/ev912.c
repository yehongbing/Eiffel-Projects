/*
 * Code for class EV_CHARACTER_FORMAT_RANGE_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev912.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.make_with_flags */
void F1207_17328 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 1L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 2L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 4L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 8L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 16L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 32L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 64L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 128L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	ti4_1 = eif_bit_or(arg1,((EIF_INTEGER_32) 256L));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTLE;
}

void EIF_Minit912 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
