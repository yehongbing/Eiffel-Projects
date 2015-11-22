/*
 * Code for class EV_DOCKABLE_SOURCE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev701.h"
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

/* {EV_DOCKABLE_SOURCE_IMP}.start_dragable_filter */
void F1068_13915 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10798[dtype-1067])) {
		tr1 = *(EIF_REFERENCE *)(Current + O11014[dtype-1080]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O10805[dtype-1067]) = (EIF_REFERENCE) tr1;
		ti2_1 = (EIF_INTEGER_16) arg2;
		*(EIF_INTEGER_16 *)(Current + O3610[dtype-198]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg3;
		*(EIF_INTEGER_16 *)(Current + O3611[dtype-198]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg8;
		*(EIF_INTEGER_16 *)(Current + O10799[dtype-1067]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg9;
		*(EIF_INTEGER_16 *)(Current + O10800[dtype-1067]) = (EIF_INTEGER_16) ti2_1;
		*(EIF_BOOLEAN *)(Current + O10798[dtype-1067]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.dragable_motion */
void F1068_13919 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O10798[dtype-1067])) {
		tb1 = '\01';
		ti2_1 = *(EIF_INTEGER_16 *)(Current + O10799[dtype-1067]);
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg6));
		if (!(EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O10800[dtype-1067]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg7));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L));
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current + O10798[dtype-1067]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F1068_13923(Current, arg1, arg2, ((EIF_INTEGER_32) 1L), arg3, arg4, arg5, arg6, arg7);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3610[dtype-198]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3611[dtype-198]);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3610[dtype-198]);
			ti4_3 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O3611[dtype-198]);
			ti4_4 = (EIF_INTEGER_32) ti2_1;
			F1068_13924(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 1L), (EIF_REAL_64) 0.0, (EIF_REAL_64) 0.0, (EIF_REAL_64) 0.0, (EIF_INTEGER_32) (arg6 + (EIF_INTEGER_32) (ti4_3 - arg1)), (EIF_INTEGER_32) (arg7 + (EIF_INTEGER_32) (ti4_4 - arg2)));
		}
	} else {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		F1067_13909(Current, arg1, arg2, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg6, arg7);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.start_dragable */
void F1068_13923 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	F1094_14446(Current);
	tr1 = RTOSCF(14148,F1079_14148,(Current));
	F1049_13617(RTCV(tr1), Current);
	tr1 = F1029_13066(Current);
	F1067_13907(Current, arg7, arg8, tr1);
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.real_start_dragging */
void F1068_13924 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13902,F1067_13902,(Current));
	F1081_14180(Current, tr1);
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.orig_cursor */
EIF_REFERENCE F1068_13925 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10805[Dtype(Current) - 1067]);
}


/* {EV_DOCKABLE_SOURCE_IMP}.end_dragable */
void F1068_13926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	if (F1067_13881(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10805[Dtype(Current)-1067]);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F1081_14181(Current, loc1);
		} else {
			tr1 = RTOSCF(1629,F33_1629,(RTCV(RTOSCF(3892,F199_3892,(Current)))));
			F1081_14181(Current, tr1);
		}
		F1094_14447(Current);
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		F1049_13617(RTCV(tr1), NULL);
		F1067_13900(Current);
	}
	F1068_13927(Current);
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.reset_drag_data */
void F1068_13927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O10798[dtype-1067]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_16 *)(Current + O3610[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_16 *)(Current + O3611[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_16 *)(Current + O10799[dtype-1067]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_16 *)(Current + O10800[dtype-1067]) = (EIF_INTEGER_16) ti2_1;
	*(EIF_REFERENCE *)(Current + O10805[dtype-1067]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.update_buttons */
void F1068_13932 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_DOCKABLE_SOURCE_IMP}.interface */
static EIF_REFERENCE F1068_13935_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1068_13935 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1068_13935_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit701 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
