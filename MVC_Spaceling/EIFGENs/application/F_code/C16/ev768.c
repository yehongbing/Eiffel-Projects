/*
 * Code for class EV_DIALOG_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev768.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_I}.default_push_button */
EIF_REFERENCE F1118_15305 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11901[Dtype(Current)-1117]);
}

/* {EV_DIALOG_I}.default_cancel_button */
EIF_REFERENCE F1118_15306 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11902[Dtype(Current)-1117]);
}

/* {EV_DIALOG_I}.current_push_button */
EIF_REFERENCE F1118_15307 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) != NULL)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11903[dtype-1117]);
	} else {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O11901[dtype-1117]);
	}/* NOTREACHED */
	
}

/* {EV_DIALOG_I}.set_default_push_button */
void F1118_15308 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11901[dtype-1117]);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F996_12616(RTCV(loc1));
		}
		F996_12615(RTCV(arg1));
	} else {
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11901[dtype-1117]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_DIALOG_I}.remove_default_push_button */
void F1118_15309 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11901[dtype-1117]);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F996_12616(RTCV(loc1));
		}
	} else {
	}
	*(EIF_REFERENCE *)(Current + O11901[dtype-1117]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_DIALOG_I}.set_default_cancel_button */
void F1118_15310 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11902[Dtype(Current)-1117]) = (EIF_REFERENCE) arg1;
	F1126_15507(Current);
	RTLE;
}

/* {EV_DIALOG_I}.remove_default_cancel_button */
void F1118_15311 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O11902[Dtype(Current)-1117]) = (EIF_REFERENCE) NULL;
	F1126_15508(Current);
	RTLE;
}

/* {EV_DIALOG_I}.dialog_key_press_action */
void F1118_15316 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,loc4);
	RTLR(6,loc5);
	
	RTGC;
	RTCT0(NULL, EX_CHECK);
	tr1 = F731_6797(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O10417[Dtype(loc2)-1047]);
		tb2 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb2) {
		tr1 = F1049_13622(RTCV(loc2));
		tb1 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb1) {
		loc1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 42L))) {
			tr1 = F1118_15306(Current);
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			tb1 = F967_11563(RTCV(loc4));
			if (tb1) {
				tr1 = F50_2226(RTCV(loc4));
				F732_6800(RTCV(tr1), NULL);
			}
		} else {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 41L))) {
				tr1 = F1118_15307(Current);
				loc5 = tr1;
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				tb1 = '\0';
				tb2 = F967_11563(RTCV(loc5));
				if (tb2) {
					tb2 = F968_11581(RTCV(loc5));
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					tr1 = F50_2226(RTCV(loc5));
					F732_6800(RTCV(tr1), NULL);
				}
			}
		}
	}
	RTLE;
}

/* {EV_DIALOG_I}.internal_default_push_button */
EIF_REFERENCE F1118_15317 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11901[Dtype(Current) - 1117]);
}


/* {EV_DIALOG_I}.internal_default_cancel_button */
EIF_REFERENCE F1118_15318 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11902[Dtype(Current) - 1117]);
}


/* {EV_DIALOG_I}.internal_current_push_button */
EIF_REFERENCE F1118_15319 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11903[Dtype(Current) - 1117]);
}


/* {EV_DIALOG_I}.set_current_push_button */
void F1118_15320 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = F1118_15307(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F996_12616(RTCV(loc1));
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = F996_12614(RTCV(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F996_12615(RTCV(arg1));
		}
		if ((EIF_BOOLEAN)(arg1 != *(EIF_REFERENCE *)(Current + O11901[dtype-1117]))) {
			RTAR(Current, arg1);
			*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) = (EIF_REFERENCE) arg1;
		} else {
			*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_REFERENCE *)(Current + O11903[dtype-1117]) = (EIF_REFERENCE) NULL;
		tr1 = *(EIF_REFERENCE *)(Current + O11901[dtype-1117]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F996_12615(RTCV(loc2));
		}
	}
	RTLE;
}

/* {EV_DIALOG_I}.interface */
static EIF_REFERENCE F1118_15321_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1118_15321 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1118_15321_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit768 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
