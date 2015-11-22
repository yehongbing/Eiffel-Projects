/*
 * Code for class INTERACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in993.h"
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

/* {INTERACTIVE_LIST}.default_create */
void F719_6674 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5460[Dtype(Current)-700])(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.on_item_added_at */
void F719_6676 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.on_item_removed_at */
void F719_6677 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.extend */
void F719_6679 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F701_6619(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5491[dtype-718])(Current, tr1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.append */
void F719_6680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[Dtype(arg1)-489])(RTCV(arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	if ((EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4557[dtype-489])(Current))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4563[dtype-690])(Current, loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(arg1)-303])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4176[Dtype(arg1)-303])(RTCV(arg1));
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(arg1)-404])(RTCV(arg1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[dtype-404])(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(arg1)-303])(RTCV(arg1));
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.put_left */
void F719_6681 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F701_6620(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5491[dtype-718])(Current, tr1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F719_6683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4240[dtype-584])(Current, (EIF_REFERENCE) &arg2);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F701_6617(Current, tr1, arg2);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5492[dtype-718])(Current, tr1, arg2);
	}
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5491[dtype-718])(Current, tr1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F719_6684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[dtype-404])(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F701_6622(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5492[dtype-718])(Current, tr1, loc1);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5491[dtype-718])(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F719_6685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[dtype-404])(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F701_6631(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5492[dtype-718])(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F719_6689 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,arg1);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O4154[dtype-243]);
	loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5463[dtype-700])(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(loc7)-584])(RTCV(loc7), (EIF_INTEGER_32) (loc1 + loc3));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5685[Dtype(loc7)-754])(RTCV(loc7), tr2, loc1);
			}
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5031[Dtype(loc7)-584])(RTCV(loc7), loc1);
			if (loc5) {
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, loc6);
			} else {
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, loc6);
			}
			if (loc4) {
				tr1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5492[dtype-718])(Current, tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5699[Dtype(loc7)-754])(RTCV(loc7), loc3);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	*(EIF_INTEGER_32 *)(Current + O5474[dtype-700]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F719_6691 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5463[dtype-700])(Current);
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current);
	F701_6635(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5675[Dtype(loc1)-754])(RTCV(loc1), loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5487[dtype-718])(Current, tr2, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F719_6694 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5490[dtype-718])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5486[dtype-718])(Current, tr1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F719_6695 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5490[dtype-718])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5487[dtype-718])(Current, tr1, arg2);
	}
	RTLE;
}

void EIF_Minit993 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
