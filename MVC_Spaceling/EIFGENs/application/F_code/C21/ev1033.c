/*
 * Code for class EV_DYNAMIC_LIST_I [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1033.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DYNAMIC_LIST_I}.interface_item */
EIF_REFERENCE F1057_13789 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R10696[dtype-1057])(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
}

/* {EV_DYNAMIC_LIST_I}.item */
EIF_REFERENCE F1057_13790 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R10696[dtype-1057])(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
}

/* {EV_DYNAMIC_LIST_I}.cursor */
EIF_REFERENCE F1057_13792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) (loc2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current));
	}
	if (tb1) {
		loc1 = F1057_13790(Current);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {685,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y10726,Y10726_gen_type,Dftype(Current),1056);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 685, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
	F686_6345(RTCV(tr1), loc1, (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L)), (EIF_BOOLEAN) (loc2 > ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.off */
EIF_BOOLEAN F1057_13795 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.index_of */
EIF_INTEGER_32 F1057_13796 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
				tb1 = (EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current));
			}
			if (tb1) break;
			if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R10696[dtype-1057])(Current, loc1) == arg1)) {
				Result = (EIF_INTEGER_32) loc1;
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.has */
EIF_BOOLEAN F1057_13801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		if (!Result) {
			tb1 = (EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current));
		}
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R10696[dtype-1057])(Current, loc1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == arg1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.start */
void F1057_13802 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O10693[Dtype(Current)-1056]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {EV_DYNAMIC_LIST_I}.back */
void F1057_13803 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))--;
}

/* {EV_DYNAMIC_LIST_I}.forth */
void F1057_13804 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))++;
}

/* {EV_DYNAMIC_LIST_I}.go_i_th */
void F1057_13805 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) < ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) > (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
			*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.go_to */
void F1057_13806 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {685,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y10726,Y10726_gen_type,dftype,1056);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = arg1;
		loc1 = RTRV(eif_non_attached_type(typres0), loc1);
	}
	RTCT0("dlc_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_0_);
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
		*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_1_1_);
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				ti4_1 = F1057_13796(Current, loc2, ((EIF_INTEGER_32) 1L));
				*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) ti4_1;
			} else {
			}
		}
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.move */
void F1057_13807 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056])) += arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) < ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) > (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
			*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.extend */
void F1057_13809 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R10724[dtype-1063])(Current, arg1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current))) {
		(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))++;
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.replace */
void F1057_13810 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R10725[dtype-1063])(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R10724[dtype-1063])(Current, arg1, ti4_1);
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.put_left */
void F1057_13813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R10724[dtype-1063])(Current, arg1, ti4_1);
	(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))++;
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.put_i_th */
void F1057_13814 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R10724[dtype-1063])(Current, arg1, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R10725[dtype-1063])(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.prune */
void F1057_13817 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1057_13796(Current, arg1, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))) {
			(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]))--;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R10725[dtype-1063])(Current, loc1);
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.remove */
void F1057_13818 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R10725[dtype-1063])(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) > (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current) + ((EIF_INTEGER_32) 1L)))) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[dtype-1057])(Current);
		*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.wipe_out */
void F1057_13821 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10701[Dtype(Current)-1057])(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		F1057_13805(Current, loc1);
		F1057_13818(Current);
		loc1--;
	}
	F1057_13805(Current, loc1);
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.interface */
static EIF_REFERENCE F1057_13824_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1057_13824 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1057_13824_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1033 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
