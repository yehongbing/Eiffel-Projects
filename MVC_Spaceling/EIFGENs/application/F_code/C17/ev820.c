/*
 * Code for class EV_LIST_ITEM_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev820.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1147_15952
static EIF_POINTER inline_F1147_15952 (void)
{
	return (EIF_POINTER) (gtk_list_store_new (2, GDK_TYPE_PIXBUF, G_TYPE_STRING))
	;
}
#define INLINE_F1147_15952
#endif
#ifndef INLINE_F31_1287
static void inline_F31_1287 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	g_value_take_string ((GValue*) arg1, (gchar*) arg2)
	;
}
#define INLINE_F31_1287
#endif
#ifndef INLINE_F31_1299
static void inline_F31_1299 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set_value ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GValue*) arg4)
	;
}
#define INLINE_F31_1299
#endif
#ifndef INLINE_F31_1278
static void inline_F31_1278 (EIF_POINTER arg1)
{
	g_value_init ((GValue*) arg1, G_TYPE_STRING)
	;
}
#define INLINE_F31_1278
#endif
#ifndef INLINE_F31_1301
static void inline_F31_1301 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	gtk_list_store_set ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3, (GdkPixbuf*) arg4, -1)
	;
}
#define INLINE_F31_1301
#endif
#ifndef INLINE_F31_1295
static void inline_F31_1295 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	gtk_list_store_insert ((GtkListStore*) arg1, (GtkTreeIter*) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1295
#endif
#ifndef INLINE_F31_1297
static void inline_F31_1297 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_list_store_remove ((GtkListStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1297
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_ITEM_LIST_IMP}.make */
void F1147_15923 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1058_13825(Current);
	F1142_15736(Current);
	F1077_14127(Current);
	F1147_15924(Current);
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.initialize_model */
void F1147_15924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = inline_F1147_15952();
	*(EIF_POINTER *)(Current + O12237[Dtype(Current)-1146]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.item_from_coords */
EIF_REFERENCE F1147_15926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_LIST_ITEM_LIST_IMP}.update_pnd_connection */
void F1147_15928 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O11190[dtype-1092])) {
		if ((EIF_BOOLEAN) (arg1 || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) != NULL))) {
			*(EIF_BOOLEAN *)(Current + O11190[dtype-1092]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !arg1 && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) == NULL))) {
			*(EIF_BOOLEAN *)(Current + O11190[dtype-1092]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.pre_pick_steps */
void F1147_15929 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11169[dtype-1092]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12231[dtype-1146]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O11170[dtype-1092]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12232[dtype-1146]) = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = RTCCL(loc2);
		F1049_13618(RTCV(tr1), Current, tr2);
	}
	loc1 = *(EIF_REFERENCE *)(Current + O12228[dtype-1146]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F110_3245(RTCV(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			F732_6800(RTCV(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_16_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11169[dtype-1092]) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_17_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11170[dtype-1092]) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			F732_6800(RTCV(tr1), tr2);
		}
	}
	ti2_1 = (EIF_INTEGER_16) arg3;
	*(EIF_INTEGER_16 *)(Current + O3621[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current + O3622[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
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
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14188(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14188(Current);
				*(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)));
		}
	} else {
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_23_5_4_);
		ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN)(ti2_1 == ti2_2)) {
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_23_5_5_);
			ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
			tb1 = (EIF_BOOLEAN)(ti2_1 == ti2_2);
		}
		if (tb1) {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			F1048_13499(RTCV(tr1), arg3, arg4);
		} else {
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > F1081_14187(Current))) {
				ti2_1 = (EIF_INTEGER_16) F1081_14187(Current);
				*(EIF_INTEGER_16 *)(Current + O11195[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
			}
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			if ((EIF_BOOLEAN) (ti4_1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12227[dtype-1146])(Current))) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12227[dtype-1146])(Current);
				ti2_1 = (EIF_INTEGER_16) ti4_1;
				*(EIF_INTEGER_16 *)(Current + O11196[dtype-1092]) = (EIF_INTEGER_16) ti2_1;
			}
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_23_5_4_);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(RTCV(loc1)+ _I16OFF_23_5_5_);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			tr2 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
			tr3 = F1029_13066(RTCV(loc1));
			ti4_3 = F585_5762(RTCV(tr2), tr3, ((EIF_INTEGER_32) 1L));
			ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R12227[dtype-1146])(Current);
			F1048_13499(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) * ti4_4))));
		}
	}
	F1093_14435(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.post_drop_steps */
void F1147_15930 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1094_14464(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O12231[dtype-1146]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11169[dtype-1092]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O12232[dtype-1146]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11170[dtype-1092]) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + O12231[dtype-1146]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O12232[dtype-1146]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O12228[dtype-1146]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.row_height */
EIF_INTEGER_32 F1147_15931 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
}

/* {EV_LIST_ITEM_LIST_IMP}.pebble_source */
EIF_REFERENCE F1147_15932 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O12228[Dtype(Current)-1146]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(RTCV(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) F1094_14461(Current);
	}/* NOTREACHED */
	
}

/* {EV_LIST_ITEM_LIST_IMP}.able_to_transport */
EIF_BOOLEAN F1147_15933 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12228[Dtype(Current)-1146]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1160_16346(RTCV(loc1), arg1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14458(Current, arg1);
	}/* NOTREACHED */
	
}

/* {EV_LIST_ITEM_LIST_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1147_15934 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O12228[Dtype(Current)-1146]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1160_16347(RTCV(loc1), arg1, arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) F1094_14462(Current, arg1, arg2);
	}/* NOTREACHED */
	
}

/* {EV_LIST_ITEM_LIST_IMP}.pnd_row_imp */
EIF_REFERENCE F1147_15935 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12228[Dtype(Current) - 1146]);
}


/* {EV_LIST_ITEM_LIST_IMP}.temp_pebble */
EIF_REFERENCE F1147_15936 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12229[Dtype(Current) - 1146]);
}


/* {EV_LIST_ITEM_LIST_IMP}.temp_pebble_function */
EIF_REFERENCE F1147_15937 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12230[Dtype(Current) - 1146]);
}


/* {EV_LIST_ITEM_LIST_IMP}.temp_accept_cursor */
EIF_REFERENCE F1147_15938 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12231[Dtype(Current) - 1146]);
}


/* {EV_LIST_ITEM_LIST_IMP}.temp_deny_cursor */
EIF_REFERENCE F1147_15939 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12232[Dtype(Current) - 1146]);
}


/* {EV_LIST_ITEM_LIST_IMP}.call_pebble_function */
void F1147_15940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11165[dtype-1092]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12229[dtype-1146]) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O11166[dtype-1092]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O12230[dtype-1146]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O12228[dtype-1146]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_13_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) RTCCL(tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_14_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11166[dtype-1092]) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11166[dtype-1092]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R7682[Dtype(loc2)-915])(RTCV(loc2), tr1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R7708[Dtype(loc2)-916])(RTCV(loc2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.reset_pebble_function */
void F1147_15941 (EIF_REFERENCE Current)
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
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R7711[Dtype(loc1)-916])(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O12229[dtype-1146]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11165[dtype-1092]) = (EIF_REFERENCE) RTCCL(tr1);
	tr1 = *(EIF_REFERENCE *)(Current + O12230[dtype-1146]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11166[dtype-1092]) = (EIF_REFERENCE) tr1;
	*(EIF_REFERENCE *)(Current + O12229[dtype-1146]) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + O12230[dtype-1146]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.set_text_on_position */
void F1147_15944 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	
	RTGC;
	loc1 = RTOSCF(13652,F1049_13652,(RTCV(RTOSCF(14148,F1079_14148,(Current)))));
	F781_7429(RTCV(loc1), arg2);
	loc2 = RTOSCF(15945,F1147_15945,(Current));
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	inline_F31_1287(loc2, tp1);
	loc3 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	loc3 = F701_6584(RTCV(loc3), arg1);
	loc3 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_3_);
	loc3 = RTRV(eif_non_attached_type(1159), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc4 = *(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_20_);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			tp1 = *(EIF_POINTER *)(Current + O12237[dtype-1146]);
			tp2 = F492_5202(RTCV(loc4));
			inline_F31_1299(tp1, tp2, ((EIF_INTEGER_32) 1L), loc2);
		}
	}
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.g_value_string_struct */
static EIF_POINTER F1147_15945_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTGC;
	RTOSP (15945);
#define Result RTOSR(15945)
	Result = (EIF_POINTER) calloc (sizeof(GValue), 1);
	inline_F31_1278(Result);
	RTOSE (15945);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1147_15945 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(15945,F1147_15945_body,(Current));
}

/* {EV_LIST_ITEM_LIST_IMP}.set_row_pixmap */
void F1147_15946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc4 = F1198_17067(RTCV(loc1), *(EIF_INTEGER_32 *)(Current + O10971[dtype-1076]), *(EIF_INTEGER_32 *)(Current + O10972[dtype-1076]));
	loc2 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	loc2 = F701_6584(RTCV(loc2), arg1);
	loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_3_);
	loc2 = RTRV(eif_non_attached_type(1159), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_20_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current + O12237[dtype-1146]);
	tp2 = F492_5202(RTCV(loc3));
	inline_F31_1301(tp1, tp2, ((EIF_INTEGER_32) 0L), loc4);
	g_object_unref((gpointer) loc4);
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.insert_i_th */
void F1147_15948 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1159), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1160_16383(RTCV(loc1), Current);
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		F701_6613(RTCV(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
		tr1 = RTLNS(493, 493, _OBJSIZ_1_1_0_0_0_1_0_0_);
		F492_5199(RTCV(tr1));
		loc2 = (EIF_REFERENCE) tr1;
		F1160_16380(RTCV(loc1), loc2);
		tp1 = *(EIF_POINTER *)(Current + O12237[dtype-1146]);
		tp2 = F492_5202(RTCV(loc2));
		inline_F31_1295(tp1, tp2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
		tr1 = F958_11227(RTCV(arg1));
		F1147_15944(Current, arg2, tr1);
		tr1 = F953_11110(RTCV(arg1));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F1147_15946(Current, arg2, loc3);
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(loc1)+ _CHROFF_23_1_);
		if (tb1) {
			F1147_15928(Current, (EIF_BOOLEAN) 1);
		}
	}
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.interface */
static EIF_REFERENCE F1147_15949_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1147_15949 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1147_15949_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_LIST_ITEM_LIST_IMP}.remove_i_th */
void F1147_15951 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12122[dtype-1147])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
	tr1 = F701_6585(RTCV(tr1), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1159), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1160_16383(RTCV(loc1), NULL);
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_20_);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tp1 = *(EIF_POINTER *)(Current + O12237[dtype-1146]);
			tp2 = F492_5202(RTCV(loc2));
			inline_F31_1297(tp1, tp2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		F701_6613(RTCV(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + O10727[dtype-1057]);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
	}
	RTLE;
}

/* {EV_LIST_ITEM_LIST_IMP}.new_list_store */
EIF_POINTER F1147_15952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1147_15952 ();
	return Result;
}

void EIF_Minit820 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
