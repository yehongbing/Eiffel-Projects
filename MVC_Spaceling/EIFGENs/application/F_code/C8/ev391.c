/*
 * Code for class EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev391.h"
#include <ev_gtk.h>
#include "eif_object_id.h"
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1239
static EIF_POINTER inline_F31_1239 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (gtk_tree_view_get_column ((GtkTreeView*) arg1, (gint) arg2))
	;
}
#define INLINE_F31_1239
#endif
#ifndef INLINE_F31_1253
static EIF_INTEGER_32 inline_F31_1253 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (gtk_tree_view_column_get_width ((GtkTreeViewColumn*) arg1))
	;
}
#define INLINE_F31_1253
#endif
#ifndef INLINE_F31_1330
static EIF_POINTER inline_F31_1330 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (((GValue*)arg1 + (int)(arg2 - 1)))
	;
}
#define INLINE_F31_1330
#endif
#ifndef INLINE_F31_1329
static EIF_POINTER inline_F31_1329 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (((GValue*)arg1 + (int)(arg2)))
	;
}
#define INLINE_F31_1329
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.mcl_column_click_callback */
void F789_8060 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1144), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_8_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0, 2, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
		F732_6800(RTCV(loc2), tr1);
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.mcl_column_resize_callback */
void F789_8061 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,Current);
	
	RTGC;
	loc3 = (EIF_REFERENCE) eif_id_object(arg1);
	loc3 = RTRV(eif_non_attached_type(1144), loc3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_9_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_55_12_10_6_0_2_);
			loc1 = inline_F31_1239(tp1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
			loc2 = inline_F31_1253(loc1);
			tb1 = '\0';
			tb2 = '\0';
			ti4_1 = F1145_15792(RTCV(loc3));
			if ((EIF_BOOLEAN) (arg2 <= ti4_1)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_47_);
				tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb2) {
				ti4_1 = F1130_15544(RTCV(loc3), arg2);
				tb1 = (EIF_BOOLEAN)(ti4_1 != loc2);
			}
			if (tb1) {
				F1130_15565(RTCV(loc3), loc2, arg2);
				tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_9_);
				loc4 = tr1;
				if (EIF_TEST(loc4)) {
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr1 = RTLNTS(typres0, 2, 1);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
					F732_6800(RTCV(loc4), tr1);
				}
			}
		}
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.text_buffer_mark_set_intermediary */
void F789_8062 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1150), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tp1 = inline_F31_1330(arg3, ((EIF_INTEGER_32) 1L));
		loc2 = (EIF_POINTER) g_value_peek_pointer((GValue*) tp1);
		tp1 = inline_F31_1330(arg3, ((EIF_INTEGER_32) 2L));
		loc3 = (EIF_POINTER) g_value_peek_pointer((GValue*) tp1);
		F1151_16084(RTCV(loc1), loc2, loc3);
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.tree_row_expansion_change_intermediary */
void F789_8063 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1145), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tp1 = inline_F31_1329(arg4, ((EIF_INTEGER_32) 1L));
		loc3 = (EIF_POINTER) g_value_peek_pointer((GValue*) tp1);
		loc2 = F1146_15878(RTCV(loc1), loc3);
		if (arg2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_6_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F161_3456(RTCV(loc2));
				F732_6800(RTCV(tr1), NULL);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_7_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F161_3459(RTCV(loc2));
				F732_6800(RTCV(tr1), NULL);
			}
		}
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.page_switch_translate */
EIF_REFERENCE F789_8065 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = inline_F31_1329(arg2, ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,868,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 2, 1);
	}
	tu4_1 = (EIF_NATURAL_32) g_value_get_uint((GValue*) loc1);
	((EIF_TYPED_VALUE *)tr1+1)->it_n4 = tu4_1;
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.on_pnd_deferred_item_parent_selection_change */
void F789_8066 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(490), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4576[Dtype(loc1)-490])(RTCV(loc1));
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.on_combo_box_toggle_button_event */
void F789_8067 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1152), loc1);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_47_);
		tb2 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb2) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		switch (arg2) {
			case 1L:
				F1153_16175(RTCV(loc1));
				break;
			case 2L:
				F1153_16176(RTCV(loc1));
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {EV_GTK_DEPENDENT_INTERMEDIARY_ROUTINES}.c_get_eif_reference_from_object_id */
EIF_REFERENCE F789_8070 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	Result = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	
	RTLE;
	return Result;
}

void EIF_Minit391 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
