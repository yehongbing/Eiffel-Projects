/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev871.h"
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

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.make */
void F1178_16544 (EIF_REFERENCE Current)
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
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.is_selected */
EIF_BOOLEAN F1178_16545 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = '\01';
		tr1 = F1145_15797(RTCV(loc1));
		if (!((EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + _REFACS_12_)))) {
			tr1 = F1145_15798(RTCV(loc1));
			tr2 = F1029_13066(Current);
			tb1 = F701_6590(RTCV(tr1), tr2);
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.destroy */
void F1178_16546 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(Current);
		F1057_13817(RTCV(loc1), tr1);
	}
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.enable_select */
void F1178_16547 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1178_16545(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			ti4_1 = F1178_16582(Current);
			F1145_15807(RTCV(loc1), ti4_1);
		} else {
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.draw_rubber_band */
void F1178_16551 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.erase_rubber_band */
void F1178_16552 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.enable_capture */
void F1178_16553 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.disable_capture */
void F1178_16554 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_pointer_style */
void F1178_16557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.internal_set_pointer_style */
void F1178_16558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_pixmap */
void F1178_16559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = F1178_16582(Current);
		F1145_15836(RTCV(loc2), ti4_1, loc1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.tooltip */
EIF_REFERENCE F1178_16562 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_21_);
}


/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.x_position */
EIF_INTEGER_32 F1178_16563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_55_12_10_6_0_3_);
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
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.y_position */
EIF_INTEGER_32 F1178_16564 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		Result = F1178_16582(Current);
		ti4_1 = F1145_15842(RTCV(loc2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) * ti4_1);
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_55_12_10_6_0_3_);
		loc1 = (EIF_POINTER) gtk_scrolled_window_get_vadjustment((GtkScrolledWindow*) tp1);
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
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.screen_x */
EIF_INTEGER_32 F1178_16565 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1081_14167(RTCV(loc1));
		ti4_1 = F1178_16563(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.screen_y */
EIF_INTEGER_32 F1178_16566 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1081_14168(RTCV(loc1));
		ti4_1 = F1178_16564(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.width */
EIF_INTEGER_32 F1178_16567 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1081_14187(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.height */
EIF_INTEGER_32 F1178_16568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(RTCV(loc1));
		Result = F1017_12873(RTCV(tr1));
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.minimum_width */
EIF_INTEGER_32 F1178_16569 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1081_14174(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.on_item_added_at */
void F1178_16571 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1145_15792(RTCV(loc1));
		if ((EIF_BOOLEAN) (ti4_1 < arg2)) {
			F1145_15843(RTCV(loc1), arg2);
		}
		ti4_1 = F1178_16582(Current);
		F1145_15834(RTCV(loc1), arg2, ti4_1, arg1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.on_item_removed_at */
void F1178_16572 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1178_16582(Current);
		tr1 = RTMS_EX_H("",0,0);
		F1145_15834(RTCV(loc1), arg2, ti4_1, tr1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_pebble_void */
void F1178_16573 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) NULL;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.able_to_transport */
EIF_BOOLEAN F1178_16574 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.real_pointed_target */
EIF_REFERENCE F1178_16575 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1178_16576 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
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

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.update_for_pick_and_drop */
void F1178_16577 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_list_iter */
void F1178_16578 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) arg1;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.list_iter */
EIF_REFERENCE F1178_16579 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_19_);
}


/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_parent_imp */
void F1178_16580 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_20_) = (EIF_REFERENCE) arg1;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.parent_imp */
EIF_REFERENCE F1178_16581 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_20_);
}


/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.index */
EIF_INTEGER_32 F1178_16582 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_45_);
	Result = F585_5762(RTCV(tr1), Current, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.interface */
static EIF_REFERENCE F1178_16583_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1178_16583 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1178_16583_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_12_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit871 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
