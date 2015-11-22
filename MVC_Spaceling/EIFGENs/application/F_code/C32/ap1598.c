/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ap1598.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.main_window */
EIF_REFERENCE F947_18287 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {APPLICATION}.the_application */
EIF_REFERENCE F947_18288 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {APPLICATION}.window_title */

EIF_REFERENCE F947_18291 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (18291,RTMS_EX_H("Hello World",11,608004708));
}

/* {APPLICATION}.make_and_launch */
void F947_18292 (EIF_REFERENCE Current)
{
	GTCX
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
	F930_10736(Current);
	tr1 = RTLNSMART(eif_non_attached_type(981));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = RTOSCF(18291,F947_18291,(Current));
	F980_12342(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F968_11596(RTCV(tr1), ((EIF_INTEGER_32) 500L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F968_11595(RTCV(tr1), ((EIF_INTEGER_32) 350L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F42_2146(RTCV(tr1));
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
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A1598_33, (EIF_POINTER) _A1598_33, (EIF_POINTER)(F930_10739),tr2, 1, 0);
	}
	F719_6679(RTCV(tr1), tr3);
	tr1 = RTLNSMART(eif_non_attached_type(1));
	F2_18282(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(RTCV(tr2));
	F969_11611(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F968_11584(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
	/* INLINED CODE (initialize) */
	/* END INLINED CODE */
	}
	;
	F946_11023(Current);
	RTLE;
}

void EIF_Minit1598 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
