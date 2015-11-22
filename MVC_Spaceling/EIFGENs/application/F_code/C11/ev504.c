/*
 * Code for class EV_ACCELERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev504.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR}.make_with_key_combination */
void F935_10816 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F930_10736(Current);
	F935_10823(Current, arg1);
	if (arg2) {
		F935_10828(Current);
	}
	if (arg3) {
		F935_10826(Current);
	}
	if (arg4) {
		F935_10824(Current);
	}
	RTLE;
}

/* {EV_ACCELERATOR}.actions */
EIF_REFERENCE F935_10817 (EIF_REFERENCE Current)
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
	Result = F1032_13120(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.key */
EIF_REFERENCE F935_10819 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.shift_required */
EIF_BOOLEAN F935_10820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_3_3_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.alt_required */
EIF_BOOLEAN F935_10821 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_3_2_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.control_required */
EIF_BOOLEAN F935_10822 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_3_1_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.set_key */
void F935_10823 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1033_13138(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_ACCELERATOR}.enable_shift_required */
void F935_10824 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1033_13139(RTCV(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.enable_alt_required */
void F935_10826 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1033_13141(RTCV(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.enable_control_required */
void F935_10828 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1033_13143(RTCV(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.is_equal */
EIF_BOOLEAN F935_10830 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tr1 = F935_10819(Current);
	tr2 = F935_10819(RTCV(arg1));
	tb3 = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (tr1, tr2);
	if (tb3) {
		tb3 = F935_10821(RTCV(arg1));
		tb2 = (EIF_BOOLEAN)(F935_10821(Current) == tb3);
	}
	if (tb2) {
		tb2 = F935_10820(RTCV(arg1));
		tb1 = (EIF_BOOLEAN)(F935_10820(Current) == tb2);
	}
	if (tb1) {
		tb1 = F935_10822(RTCV(arg1));
		Result = (EIF_BOOLEAN)(F935_10822(Current) == tb1);
	}
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.text */
EIF_REFERENCE F935_10831 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F925_10552(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	if (F935_10822(Current)) {
		tr1 = RTMS_EX_H("Ctrl+",5,1954170411);
		tr1 = F920_10294(RTCV(tr1));
		F926_10643(RTCV(Result), tr1);
	}
	if (F935_10821(Current)) {
		tr1 = RTMS_EX_H("Alt+",4,1097626667);
		tr1 = F920_10294(RTCV(tr1));
		F926_10643(RTCV(Result), tr1);
	}
	if (F935_10820(Current)) {
		tr1 = RTMS_EX_H("Shift+",6,1932305451);
		tr1 = F920_10294(RTCV(tr1));
		F926_10643(RTCV(Result), tr1);
	}
	loc1 = F1206_17326(RTCV(F935_10819(Current)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		F926_10684(RTCV(loc1));
	}
	F926_10643(RTCV(Result), loc1);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.out */
EIF_REFERENCE F935_10832 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = F920_10289(RTCV(F935_10831(Current)));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.implementation */
EIF_REFERENCE F935_10833 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_ACCELERATOR}.create_interface_objects */
void F935_10834 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ACCELERATOR}.create_implementation */
void F935_10835 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1032, 1032, _OBJSIZ_3_5_0_0_0_0_0_0_);
	F1033_13133(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit504 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
