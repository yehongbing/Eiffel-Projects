/*
 * Code for class EV_SHARED_TRANSPORT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev257.h"
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

/* {EV_SHARED_TRANSPORT_I}.default_accept_cursor */
static EIF_REFERENCE F199_3888_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (3888);
#define Result RTOSR(3888)
	RTOC_NEW(Result);
	Result = RTOSCF(1629,F33_1629,(RTCV(RTOSCF(3892,F199_3892,(Current)))));
	RTOSE (3888);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3888 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3888,F199_3888_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.default_deny_cursor */
static EIF_REFERENCE F199_3889_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (3889);
#define Result RTOSR(3889)
	RTOC_NEW(Result);
	Result = RTOSCF(1633,F33_1633,(RTCV(RTOSCF(3892,F199_3892,(Current)))));
	RTOSE (3889);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3889 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3889,F199_3889_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.default_pixmaps */
static EIF_REFERENCE F199_3892_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3892);
#define Result RTOSR(3892)
	RTOC_NEW(Result);
	tr1 = RTLNS(32, 32, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3892);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3892 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3892,F199_3892_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.source_being_docked */
EIF_REFERENCE F199_3893 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3608[Dtype(Current) - 198]);
}


/* {EV_SHARED_TRANSPORT_I}.originating_source */
EIF_REFERENCE F199_3894 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3609[Dtype(Current) - 198]);
}


/* {EV_SHARED_TRANSPORT_I}.insert_label */
static EIF_REFERENCE F199_3898_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,loc1);
	
	RTEV;
	RTGC;
	RTOSP (3898);
#define Result RTOSR(3898)
	RTOC_NEW(Result);
	tr1 = RTLNS(975, 975, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F968_11597(RTCV(Result), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 10L));
	tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F990_12499(RTCV(loc1), ((EIF_INTEGER_32) 2L), ((EIF_INTEGER_32) 2L));
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F34_1850(RTCV(tr1));
	F948_11075(RTCV(loc1), tr1);
	F961_11263(RTCV(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F961_11263(RTCV(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(1827,F34_1827,(RTCV(tr1)));
	F948_11075(RTCV(loc1), tr1);
	F961_11263(RTCV(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L));
	F961_11263(RTCV(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	F953_11112(RTCV(Result), loc1);
	RTOSE (3898);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3898 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3898,F199_3898_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.insert_label_imp */
static EIF_REFERENCE F199_3899_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3899);
#define Result RTOSR(3899)
	RTOC_NEW(Result);
	tr1 = RTOSCF(3898,F199_3898,(Current));
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
	RTOSE (3899);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3899 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3899,F199_3899_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.remove_insert_label */
void F199_3900 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	
	RTGC;
	tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		loc1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
		loc1 = RTRV(eif_non_attached_type(975), loc1);
		tr1 = RTOSCF(3898,F199_3898,(Current));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9024[Dtype(loc5)-969])(RTCV(loc5), tr1);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = RTOSCF(3898,F199_3898,(Current));
			tb2 = (EIF_BOOLEAN) eif_builtin_ANY_same_type (loc1, tr1);
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F968_11571(RTCV(loc1));
			loc2 = RTRV(eif_non_attached_type(972), loc2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				loc3 = F966_11522(RTCV(loc2), loc1, ((EIF_INTEGER_32) 1L));
				loc4 = F973_11865(RTCV(loc2), loc1);
				F966_11545(RTCV(loc2), loc1);
				F966_11531(RTCV(loc2), loc3);
				F966_11540(RTCV(loc2), loc1);
				if ((EIF_BOOLEAN) !loc4) {
					F973_11872(RTCV(loc2), loc1);
				}
			}
		}
	}
	RTLE;
}

/* {EV_SHARED_TRANSPORT_I}.insert_sep */
static EIF_REFERENCE F199_3901_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3901);
#define Result RTOSR(3901)
	RTOC_NEW(Result);
	tr1 = RTLNS(1002, 1002, _OBJSIZ_6_0_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3901);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3901 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3901,F199_3901_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.remove_insert_sep */
void F199_3903 (EIF_REFERENCE Current)
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
	tr1 = F1002_12711(RTCV(RTOSCF(3901,F199_3901,(Current))));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = RTOSCF(3901,F199_3901,(Current));
		F966_11545(RTCV(loc1), tr1);
	}
	RTLE;
}

/* {EV_SHARED_TRANSPORT_I}.dockable_dialog_target */
EIF_REFERENCE F199_3904 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3619[Dtype(Current) - 198]);
}


/* {EV_SHARED_TRANSPORT_I}.internal_screen */
static EIF_REFERENCE F199_3905_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (3905);
#define Result RTOSR(3905)
	RTOC_NEW(Result);
	tr1 = RTLNS(961, 961, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (3905);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F199_3905 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(3905,F199_3905_body,(Current));
}

void EIF_Minit257 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
