/*
 * Code for class ISE_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is44.h"
#include "eif_gen_conf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F35_1867
static int inline_F35_1867 (EIF_INTEGER_32 arg1)
{
	return eif_is_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F35_1867
#endif
#ifndef INLINE_F35_1868
static EIF_INTEGER_32 inline_F35_1868 (EIF_INTEGER_32 arg1)
{
	return eif_non_attached_type((EIF_TYPE_INDEX) arg1)
	;
}
#define INLINE_F35_1868
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_RUNTIME}.type_conforms_to */
EIF_BOOLEAN F35_1862 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_gen_conf((int16) arg1, (int16) arg2));
	
	return Result;
}

/* {ISE_RUNTIME}.is_attached_type */
EIF_BOOLEAN F35_1867 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F35_1867 ((EIF_INTEGER_32) arg1));
	return Result;
}

/* {ISE_RUNTIME}.detachable_type */
EIF_INTEGER_32 F35_1868 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F35_1868 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit44 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
