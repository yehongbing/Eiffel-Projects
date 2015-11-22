/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev622.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW}.implementation */
EIF_REFERENCE F1001_12691 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EV_MULTI_COLUMN_LIST_ROW}.on_item_added_at */
void F1001_12692 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F1178_16571(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW}.on_item_removed_at */
void F1001_12693 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F1178_16572(RTCV(tr1), arg1, arg2);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW}.create_implementation */
void F1001_12694 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1177, 1177, _OBJSIZ_22_5_6_0_0_0_0_0_);
	F1178_16544(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	F719_6674(Current);
	RTLE;
}

void EIF_Minit622 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
