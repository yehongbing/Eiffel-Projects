/*
 * Code for class LINKED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li1289.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_STACK}.item */
EIF_BOOLEAN F649_6062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
	RTLE;
	return Result;
}

/* {LINKED_STACK}.extend */
void F649_6064 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F646_6042(Current, arg1);
}

/* {LINKED_STACK}.put */
void F649_6065 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F646_6042(Current, arg1);
}

/* {LINKED_STACK}.remove */
void F649_6066 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F646_6035(Current);
	F646_6049(Current);
	RTLE;
}

/* {LINKED_STACK}.linear_representation */
EIF_REFERENCE F649_6067 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc1 = F646_6022(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {709,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 709, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F710_6579(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	Result = (EIF_REFERENCE) tr1;
	F646_6035(Current);
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) break;
		tb1 = F646_6018(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(Result)-404])(RTCV(Result), (EIF_REFERENCE) &tb1);
		F646_6037(Current);
	}
	F646_6041(Current, loc1);
	RTLE;
	return Result;
}

void EIF_Minit1289 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
