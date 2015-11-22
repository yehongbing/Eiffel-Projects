/*
 * Code for class INTERACTIVE_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in1458.h"
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
void F720_6674 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F704_6579(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.on_item_added_at */
void F720_6676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.on_item_removed_at */
void F720_6677 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {INTERACTIVE_LIST}.extend */
void F720_6679 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F704_6619(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = F704_6600(Current);
	F720_6694(Current, arg1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.append */
void F720_6680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = F704_6600(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[Dtype(arg1)-489])(RTCV(arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	if ((EIF_BOOLEAN) (loc1 > F704_6601(Current))) {
		F704_6626(Current, loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(arg1)-303])(RTCV(arg1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4176[Dtype(arg1)-303])(RTCV(arg1));
		if (tb1) break;
		ti4_1 = *(EIF_INTEGER_32 *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4246[Dtype(arg1)-404])(RTCV(arg1)));
		F720_6679(Current, ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(arg1)-303])(RTCV(arg1));
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.put_left */
void F720_6681 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F704_6620(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	F720_6694(Current, arg1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F720_6683 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F704_6584(Current, arg2);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F704_6617(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (EIF_TRUE) {
		F720_6695(Current, loc1, arg2);
	}
	F720_6694(Current, arg1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F720_6684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	loc2 = F704_6583(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F704_6622(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F720_6695(Current, loc2, loc1);
	F720_6694(Current, arg1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F720_6685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	loc2 = F704_6583(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F704_6631(Current);
	*(EIF_BOOLEAN *)(Current + O5490[dtype-718]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F720_6695(Current, loc2, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F720_6689 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc7);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O4154[dtype-243]);
	loc7 = F704_6582(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F704_6600(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F704_6600(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)loc7 + ((EIF_INTEGER_32) (loc1 + loc3)));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)loc7 + (loc1)) = ti4_1;
				/* END INLINED CODE */
				;
			}
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)loc7 + (loc1));
			/* END INLINED CODE */
			loc6 = ti4_2;
			if (loc5) {
				loc4 = (EIF_BOOLEAN) (arg1 == loc6);
			} else {
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == loc6);
			}
			if (loc4) {
				F720_6695(Current, loc6, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	F758_6977(RTCV(loc7), loc3);
	ti4_1 = F704_6600(Current);
	*(EIF_INTEGER_32 *)(Current + O5474[dtype-700]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F720_6691 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (F704_6582(Current));
	loc3 = F704_6600(Current);
	F704_6635(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		/* INLINED CODE (SPECIAL.item) */
		ti4_1 = *((EIF_INTEGER_32 *)loc1 + (loc2));
		/* END INLINED CODE */
		ti4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5487[Dtype(Current)-718])(Current, (EIF_REFERENCE) &ti4_1, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F720_6694 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5490[dtype-718])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5486[dtype-718])(Current, (EIF_REFERENCE) &arg1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F720_6695 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O5490[dtype-718])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5487[dtype-718])(Current, (EIF_REFERENCE) &arg1, arg2);
	}
	RTLE;
}

void EIF_Minit1458 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
