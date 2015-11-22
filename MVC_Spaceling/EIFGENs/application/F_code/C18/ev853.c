/*
 * Code for class EV_LIST_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev853.h"
#include <ev_gtk.h>
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

/* {EV_LIST_ITEM_IMP}.make */
void F1160_16343 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(925));
	F920_10235(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.able_to_transport */
EIF_BOOLEAN F1160_16346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	tb1 = '\0';
	if (F1093_14415(Current)) {
		tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L));
	}
	if (!(tb1)) {
		tb1 = '\0';
		tb2 = '\0';
		if (F1093_14414(Current)) {
			tb2 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L));
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) !F1093_14417(Current);
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1160_16347 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\01';
	if (!F1093_14416(Current)) {
		tb2 = F1093_14417(Current);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L));
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) !arg2;
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.reset_pebble_function */
void F1160_16348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1147_15941(RTCV(loc1));
	} else {
		F1093_14401(Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.draw_rubber_band */
void F1160_16349 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.erase_rubber_band */
void F1160_16350 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.enable_capture */
void F1160_16351 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.disable_capture */
void F1160_16352 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.set_pointer_style */
void F1160_16355 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.internal_set_pointer_style */
void F1160_16356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.real_pointed_target */
EIF_REFERENCE F1160_16357 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_LIST_ITEM_IMP}.enable_select */
void F1160_16359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1029_13066(Current);
	ti4_1 = F1057_13796(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R12120[Dtype(loc1)-1147])(RTCV(loc1), ti4_1);
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.text */
EIF_REFERENCE F1160_16361 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.set_text */
void F1160_16364 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F920_10294(RTCV(arg1));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(Current);
		ti4_1 = F1057_13796(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
		F1147_15944(RTCV(loc1), ti4_1, arg1);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.set_pixmap */
void F1160_16365 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) loc1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F1029_13066(Current);
		ti4_1 = F1057_13796(RTCV(loc2), tr1, ((EIF_INTEGER_32) 1L));
		F1147_15946(RTCV(loc2), ti4_1, loc1);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.pixmap */
EIF_REFERENCE F1160_16367 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {EV_LIST_ITEM_IMP}.x_position */
EIF_INTEGER_32 F1160_16368 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = loc2;
		loc3 = RTRV(eif_non_attached_type(1147), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_49_12_10_5_0_2_);
			loc1 = (EIF_POINTER) gtk_scrolled_window_get_hadjustment((GtkScrolledWindow*) tp1);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			if ((EIF_BOOLEAN)(loc1 != tp1)) {
				tr4_1 = (EIF_REAL_32) (((GtkAdjustment *)loc1)->value);
				tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
				*(EIF_REAL_32 *)tr1 = tr4_1;
				
				Result = F846_8809(RTCV(tr1));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -Result;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.y_position */
EIF_INTEGER_32 F1160_16369 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
		Result = F1057_13796(RTCV(loc2), tr1, ((EIF_INTEGER_32) 1L));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12227[Dtype(loc2)-1146])(RTCV(loc2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) * ti4_1);
		loc3 = loc2;
		loc3 = RTRV(eif_non_attached_type(1147), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_49_12_10_5_0_2_);
			loc1 = (EIF_POINTER) gtk_scrolled_window_get_hadjustment((GtkScrolledWindow*) tp1);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			if ((EIF_BOOLEAN)(loc1 != tp1)) {
				tr4_1 = (EIF_REAL_32) (((GtkAdjustment *)loc1)->value);
				tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
				*(EIF_REAL_32 *)tr1 = tr4_1;
				
				ti4_1 = F846_8809(RTCV(tr1));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.screen_x */
EIF_INTEGER_32 F1160_16370 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1081_14167(RTCV(loc1));
		ti4_1 = F1160_16368(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.screen_y */
EIF_INTEGER_32 F1160_16371 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1081_14168(RTCV(loc1));
		ti4_1 = F1160_16369(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.width */
EIF_INTEGER_32 F1160_16372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1081_14187(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_LIST_ITEM_IMP}.height */
EIF_INTEGER_32 F1160_16373 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1081_14188(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_LIST_ITEM_IMP}.minimum_width */
EIF_INTEGER_32 F1160_16374 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1081_14174(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_LIST_ITEM_IMP}.internal_text */
EIF_REFERENCE F1160_16376 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_18_);
}


/* {EV_LIST_ITEM_IMP}.destroy */
void F1160_16377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(RTCV(loc1));
		tr2 = F1029_13066(Current);
		F966_11545(RTCV(tr1), tr2);
	}
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.update_for_pick_and_drop */
void F1160_16378 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_LIST_ITEM_IMP}.set_list_iter */
void F1160_16380 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_20_) = (EIF_REFERENCE) arg1;
}

/* {EV_LIST_ITEM_IMP}.list_iter */
EIF_REFERENCE F1160_16381 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_20_);
}


/* {EV_LIST_ITEM_IMP}.parent_imp */
EIF_REFERENCE F1160_16382 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_21_);
}


/* {EV_LIST_ITEM_IMP}.set_parent_imp */
void F1160_16383 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) arg1;
}

/* {EV_LIST_ITEM_IMP}.interface */
static EIF_REFERENCE F1160_16384_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1160_16384 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1160_16384_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_12_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit853 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
