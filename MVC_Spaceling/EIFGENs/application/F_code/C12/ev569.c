/*
 * Code for class EV_CELL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev569.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CELL}.has */
EIF_BOOLEAN F976_12010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F930_10740(Current)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
			tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11905[Dtype(tr1)-1118]);
			tb1 = (EIF_BOOLEAN)(tr1 == arg1);
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_CELL}.is_empty */
EIF_BOOLEAN F976_12011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F976_12013(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.extendible */
EIF_BOOLEAN F976_12012 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F976_12013(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.full */
EIF_BOOLEAN F976_12013 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O11905[Dtype(tr1)-1118]);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		Result = (EIF_BOOLEAN) !F930_10740(Current);
	}
	RTLE;
	return Result;
}

/* {EV_CELL}.prunable */
EIF_BOOLEAN F976_12014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = F930_10740(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.readable */
EIF_BOOLEAN F976_12016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if (F976_12013(Current)) {
		Result = (EIF_BOOLEAN) !F930_10740(Current);
	}
	RTLE;
	return Result;
}

/* {EV_CELL}.prune */
void F976_12018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(F969_11602(Current) == arg1)) {
		F976_12019(Current);
	}
	RTLE;
}

/* {EV_CELL}.wipe_out */
void F976_12019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1119_15327(RTCV(tr1), NULL);
	RTLE;
}

/* {EV_CELL}.linear_representation */
EIF_REFERENCE F976_12020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {644,967,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 644, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F645_6017(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	if (F976_12016(Current)) {
		tr1 = F969_11602(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(loc1)-404])(RTCV(loc1), tr1);
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_CELL}.implementation */
EIF_REFERENCE F976_12021 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_CELL}.create_implementation */
void F976_12022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1118, 1118, _OBJSIZ_47_11_10_2_0_1_0_0_);
	F1119_15323(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit569 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
