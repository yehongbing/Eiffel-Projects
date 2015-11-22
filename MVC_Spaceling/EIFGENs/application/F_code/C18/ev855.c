/*
 * Code for class EV_TREE_NODE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev855.h"
#include <ev_gtk.h>
#include "eif_built_in.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1233
static EIF_POINTER inline_F31_1233 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (gtk_tree_model_get_path ((GtkTreeModel*) arg1, (GtkTreeIter*) arg2))
	;
}
#define INLINE_F31_1233
#endif
#ifndef INLINE_F31_1235
static int inline_F31_1235 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (gtk_tree_view_row_expanded ((GtkTreeView*) arg1, (GtkTreePath*) arg2))
	;
}
#define INLINE_F31_1235
#endif
#ifndef INLINE_F31_1207
static void inline_F31_1207 (EIF_POINTER arg1)
{
	gtk_tree_path_free ((GtkTreePath*) arg1)
	;
}
#define INLINE_F31_1207
#endif
#ifndef INLINE_F31_1242
static EIF_POINTER inline_F31_1242 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_tree_view_get_selection ((GtkTreeView*) arg1))
	;
}
#define INLINE_F31_1242
#endif
#ifndef INLINE_F31_1227
static void inline_F31_1227 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_selection_select_iter ((GtkTreeSelection*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1227
#endif
#ifndef INLINE_F31_1237
static void inline_F31_1237 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_view_expand_to_path ((GtkTreeView*) arg1, (GtkTreePath*) arg2)
	;
}
#define INLINE_F31_1237
#endif
#ifndef INLINE_F31_1238
static int inline_F31_1238 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (gtk_tree_view_collapse_row ((GtkTreeView*) arg1, (GtkTreePath*) arg2))
	;
}
#define INLINE_F31_1238
#endif
#ifndef INLINE_F31_1294
static void inline_F31_1294 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	gtk_tree_store_insert ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2, (GtkTreeIter*) arg3, (gint) arg4)
	;
}
#define INLINE_F31_1294
#endif
#ifndef INLINE_F31_1296
static void inline_F31_1296 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_tree_store_remove ((GtkTreeStore*) arg1, (GtkTreeIter*) arg2)
	;
}
#define INLINE_F31_1296
#endif
#ifndef INLINE_F777_7208
static int inline_F777_7208 (void)
{
	return eif_is_in_final_collect;
	;
}
#define INLINE_F777_7208
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_NODE_IMP}.destroy */
void F1162_16395 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(Current);
		F1057_13817(RTCV(loc1), tr1);
	}
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.make */
void F1162_16397 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1162_16437(Current);
	F1058_13825(Current);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.is_expanded */
EIF_BOOLEAN F1162_16399 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	
	RTGC;
	loc2 = F1162_16430(Current);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_1_);
	tp2 = F492_5202(RTCV(loc3));
	loc1 = inline_F31_1233(tp1, tp2);
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_2_);
	Result = EIF_TEST (inline_F31_1235(tp1, loc1));
	inline_F31_1207(loc1);
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.x_position */
EIF_INTEGER_32 F1162_16400 (EIF_REFERENCE Current)
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
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_3_);
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

/* {EV_TREE_NODE_IMP}.y_position */
EIF_INTEGER_32 F1162_16401 (EIF_REFERENCE Current)
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
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_25_6_6_0_);
		ti4_1 = F1146_15909(RTCV(loc2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) * ti4_1);
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_3_);
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

/* {EV_TREE_NODE_IMP}.screen_x */
EIF_INTEGER_32 F1162_16402 (EIF_REFERENCE Current)
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
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1081_14167(RTCV(loc1));
		ti4_1 = F1162_16400(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.screen_y */
EIF_INTEGER_32 F1162_16403 (EIF_REFERENCE Current)
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
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1081_14168(RTCV(loc1));
		ti4_1 = F1162_16401(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.width */
EIF_INTEGER_32 F1162_16404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1081_14187(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TREE_NODE_IMP}.height */
EIF_INTEGER_32 F1162_16405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1146_15909(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TREE_NODE_IMP}.minimum_width */
EIF_INTEGER_32 F1162_16406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F1081_14174(RTCV(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TREE_NODE_IMP}.enable_select */
void F1162_16408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	
	RTGC;
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_2_);
		loc1 = inline_F31_1242(tp1);
		tp1 = F492_5202(RTCV(loc3));
		inline_F31_1227(loc1, tp1);
		tr1 = F1029_13066(Current);
		F1146_15881(RTCV(loc2), tr1);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_expand */
void F1162_16410 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc4);
	
	RTGC;
	loc2 = F1162_16430(Current);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_1_);
	tp2 = F492_5202(RTCV(loc4));
	loc1 = inline_F31_1233(tp1, tp2);
	if (arg1) {
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_2_);
		inline_F31_1237(tp1, loc1);
	} else {
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_2_);
		loc3 = EIF_TEST (inline_F31_1238(tp1, loc1));
	}
	inline_F31_1207(loc1);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_text */
void F1162_16411 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		F1146_15904(RTCV(loc1), Current, tr1);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.draw_rubber_band */
void F1162_16414 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.erase_rubber_band */
void F1162_16415 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.enable_capture */
void F1162_16416 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.disable_capture */
void F1162_16417 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.set_pointer_style */
void F1162_16420 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.internal_set_pointer_style */
void F1162_16421 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.is_transport_enabled_iterator */
EIF_BOOLEAN F1162_16422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_25_1_)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		if ((EIF_BOOLEAN) (F1058_13827(Current) > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
			loc1 = F701_6589(RTCV(tr1));
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				tb1 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
				ti4_1 = F701_6600(RTCV(tr1));
				if (!(EIF_BOOLEAN) (loc3 > ti4_1)) {
					tb1 = Result;
				}
				if (tb1) break;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
				tr1 = F701_6584(RTCV(tr1), loc3);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					loc2 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
					loc2 = F701_6584(RTCV(loc2), loc3);
					loc2 = *(EIF_REFERENCE *)(RTCV(loc2) + O8345[Dtype(loc2)-929]);
					loc2 = RTRV(eif_non_attached_type(1161), loc2);
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						Result = F1162_16422(RTCV(loc2));
					}
				}
				loc3++;
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
			F701_6614(RTCV(tr1), loc1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.reset_pebble_function */
void F1162_16423 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1146_15896(RTCV(loc1));
	} else {
		F1093_14401(Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.able_to_transport */
EIF_BOOLEAN F1162_16424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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

/* {EV_TREE_NODE_IMP}.ready_for_pnd_menu */
EIF_BOOLEAN F1162_16425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
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

/* {EV_TREE_NODE_IMP}.set_list_iter */
void F1162_16426 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) arg1;
}

/* {EV_TREE_NODE_IMP}.list_iter */
EIF_REFERENCE F1162_16427 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_21_);
}


/* {EV_TREE_NODE_IMP}.set_parent_imp */
void F1162_16428 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) arg1;
}

/* {EV_TREE_NODE_IMP}.parent_imp */
EIF_REFERENCE F1162_16429 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_24_);
}


/* {EV_TREE_NODE_IMP}.parent_tree_imp */
EIF_REFERENCE F1162_16430 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	
	RTGC;
	loc1 = F1161_16387(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = loc1;
		RTLE;
		return RTRV(eif_non_attached_type(1145), Result);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.add_item_and_children_to_parent_tree */
void F1162_16431 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,arg1);
	RTLR(6,loc3);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_21_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		loc4 = F492_5202(RTCV(loc5));
	}
	tr1 = RTLNS(493, 493, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	F1162_16426(Current, loc1);
	tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_49_11_10_5_0_1_);
	tp2 = F492_5202(RTCV(loc1));
	inline_F31_1294(tp1, tp2, loc4, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)));
	tr1 = F1162_16435(Current);
	F1146_15904(RTCV(arg1), Current, tr1);
	F1146_15906(RTCV(arg1), Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		ti4_1 = F701_6600(RTCV(tr1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
		tr1 = F701_6585(RTCV(tr1), loc2);
		loc3 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
		loc3 = RTRV(eif_non_attached_type(1161), loc3);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1162_16431(RTCV(loc3), arg1, Current, loc2);
		loc2++;
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.update_for_pick_and_drop */
void F1162_16432 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TREE_NODE_IMP}.text */
EIF_REFERENCE F1162_16435 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.remove_internal_text */
void F1162_16437 (EIF_REFERENCE Current)
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
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_TREE_NODE_IMP}.internal_text */
EIF_REFERENCE F1162_16439 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {EV_TREE_NODE_IMP}.set_pixmap */
void F1162_16443 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	
	RTGC;
	F1162_16453(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = F1198_17065(RTCV(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_) = (EIF_POINTER) tp1;
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F1146_15906(RTCV(loc2), Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.pixmap */
EIF_REFERENCE F1162_16447 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_) != tp1)) {
		tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
		F930_10736(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
		loc1 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_3_);
		loc1 = RTRV(eif_non_attached_type(1201), loc1);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1202_17209(RTCV(loc1), *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_));
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.insert_i_th */
void F1162_16449 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1161), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1162_16428(RTCV(loc1), Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	F701_6613(RTCV(tr1), arg2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5092[Dtype(tr1)-700])(RTCV(tr1), arg1);
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F1162_16431(RTCV(loc1), loc2, Current, arg2);
		tb1 = F1162_16422(RTCV(loc1));
		if (tb1) {
			F1146_15887(RTCV(loc2), (EIF_BOOLEAN) 1);
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F1058_13827(Current) == ((EIF_INTEGER_32) 1L))) {
		tb1 = (EIF_BOOLEAN)(loc2 != NULL);
	}
	if (tb1) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			F726_6721(RTCV(tr1));
		}
		F1162_16410(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_25_3_));
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			F726_6723(RTCV(tr1));
		}
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.remove_i_th */
void F1162_16450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1058_13827(Current) == ((EIF_INTEGER_32) 1L))) {
		if ((EIF_BOOLEAN)(F1161_16387(Current) != NULL)) {
			tb1 = F1162_16399(Current);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_25_3_) = (EIF_BOOLEAN) tb1;
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_25_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	tr1 = F701_6585(RTCV(tr1), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + O8345[Dtype(tr1)-929]);
	loc1 = RTRV(eif_non_attached_type(1161), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1162_16430(Current);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_21_);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_49_11_10_5_0_1_);
		tp2 = F492_5202(RTCV(loc3));
		inline_F31_1296(tp1, tp2);
	}
	F1162_16428(RTCV(loc1), NULL);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	F701_6613(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4251[Dtype(tr1)-404])(RTCV(tr1));
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F1146_15886(RTCV(loc2));
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.real_pointed_target */
EIF_REFERENCE F1162_16452 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_TREE_NODE_IMP}.dispose */
void F1162_16453 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) !EIF_TEST (inline_F777_7208())) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_) != tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_);
		g_object_unref((gpointer) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_25_6_6_3_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.interface */
static EIF_REFERENCE F1162_16454_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1162_16454 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1162_16454_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit855 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
