/*
 * Code for class IDENTIFIED
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "id389.h"
#include "eif_built_in.h"
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IDENTIFIED}.object_id */
EIF_INTEGER_32 F788_7991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F68_2453(Current, Current);
		*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
}

/* {IDENTIFIED}.id_object */
EIF_REFERENCE F788_7992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = (EIF_REFERENCE) eif_id_object(arg1);
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_non_attached_type(787),loc1);
		if (EIF_TEST(loc1)) {
			RTLE;
			return (EIF_REFERENCE) loc1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {IDENTIFIED}.free_id */
void F788_7994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
		eif_object_id_free(ti4_1);
		*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	RTLE;
}

/* {IDENTIFIED}.is_equal */
EIF_BOOLEAN F788_7995 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1) + O6499[Dtype(arg1)-787]);
	*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) ti4_1;
	Result = (EIF_BOOLEAN) eif_builtin_ANY_standard_is_equal (Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {IDENTIFIED}.copy */
void F788_7996 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
		eif_builtin_ANY_standard_copy (Current, arg1);
		*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {IDENTIFIED}.dispose */
void F788_7997 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F788_7994(Current);
}

/* {IDENTIFIED}.internal_id */
EIF_INTEGER_32 F788_7998 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O6499[Dtype(Current) - 787]);
}


void EIF_Minit389 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
