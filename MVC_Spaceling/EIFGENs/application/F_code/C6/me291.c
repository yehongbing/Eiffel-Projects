/*
 * Code for class MEM_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me291.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F493_5225
static EIF_INTEGER_32 inline_F493_5225 (void)
{
	return sizeof(struct emallinfo);
	;
}
#define INLINE_F493_5225
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEM_INFO}.structure_size */
EIF_INTEGER_32 F493_5220 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F493_5225();
}

/* {MEM_INFO}.c_sizeof_emallinfo */
EIF_INTEGER_32 F493_5225 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F493_5225 ();
	return Result;
}

void EIF_Minit291 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
