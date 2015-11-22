/*
 * Code for class EV_PICK_AND_DROPABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev733.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_I}.pebble */
EIF_REFERENCE F1093_14388 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11165[Dtype(Current) - 1092]);
}


/* {EV_PICK_AND_DROPABLE_I}.pebble_function */
EIF_REFERENCE F1093_14389 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11166[Dtype(Current) - 1092]);
}


/* {EV_PICK_AND_DROPABLE_I}.configurable_target_menu_handler */
EIF_REFERENCE F1093_14391 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11168[Dtype(Current) - 1092]);
}


/* {EV_PICK_AND_DROPABLE_I}.accept_cursor */
EIF_REFERENCE F1093_14392 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11169[Dtype(Current) - 1092]);
}


/* {EV_PICK_AND_DROPABLE_I}.deny_cursor */
EIF_REFERENCE F1093_14393 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11170[Dtype(Current) - 1092]);
}


/* {EV_PICK_AND_DROPABLE_I}.reset_pebble_function */
void F1093_14401 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O11166[dtype-1092]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R7711[Dtype(loc1)-916])(RTCV(loc1));
		*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_pick_and_drop */
EIF_BOOLEAN F1093_14414 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O11198[dtype-1092]) == ((EIF_INTEGER_8) 0L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O11198[dtype-1092]) == ((EIF_INTEGER_8) 3L)));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_drag_and_drop */
EIF_BOOLEAN F1093_14415 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O11198[Dtype(Current)-1092]) == ((EIF_INTEGER_8) 1L));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_target_menu */
EIF_BOOLEAN F1093_14416 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O11198[Dtype(Current)-1092]) == ((EIF_INTEGER_8) 2L));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_configurable_target_menu */
EIF_BOOLEAN F1093_14417 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O11198[Dtype(Current)-1092]) == ((EIF_INTEGER_8) 3L));
}

/* {EV_PICK_AND_DROPABLE_I}.execute */
void F1093_14428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11210[dtype-1093])(Current);
	ti2_1 = (EIF_INTEGER_16) arg6;
	*(EIF_INTEGER_16 *)(Current + O3621[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg7;
	*(EIF_INTEGER_16 *)(Current + O3622[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	tr1 = F1093_14440(Current);
	F1048_13505(RTCV(tr1), arg6, arg7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11209[dtype-1093])(Current);
	loc1 = F1093_14430(Current);
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(963), loc2);
	loc3 = RTOSCF(14441,F1093_14441,(Current));
	loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_);
	loc3 = F1030_13088(RTCV(loc3));
	loc3 = RTRV(eif_non_attached_type(1048), loc3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_6_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F163_3482(RTCV(loc3));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,874,874,963,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+3)->it_r = loc2;
		RTAR(tr2,loc2);
		F732_6800(RTCV(tr1), tr2);
	}
	F1093_14429(Current, loc1);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.update_pointer_style */
void F1093_14429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	loc1 = RTCCL(tr1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && EIF_TEST(loc1))) {
		tr1 = F70_2603(RTCV(arg1));
		tr2 = RTCCL(loc1);
		tb2 = F733_6803(RTCV(tr1), tr2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O11169[dtype-1092]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11214[dtype-1093])(Current, loc2);
		} else {
			tr1 = RTOSCF(3888,F199_3888,(Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11214[dtype-1093])(Current, tr1);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O11170[dtype-1092]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11214[dtype-1093])(Current, loc3);
		} else {
			tr1 = RTOSCF(3889,F199_3889,(Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11214[dtype-1093])(Current, tr1);
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.pointed_target */
EIF_REFERENCE F1093_14430 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11208[dtype-1093])(Current);
	Result = (EIF_REFERENCE) loc1;
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(967), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
		loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + O11239[Dtype(loc3)-1094]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3621[dtype-198]);
			loc4 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F950_11089(RTCV(loc2));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3622[dtype-198]);
			loc5 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F950_11090(RTCV(loc2));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ti4_1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc4;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc5;
			Result = F917_9728(RTCV(loc3), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_I}.call_pebble_function */
void F1093_14434 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11166[dtype-1092]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7682[Dtype(loc1)-915])(RTCV(loc1), tr1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7708[Dtype(loc1)-916])(RTCV(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.modify_widget_appearance */
void F1093_14435 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	
	RTGC;
	loc2 = F1049_13568(RTCV(F1093_14440(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc2)-303])(RTCV(loc2));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc2)-273])(RTCV(loc2));
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc2)-303])(RTCV(loc2));
		loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
		loc1 = RTRV(eif_non_attached_type(1122), loc1);
		RTCT0("window_implementation_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1115_15280(RTCV(loc1), arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc2)-303])(RTCV(loc2));
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.application_implementation */
EIF_REFERENCE F1093_14440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOSCF(14441,F1093_14441,(Current));
	Result = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_1_);
	Result = F1030_13088(RTCV(Result));
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_I}.environment */
static EIF_REFERENCE F1093_14441_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (14441);
#define Result RTOSR(14441)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (14441);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1093_14441 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14441,F1093_14441_body,(Current));
}

/* {EV_PICK_AND_DROPABLE_I}.interface */
static EIF_REFERENCE F1093_14442_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1093_14442 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1093_14442_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit733 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
