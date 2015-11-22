/*
 * Code for class EV_GAUGE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev836.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GAUGE_IMP}.make */
void F1156_16229 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1142_15736(Current);
	F1156_16230(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_42_11_10_3_0_0_);
	gtk_widget_set_redraw_on_allocate((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_GAUGE_IMP}.ev_gauge_imp_initialize */
RTEOMS(16229,1);
void F1156_16230 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(583));
	F583_5709(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 100L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
	tr1 = F584_5756(RTCV(tr1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A836_393, (EIF_POINTER) _A836_393, (EIF_POINTER)(F1156_16242),tr2, 1, 0);
	}
	F719_6679(RTCV(tr1), tr3);
	tp1 = F1156_16245(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_42_11_10_3_0_0_);
	((EIF_TYPED_VALUE *)tr1+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_325, (EIF_POINTER) _A412_325, (EIF_POINTER)(F790_8074),tr1, 1, 0);
	}
	F1079_14139(Current, tp1, RTOMS(16229,0), tr2, NULL);
	F1156_16242(Current);
	RTLE;
}

/* {EV_GAUGE_IMP}.value */
EIF_INTEGER_32 F1156_16231 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F1156_16245(Current);
	tr4_1 = (EIF_REAL_32) (((GtkAdjustment *)tp1)->value);
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = tr4_1;
	
	Result = F846_8809(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_GAUGE_IMP}.set_range */
void F1156_16242 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = F1156_16231(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
	ti4_1 = F583_5714(RTCV(tr1));
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
		loc1 = F583_5714(RTCV(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
		ti4_1 = F583_5712(RTCV(tr1));
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
			loc1 = F583_5712(RTCV(tr1));
		}
	}
	tp1 = F1156_16245(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
	ti4_1 = F583_5712(RTCV(tr1));
	tr4_1 = (EIF_REAL_32) (ti4_1);
	(((GtkAdjustment *)tp1)->lower = (gfloat)(tr4_1));
	F1156_16244(Current);
	F1156_16248(Current, loc1);
	tp1 = F1156_16245(Current);
	gtk_adjustment_changed((GtkAdjustment*) tp1);
	RTLE;
}

/* {EV_GAUGE_IMP}.interface */
static EIF_REFERENCE F1156_16243_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1156_16243 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1156_16243_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_GAUGE_IMP}.internal_set_upper */
void F1156_16244 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = F1156_16245(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
	ti4_1 = F583_5714(RTCV(tr1));
	tr4_1 = (EIF_REAL_32) (ti4_1);
	(((GtkAdjustment *)tp1)->upper = (gfloat)(tr4_1));
	RTLE;
}

/* {EV_GAUGE_IMP}.adjustment */
EIF_POINTER F1156_16245 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_42_11_10_3_0_1_) == tp1)) {
		tp1 = (EIF_POINTER) gtk_adjustment_new((gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 100.0, (gfloat) (EIF_REAL_32) 1.0, (gfloat) (EIF_REAL_32) 10.0, (gfloat) (EIF_REAL_32) 0.0);
		*(EIF_POINTER *)(Current+ _PTROFF_42_11_10_3_0_1_) = (EIF_POINTER) tp1;
	}
	RTLE;
	return (EIF_POINTER) *(EIF_POINTER *)(Current+ _PTROFF_42_11_10_3_0_1_);
}

/* {EV_GAUGE_IMP}.internal_set_value */
void F1156_16248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1156_16231(Current) != arg1)) {
		tp1 = F1156_16245(Current);
		tr4_1 = (EIF_REAL_32) (arg1);
		gtk_adjustment_set_value((GtkAdjustment*) tp1, (gfloat) tr4_1);
		if (F1081_14192(Current)) {
			F1096_14514(Current);
		}
	}
	RTLE;
}

/* {EV_GAUGE_IMP}.value_changed_handler */
void F1156_16249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 1);
		}
		ti4_1 = F1156_16231(Current);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
		F732_6800(RTCV(tr1), tr2);
	}
	RTLE;
}

void EIF_Minit836 (void)
{
	GTCX
	RTPOMS(16229,0,"value-changed",13,1161067364);
}


#ifdef __cplusplus
}
#endif
