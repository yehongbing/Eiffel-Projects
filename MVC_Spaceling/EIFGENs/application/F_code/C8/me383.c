/*
 * Code for class MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me383.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEMORY}.dispose */
void F783_7495 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {MEMORY}.full_coalesce */
void F783_7497 (EIF_REFERENCE Current)
{
	GTCX
	
	eif_mem_coalesc();
	
}

/* {MEMORY}.full_collect */
void F783_7499 (EIF_REFERENCE Current)
{
	GTCX
	
	plsc();
	
}

void EIF_Minit383 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
