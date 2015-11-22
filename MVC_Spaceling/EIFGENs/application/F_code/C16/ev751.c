/*
 * Code for class EV_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev751.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BOX_I}.insertion_position */
EIF_INTEGER_32 F1102_14758 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	loc1 = F1057_13792(Current);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11429[dtype-1102])(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) (loc2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11431[dtype-1102])(Current));
	}
	if (tb1) {
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11431[dtype-1102])(Current) - F1108_14809(Current)))) {
			tb2 = (EIF_BOOLEAN)(F1058_13827(Current) == ((EIF_INTEGER_32) 0L));
		}
		if (!tb2) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(F1058_13827(Current) == ((EIF_INTEGER_32) 1L))) {
				tb2 = (EIF_BOOLEAN)(F1058_13826(Current, ((EIF_INTEGER_32) 1L)) == RTOSCF(3898,F199_3898,(Current)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			Result = F1058_13827(Current);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
		} else {
			if ((EIF_BOOLEAN) (loc2 < F1108_14809(Current))) {
				RTLE;
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				F1057_13802(Current);
				loc4 = F1108_14809(Current);
				for (;;) {
					if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) -1L))) break;
					loc3 += (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11430[dtype-1102])(Current);
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == ((EIF_INTEGER_32) 1L))) {
						loc3 += F1108_14809(Current);
					} else {
						loc3 += F1108_14810(Current);
					}
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc4) && (EIF_BOOLEAN) (loc2 <= loc3))) {
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc4) / ((EIF_INTEGER_32) 2L));
						loc6 = F1108_14810(Current);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc5) + (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 2L)));
						if ((EIF_BOOLEAN) (loc2 > loc6)) {
							Result = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
						} else {
							Result = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
						}
					}
					loc4 = (EIF_INTEGER_32) loc3;
					F1057_13804(Current);
				}
				F1057_13806(Current, loc1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_BOX_I}.interface */
static EIF_REFERENCE F1102_14759_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1102_14759 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1102_14759_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit751 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
