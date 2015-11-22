/*
 * Code for class EV_PICK_AND_DROPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev734.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_562
static void inline_F24_562 (EIF_POINTER arg1)
{
	#if GTK_MAJOR_VERSION > 1
	gtk_menu_shell_cancel((GtkMenuShell*)arg1);
#endif
	;
}
#define INLINE_F24_562
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_IMP}.on_pointer_motion */
void F1094_14443 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 loc5 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc6 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc7 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc8 = (EIF_INTEGER_16) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,arg1);
	RTLR(5,loc9);
	
	RTGC;
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc4 = (EIF_REFERENCE) Current;
	loc1 = Current;
	loc1 = RTRV(eif_non_attached_type(1067), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb1 = '\0';
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11226[dtype-1095])(Current)) {
			tb2 = '\01';
			tb3 = *(EIF_BOOLEAN *)(RTCV(loc1) + O10798[Dtype(loc1)-1067]);
			if (!tb3) {
				tr1 = F1049_13623(RTCV(RTOSCF(14148,F1079_14148,(Current))));
				tb2 = (EIF_BOOLEAN)(tr1 == loc1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			ti4_1 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 1L));
			ti4_2 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 2L));
			tr8_1 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 3L));
			tr8_2 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 4L));
			tr8_3 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 5L));
			ti4_3 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 6L));
			ti4_4 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 7L));
			F1068_13919(RTCV(loc1), ti4_1, ti4_2, tr8_1, tr8_2, tr8_3, ti4_3, ti4_4);
		} else {
			tb1 = '\0';
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(RTCV(loc1) + O10798[Dtype(loc1)-1067]);
			if (tb3) {
				tb2 = F1093_14415(Current);
			}
			if (tb2) {
				tr1 = F1049_13622(RTCV(RTOSCF(14148,F1079_14148,(Current))));
				tb1 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (tb1) {
				loc5 = *(EIF_INTEGER_16 *)(RTCV(loc1) + O3610[Dtype(loc1)-198]);
				loc6 = *(EIF_INTEGER_16 *)(RTCV(loc1) + O3611[Dtype(loc1)-198]);
				tb1 = '\01';
				ti4_1 = (EIF_INTEGER_32) loc5;
				ti4_2 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 1L));
				ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
				ti4_2 = ((EIF_INTEGER_32) 3L);
				if (!(EIF_BOOLEAN) (ti4_1 > ti4_2)) {
					ti4_1 = (EIF_INTEGER_32) loc6;
					ti4_2 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 2L));
					ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
					ti4_2 = ((EIF_INTEGER_32) 3L);
					tb1 = (EIF_BOOLEAN) (ti4_1 > ti4_2);
				}
				if (tb1) {
					loc7 = *(EIF_INTEGER_16 *)(RTCV(loc1) + O10799[Dtype(loc1)-1067]);
					loc8 = *(EIF_INTEGER_16 *)(RTCV(loc1) + O10800[Dtype(loc1)-1067]);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					F1068_13927(RTCV(loc1));
					ti4_1 = (EIF_INTEGER_32) loc5;
					ti4_2 = (EIF_INTEGER_32) loc6;
					ti4_3 = (EIF_INTEGER_32) loc7;
					ti4_4 = (EIF_INTEGER_32) loc8;
					F1094_14460(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 1L), (EIF_BOOLEAN) 1, (EIF_REAL_64) 0.0, (EIF_REAL_64) 0.0, (EIF_REAL_64) 0.0, ti4_3, ti4_4, (EIF_BOOLEAN) 0);
				}
			}
		}
		tr1 = F1049_13623(RTCV(RTOSCF(14148,F1079_14148,(Current))));
		if ((EIF_BOOLEAN)(tr1 == loc1)) {
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	tb1 = '\0';
	if (loc3) {
		tr1 = F1049_13622(RTCV(RTOSCF(14148,F1079_14148,(Current))));
		tb1 = (EIF_BOOLEAN)(tr1 == loc4);
	}
	if (tb1) {
		ti4_1 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 1L));
		ti4_2 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 2L));
		tr8_1 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 3L));
		tr8_2 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 4L));
		tr8_3 = F842_8522(RTCV(arg1), ((EIF_INTEGER_32) 5L));
		ti4_3 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 6L));
		ti4_4 = F842_8530(RTCV(arg1), ((EIF_INTEGER_32) 7L));
		F1093_14428(Current, ti4_1, ti4_2, tr8_1, tr8_2, tr8_3, ti4_3, ti4_4);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = '\0';
	if (loc2) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11220[dtype-1095])(Current);
		loc9 = tr1;
		tb1 = EIF_TEST(loc9);
	}
	if (tb1) {
		F732_6800(RTCV(loc9), arg1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.enable_capture */
void F1094_14446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1094_14448(Current)) {
		loc2 = (EIF_POINTER) gtk_grab_get_current();
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_MENU((loc2)))) {
				inline_F24_562(loc2);
			}
		}
		if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11017[dtype-1080])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11016[dtype-1080])(Current);
		}
		loc1 = *(EIF_REFERENCE *)(Current + O10149[dtype-1028]);
		loc1 = RTRV(eif_non_attached_type(967), loc1);
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		F1048_13464(RTCV(tr1), loc1);
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11010[dtype-1080])(Current);
		gtk_grab_add((GtkWidget*) tp1);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_44_);
		if ((EIF_BOOLEAN)(tr1 != F1081_14194(Current))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11223[dtype-1093])(Current);
		}
		F1049_13635(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.disable_capture */
void F1094_14447 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (F1094_14448(Current)) {
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11010[dtype-1080])(Current);
		gtk_grab_remove((GtkWidget*) tp1);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_44_);
		if ((EIF_BOOLEAN)(tr1 != F1081_14194(Current))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11224[dtype-1093])(Current);
		}
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		F1048_13464(RTCV(tr1), NULL);
	}
	F1049_13634(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.has_capture */
EIF_BOOLEAN F1094_14448 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_29_);
	if (!(EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + O10149[Dtype(Current)-1028]))) {
		tr1 = F1049_13622(RTCV(RTOSCF(14148,F1079_14148,(Current))));
		Result = (EIF_BOOLEAN)(tr1 == Current);
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_IMP}.grab_keyboard_and_mouse */
void F1094_14449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1049_13635(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11010[Dtype(Current)-1080])(Current);
	loc2 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
	ti4_1 = (EIF_INTEGER_32) GDK_BUTTON_RELEASE_MASK;
	ti4_2 = (EIF_INTEGER_32) GDK_BUTTON_PRESS_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_POINTER_MOTION_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GDK_POINTER_MOTION_HINT_MASK;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	tp1 = (EIF_POINTER) NULL;
	tp2 = (EIF_POINTER) NULL;
	loc1 = (EIF_INTEGER_32) gdk_pointer_grab((GdkWindow*) loc2, (gint) ((EIF_INTEGER_32) 1L), (GdkEventMask) ti4_1, (GdkWindow*) tp1, (GdkCursor*) tp2, (guint32) ((EIF_INTEGER_32) 0L));
	loc1 = (EIF_INTEGER_32) gdk_keyboard_grab((GdkWindow*) loc2, (gboolean) (EIF_BOOLEAN) 1, (guint32) ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.release_keyboard_and_mouse */
void F1094_14450 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	gdk_pointer_ungrab((guint32) ((EIF_INTEGER_32) 0L));
	gdk_keyboard_ungrab((guint32) ((EIF_INTEGER_32) 0L));
	F1049_13634(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.draw_rubber_band */
void F1094_14451 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1048_13501(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.erase_rubber_band */
void F1094_14452 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1048_13502(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.enable_transport */
void F1094_14453 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O11190[Dtype(Current)-1092]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pre_pick_steps */
void F1094_14455 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	
	RTGC;
	gdk_flush();
	tr1 = F1093_14430(Current);
	F1093_14429(Current, tr1);
	loc1 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = RTCCL(loc1);
		F1049_13618(RTCV(tr1), Current, tr2);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3116[dtype-109]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O3116[dtype-109]);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		F732_6800(RTCV(tr1), tr2);
	}
	ti2_1 = (EIF_INTEGER_16) arg3;
	*(EIF_INTEGER_16 *)(Current + O3621[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current + O3622[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	tb1 = '\0';
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]) == ti2_1)) {
		ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]) == ti2_1);
	}
	if (tb1) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		F1048_13499(RTCV(tr1), arg3, arg4);
	} else {
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN) (ti4_1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current);
			ti2_1 = (EIF_INTEGER_16) ti4_1;
			*(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
		}
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN) (ti4_1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current);
			ti2_1 = (EIF_INTEGER_16) ti4_1;
			*(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
		}
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]);
		ti4_2 = (EIF_INTEGER_32) ti2_1;
		F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)));
	}
	F1093_14435(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.able_to_transport */
EIF_BOOLEAN F1094_14458 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tb2 = '\0';
	if (F1093_14415(Current)) {
		tb2 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11226[Dtype(Current)-1095])(Current);
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

/* {EV_PICK_AND_DROPABLE_IMP}.on_mouse_button_event */
void F1094_14459 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc5);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GDK_BUTTON_RELEASE;
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 != ti4_1);
	loc1 = RTOSCF(14148,F1079_14148,(Current));
	loc3 = F1049_13621(RTCV(loc1));
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc3;
	loc2 = F1081_14194(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb1 = F1049_13621(RTCV(loc1));
		if ((EIF_BOOLEAN) !tb1) {
			if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L))) {
				loc4 = Current;
				loc4 = RTRV(eif_non_attached_type(1067), loc4);
				tb1 = '\0';
				tb2 = '\0';
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
					tb2 = (EIF_BOOLEAN)(loc4 != NULL);
				}
				if (tb2) {
					tb2 = '\01';
					if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11226[dtype-1095])(Current)) {
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11228[dtype-1093])(Current, arg4);
					}
					tb1 = tb2;
				}
				if (tb1) {
					F1068_13915(RTCV(loc4), arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
				}
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					tb1 = (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_RELEASE);
				}
				if (tb1) {
					F1068_13926(RTCV(loc4), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
				}
			} else {
				tb1 = '\01';
				tb2 = '\0';
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_RELEASE)) {
					tb3 = '\0';
					tb4 = '\0';
					if (F1093_14414(Current)) {
						tb4 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
					}
					if (tb4) {
						tb3 = (EIF_BOOLEAN) !F1093_14417(Current);
					}
					tb2 = tb3;
				}
				if (!(tb2)) {
					tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R11231[dtype-1093])(Current, arg4, loc6);
				}
				if (tb1) {
					F1094_14460(Current, arg2, arg3, arg4, loc6, arg5, arg6, arg7, arg8, arg9, (EIF_BOOLEAN) 0);
					tr1 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
				}
			}
		} else {
			loc5 = (EIF_REFERENCE) Current;
			loc4 = loc5;
			loc4 = RTRV(eif_non_attached_type(1067), loc4);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				tb1 = (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_RELEASE);
			}
			if (tb1) {
				F1068_13926(RTCV(loc4), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
			}
			tb1 = '\0';
			if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_RELEASE)) {
				tr1 = F1049_13622(RTCV(loc1));
				tb1 = (EIF_BOOLEAN)(tr1 == loc5);
			}
			if (tb1) {
				F1094_14463(Current, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
			}
		}
		if (loc3) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32)) R11221[dtype-1095])(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.start_transport */
void F1094_14460 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_BOOLEAN arg10)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R11211[dtype-1092])(Current, arg1, arg2, arg8, arg9);
	loc2 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11178[dtype-1092])(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,6,841,0,0,874,874,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 7, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
		RTAR(tr1,loc2);
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+4)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+5)->it_i4 = arg8;
		((EIF_TYPED_VALUE *)tr1+6)->it_i4 = arg9;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNRF(typres0, (EIF_POINTER) __A734_215, (EIF_POINTER) _A734_215, (EIF_POINTER)(0),tr1, 1, 0);
		}
		loc1 = (EIF_REFERENCE) tr2;
	}
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R11231[dtype-1093])(Current, arg3, arg4)) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11230[dtype-1093])(Current);
		tr3 = RTCCL(loc2);
		F1048_13506(RTCV(tr1), arg1, arg2, arg8, arg9, tr2, tr3, loc1, arg10);
	} else {
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_));
			;
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pebble_source */
EIF_REFERENCE F1094_14461 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1029_13066(Current);
}

/* {EV_PICK_AND_DROPABLE_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1094_14462 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
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

/* {EV_PICK_AND_DROPABLE_IMP}.end_transport */
void F1094_14463 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,loc7);
	RTLR(8,tr2);
	
	RTGC;
	F1094_14447(Current);
	loc3 = RTOSCF(14148,F1079_14148,(Current));
	F1094_14452(Current);
	F1093_14435(Current, (EIF_BOOLEAN) 0);
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11014[dtype-1080]);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			F1081_14181(Current, loc6);
		} else {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			loc5 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			if ((EIF_BOOLEAN)(loc5 != tp1)) {
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp2 = tp1;
				gdk_window_set_cursor((GdkWindow*) loc5, (GdkCursor*) tp2);
			}
		}
	}
	loc4 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tr1 = RTCCL(loc4);
		F1049_13619(RTCV(loc3), tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
		RTAR(tr1,loc4);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R11228[dtype-1093])(Current, arg3)) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R11231[dtype-1093])(Current, arg3, (EIF_BOOLEAN) 0);
		}
		if (tb1) {
			loc1 = F1093_14430(Current);
			tb1 = '\0';
			loc7 = loc1;
			if (EIF_TEST(loc7)) {
				tr1 = F70_2603(RTCV(loc7));
				tr2 = RTCCL(loc4);
				tb2 = F733_6803(RTCV(tr1), tr2);
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = F70_2603(RTCV(loc7));
				F733_6801(RTCV(tr1), loc2);
				tr1 = F163_3476(RTCV(loc3));
				F733_6801(RTCV(tr1), loc2);
			} else {
				tr1 = F163_3479(RTCV(loc3));
				F733_6801(RTCV(tr1), loc2);
			}
		} else {
			tr1 = F163_3479(RTCV(loc3));
			F733_6801(RTCV(tr1), loc2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3119[dtype-109]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3119[dtype-109]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,791,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
			RTAR(tr2,loc1);
			F732_6800(RTCV(tr1), tr2);
		}
	}
	F1094_14453(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R11232[dtype-1093])(Current, arg3);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.post_drop_steps */
void F1094_14464 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	F1048_13499(RTCV(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11178[Dtype(Current)-1092])(Current);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target */
EIF_REFERENCE F1094_14465 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc5);
	RTLR(7,loc6);
	
	RTGC;
	loc7 = RTOSCF(14148,F1079_14148,(Current));
	tb1 = *(EIF_BOOLEAN *)(RTCV(loc7)+ _CHROFF_49_8_);
	if (tb1) {
	} else {
		F1049_13628(RTCV(loc7));
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_48_);
	loc1 = eif_pointer_item(RTCV(tr1),1);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_48_);
	loc2 = eif_integer_32_item(RTCV(tr1),2);
	tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_48_);
	loc3 = eif_integer_32_item(RTCV(tr1),3);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		loc4 = F1049_13640(RTCV(loc7), loc1);
		loc4 = RTRV(eif_non_attached_type(1093), loc4);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc4) + O10979[Dtype(loc4)-1078]);
			ti4_1 = (EIF_INTEGER_32) (((GtkObject *)tp1)->flags);
			ti4_2 = (EIF_INTEGER_32) GTK_SENSITIVE;
			ti4_1 = eif_bit_and(ti4_1,ti4_2);
			tb2 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) GTK_SENSITIVE);
		}
		if (tb2) {
			tb2 = F1029_13065(RTCV(loc4));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_27_);
			tr2 = F1029_13066(RTCV(loc4));
			ti4_1 = F788_7991(RTCV(tr2));
			tb1 = F695_6438(RTCV(tr1), ti4_1);
			if (tb1) {
				Result = *(EIF_REFERENCE *)(RTCV(loc4) + O10149[Dtype(loc4)-1028]);
			}
			loc5 = loc4;
			loc5 = RTRV(eif_non_attached_type(490), loc5);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				tp1 = *(EIF_POINTER *)(RTCV(loc4) + O10979[Dtype(loc4)-1078]);
				tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
				{
				/* INLINED CODE (default_pointer) */
				tp2 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				tp3 = tp2;
				loc1 = (EIF_POINTER) gdk_window_get_pointer((GdkWindow*) tp1, (gint*) (EIF_INTEGER_32 *) &(loc2), (gint*) (EIF_INTEGER_32 *) &(loc3), (GdkModifierType*) tp3);
				loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4574[Dtype(loc5)-1143])(RTCV(loc5), loc2, loc3);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc7) + _REFACS_27_);
					tr2 = F1029_13066(RTCV(loc6));
					ti4_1 = F788_7991(RTCV(tr2));
					tb2 = F695_6438(RTCV(tr1), ti4_1);
					tb1 = tb2;
				}
				if (tb1) {
					Result = *(EIF_REFERENCE *)(RTCV(loc6) + O10149[Dtype(loc6)-1028]);
					RTLE;
					return (EIF_REFERENCE) Result;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_IMP}.create_drop_actions */
EIF_REFERENCE F1094_14466 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(732, 732, _OBJSIZ_10_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = F1029_13066(Current);
	F792_8140(RTCV(tr1), Result);
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_IMP}.interface */
static EIF_REFERENCE F1094_14468_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1094_14468 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1094_14468_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.inline-agent#1 of start_transport */
void F1094_18250 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) RTCCL(arg1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F1094_14446(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R11225[dtype-1093])(Current, arg2, arg3, arg4, arg5);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3125[dtype-109]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3125[dtype-109]);
			tr2 = RTCCL(arg1);
			tb2 = F733_6803(RTCV(tr1), tr2);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O11169[dtype-1092]);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				F1081_14181(Current, loc1);
			} else {
				tr1 = RTOSCF(3888,F199_3888,(Current));
				F1081_14181(Current, tr1);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O11170[dtype-1092]);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				F1081_14181(Current, loc2);
			} else {
				tr1 = RTOSCF(3889,F199_3889,(Current));
				F1081_14181(Current, tr1);
			}
		}
	}
	RTLE;
}

void EIF_Minit734 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
