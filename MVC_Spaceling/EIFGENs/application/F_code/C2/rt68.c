/*
 * Code for class RT_DEBUGGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt68.h"
#include "eif_main.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F51_2255
static void inline_F51_2255 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	set_debug_mode (arg1);
#endif
	;
}
#define INLINE_F51_2255
#endif
#ifndef INLINE_F51_2256
static EIF_INTEGER_32 inline_F51_2256 (void)
{
	#ifdef WORKBENCH
	return is_debug_mode();
#else
	return 0;
#endif
	;
}
#define INLINE_F51_2256
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DEBUGGER}.discard_debug */
void F51_2250 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F51_2255(((EIF_INTEGER_32) 0L));
}

/* {RT_DEBUGGER}.enable_debug */
void F51_2251 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F51_2255(((EIF_INTEGER_32) 1L));
}

/* {RT_DEBUGGER}.restore_debug_state */
void F51_2252 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (arg1) {
		F51_2251(Current);
	} else {
		F51_2250(Current);
	}
	RTLE;
}

/* {RT_DEBUGGER}.debug_state */
EIF_BOOLEAN F51_2253 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = inline_F51_2256();
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	return Result;
}

/* {RT_DEBUGGER}.rt_set_debug_mode */
void F51_2255 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	inline_F51_2255 ((EIF_INTEGER_32) arg1);
}

/* {RT_DEBUGGER}.rt_debug_mode */
EIF_INTEGER_32 F51_2256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F51_2256 ();
	return Result;
}

void EIF_Minit68 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
