/*
 * Code for class EV_WIDGET_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev754.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_LIST_IMP}.make */
void F1105_14768 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1098_14650(Current);
	F1058_13825(Current);
	RTLE;
}

/* {EV_WIDGET_LIST_IMP}.insert_i_th */
void F1105_14769 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = F1105_14771(Current);
		tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32)) R11391[dtype-1097])(Current, tp1, tp2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		F701_6613(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
		F1098_14671(Current, loc1);
	}
	RTLE;
}

/* {EV_WIDGET_LIST_IMP}.remove_i_th */
void F1105_14770 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
	tr1 = F1058_13826(Current, arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		F701_6613(RTCV(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
		F1098_14672(Current, loc1);
		tp1 = F1105_14771(Current);
		tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R11392[dtype-1097])(Current, tp1, tp2);
		*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) = (EIF_INTEGER_32) loc2;
	}
	RTLE;
}

/* {EV_WIDGET_LIST_IMP}.list_widget */
EIF_POINTER F1105_14771 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) F1098_14651(Current);
}

/* {EV_WIDGET_LIST_IMP}.interface */
static EIF_REFERENCE F1105_14772_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1105_14772 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1105_14772_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit754 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
