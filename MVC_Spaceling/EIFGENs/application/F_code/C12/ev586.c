/*
 * Code for class EV_INFORMATION_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev586.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INFORMATION_DIALOG}.initialize */
void F986_12435 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	F985_12403(Current);
	tr1 = F191_3855(Current);
	F980_12342(Current, tr1);
	tr1 = RTOSCF(1623,F33_1623,(RTCV(RTOSCF(8143,F792_8143,(Current)))));
	F985_12411(Current, tr1);
	tr1 = RTOSCF(1623,F33_1623,(RTCV(RTOSCF(8143,F792_8143,(Current)))));
	F982_12374(Current, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {754,919,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 1L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = F191_3843(Current);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F755_6954)(tr2);
	F985_12415(Current, tr1);
	tr1 = F191_3843(Current);
	tr1 = F985_12418(Current, tr1);
	F983_12383(Current, tr1);
	tr1 = F191_3843(Current);
	tr1 = F985_12418(Current, tr1);
	F983_12385(Current, tr1);
	RTLE;
}

void EIF_Minit586 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
