/*
 * Code for class EV_TEXT_ALIGNMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev115.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_ALIGNMENT}.set_left_alignment */
void F82_2823 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {EV_TEXT_ALIGNMENT}.set_center_alignment */
void F82_2824 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {EV_TEXT_ALIGNMENT}.set_right_alignment */
void F82_2825 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

/* {EV_TEXT_ALIGNMENT}.is_left_aligned */
EIF_BOOLEAN F82_2826 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == ((EIF_INTEGER_32) 0L));
}

/* {EV_TEXT_ALIGNMENT}.is_center_aligned */
EIF_BOOLEAN F82_2827 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == ((EIF_INTEGER_32) 1L));
}

void EIF_Minit115 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
