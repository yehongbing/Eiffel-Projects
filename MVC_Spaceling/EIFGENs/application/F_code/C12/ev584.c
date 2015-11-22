/*
 * Code for class EV_MESSAGE_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev584.h"
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

/* {EV_MESSAGE_DIALOG}.make_with_text */
void F985_12400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F930_10736(Current);
	F985_12413(Current, arg1);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.create_interface_objects */
void F985_12402 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {691,995,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F692_6432(RTCV(tr1), ((EIF_INTEGER_32) 5L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(974));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(975));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(978));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(987));
	F930_10736(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F34_1851(RTCV(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = F34_1850(RTCV(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.initialize */
void F985_12403 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,tr5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = F1065_13855(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = F1065_13856(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(973, 973, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(973, 973, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	F983_12377(Current);
	tr1 = RTLNS(961, 961, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	ti4_1 = F962_11312(RTCV(loc5));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 200L));
	ti4_1 = F962_11313(RTCV(loc5));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 200L));
	F966_11536(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	F973_11872(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	tr1 = RTLNS(975, 975, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	F966_11536(RTCV(loc4), tr1);
	F966_11536(RTCV(loc1), loc4);
	F966_11536(RTCV(loc1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	F973_11870(RTCV(loc1), ((EIF_INTEGER_32) 10L));
	tr1 = RTLNS(975, 975, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	F966_11536(RTCV(loc3), tr1);
	F966_11536(RTCV(loc3), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	F973_11872(RTCV(loc3), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	tr1 = RTLNS(975, 975, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	F966_11536(RTCV(loc3), tr1);
	F966_11536(RTCV(loc2), loc1);
	F966_11536(RTCV(loc2), loc3);
	F973_11872(RTCV(loc2), loc3);
	F973_11870(RTCV(loc2), ((EIF_INTEGER_32) 14L));
	F973_11868(RTCV(loc2), ((EIF_INTEGER_32) 10L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F959_11238(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F973_11870(RTCV(tr1), ((EIF_INTEGER_32) 10L));
	F969_11611(Current, loc2);
	tr1 = RTMS_EX_H("Use `set_text\' to modify this message.",38,1665955374);
	F985_12413(Current, tr1);
	tr1 = F80_2810(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,1,841,1205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A584_347_2, (EIF_POINTER) _A584_347_2, (EIF_POINTER)(F985_12432),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	F980_12336(Current);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.pixmap */
EIF_REFERENCE F985_12404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tb1 = F976_12016(RTCV(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		Result = F969_11602(RTCV(tr1));
		Result = RTRV(eif_non_attached_type(989), Result);
	}
	RTLE;
	return Result;
}

/* {EV_MESSAGE_DIALOG}.foreground_color */
EIF_REFERENCE F985_12406 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {EV_MESSAGE_DIALOG}.background_color */
EIF_REFERENCE F985_12407 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {EV_MESSAGE_DIALOG}.set_background_color */
void F985_12409 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F969_11602(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8609[Dtype(tr1)-947])(RTCV(tr1), arg1);
	loc1 = F969_11602(Current);
	loc1 = RTRV(eif_non_attached_type(968), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F969_11618(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	F938_10917(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_foreground_color */
void F985_12410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F969_11602(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R8608[Dtype(tr1)-947])(RTCV(tr1), arg1);
	loc1 = F969_11602(Current);
	loc1 = RTRV(eif_non_attached_type(968), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F969_11617(RTCV(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	F938_10917(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_pixmap */
void F985_12411 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN)(F985_12404(Current) != NULL)) {
		F985_12412(Current);
	}
	tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R18[Dtype(loc1)-0])(RTCV(loc1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F969_11611(RTCV(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	ti4_1 = F950_11091(RTCV(loc1));
	ti4_2 = F950_11092(RTCV(loc1));
	F968_11597(RTCV(tr1), ti4_1, ti4_2);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.remove_pixmap */
void F985_12412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F976_12019(RTCV(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_text */
void F985_12413 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	tr1 = F968_11571(RTCV(tr1));
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9024[Dtype(loc5)-969])(RTCV(loc5), *(EIF_REFERENCE *)(Current + _REFACS_8_));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F976_12018(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
		loc4 = (EIF_REFERENCE) loc5;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		tr1 = F968_11571(RTCV(tr1));
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9024[Dtype(loc6)-969])(RTCV(loc6), *(EIF_REFERENCE *)(Current + _REFACS_9_));
			loc4 = (EIF_REFERENCE) loc6;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F958_11228(RTCV(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc1 = F950_11091(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc2 = F950_11092(RTCV(tr1));
	if ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_))) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F979_12294(RTCV(tr1));
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F979_12297(RTCV(tr1));
	}
	if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_))) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F979_12296(RTCV(tr1));
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F979_12297(RTCV(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	F968_11595(RTCV(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	F968_11596(RTCV(tr1), loc2);
	if (loc3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F969_11611(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9021[Dtype(loc4)-968])(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_8_));
		}
	} else {
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9021[Dtype(loc4)-968])(RTCV(loc4), *(EIF_REFERENCE *)(Current + _REFACS_9_));
		}
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_buttons */
void F985_12415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	F985_12428(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = F667_6246(RTCV(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F667_6241(RTCV(arg1), loc1);
		F985_12429(Current, tr1);
		loc1++;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F973_11866(RTCV(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.button */
EIF_REFERENCE F985_12418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = F920_10294(RTCV(arg1));
	loc1 = F692_6436(RTCV(tr1), tr2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_MESSAGE_DIALOG}.selected_button */
EIF_REFERENCE F985_12419 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {EV_MESSAGE_DIALOG}.button_box */
EIF_REFERENCE F985_12423 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {EV_MESSAGE_DIALOG}.scrollable_area */
EIF_REFERENCE F985_12424 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {EV_MESSAGE_DIALOG}.label */
EIF_REFERENCE F985_12425 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {EV_MESSAGE_DIALOG}.pixmap_box */
EIF_REFERENCE F985_12426 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {EV_MESSAGE_DIALOG}.buttons */
EIF_REFERENCE F985_12427 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {EV_MESSAGE_DIALOG}.clean_buttons */
void F985_12428 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(F983_12378(Current) != NULL)) {
		F983_12384(Current);
	}
	if ((EIF_BOOLEAN)(F983_12379(Current) != NULL)) {
		F983_12386(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F966_11549(RTCV(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F692_6484(RTCV(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.add_button */
void F985_12429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	
	RTGC;
	tr1 = RTLNS(995, 995, _OBJSIZ_6_2_0_1_0_0_0_0_);
	F958_11226(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = F920_10294(RTCV(arg1));
	F692_6476(RTCV(tr1), loc1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc2 = F407_5127(RTCV(tr1));
	tr1 = F50_2226(RTCV(loc1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,919,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A584_346, (EIF_POINTER) _A584_346, (EIF_POINTER)(F985_12431),tr2, 1, 0);
	}
	F719_6679(RTCV(tr1), tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F966_11536(RTCV(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F973_11872(RTCV(tr1), loc1);
	ti4_1 = F950_11093(RTCV(loc1));
	ti4_1 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 75L));
	F968_11595(RTCV(loc1), ti4_1);
	F959_11236(RTCV(loc1));
	if (loc2) {
		F983_12383(Current, loc1);
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.on_button_press */
void F985_12431 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F920_10294(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) !F930_10740(Current)) {
		F930_10739(Current);
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.on_key_press */
void F985_12432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 60L))) {
		F985_12433(Current, ((EIF_INTEGER_32) -1L));
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 61L))) {
			F985_12433(Current, ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.move_to_next_button */
void F985_12433 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F966_11525(RTCV(loc1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
		loc2 = F966_11520(RTCV(loc1));
		F966_11528(RTCV(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F615_5836(RTCV(loc1));
			if (!tb2) {
				tb1 = loc4;
			}
			if (tb1) break;
			loc3 = F966_11518(RTCV(loc1));
			loc4 = F968_11581(RTCV(loc3));
			if ((EIF_BOOLEAN) !loc4) {
				F966_11530(RTCV(loc1));
			}
		}
		if (loc4) {
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) -1L))) {
					tr1 = F585_5759(RTCV(loc1));
					if ((EIF_BOOLEAN)(tr1 == loc3)) {
						tr1 = F585_5760(RTCV(loc1));
						F968_11585(RTCV(tr1));
					} else {
						F966_11529(RTCV(loc1));
						tr1 = F966_11518(RTCV(loc1));
						F968_11585(RTCV(tr1));
					}
				} else {
					tr1 = F585_5760(RTCV(loc1));
					if ((EIF_BOOLEAN)(tr1 == loc3)) {
						tr1 = F585_5759(RTCV(loc1));
						F968_11585(RTCV(tr1));
					} else {
						F966_11530(RTCV(loc1));
						tr1 = F966_11518(RTCV(loc1));
						F968_11585(RTCV(tr1));
					}
				}
			}
		} else {
			tr1 = F585_5759(RTCV(loc1));
			F968_11585(RTCV(tr1));
		}
		F966_11532(RTCV(loc1), loc2);
	}
	RTLE;
}

void EIF_Minit584 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
