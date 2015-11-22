/*
 * Code for class EV_INTERMEDIARY_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev392.h"
#include "eif_object_id.h"
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INTERMEDIARY_ROUTINES}.on_timeout_intermediary */
void F790_8071 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1041), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1041_13307(RTCV(loc1));
	}
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.on_notebook_page_switch_intermediary */
void F790_8072 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1105), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = (EIF_INTEGER_32) arg2;
	F1106_14792(RTCV(loc1), ti4_1);
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.on_gauge_value_changed_intermediary */
void F790_8074 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1155), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1156_16249(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.on_size_allocate_intermediate */
void F790_8075 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R11263[Dtype(loc1)-1095])(RTCV(loc1), arg2, arg3, arg4, arg5);
	}
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.on_set_focus_event_intermediary */
void F790_8076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTRV(eif_non_attached_type(1122), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1029_13065(RTCV(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F1123_15447(RTCV(loc1), arg2);
	}
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.text_component_change_intermediary */
void F790_8077 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1148), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12245[Dtype(loc1)-1149])(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.button_select_intermediary */
void F790_8079 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1153), loc1);
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(1154), loc2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb2 = F1155_16205(RTCV(loc2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_2_);
			loc3 = tr1;
			tb2 = EIF_TEST(loc3);
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_43_);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			F732_6800(RTCV(loc3), NULL);
		}
	}
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.menu_item_activate_intermediary */
void F790_8080 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1171), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R12390[Dtype(loc1)-1171])(RTCV(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTOSCF(14148,F1079_14148,(RTCV(loc1)));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1171,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
		RTAR(tr2,loc1);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,1171,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNRF(typres0, (EIF_POINTER) __A865_264, (EIF_POINTER) _A865_264, (EIF_POINTER)(R12391[Dtype((((EIF_TYPED_VALUE *)tr2)[1].it_r)) - 1171]),tr2, 1, 0);
		}
		F1048_13486(RTCV(tr1), tr3);
	}
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.color_dialog_on_ok_intermediary */
void F790_8081 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1189), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16719(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.color_dialog_on_cancel_intermediary */
void F790_8082 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1189), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16720(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.directory_dialog_on_ok_intermediary */
void F790_8083 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1188), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16719(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.directory_dialog_on_cancel_intermediary */
void F790_8084 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1188), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16720(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.file_dialog_on_ok_intermediary */
void F790_8085 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1191), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1192_16825(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.file_dialog_on_cancel_intermediary */
void F790_8086 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1191), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16720(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.font_dialog_on_ok_intermediary */
void F790_8087 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1190), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16719(RTCV(loc1));
	RTLE;
}

/* {EV_INTERMEDIARY_ROUTINES}.font_dialog_on_cancel_intermediary */
void F790_8088 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	
	RTGC;
	loc1 = (EIF_REFERENCE) c_ev_any_imp_get_eif_reference_from_object_id((GtkWidget*) arg1);
	loc1 = RTRV(eif_non_attached_type(1190), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1188_16720(RTCV(loc1));
	RTLE;
}

void EIF_Minit392 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
