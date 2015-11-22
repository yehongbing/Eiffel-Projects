/*
 * Code for class GC_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gc293.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F495_5250
static EIF_INTEGER_32 inline_F495_5250 (void)
{
	return sizeof(struct gacstat);
	;
}
#define INLINE_F495_5250
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GC_INFO}.structure_size */
EIF_INTEGER_32 F495_5249 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F495_5250();
}

/* {GC_INFO}.c_sizeof_gacstat */
EIF_INTEGER_32 F495_5250 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F495_5250 ();
	return Result;
}

void EIF_Minit293 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
