/*
 * Code for class EV_ABSTRACT_PICK_AND_DROPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev394.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.target_data_function */
static EIF_REFERENCE F792_8125_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F792_8125 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O6625[Dtype(Current) - 791]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {916,0,0xFFF9,1,841,0,2,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F792_8125_body (Current));
				*(EIF_REFERENCE *)(Current + O6625[Dtype(Current) - 791]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_ABSTRACT_PICK_AND_DROPABLE}.init_drop_actions */
void F792_8140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	loc2 = F788_7991(Current);
	loc1 = RTOSCF(8142,F792_8142,(Current));
	tr1 = F726_6733(RTCV(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,694,874,874,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = loc2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,694,874,874,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A1067_85, (EIF_POINTER) _A1067_85, (EIF_POINTER)(F695_6476),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), tr3);
	tr1 = F726_6734(RTCV(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,694,874,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,694,874,874,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A1067_91, (EIF_POINTER) _A1067_91, (EIF_POINTER)(F695_6482),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), tr3);
	RTLE;
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.create_interface_objects */
void F792_8141 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
	/* INLINED CODE (do_nothing) */
	tr1 = RTOSCF(8142,F792_8142,(Current));
	
	
	/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.pnd_targets */
static EIF_REFERENCE F792_8142_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8142);
#define Result RTOSR(8142)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	Result = F1030_13088(RTCV(Result));
	Result = *(EIF_REFERENCE *)(RTCV(Result) + O10414[Dtype(Result)-1047]);
	RTOSE (8142);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F792_8142 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8142,F792_8142_body,(Current));
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.default_pixmaps */
static EIF_REFERENCE F792_8143_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8143);
#define Result RTOSR(8143)
	RTOC_NEW(Result);
	tr1 = RTLNS(32, 32, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8143);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F792_8143 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8143,F792_8143_body,(Current));
}

void EIF_Minit394 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
