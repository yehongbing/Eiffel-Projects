/*
 * Code for class EV_MULTI_COLUMN_LIST_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev783.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_I}.make */
void F1130_15536 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1077_14127(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {644,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F645_6017(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12022[dtype-1129]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {646,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F647_6017(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12023[dtype-1129]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {646,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F647_6017(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12024[dtype-1129]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_I}.column_width */
EIF_INTEGER_32 F1130_15544 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
		Result = F588_5764(RTCV(tr1), arg1);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_I}.update_column_width */
void F1130_15565 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (arg2 <= ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
		F647_6040(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
		F647_6046(RTCV(tr1), arg1);
	} else {
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_2_3_0_0_);
			if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) break;
			tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
			ti4_2 = ((EIF_INTEGER_32) 80L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), (EIF_REFERENCE) &ti4_2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O12023[dtype-1129]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_I}.ev_children */
EIF_REFERENCE F1130_15572 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12021[Dtype(Current) - 1129]);
}


/* {EV_MULTI_COLUMN_LIST_I}.interface */
static EIF_REFERENCE F1130_15573_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1130_15573 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1130_15573_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MULTI_COLUMN_LIST_I}.column_titles */
EIF_REFERENCE F1130_15574 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12022[Dtype(Current) - 1129]);
}


/* {EV_MULTI_COLUMN_LIST_I}.column_widths */
EIF_REFERENCE F1130_15575 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12023[Dtype(Current) - 1129]);
}


/* {EV_MULTI_COLUMN_LIST_I}.column_alignments */
EIF_REFERENCE F1130_15576 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12024[Dtype(Current) - 1129]);
}


void EIF_Minit783 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
