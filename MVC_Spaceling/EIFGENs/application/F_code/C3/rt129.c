/*
 * Code for class RTF_FORMAT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt129.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RTF_FORMAT_I}.default_create */
void F90_2948 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	F90_2987(Current);
	RTLE;
}

/* {RTF_FORMAT_I}.internal_character_format_out */
EIF_REFERENCE F90_2985 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RTF_FORMAT_I}.internal_paragraph_format_out */
EIF_REFERENCE F90_2986 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RTF_FORMAT_I}.reset_internals */
void F90_2987 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTLE;
}

void EIF_Minit129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
