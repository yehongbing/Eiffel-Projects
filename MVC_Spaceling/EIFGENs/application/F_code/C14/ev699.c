/*
 * Code for class EV_COLORIZABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev699.h"
#include <string.h>
#include <stdlib.h>
#include <ev_gtk.h>
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLORIZABLE_IMP}.background_color_internal */
EIF_REFERENCE F1066_13863 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10757[Dtype(Current)-1065]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		Result = F1029_13066(RTCV(loc2));
		Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
	} else {
		loc1 = F1066_13875(Current);
		tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
		ti4_1 = (EIF_INTEGER_32) (((GdkColor *)loc1)->red);
		ti4_2 = (EIF_INTEGER_32) (((GdkColor *)loc1)->green);
		ti4_3 = (EIF_INTEGER_32) (((GdkColor *)loc1)->blue);
		F938_10908(RTCV(Result), ti4_1, ti4_2, ti4_3);
	}
	RTLE;
	return Result;
}

/* {EV_COLORIZABLE_IMP}.foreground_color_internal */
EIF_REFERENCE F1066_13864 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10758[dtype-1065]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		Result = F1029_13066(RTCV(loc2));
		Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
	} else {
		loc1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10760[dtype-1065])(Current);
		tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
		ti4_1 = (EIF_INTEGER_32) (((GdkColor *)loc1)->red);
		ti4_2 = (EIF_INTEGER_32) (((GdkColor *)loc1)->green);
		ti4_3 = (EIF_INTEGER_32) (((GdkColor *)loc1)->blue);
		F938_10908(RTCV(Result), ti4_1, ti4_2, ti4_3);
	}
	RTLE;
	return Result;
}

/* {EV_COLORIZABLE_IMP}.set_background_color */
void F1066_13865 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10757[dtype-1065]) != tr1)) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10756[dtype-1095])(Current)) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			gtk_event_box_set_visible_window((GtkEventBox*) tp1, (gboolean) (EIF_BOOLEAN) 1);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		*(EIF_REFERENCE *)(Current + O10757[dtype-1065]) = RTRV(eif_non_attached_type(1050), tr1);
		RTAR(Current, tr1);
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[dtype-1095])(Current);
		F1066_13866(Current, tp1, arg1);
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[dtype-1095])(Current) != *(EIF_POINTER *)(Current + O10979[dtype-1078]))) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			F1066_13866(Current, tp1, arg1);
		}
	}
	RTLE;
}

/* {EV_COLORIZABLE_IMP}.real_set_background_color */
void F1066_13866 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc2 = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
		loc3 = F938_10909(RTCV(arg2));
		loc4 = F938_10910(RTCV(arg2));
		loc5 = F938_10911(RTCV(arg2));
		loc9 = ((EIF_INTEGER_32) 65535L);
		(((GdkColor *)loc2)->red = (gushort)(loc3));
		(((GdkColor *)loc2)->green = (gushort)(loc4));
		(((GdkColor *)loc2)->blue = (gushort)(loc5));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tr4_1 = (EIF_REAL_32) (loc3);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 0.90912397f);
		
		loc6 = F846_8809(RTCV(tr1));
		tr4_1 = (EIF_REAL_32) (loc4);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 0.90912397f);
		
		loc7 = F846_8809(RTCV(tr1));
		tr4_1 = (EIF_REAL_32) (loc5);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 0.90912397f);
		
		loc8 = F846_8809(RTCV(tr1));
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		if ((EIF_BOOLEAN) (loc7 < ((EIF_INTEGER_32) 0L))) {
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		if ((EIF_BOOLEAN) (loc8 < ((EIF_INTEGER_32) 0L))) {
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		(((GdkColor *)loc2)->red = (gushort)(loc6));
		(((GdkColor *)loc2)->green = (gushort)(loc7));
		(((GdkColor *)loc2)->blue = (gushort)(loc8));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_ACTIVE;
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_ACTIVE;
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tr4_1 = (EIF_REAL_32) (loc3);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 1.0909488000000001f);
		
		loc6 = F846_8809(RTCV(tr1));
		loc6 = eif_min_int32 (loc6,loc9);
		tr4_1 = (EIF_REAL_32) (loc4);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 1.0909488000000001f);
		
		loc7 = F846_8809(RTCV(tr1));
		loc7 = eif_min_int32 (loc7,loc9);
		tr4_1 = (EIF_REAL_32) (loc5);
		tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * 1.0909488000000001f);
		
		loc8 = F846_8809(RTCV(tr1));
		loc8 = eif_min_int32 (loc8,loc9);
		(((GdkColor *)loc2)->red = (gushort)(loc6));
		(((GdkColor *)loc2)->green = (gushort)(loc7));
		(((GdkColor *)loc2)->blue = (gushort)(loc8));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_PRELIGHT;
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_PRELIGHT;
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		(((GdkColor *)loc2)->red = (gushort)((EIF_INTEGER_32) (loc9 - loc3)));
		(((GdkColor *)loc2)->green = (gushort)((EIF_INTEGER_32) (loc9 - loc4)));
		(((GdkColor *)loc2)->blue = (gushort)((EIF_INTEGER_32) (loc9 - (EIF_INTEGER_32) (loc5 / ((EIF_INTEGER_32) 2L)))));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_SELECTED;
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_SELECTED;
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc10 = eif_max_int32 (loc3,loc4);
		loc10 = eif_max_int32 (loc10,loc5);
		(((GdkColor *)loc2)->red = (gushort)((EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc10) / ((EIF_INTEGER_32) 4L))))));
		(((GdkColor *)loc2)->green = (gushort)((EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc10) / ((EIF_INTEGER_32) 4L))))));
		(((GdkColor *)loc2)->blue = (gushort)((EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 - loc10) / ((EIF_INTEGER_32) 4L))))));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_INSENSITIVE;
	gtk_widget_modify_bg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_INSENSITIVE;
	gtk_widget_modify_base((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc2);
	if ((EIF_BOOLEAN)(loc2 != loc1)) {
		free(loc2);
	}
	RTLE;
}

/* {EV_COLORIZABLE_IMP}.set_foreground_color */
void F1066_13867 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10758[dtype-1065]) != tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_);
		*(EIF_REFERENCE *)(Current + O10758[dtype-1065]) = RTRV(eif_non_attached_type(1050), tr1);
		RTAR(Current, tr1);
		tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[dtype-1095])(Current);
		F1066_13868(Current, tp1, arg1);
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[dtype-1095])(Current) != *(EIF_POINTER *)(Current + O10979[dtype-1078]))) {
			tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
			F1066_13868(Current, tp1, arg1);
		}
	}
	RTLE;
}

/* {EV_COLORIZABLE_IMP}.real_set_foreground_color */
void F1066_13868 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,loc3);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc1 = (EIF_POINTER) calloc (sizeof(GdkColor), 1);
		loc3 = *(EIF_REFERENCE *)(Current + O10758[Dtype(Current)-1065]);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_2_1_0_2_);
		(((GdkColor *)loc1)->red = (gushort)(ti4_1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_2_1_0_1_);
		(((GdkColor *)loc1)->green = (gushort)(ti4_1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc3)+ _LNGOFF_2_1_0_0_);
		(((GdkColor *)loc1)->blue = (gushort)(ti4_1));
	}
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	gtk_widget_modify_fg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_ACTIVE;
	gtk_widget_modify_fg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_PRELIGHT;
	gtk_widget_modify_fg((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_NORMAL;
	gtk_widget_modify_text((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_ACTIVE;
	gtk_widget_modify_text((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	ti4_1 = (EIF_INTEGER_32) GTK_STATE_PRELIGHT;
	gtk_widget_modify_text((GtkWidget*) arg1, (GtkStateType) ti4_1, (GdkColor*) loc1);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		free(loc1);
	}
	RTLE;
}

/* {EV_COLORIZABLE_IMP}.background_color_imp */
EIF_REFERENCE F1066_13873 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10757[Dtype(Current) - 1065]);
}


/* {EV_COLORIZABLE_IMP}.foreground_color_imp */
EIF_REFERENCE F1066_13874 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10758[Dtype(Current) - 1065]);
}


/* {EV_COLORIZABLE_IMP}.background_color_pointer */
EIF_POINTER F1066_13875 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[Dtype(Current)-1095])(Current);
	tp1 = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) tp1);
	Result = (EIF_POINTER) (((GtkStyle *)tp1)->base);
	RTLE;
	return Result;
}

/* {EV_COLORIZABLE_IMP}.foreground_color_pointer */
EIF_POINTER F1066_13876 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R10754[Dtype(Current)-1095])(Current);
	tp1 = (EIF_POINTER) gtk_rc_get_style((GtkWidget*) tp1);
	Result = (EIF_POINTER) (((GtkStyle *)tp1)->fg);
	RTLE;
	return Result;
}

/* {EV_COLORIZABLE_IMP}.interface */
static EIF_REFERENCE F1066_13879_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1066_13879 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1066_13879_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit699 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
