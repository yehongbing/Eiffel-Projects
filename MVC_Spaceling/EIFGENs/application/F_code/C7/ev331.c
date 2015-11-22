/*
 * Code for class EV_PND_ACTION_SEQUENCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev331.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PND_ACTION_SEQUENCE}.call */
void F733_6801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {700,915,0,0xFFF9,1,841,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		ti4_1 = F701_6600(Current);
		F701_6579(RTCV(tr1), ti4_1);
		loc1 = (EIF_REFERENCE) tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4202[Dtype(loc1)-304])(RTCV(loc1), Current);
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_10_2_0_1_)) {
			case 1L:
				tr1 = F726_6736(Current);
				F649_6064(RTCV(tr1), (EIF_BOOLEAN) 0);
				tr1 = eif_boxed_item(arg1,1);
				tr2 = RTCCL(tr1);
				loc2 = F733_6806(Current, tr2);
				F701_6609(RTCV(loc1));
				for (;;) {
					tb1 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1) + O5474[Dtype(loc1)-700]);
					ti4_2 = F701_6600(RTCV(loc1));
					if (!(EIF_BOOLEAN) (ti4_1 > ti4_2)) {
						tb2 = F649_6062(RTCV(F726_6736(Current)));
						tb1 = tb2;
					}
					if (tb1) break;
					tb2 = '\0';
					tr1 = F701_6583(RTCV(loc1));
					tb3 = F915_9693(RTCV(tr1), arg1);
					if (tb3) {
						tb2 = loc2;
					}
					if (tb2) {
						loc3 = F701_6583(RTCV(loc1));
						loc3 = F915_9690(RTCV(loc3));
						tr1 = F842_8513(RTCV(arg1), ((EIF_INTEGER_32) 1L));
						tr2 = RTCCL(tr1);
						F842_8547(RTCV(loc3), tr2, ((EIF_INTEGER_32) 1L));
						tr1 = F701_6583(RTCV(loc1));
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_2_))(
							*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_), loc3);
						;
					}
					F701_6611(RTCV(loc1));
				}
				F649_6066(RTCV(F726_6736(Current)));
				break;
			case 2L:
				tr1 = F726_6738(Current);
				F651_6078(RTCV(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {EV_PND_ACTION_SEQUENCE}.accepts_pebble */
EIF_BOOLEAN F733_6803 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	
	RTGC;
	tr1 = RTCCL(arg1);
	loc3 = F733_6806(Current, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
	RTAR(tr1,arg1);
	loc2 = (EIF_REFERENCE) tr1;
	loc1 = F701_6589(Current);
	F701_6609(Current);
	for (;;) {
		tb1 = '\01';
		if (!Result) {
			tb1 = F615_5836(Current);
		}
		if (tb1) break;
		Result = '\0';
		tr1 = F701_6583(Current);
		tb2 = F915_9693(RTCV(tr1), loc2);
		if (tb2) {
			Result = loc3;
		}
		F701_6611(Current);
	}
	F701_6614(Current, loc1);
	RTLE;
	return Result;
}

/* {EV_PND_ACTION_SEQUENCE}.veto_pebble_function */
EIF_REFERENCE F733_6804 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {EV_PND_ACTION_SEQUENCE}.veto_pebble_function_result */
EIF_BOOLEAN F733_6806 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = F915_9690(RTCV(loc2));
		tr1 = RTCCL(arg1);
		tb1 = F842_8541(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
		if (tb1) {
			tr1 = RTCCL(arg1);
			F842_8547(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
			Result = '\0';
			tb1 = F915_9693(RTCV(loc2), loc1);
			if (tb1) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_4_3_0_3_0_2_))(
					*(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_4_3_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_), loc1);
				;
				tb1 = tb1;
				Result = tb1;
			}
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

void EIF_Minit331 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
