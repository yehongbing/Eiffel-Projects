/*
 * Code for class EV_TIMEOUT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev676.h"
#include <ev_gtk.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TIMEOUT_IMP}.make */
void F1042_13311 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(13315,F1042_13315,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	ti4_1 = F788_7991(Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_140, (EIF_POINTER) _A412_140, (EIF_POINTER)(F790_8071),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TIMEOUT_IMP}.interval */
EIF_INTEGER_32 F1042_13312 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_);
}


/* {EV_TIMEOUT_IMP}.set_interval */
void F1042_13313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_);
		gtk_timeout_remove((guint) ti4_1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL))) {
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 10L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F793_8422(Current, ti4_1, tr1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {EV_TIMEOUT_IMP}.interface */
static EIF_REFERENCE F1042_13314_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1042_13314 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1042_13314_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TIMEOUT_IMP}.app_implementation */
static EIF_REFERENCE F1042_13315_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13315);
#define Result RTOSR(13315)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	loc1 = F1030_13088(RTCV(loc1));
	loc1 = RTRV(eif_non_attached_type(1048), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOSE (13315);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1042_13315 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13315,F1042_13315_body,(Current));
}

/* {EV_TIMEOUT_IMP}.timeout_agent_internal */
static EIF_REFERENCE F1042_13317_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1042_13317 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F1042_13317_body (Current));
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_TIMEOUT_IMP}.destroy */
void F1042_13318 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1042_13313(Current, ((EIF_INTEGER_32) 0L));
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TIMEOUT_IMP}.dispose */
void F1042_13319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_);
		gtk_timeout_remove((guint) ti4_1);
	}
	F788_7997(Current);
	RTLE;
}

void EIF_Minit676 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
