/*
 * Code for class SPACELING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp1597.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SPACELING}.widget */
EIF_REFERENCE F2_18275 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SPACELING}.backgroundcolor */
EIF_REFERENCE F2_18277 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SPACELING}.foregroundcolor */
EIF_REFERENCE F2_18278 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SPACELING}.font_const */
EIF_REFERENCE F2_18279 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SPACELING}.nametextfield */
EIF_REFERENCE F2_18280 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SPACELING}.labelhello */
EIF_REFERENCE F2_18281 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {SPACELING}.default_create */
void F2_18282 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,tr4);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(937));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) ((EIF_REAL_64) 0.8);
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(496));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	tr1 = RTLNS(973, 973, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(987, 987, _OBJSIZ_5_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("Greetings Earthling",19,433913191);
	F958_11226(RTCV(tr1), tr2);
	loc4 = (EIF_REFERENCE) tr1;
	F2_18284(Current, loc4);
	F948_11076(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	tr1 = RTLNSMART(eif_non_attached_type(937));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F948_11075(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	F966_11536(RTCV(loc1), loc4);
	tr1 = RTLNS(987, 987, _OBJSIZ_5_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("What is your name\?",18,72698431);
	F958_11226(RTCV(tr1), tr2);
	loc5 = (EIF_REFERENCE) tr1;
	F2_18284(Current, loc5);
	F948_11076(RTCV(loc5), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	tr1 = RTLNSMART(eif_non_attached_type(937));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F948_11075(RTCV(loc5), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	F966_11536(RTCV(loc1), loc5);
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = F2_18285(Current);
	F966_11536(RTCV(loc2), tr1);
	tr1 = RTLNSMART(eif_non_attached_type(994));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = ((EIF_INTEGER_32) 2L);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_2 = ((EIF_INTEGER_32) 8L);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_3 = ((EIF_INTEGER_32) 10L);
	F939_10926(RTCV(tr2), ti4_1, ti4_2, ti4_3, loc3);
	F960_11241(RTCV(tr1), tr2);
	F966_11536(RTCV(loc2), *(EIF_REFERENCE *)(Current + _REFACS_5_));
	tr1 = F2_18285(Current);
	F966_11536(RTCV(loc2), tr1);
	F966_11536(RTCV(loc1), loc2);
	tr1 = RTLNS(987, 987, _OBJSIZ_5_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("Ask me to say hello",19,245736303);
	F958_11226(RTCV(tr1), tr2);
	loc6 = (EIF_REFERENCE) tr1;
	F2_18284(Current, loc6);
	F948_11076(RTCV(loc6), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	tr1 = RTLNSMART(eif_non_attached_type(937));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	F948_11075(RTCV(loc6), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	F966_11536(RTCV(loc1), loc6);
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = F2_18285(Current);
	F966_11536(RTCV(loc2), tr1);
	tr1 = RTLNS(995, 995, _OBJSIZ_6_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("Say Hello",9,1012380015);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A1597_39, (EIF_POINTER) _A1597_39, (EIF_POINTER)(F2_18283),tr3, 1, 0);
	}
	F996_12612(RTCV(tr1), tr2, tr4);
	loc7 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_2 = ((EIF_INTEGER_32) 8L);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_3 = ((EIF_INTEGER_32) 10L);
	F939_10926(RTCV(tr1), ti4_1, ti4_2, ti4_3, loc3);
	F960_11241(RTCV(loc7), tr1);
	F966_11536(RTCV(loc2), loc7);
	tr1 = F2_18285(Current);
	F966_11536(RTCV(loc2), tr1);
	F966_11536(RTCV(loc1), loc2);
	tr1 = RTLNSMART(eif_non_attached_type(987));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	F2_18284(Current, *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F948_11076(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	F966_11536(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr1 = F2_18285(Current);
	F966_11536(RTCV(loc1), tr1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {SPACELING}.sayhellopressed */
void F2_18283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr1 = F958_11227(RTCV(tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tr2 = RTMS_EX_H("Hello ",6,1961379104);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr3 = F958_11227(RTCV(tr3));
		tr2 = F923_10437(RTCV(tr2), tr3);
		F958_11228(RTCV(tr1), tr2);
		tr1 = RTLNSMART(eif_non_attached_type(937));
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tr2 = RTMS_EX_H("No name, no greeting",20,55526503);
		F958_11228(RTCV(tr1), tr2);
		tr1 = RTLNSMART(eif_non_attached_type(937));
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		F938_10888(RTCV(tr1), tr4_1, tr4_2, tr4_3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F948_11075(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	RTLE;
}

/* {SPACELING}.setlabelfont */
void F2_18284 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	tr1 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_2 = ((EIF_INTEGER_32) 8L);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_3 = ((EIF_INTEGER_32) 10L);
	F939_10926(RTCV(tr1), ti4_1, ti4_2, ti4_3, loc1);
	F960_11241(RTCV(arg1), tr1);
	RTLE;
}

/* {SPACELING}.createlabelfiller */
EIF_REFERENCE F2_18285 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(987, 987, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F948_11076(RTCV(Result), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	RTLE;
	return Result;
}

/* {SPACELING}.initialize */
void F2_18286 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1597 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
