/*
 * Code for class POINTER_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "po455.h"
#include <string.h>
#include <stdlib.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {POINTER_REF}.hash_code */
EIF_INTEGER_32 F882_9653 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	RTLE;
	return Result;
}

/* {POINTER_REF}.set_item */
void F882_9654 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) arg1;
}

/* {POINTER_REF}.is_equal */
EIF_BOOLEAN F882_9655 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_0_0_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp2);
	RTLE;
	return Result;
}

/* {POINTER_REF}.plus */
EIF_POINTER F882_9658 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	Result = RTPOF(tp1,arg1);
	RTLE;
	return Result;
}

/* {POINTER_REF}.memory_copy */
void F882_9662 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	memcpy((void*) tp1, (const void*) arg1, (size_t) arg2);
}

/* {POINTER_REF}.memory_set */
void F882_9664 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	memset((void*) tp1, (int) arg1, (size_t) arg2);
}

/* {POINTER_REF}.memory_alloc */
EIF_POINTER F882_9665 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) malloc((size_t) arg1);
}

/* {POINTER_REF}.memory_calloc */
EIF_POINTER F882_9666 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) calloc((size_t) arg1, (size_t) arg2);
}

/* {POINTER_REF}.memory_realloc */
EIF_POINTER F882_9667 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) realloc((void*) tp1, (size_t) arg1);
}

/* {POINTER_REF}.memory_free */
void F882_9668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	free((void*) tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	F882_9654(Current, tp2);
	RTLE;
}

/* {POINTER_REF}.memory_compare */
EIF_BOOLEAN F882_9669 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) memcmp((void*) tp1, (void*) arg1, (size_t) arg2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {POINTER_REF}.out */
EIF_REFERENCE F882_9670 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	Result = c_outp(tp1);
	RTLE;
	return Result;
}

/* {POINTER_REF}.c_memcpy */
void F882_9671 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	memcpy((void*) arg1, (const void*) arg2, (size_t) arg3);
	
}

/* {POINTER_REF}.c_memset */
void F882_9673 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	memset((void*) arg1, (int) arg2, (size_t) arg3);
	
}

/* {POINTER_REF}.c_memcmp */
EIF_INTEGER_32 F882_9674 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) memcmp((void*) arg1, (void*) arg2, (size_t) arg3);
	
	return Result;
}

/* {POINTER_REF}.c_malloc */
EIF_POINTER F882_9675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) malloc((size_t) arg1);
	
	return Result;
}

/* {POINTER_REF}.c_calloc */
EIF_POINTER F882_9676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) calloc((size_t) arg1, (size_t) arg2);
	
	return Result;
}

/* {POINTER_REF}.c_realloc */
EIF_POINTER F882_9677 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) realloc((void*) arg1, (size_t) arg2);
	
	return Result;
}

/* {POINTER_REF}.c_free */
void F882_9678 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	free((void*) arg1);
	
}

void EIF_Minit455 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
