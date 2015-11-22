/*
 * Code for class EV_MENU_ITEM_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev697.h"
#include <ev_gtk.h>
#include "ev_any_imp.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1079_14135
static EIF_REFERENCE inline_F1079_14135 (EIF_POINTER arg1)
{
	return (EIF_REFERENCE) (c_ev_any_imp_get_eif_reference_from_object_id (arg1))
	;
}
#define INLINE_F1079_14135
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM_LIST_IMP}.list_widget */
EIF_POINTER F1064_13842 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_i_th */
void F1064_13843 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,loc4);
	RTLR(7,loc5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1171), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]);
	F1064_13844(Current, loc1, arg2);
	loc3 = loc1;
	loc3 = RTRV(eif_non_attached_type(1174), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F1057_13805(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
		for (;;) {
			tb1 = '\01';
			if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == (EIF_INTEGER_32) (F1058_13827(Current) + ((EIF_INTEGER_32) 1L))))) {
				tb2 = '\0';
				tr1 = F1058_13826(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
				loc8 = tr1;
				if (EIF_TEST(loc8)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(loc8) + O8345[Dtype(loc8)-929]);
					tb2 = F1064_13846(Current, tr1);
				}
				tb1 = tb2;
			}
			if (tb1) break;
			loc4 = F1058_13826(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
			loc4 = RTRV(eif_non_attached_type(1172), loc4);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				tp1 = F1175_16518(RTCV(loc3));
				F1173_16496(RTCV(loc4), tp1);
				tp1 = F1175_16518(RTCV(loc3));
				if ((EIF_BOOLEAN)(tp1 != loc7)) {
					tp1 = *(EIF_POINTER *)(RTCV(loc4)+ _PTROFF_22_7_6_1_0_0_);
					gtk_check_menu_item_set_active((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 0);
				}
				tp1 = F1173_16497(RTCV(loc4));
				F1175_16517(RTCV(loc3), tp1);
			}
			F1057_13804(Current);
		}
	} else {
		loc4 = loc1;
		loc4 = RTRV(eif_non_attached_type(1172), loc4);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			loc3 = F1064_13845(Current, arg2);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tp1 = F1175_16518(RTCV(loc3));
				F1173_16496(RTCV(loc4), tp1);
				tp1 = F1175_16518(RTCV(loc3));
				{
				/* INLINED CODE (default_pointer) */
				tp2 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				if ((EIF_BOOLEAN)(tp1 != tp2)) {
					tp1 = *(EIF_POINTER *)(RTCV(loc4)+ _PTROFF_22_7_6_1_0_0_);
					gtk_check_menu_item_set_active((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 0);
				}
				tp1 = F1173_16497(RTCV(loc4));
				F1175_16517(RTCV(loc3), tp1);
			} else {
				tp1 = F1064_13850(Current);
				F1173_16496(RTCV(loc4), tp1);
				loc6 = F1173_16497(RTCV(loc4));
				{
				/* INLINED CODE (default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
				}
				if ((EIF_BOOLEAN)(F1064_13850(Current) != tp1)) {
					tp1 = *(EIF_POINTER *)(RTCV(loc4)+ _PTROFF_22_7_6_1_0_0_);
					gtk_check_menu_item_set_active((GtkCheckMenuItem*) tp1, (gboolean) (EIF_BOOLEAN) 0);
				}
				tp1 = F1173_16497(RTCV(loc4));
				F1064_13849(Current, tp1);
			}
		}
	}
	if ((EIF_BOOLEAN) !F1064_13846(Current, loc1)) {
		loc5 = loc1;
		loc5 = RTRV(eif_non_attached_type(1175), loc5);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = F1176_16526(RTCV(loc5));
			if (tb2) {
				F1176_16527(RTCV(loc5));
			}
		}
	}
	F1057_13805(Current, loc2);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu_item */
void F1064_13844 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10735[dtype-1063])(Current);
	tp2 = F1172_16484(RTCV(arg1));
	gtk_menu_shell_insert((GtkMenuShell*) tp1, (GtkWidget*) tp2, (gint) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	F701_6613(RTCV(tr1), arg2);
	tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	tr2 = F1029_13066(RTCV(arg1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), tr2);
	F1165_16461(RTCV(arg1), Current);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.separator_imp_by_index */
EIF_REFERENCE F1064_13845 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,Result);
	
	RTGC;
	loc1 = F1057_13792(Current);
	F1057_13802(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]) == (EIF_INTEGER_32) (F1058_13827(Current) + ((EIF_INTEGER_32) 1L))))) {
			tb1 = (EIF_BOOLEAN)(arg1 == loc2);
		}
		if (tb1) break;
		loc3 = F1058_13826(Current, *(EIF_INTEGER_32 *)(Current + O10693[dtype-1056]));
		loc3 = RTRV(eif_non_attached_type(1008), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			Result = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_3_);
			Result = RTRV(eif_non_attached_type(1174), Result);
		}
		F1057_13804(Current);
		loc2++;
	}
	F1057_13806(Current, loc1);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.is_menu_separator_imp */
EIF_BOOLEAN F1064_13846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,arg1);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_non_attached_type(1174), loc1);
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != NULL);
}

/* {EV_MENU_ITEM_LIST_IMP}.remove_i_th */
void F1064_13847 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc8);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	loc1 = F701_6584(RTCV(loc1), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
	loc1 = RTRV(eif_non_attached_type(1164), loc1);
	RTCT0("item_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10735[dtype-1063])(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	gtk_container_remove((GtkContainer*) tp1, (GtkWidget*) tp2);
	tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	F701_6613(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12383[Dtype(loc1)-1164])(RTCV(loc1), NULL);
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(1172), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb1 = F1173_16491(RTCV(loc2));
		if (tb1) {
			tp1 = F1173_16497(RTCV(loc2));
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) g_slist_length((GSList*) tp1) > ((EIF_INTEGER_32) 1L))) {
				tp1 = F1173_16497(RTCV(loc2));
				loc6 = (EIF_POINTER) g_slist_nth_data((GSList*) tp1, (guint) ((EIF_INTEGER_32) 0L));
				tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_22_7_6_1_0_0_);
				if ((EIF_BOOLEAN)(loc6 == tp1)) {
					tp1 = F1173_16497(RTCV(loc2));
					loc6 = (EIF_POINTER) g_slist_nth_data((GSList*) tp1, (guint) ((EIF_INTEGER_32) 1L));
				}
				loc2 = inline_F1079_14135(loc6);
				loc2 = RTRV(eif_non_attached_type(1172), loc2);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					F1173_16492(RTCV(loc2));
				}
			}
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_22_7_6_1_0_0_);
			gtk_radio_menu_item_set_group((GtkRadioMenuItem*) tp1, (GSList*) loc7);
		}
	} else {
		loc3 = loc1;
		loc3 = RTRV(eif_non_attached_type(1174), loc3);
		loc8 = *(EIF_REFERENCE *)(Current + O10149[dtype-1028]);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti4_1 = F966_11525(RTCV(loc8));
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		if (tb1) {
			loc3 = F1064_13845(Current, arg1);
			loc4 = F966_11519(RTCV(loc8));
			F966_11531(RTCV(loc8), arg1);
			for (;;) {
				tb1 = '\01';
				tb2 = F615_5836(RTCV(loc8));
				if (!tb2) {
					tr1 = F966_11518(RTCV(loc8));
					tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
					tb1 = F1064_13846(Current, tr1);
				}
				if (tb1) break;
				loc2 = F966_11518(RTCV(loc8));
				loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
				loc2 = RTRV(eif_non_attached_type(1172), loc2);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						tp1 = F1175_16518(RTCV(loc3));
						F1173_16496(RTCV(loc2), tp1);
						tp1 = F1173_16497(RTCV(loc2));
						F1175_16517(RTCV(loc3), tp1);
					} else {
						tp1 = F1064_13850(Current);
						F1173_16496(RTCV(loc2), tp1);
						tp1 = F1173_16497(RTCV(loc2));
						F1064_13849(Current, tp1);
					}
					F1173_16493(RTCV(loc2));
				}
				F966_11530(RTCV(loc8));
			}
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && (EIF_BOOLEAN)(loc3 == NULL))) {
				F1064_13849(Current, loc7);
			}
			F966_11531(RTCV(loc8), loc4);
		}
	}
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.radio_group_ref */
EIF_REFERENCE F1064_13848 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O10742[dtype-1063]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(881, 881, _OBJSIZ_0_0_0_0_0_1_0_0_);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O10742[dtype-1063]) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_MENU_ITEM_LIST_IMP}.set_radio_group */
void F1064_13849 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1064_13848(Current);
	F882_9654(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.radio_group */
EIF_POINTER F1064_13850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = *(EIF_POINTER *)(RTCV(F1064_13848(Current))+ _PTROFF_0_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.radio_group_ref_internal */
EIF_REFERENCE F1064_13851 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10742[Dtype(Current) - 1063]);
}


/* {EV_MENU_ITEM_LIST_IMP}.interface */
static EIF_REFERENCE F1064_13854_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1064_13854 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1064_13854_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit697 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
