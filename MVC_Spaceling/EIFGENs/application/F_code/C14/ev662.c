/*
 * Code for class EV_ANY_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev662.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ANY_I}.assign_interface */
void F1029_13060 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F1029_13075(Current, ((EIF_INTEGER_8) 0L), (EIF_BOOLEAN) 1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10149[Dtype(Current)-1028]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_ANY_I}.safe_destroy */
void F1029_13063 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13079(Current)) {
		F1029_13082(Current, (EIF_BOOLEAN) 1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R10146[Dtype(Current)-1029])(Current);
	}
	RTLE;
}

/* {EV_ANY_I}.is_destroyed */
EIF_BOOLEAN F1029_13065 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1029_13076(Current, ((EIF_INTEGER_8) 2L));
}

/* {EV_ANY_I}.attached_interface */
EIF_REFERENCE F1029_13066 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10149[dtype-1028]) != NULL)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O10149[dtype-1028]);
	} else {
		RTCT0(NULL, EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_ANY_I}.interface */
static EIF_REFERENCE F1029_13067_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1029_13067 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1029_13067_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ANY_I}.set_state_flag */
void F1029_13075 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current + O10150[dtype-1028]);
	ti4_1 = (EIF_INTEGER_32) arg1;
	ti1_1 = eif_set_bit(EIF_INTEGER_8,ti1_1,arg2,ti4_1);
	*(EIF_INTEGER_8 *)(Current + O10150[dtype-1028]) = (EIF_INTEGER_8) ti1_1;
	RTLE;
}

/* {EV_ANY_I}.get_state_flag */
EIF_BOOLEAN F1029_13076 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current + O10150[Dtype(Current)-1028]);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = eif_bit_test(EIF_INTEGER_8,ti1_1,ti4_1);
	RTLE;
	return Result;
}

/* {EV_ANY_I}.is_in_destroy */
EIF_BOOLEAN F1029_13079 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1029_13076(Current, ((EIF_INTEGER_8) 3L));
}

/* {EV_ANY_I}.set_is_initialized */
void F1029_13080 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1029_13075(Current, ((EIF_INTEGER_8) 1L), arg1);
}

/* {EV_ANY_I}.set_is_destroyed */
void F1029_13081 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1029_13075(Current, ((EIF_INTEGER_8) 2L), arg1);
}

/* {EV_ANY_I}.set_is_in_destroy */
void F1029_13082 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1029_13075(Current, ((EIF_INTEGER_8) 3L), arg1);
}

void EIF_Minit662 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
