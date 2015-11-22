/*
 * Code for class REFLECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re299.h"
#include "eif_gen_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F35_1868
static EIF_INTEGER_32 inline_F35_1868 (EIF_INTEGER_32 arg1)
{
	return eif_non_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F35_1868
#endif
#ifndef INLINE_F35_1867
static int inline_F35_1867 (EIF_INTEGER_32 arg1)
{
	return eif_is_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F35_1867
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REFLECTOR}.field_conforms_to */
EIF_BOOLEAN F499_5336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = inline_F35_1868(arg2);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_gen_conf((int16) arg1, (int16) ti4_1));
	return Result;
}

/* {REFLECTOR}.is_attached_type */
EIF_BOOLEAN F499_5346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) EIF_TEST (inline_F35_1867(arg1));
}

void EIF_Minit299 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
