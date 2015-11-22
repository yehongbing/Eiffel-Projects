/*
 * Code for class EV_APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev515.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION}.initialize */
void F946_11012 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F946_11041(Current, ((EIF_INTEGER_32) 500L));
	F930_10745(Current);
	RTLE;
}

/* {EV_APPLICATION}.locked_window */
EIF_REFERENCE F946_11014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O10416[Dtype(tr1)-1047]);
	RTLE;
	return Result;
}

/* {EV_APPLICATION}.launch */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F946_11023 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTCDT;
	RTXD;
	
	RTXI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	*(EIF_BOOLEAN *)(Current + O8570[dtype-945]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTOSCF(11050,F946_11050,(Current));
	F946_11049(Current, tr1);
	RTE_E
	RTXS(3);
	*(EIF_BOOLEAN *)(Current + O8570[dtype-945]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION}.set_tooltip_delay */
void F946_11041 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1049_13616(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_APPLICATION}.implementation */
EIF_REFERENCE F946_11046 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_APPLICATION}.create_interface_objects */
void F946_11047 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_APPLICATION}.create_implementation */
void F946_11048 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	tr1 = F1030_13088(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_APPLICATION}.internal_launch_application */
void F946_11049 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F728_6751(RTCV(arg1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R10479[Dtype(tr1)-1047])(RTCV(tr1));
	F728_6752(RTCV(arg1));
	RTLE;
}

/* {EV_APPLICATION}.application_handler */
static EIF_REFERENCE F946_11050_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (11050);
#define Result RTOSR(11050)
	RTOC_NEW(Result);
	tr1 = RTLNS(727, 727, _OBJSIZ_1_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (11050);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F946_11050 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(11050,F946_11050_body,(Current));
}

void EIF_Minit515 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
