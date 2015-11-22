/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl305.h"
#include <string.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLATFORM}.is_thread_capable */
EIF_BOOLEAN F504_5519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable;
	return Result;
}

/* {PLATFORM}.is_windows */
EIF_BOOLEAN F504_5522 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows;
	return Result;
}

/* {PLATFORM}.is_little_endian */
static EIF_BOOLEAN F504_5527_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	

	
	RTEV;
	RTGC;
	RTOSP (5527);
#define Result RTOSR(5527)
	loc1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 17185L);
	loc2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	memcpy((void *)(EIF_NATURAL_8 *) &(loc3), (const void *) (EIF_NATURAL_16 *) &(loc1), (size_t) ((EIF_INTEGER_32) 1L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == loc2);
	RTOSE (5527);
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F504_5527 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(5527,F504_5527_body,(Current));
}

/* {PLATFORM}.pointer_bytes */
EIF_INTEGER_32 F504_5541 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes;
	return Result;
}

void EIF_Minit305 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
