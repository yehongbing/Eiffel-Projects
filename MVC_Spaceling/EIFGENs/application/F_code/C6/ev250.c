/*
 * Code for class EV_SIMPLE_HELP_ENGINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev250.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SIMPLE_HELP_ENGINE}.help_title */

EIF_REFERENCE F192_3858 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (3858,RTMS_EX_H("Contextual Help",15,712875120));
}

/* {EV_SIMPLE_HELP_ENGINE}.show */
void F192_3859 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = RTLNS(985, 985, _OBJSIZ_14_3_0_3_0_0_0_0_);
	F985_12400(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
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
	F985_12415(RTCV(loc1), tr1);
	tr1 = F191_3843(Current);
	tr1 = F985_12418(RTCV(loc1), tr1);
	F983_12383(RTCV(loc1), tr1);
	tr1 = RTOSCF(3858,F192_3858,(Current));
	F980_12342(RTCV(loc1), tr1);
	F980_12336(RTCV(loc1));
	F968_11584(RTCV(loc1));
	RTLE;
}

void EIF_Minit250 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif