/*
 * Code for class EV_TOOL_BAR_BUTTON_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev872.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_BUTTON_I}.update_for_pick_and_drop */
void F1179_16587 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	
	RTGC;
	if (arg1) {
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		if (F1181_16614(Current)) {
			tr1 = F1049_13622(RTCV(F1093_14440(Current)));
			loc1 = tr1;
			tb3 = EIF_TEST(loc1);
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O11165[Dtype(loc1)-1092]);
			loc2 = RTCCL(tr1);
			tb2 = EIF_TEST(loc2);
		}
		if (tb2) {
			tr1 = F70_2603(RTCV(F1029_13066(Current)));
			tr2 = RTCCL(loc2);
			tb2 = F733_6803(RTCV(tr1), tr2);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current + O12423[dtype-1178]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			F1181_16613(Current);
		}
	} else {
		if (*(EIF_BOOLEAN *)(Current + O12423[dtype-1178])) {
			*(EIF_BOOLEAN *)(Current + O12423[dtype-1178]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F1181_16612(Current);
		}
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_I}.interface */
static EIF_REFERENCE F1179_16594_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1179_16594 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1179_16594_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit872 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
