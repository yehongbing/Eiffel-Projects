/*
 * Code for class EV_TOOL_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev815.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_IMP}.needs_event_box */
EIF_BOOLEAN F1144_15755 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TOOL_BAR_IMP}.make */
RTEOMS(15756,1);
void F1144_15757 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_toolbar_new();
	F1079_14134(Current, tp1);
	F1058_13825(Current);
	F1142_15736(Current);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), RTOMS(15756,0));
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F1144_15758(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_widget_set_name((GtkWidget*) tp1, (gchar*) tp2);
	tp1 = F1144_15758(Current);
	gtk_toolbar_set_show_arrow((GtkToolbar*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_43_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1144_15765(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.list_widget */
EIF_POINTER F1144_15758 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) F1079_14146(Current);
}

/* {EV_TOOL_BAR_IMP}.set_parent_imp */
void F1144_15759 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1096_14515(Current, arg1);
	F1144_15768(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.has_vertical_button_style */
EIF_BOOLEAN F1144_15760 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_43_11_);
}


/* {EV_TOOL_BAR_IMP}.is_vertical */
EIF_BOOLEAN F1144_15761 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_43_10_);
}


/* {EV_TOOL_BAR_IMP}.disable_vertical */
void F1144_15765 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_43_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tp1 = F1144_15758(Current);
	gtk_toolbar_set_orientation((GtkToolbar*) tp1, (gint) ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.block_selection_for_docking */
void F1144_15766 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOOL_BAR_IMP}.item_from_coords */
EIF_REFERENCE F1144_15767 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > F1058_13827(Current))) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tr1 = F701_6585(RTCV(tr1), loc1);
		loc3 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
		loc3 = RTRV(eif_non_attached_type(1164), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti4_1 = F1081_14187(RTCV(loc3));
			loc2 += ti4_1;
		}
		if ((EIF_BOOLEAN) (arg1 < loc2)) {
			Result = loc3;
			Result = RTRV(eif_non_attached_type(1077), Result);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.update_toolbar_style */
void F1144_15768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_42_) != NULL)) {
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc4 > F1058_13827(Current))) break;
			tr1 = F1058_13826(Current, loc4);
			loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
			loc1 = RTRV(eif_non_attached_type(1180), loc1);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = F1181_16603(RTCV(loc1));
				tb2 = F418_5127(RTCV(tr1));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_19_);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			loc4++;
		}
		if ((EIF_BOOLEAN) (loc2 && loc3)) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_43_11_)) {
				loc5 = (EIF_INTEGER_32) GTK_TOOLBAR_BOTH;
			} else {
				loc5 = (EIF_INTEGER_32) GTK_TOOLBAR_BOTH_HORIZ;
			}
		} else {
			if (loc2) {
				loc5 = (EIF_INTEGER_32) GTK_TOOLBAR_TEXT;
			} else {
				loc5 = (EIF_INTEGER_32) GTK_TOOLBAR_ICONS;
			}
		}
		tp1 = F1079_14146(Current);
		gtk_toolbar_set_style((GtkToolbar*) tp1, (GtkToolbarStyle) loc5);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.insertion_position */
EIF_INTEGER_32 F1144_15769 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	
	RTGC;
	Result = F1058_13827(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	loc1 = F1049_13639(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		loc2 = RTRV(eif_non_attached_type(1001), loc2);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb1 = F1057_13801(Current, loc2);
		}
		if (tb1) {
			Result = F1057_13796(Current, loc2, ((EIF_INTEGER_32) 1L));
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.insert_i_th */
void F1144_15770 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1164), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12383[Dtype(loc1)-1164])(RTCV(loc1), Current);
	tp1 = F1079_14146(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	gtk_toolbar_insert((GtkToolbar*) tp1, (GtkToolItem*) tp2, (gint) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(1181), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tp1 = F1079_14146(RTCV(loc2));
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_43_14_10_3_0_1_);
		gtk_radio_tool_button_set_group((GtkRadioToolButton*) tp1, (GSList*) tp2);
		tp1 = F1182_16629(RTCV(loc2));
		*(EIF_POINTER *)(Current+ _PTROFF_43_14_10_3_0_1_) = (EIF_POINTER) tp1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	F701_6613(RTCV(tr1), arg2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_42_) != NULL)) {
		F1144_15768(Current);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.remove_i_th */
void F1144_15771 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	F701_6613(RTCV(tr1), arg1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = F701_6584(RTCV(loc1), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + O8345[Dtype(loc1)-929]);
	loc1 = RTRV(eif_non_attached_type(1164), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = loc1;
	loc3 = RTRV(eif_non_attached_type(1181), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tp1 = F1079_14146(RTCV(loc3));
		loc4 = (EIF_POINTER) gtk_radio_tool_button_get_group((GtkRadioToolButton*) tp1);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) g_slist_length((GSList*) loc4) == ((EIF_INTEGER_32) 1L))) {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tp2 = tp1;
			*(EIF_POINTER *)(Current+ _PTROFF_43_14_10_3_0_1_) = (EIF_POINTER) tp2;
		}
	}
	loc2 = *(EIF_POINTER *)(RTCV(loc1) + O10979[Dtype(loc1)-1078]);
	tp1 = F1144_15758(Current);
	gtk_container_remove((GtkContainer*) tp1, (GtkWidget*) loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12383[Dtype(loc1)-1164])(RTCV(loc1), NULL);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.interface */
static EIF_REFERENCE F1144_15773_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1144_15773 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1144_15773_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit815 (void)
{
	GTCX
	RTPOMS(15756,0,"v2toolbar",9,821754994);
}


#ifdef __cplusplus
}
#endif
