/*
 * Code for class EV_WIDGET_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev736.h"
#include <stdio.h>
#include <ev_gtk.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1408
static void inline_F31_1408 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	g_object_get ((gpointer) arg1, (gchar*) arg2, (gint*) arg3, NULL)
	;
}
#define INLINE_F31_1408
#endif
#ifndef INLINE_F31_1118
static void inline_F31_1118 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	gtk_widget_set_size_request ((GtkWidget*) arg1, (gint) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1118
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_IMP}.make */
void F1096_14500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1081_14166(Current);
	tp1 = *(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]);
	gtk_widget_set_redraw_on_allocate((GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_WIDGET_IMP}.on_key_event */
void F1096_14502 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	
	RTGC;
	if (arg3) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3482[dtype-169]) != NULL))) {
			tr1 = *(EIF_REFERENCE *)(Current + O3482[dtype-169]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1205,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
			RTAR(tr2,arg1);
			F732_6800(RTCV(tr1), tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3485[dtype-169]) != NULL)) {
			if ((EIF_BOOLEAN)(arg2 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O3485[dtype-169]);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,925,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = arg2;
				RTAR(tr2,arg2);
				F732_6800(RTCV(tr1), tr2);
			}
		}
	} else {
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3488[dtype-169]) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O3488[dtype-169]);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1205,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
				RTAR(tr2,arg1);
				F732_6800(RTCV(tr1), tr2);
			}
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_size_allocate */
void F1096_14503 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	
	RTGC;
	tb1 = '\01';
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O11273[dtype-1095]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	if (!(EIF_BOOLEAN)(arg3 != ti4_1)) {
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O11274[dtype-1095]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		tb1 = (EIF_BOOLEAN)(arg4 != ti4_1);
	}
	if (tb1) {
		ti2_1 = (EIF_INTEGER_16) arg3;
		*(EIF_INTEGER_16 *)(Current + O11273[dtype-1095]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg4;
		*(EIF_INTEGER_16 *)(Current + O11274[dtype-1095]) = (EIF_INTEGER_16) ti2_1;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3497[dtype-169]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3497[dtype-169]);
			tr2 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
			tr2 = F793_8397(RTCV(tr2), arg1, arg2, arg3, arg4);
			F732_6800(RTCV(tr1), tr2);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11390[Dtype(loc1)-1097])(RTCV(loc1), Current);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_focus_changed */
void F1096_14504 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	if (arg1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_17_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F163_3513(RTCV(RTOSCF(14148,F1079_14148,(Current))));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,967,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F1029_13066(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3491[dtype-169]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3491[dtype-169]);
			F732_6800(RTCV(tr1), NULL);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_18_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F163_3516(RTCV(RTOSCF(14148,F1079_14148,(Current))));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,967,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 2, 0);
			}
			tr3 = F1029_13066(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3494[dtype-169]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3494[dtype-169]);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_pointer_enter_leave */
void F1096_14505 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (arg1) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3473[dtype-169]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3473[dtype-169]);
			F732_6800(RTCV(tr1), NULL);
		}
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3479[dtype-169]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3479[dtype-169]);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.call_button_event_actions */
void F1096_14506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0, 9, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr1+4)->it_r8 = arg5;
	((EIF_TYPED_VALUE *)tr1+5)->it_r8 = arg6;
	((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg7;
	((EIF_TYPED_VALUE *)tr1+7)->it_i4 = arg8;
	((EIF_TYPED_VALUE *)tr1+8)->it_i4 = arg9;
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(arg1 != (EIF_INTEGER_32) GDK_BUTTON_RELEASE)) {
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_2BUTTON_PRESS)) {
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_3BUTTON_PRESS)) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 4L)) && (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)))) {
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_13_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F163_3501(RTCV(RTOSCF(14148,F1079_14148,(Current))));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,874,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0, 3, 0);
				}
				tr3 = F1029_13066(Current);
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3476[dtype-169]) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O3476[dtype-169]);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0, 2, 1);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_i4 = loc2;
				F732_6800(RTCV(tr1), tr2);
			}
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 5L)) && (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)))) {
				tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_13_);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F163_3501(RTCV(RTOSCF(14148,F1079_14148,(Current))));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,967,874,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 3, 0);
					}
					tr3 = F1029_13066(Current);
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) -loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
				}
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3476[dtype-169]) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + O3476[dtype-169]);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 2, 1);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) -loc2;
					F732_6800(RTCV(tr1), tr2);
				}
			}
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 3L)))) {
			if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_10_);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F163_3492(RTCV(RTOSCF(14148,F1079_14148,(Current))));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,967,874,874,874,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0, 5, 0);
					}
					tr3 = F1029_13066(Current);
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg4;
					((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg8;
					((EIF_TYPED_VALUE *)tr2+4)->it_i4 = arg9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
				}
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3464[dtype-169]) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + O3464[dtype-169]);
					F732_6800(RTCV(tr1), loc1);
				}
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_2BUTTON_PRESS)) {
					tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_11_);
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						tr1 = F163_3495(RTCV(RTOSCF(14148,F1079_14148,(Current))));
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,967,874,874,874,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNTS(typres0, 5, 0);
						}
						tr3 = F1029_13066(Current);
						((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
						RTAR(tr2,tr3);
						((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg4;
						((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg8;
						((EIF_TYPED_VALUE *)tr2+4)->it_i4 = arg9;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
					}
					if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3467[dtype-169]) != NULL)) {
						tr1 = *(EIF_REFERENCE *)(Current + O3467[dtype-169]);
						F732_6800(RTCV(tr1), loc1);
					}
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 3L)))) {
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_12_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F163_3498(RTCV(RTOSCF(14148,F1079_14148,(Current))));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,967,874,874,874,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0, 5, 0);
				}
				tr3 = F1029_13066(Current);
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg4;
				((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg8;
				((EIF_TYPED_VALUE *)tr2+4)->it_i4 = arg9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3470[dtype-169]) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O3470[dtype-169]);
				F732_6800(RTCV(tr1), loc1);
			}
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.parent */
EIF_REFERENCE F1096_14507 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_REFERENCE *)(Current + O11267[Dtype(Current)-1095]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_WIDGET_IMP}.set_minimum_width */
void F1096_14509 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14173,F1081_14173,(Current)))+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	inline_F31_1118(tp1, arg1, loc1);
	loc2 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
	loc2 = RTRV(eif_non_attached_type(1120), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current);
		ti4_1 = eif_max_int32 (arg1,ti4_1);
		F1113_15233(RTCV(loc2), ti4_1);
	} else {
		loc3 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
		loc3 = RTRV(eif_non_attached_type(1106), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = F1029_13066(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current);
			ti4_1 = eif_max_int32 (arg1,ti4_1);
			F1100_14730(RTCV(loc3), tr1, ti4_1);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.set_minimum_height */
void F1096_14510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	tp2 = *(EIF_POINTER *)(RTCV(RTOSCF(14172,F1081_14172,(Current)))+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1408(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	inline_F31_1118(tp1, loc1, arg1);
	loc2 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
	loc2 = RTRV(eif_non_attached_type(1120), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current);
		ti4_1 = eif_max_int32 (arg1,ti4_1);
		F1113_15234(RTCV(loc2), ti4_1);
	} else {
		loc3 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
		loc3 = RTRV(eif_non_attached_type(1106), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = F1029_13066(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current);
			ti4_1 = eif_max_int32 (arg1,ti4_1);
			F1100_14731(RTCV(loc3), tr1, ti4_1);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.set_minimum_size */
void F1096_14511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	inline_F31_1118(tp1, arg1, arg2);
	loc1 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
	loc1 = RTRV(eif_non_attached_type(1120), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current);
		ti4_1 = eif_max_int32 (arg1,ti4_1);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current);
		ti4_2 = eif_max_int32 (arg2,ti4_2);
		F1121_15365(RTCV(loc1), ti4_1, ti4_2);
	} else {
		loc2 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
		loc2 = RTRV(eif_non_attached_type(1106), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = F1029_13066(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10681[dtype-1079])(Current);
			ti4_1 = eif_max_int32 (arg1,ti4_1);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10682[dtype-1079])(Current);
			ti4_2 = eif_max_int32 (arg2,ti4_2);
			F1107_14801(RTCV(loc2), tr1, ti4_1, ti4_2);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.refresh_now */
void F1096_14514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)((EIF_POINTER) (((GtkWidget *)tp1)->window) != tp2)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tp1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		gdk_window_process_updates((GdkWindow*) tp1, (gboolean) (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.set_parent_imp */
void F1096_14515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11267[Dtype(Current)-1095]) = (EIF_REFERENCE) arg1;
}

/* {EV_WIDGET_IMP}.destroy */
void F1096_14516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		loc1 = (EIF_POINTER) (((GtkWidget *)tp1)->window);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			{
			/* INLINED CODE (default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tp2 = tp1;
			gdk_window_set_cursor((GdkWindow*) loc1, (GdkCursor*) tp2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11267[dtype-1095]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = F1029_13066(RTCV(loc2));
			tr2 = F1029_13066(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4204[Dtype(tr1)-304])(RTCV(tr1), tr2);
		}
		F1079_14137(Current);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.parent_imp */
EIF_REFERENCE F1096_14517 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11267[Dtype(Current) - 1095]);
}


/* {EV_WIDGET_IMP}.on_widget_mapped */
void F1096_14518 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11014[dtype-1080]);
	loc1 = tr1;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11013[dtype-1080]) == NULL) && EIF_TEST(loc1))) {
		F1081_14181(Current, loc1);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_widget_unmapped */
void F1096_14519 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WIDGET_IMP}.propagate_foreground_color_internal */
void F1096_14520 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_CONTAINER((arg2)))) {
		loc3 = (EIF_REFERENCE) arg1;
		loc4 = (EIF_POINTER) gtk_container_children((GtkContainer*) arg2);
		loc1 = (EIF_POINTER) loc4;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_POINTER) NULL)) break;
			loc2 = (EIF_POINTER) (((GList *)loc1)->data);
			F1066_13868(Current, loc2, loc3);
			if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_CONTAINER((loc2)))) {
				F1096_14520(Current, loc3, loc2);
			}
			loc1 = (EIF_POINTER) (((GList *)loc1)->next);
		}
		g_list_free((GList*) loc4);
	} else {
		F1066_13868(Current, arg2, loc3);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.propagate_background_color_internal */
void F1096_14521 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_CONTAINER((arg2)))) {
		loc3 = (EIF_REFERENCE) arg1;
		loc4 = (EIF_POINTER) gtk_container_children((GtkContainer*) arg2);
		loc1 = (EIF_POINTER) loc4;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_POINTER) NULL)) break;
			loc2 = (EIF_POINTER) (((GList *)loc1)->data);
			F1066_13866(Current, loc2, loc3);
			if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_CONTAINER((loc2)))) {
				F1096_14521(Current, loc3, loc2);
			}
			loc1 = (EIF_POINTER) (((GList *)loc1)->next);
		}
		g_list_free((GList*) loc4);
	} else {
		F1066_13866(Current, arg2, loc3);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.interface */
static EIF_REFERENCE F1096_14525_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1096_14525 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1096_14525_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit736 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
