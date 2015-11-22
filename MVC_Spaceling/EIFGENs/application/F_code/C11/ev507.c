/*
 * Code for class EV_CHARACTER_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev507.h"
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

/* {EV_CHARACTER_FORMAT}.font */
EIF_REFERENCE F937_10861 (EIF_REFERENCE Current)
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
	Result = F1045_13353(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.color */
EIF_REFERENCE F937_10862 (EIF_REFERENCE Current)
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
	Result = F1045_13354(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.effects */
EIF_REFERENCE F937_10863 (EIF_REFERENCE Current)
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
	Result = F1045_13356(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.background_color */
EIF_REFERENCE F937_10864 (EIF_REFERENCE Current)
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
	Result = F1045_13355(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.is_equal */
EIF_BOOLEAN F937_10869 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tr1 = F937_10862(RTCV(arg1));
	tr2 = F937_10862(Current);
	tb3 = F938_10916(RTCV(tr1), tr2);
	if (tb3) {
		tr1 = F937_10864(RTCV(arg1));
		tr2 = F937_10864(Current);
		tb3 = F938_10916(RTCV(tr1), tr2);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = F937_10861(RTCV(arg1));
		tr2 = F937_10861(Current);
		tb2 = F939_10951(RTCV(tr1), tr2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = F937_10863(RTCV(arg1));
		tr2 = F937_10863(Current);
		tb1 = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (tr1, tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.out */
EIF_REFERENCE F937_10870 (EIF_REFERENCE Current)
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
	Result = F1044_13331(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.copy */
void F937_10872 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F930_10736(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F937_10862(RTCV(arg1));
	F1045_13359(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F937_10864(RTCV(arg1));
	F1045_13362(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F937_10861(RTCV(arg1));
	F1045_13357(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F937_10863(RTCV(arg1));
	F1045_13363(RTCV(tr1), tr2);
	RTLE;
}

/* {EV_CHARACTER_FORMAT}.implementation */
EIF_REFERENCE F937_10876 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_CHARACTER_FORMAT}.create_interface_objects */
void F937_10877 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CHARACTER_FORMAT}.create_implementation */
void F937_10878 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1044, 1044, _OBJSIZ_2_4_0_9_0_0_0_0_);
	F1045_13352(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit507 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
