/*
 * Code for class EV_DOCKABLE_SOURCE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev700.h"
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

/* {EV_DOCKABLE_SOURCE_I}.is_dock_executing */
EIF_BOOLEAN F1067_13881 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3608[Dtype(Current)-198]) != NULL);
}

/* {EV_DOCKABLE_SOURCE_I}.real_source */
EIF_REFERENCE F1067_13882 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10765[Dtype(Current) - 1066]);
}


/* {EV_DOCKABLE_SOURCE_I}.is_dockable */
EIF_BOOLEAN F1067_13883 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O10766[Dtype(Current) - 1066]);
}


/* {EV_DOCKABLE_SOURCE_I}.is_external_docking_enabled */
EIF_BOOLEAN F1067_13885 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10767[Dtype(Current)-1066]);
}

/* {EV_DOCKABLE_SOURCE_I}.is_external_docking_relative */
EIF_BOOLEAN F1067_13887 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10769[Dtype(Current)-1066]);
}

/* {EV_DOCKABLE_SOURCE_I}.get_next_target */
EIF_REFERENCE F1067_13888 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,tr1);
	RTLR(7,Result);
	RTLR(8,loc6);
	RTLR(9,loc7);
	
	RTGC;
	loc3 = F968_11571(RTCV(arg1));
	loc1 = loc3;
	loc1 = RTRV(eif_non_attached_type(968), loc1);
	loc2 = loc1;
	loc2 = RTRV(eif_non_attached_type(948), loc2);
	tb1 = '\0';
	tb2 = '\0';
	loc4 = loc3;
	if (EIF_TEST(loc4)) {
		tr1 = F968_11575(RTCV(loc4));
		loc5 = tr1;
		tb2 = EIF_TEST(loc5);
	}
	if (tb2) {
		tb2 = F949_11082(RTCV(loc5));
		tb1 = tb2;
	}
	if (tb1) {
		Result = (EIF_REFERENCE) loc5;
	} else {
		tb1 = '\0';
		loc6 = loc2;
		if (EIF_TEST(loc6)) {
			tb2 = F949_11082(RTCV(loc6));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_REFERENCE) loc6;
		}
	}
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN)(loc1 == NULL))) break;
		loc3 = F968_11571(RTCV(loc1));
		loc1 = loc3;
		loc1 = RTRV(eif_non_attached_type(968), loc1);
		loc2 = loc1;
		loc2 = RTRV(eif_non_attached_type(948), loc2);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = F968_11575(RTCV(loc3));
			loc7 = tr1;
			tb2 = EIF_TEST(loc7);
		}
		if (tb2) {
			tb2 = F949_11082(RTCV(loc7));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_REFERENCE) loc7;
		} else {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb2 = F949_11082(RTCV(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				Result = (EIF_REFERENCE) loc2;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.closest_dockable_target */
EIF_REFERENCE F1067_13889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,loc5);
	RTLR(7,Result);
	
	RTGC;
	loc1 = F1081_14171(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + O10149[Dtype(loc1)-1028]);
		loc2 = RTRV(eif_non_attached_type(948), loc2);
		loc3 = loc2;
		loc3 = RTRV(eif_non_attached_type(1015), loc3);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + O11240[Dtype(loc1)-1094]);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tb2 = F949_11082(RTCV(loc4));
			tb1 = tb2;
		}
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) loc4;
		} else {
			tb1 = '\0';
			tb2 = '\0';
			loc5 = loc2;
			if (EIF_TEST(loc5)) {
				tb3 = F949_11082(RTCV(loc5));
				tb2 = tb3;
			}
			if (tb2) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tb2 = (EIF_BOOLEAN)(F1067_13904(Current) != NULL);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTLE;
				return (EIF_REFERENCE) loc2;
			} else {
				tr1 = F1029_13066(RTCV(loc1));
				Result = F1067_13888(Current, tr1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.complete_dock */
void F1067_13900 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc25 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc33 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc34 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc35 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc36 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc37 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc38 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc39 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc40 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc41 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc42 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(40);
	RTLR(0,Current);
	RTLR(1,loc8);
	RTLR(2,loc29);
	RTLR(3,loc7);
	RTLR(4,loc30);
	RTLR(5,loc32);
	RTLR(6,tr1);
	RTLR(7,loc11);
	RTLR(8,loc14);
	RTLR(9,loc33);
	RTLR(10,loc31);
	RTLR(11,loc34);
	RTLR(12,loc5);
	RTLR(13,loc19);
	RTLR(14,loc13);
	RTLR(15,loc35);
	RTLR(16,loc12);
	RTLR(17,loc10);
	RTLR(18,loc6);
	RTLR(19,loc9);
	RTLR(20,loc3);
	RTLR(21,tr2);
	RTLR(22,tr3);
	RTLR(23,loc36);
	RTLR(24,loc1);
	RTLR(25,loc2);
	RTLR(26,loc37);
	RTLR(27,loc28);
	RTLR(28,loc38);
	RTLR(29,loc39);
	RTLR(30,loc40);
	RTLR(31,loc21);
	RTLR(32,loc24);
	RTLR(33,loc17);
	RTLR(34,loc16);
	RTLR(35,loc15);
	RTLR(36,loc41);
	RTLR(37,loc20);
	RTLR(38,loc42);
	RTLR(39,loc27);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O3619[dtype-198]) = (EIF_REFERENCE) NULL;
	loc8 = F1067_13889(Current);
	loc29 = F1067_13903(Current);
	loc29 = RTRV(eif_non_attached_type(1095), loc29);
	if ((EIF_BOOLEAN)(loc29 != NULL)) {
		loc7 = F1096_14507(RTCV(loc29));
		loc7 = RTRV(eif_non_attached_type(983), loc7);
	} else {
		loc30 = F1067_13904(Current);
		loc30 = RTRV(eif_non_attached_type(1156), loc30);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc30 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12326[Dtype(loc30)-1156])(RTCV(loc30));
		loc32 = tr1;
		if (EIF_TEST(loc32)) {
			loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8536[Dtype(loc32)-967])(RTCV(loc32));
			loc7 = RTRV(eif_non_attached_type(983), loc7);
		}
	}
	loc11 = loc8;
	loc11 = RTRV(eif_non_attached_type(1015), loc11);
	loc14 = loc8;
	loc14 = RTRV(eif_non_attached_type(968), loc14);
	if (((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc29 != NULL) && (EIF_BOOLEAN)(loc14 == NULL)) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc30 != NULL) && (EIF_BOOLEAN)(loc11 == NULL))))) {
		loc8 = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(loc8 == NULL)) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-198]);
		loc33 = tr1;
		if (EIF_TEST(loc33)) {
			tb2 = F1067_13885(RTCV(loc33));
			tb1 = tb2;
		}
		if (tb1) {
			if ((EIF_BOOLEAN)(loc7 == NULL)) {
				tr1 = RTLNSMART(eif_non_attached_type(983));
				F930_10736(RTCV(tr1));
				loc31 = (EIF_REFERENCE) tr1;
				RTAR(Current, loc31);
				*(EIF_REFERENCE *)(Current + O3619[dtype-198]) = (EIF_REFERENCE) loc31;
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					tr1 = F1081_14194(RTCV(loc29));
					loc34 = tr1;
					tb1 = EIF_TEST(loc34);
				}
				if (tb1) {
					loc5 = *(EIF_REFERENCE *)(RTCV(loc34) + O10149[Dtype(loc34)-1028]);
					loc19 = F1029_13066(RTCV(loc29));
					loc19 = F968_11571(RTCV(loc19));
					loc19 = RTRV(eif_non_attached_type(948), loc19);
					RTCT0("original_parent_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc19 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F984_12396(RTCV(loc31), loc19);
					ti4_1 = F1067_13906(Current, loc29);
					F984_12397(RTCV(loc31), ti4_1);
				} else {
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc30 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc13 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12327[Dtype(loc30)-1159])(RTCV(loc30));
					loc13 = RTRV(eif_non_attached_type(1095), loc13);
					RTCT0("parent_is_widget", EX_CHECK);
					if ((EIF_BOOLEAN)(loc13 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = F1081_14194(RTCV(loc13));
					loc35 = tr1;
					if (EIF_TEST(loc35)) {
						loc5 = *(EIF_REFERENCE *)(RTCV(loc35) + O10149[Dtype(loc35)-1028]);
					}
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc12 = F1029_13066(RTCV(loc30));
					loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8536[Dtype(loc12)-967])(RTCV(loc12));
					loc12 = RTRV(eif_non_attached_type(948), loc12);
					RTCT0("parent_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc12 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F984_12396(RTCV(loc31), loc12);
					loc10 = loc30;
					loc10 = RTRV(eif_non_attached_type(1180), loc10);
					RTCT0("item_was_tool_bar_button", EX_CHECK);
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					ti4_1 = F1067_13906(Current, loc10);
					F984_12397(RTCV(loc31), ti4_1);
					loc11 = loc12;
					loc11 = RTRV(eif_non_attached_type(1015), loc11);
					RTCT0("tool_bar_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc11 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc18 = *(EIF_INTEGER_32 *)(RTCV(loc31)+ _LNGOFF_7_4_0_1_);
					loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc18 - ((EIF_INTEGER_32) 1L));
					tb1 = '\0';
					tb2 = F407_5127(RTCV(loc11));
					if ((EIF_BOOLEAN) !tb2) {
						tb1 = (EIF_BOOLEAN) (loc18 >= ((EIF_INTEGER_32) 1L));
					}
					if (tb1) {
						F1068_13932(Current, loc11, loc18, loc18);
					}
				}
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					loc6 = F1029_13066(RTCV(loc29));
					loc6 = F968_11571(RTCV(loc6));
					loc6 = RTRV(eif_non_attached_type(972), loc6);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(loc6 != NULL)) {
						tr1 = F1029_13066(RTCV(loc29));
						tb2 = F973_11865(RTCV(loc6), tr1);
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					if (tb1) {
						F984_12398(RTCV(loc31));
					}
				}
				F1067_13910(Current);
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					tr1 = F1029_13066(RTCV(loc29));
					F969_11611(RTCV(loc31), tr1);
				} else {
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc30 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = RTLNS(1015, 1015, _OBJSIZ_5_3_0_1_0_0_0_0_);
					F930_10736(RTCV(tr1));
					loc11 = (EIF_REFERENCE) tr1;
					F969_11611(RTCV(loc31), loc11);
					loc9 = *(EIF_REFERENCE *)(RTCV(loc30) + O10149[Dtype(loc30)-1028]);
					loc9 = RTRV(eif_non_attached_type(1003), loc9);
					RTCT0("item_was_tool_bar_button", EX_CHECK);
					if ((EIF_BOOLEAN)(loc9 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F966_11536(RTCV(loc11), loc9);
				}
				loc3 = *(EIF_REFERENCE *)(RTCV(loc31) + _REFACS_3_);
				loc3 = RTRV(eif_non_attached_type(1117), loc3);
				RTCT0("dialog_imp_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				F1126_15507(RTCV(loc3));
				tr1 = F42_2146(RTCV(loc31));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,0,983,0xFFFF};
					EIF_TYPE_INDEX typres0;
					typarr0[3] = dftype;
					
					typres0 = eif_compound_id(dftype, typarr0);
					tr2 = RTLNTS(typres0, 3, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
				RTAR(tr2,Current);
				((EIF_TYPED_VALUE *)tr2+2)->it_r = loc31;
				RTAR(tr2,loc31);
				
				{
					static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
					EIF_TYPE_INDEX typres0;
					typarr0[1] = dftype;
					
					typres0 = eif_compound_id(dftype, typarr0);
					tr3 = RTLNRF(typres0, (EIF_POINTER) __A700_100, (EIF_POINTER) _A700_100, (EIF_POINTER)(F1067_13901),tr2, 1, 0);
				}
				F719_6679(RTCV(tr1), tr3);
				F1067_13908(Current, loc31);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-198]);
				loc36 = tr1;
				if (EIF_TEST(loc36)) {
					tb2 = F1067_13887(RTCV(loc36));
					tb1 = tb2;
				}
				if (tb1) {
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F983_12388(RTCV(loc31), loc5);
				} else {
					F968_11584(RTCV(loc31));
				}
				loc1 = loc31;
				loc1 = RTRV(eif_non_attached_type(968), loc1);
			} else {
				F1067_13908(Current, loc7);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2266[dtype-53]) != NULL)) {
				tr1 = F54_2264(Current);
				F732_6800(RTCV(tr1), NULL);
			}
		}
	} else {
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc2 = *(EIF_REFERENCE *)(RTCV(loc8) + O8345[Dtype(loc8)-929]);
		loc2 = RTRV(eif_non_attached_type(1095), loc2);
		RTCT0("target_widget_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O10149[Dtype(loc2)-1028]);
		loc1 = RTRV(eif_non_attached_type(968), loc1);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 == NULL) || (EIF_BOOLEAN)(loc8 != NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3619[dtype-198]) == NULL))) {
		loc11 = loc8;
		loc11 = RTRV(eif_non_attached_type(1015), loc11);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN)(loc11 != NULL) && (EIF_BOOLEAN)(loc29 != NULL))) {
			loc26 = '\0';
			tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
			F930_10736(RTCV(tr1));
			tr1 = F936_10837(RTCV(tr1));
			loc37 = tr1;
			if (EIF_TEST(loc37)) {
				tr1 = F946_11014(RTCV(loc37));
				loc26 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc29 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			if (loc26) {
				tr1 = F1081_14195(RTCV(loc29));
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTCT0(NULL, EX_CHECK);
				if ((EIF_BOOLEAN)(loc14 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc28 = *(EIF_REFERENCE *)(RTCV(loc14) + O8345[Dtype(loc14)-929]);
				loc28 = RTRV(eif_non_attached_type(1097), loc28);
				RTCT0("container_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc28 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = F1081_14194(RTCV(loc28));
				loc38 = tr1;
				if (EIF_TEST(loc38)) {
					F1115_15270(RTCV(loc38));
				}
			}
			tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				F1067_13910(Current);
				F1067_13911(Current);
			}
			loc39 = loc7;
			if (EIF_TEST(loc39)) {
				F930_10739(RTCV(loc39));
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2266[dtype-53]) != NULL)) {
				tr1 = F54_2264(Current);
				F732_6800(RTCV(tr1), NULL);
			}
		} else {
			loc40 = loc7;
			if (EIF_TEST(loc40)) {
				F1067_13908(Current, loc40);
			}
		}
	}
	if ((EIF_BOOLEAN)(loc29 == NULL)) {
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc30 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc9 = *(EIF_REFERENCE *)(RTCV(loc30) + O10149[Dtype(loc30)-1028]);
		loc9 = RTRV(eif_non_attached_type(1003), loc9);
		RTCT0("tool_bar_button_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc11 = loc8;
		loc11 = RTRV(eif_non_attached_type(1015), loc11);
		if ((EIF_BOOLEAN)(loc11 != NULL)) {
			tr1 = F1002_12711(RTCV(RTOSCF(3901,F199_3901,(Current))));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				loc21 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12326[Dtype(loc30)-1156])(RTCV(loc30));
				loc21 = RTRV(eif_non_attached_type(1015), loc21);
				RTCT0("original_tool_bar_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc21 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc24 = loc9;
				loc24 = RTRV(eif_non_attached_type(1001), loc24);
				RTCT0(NULL, EX_CHECK);
				if ((EIF_BOOLEAN)(loc24 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = RTOSCF(3901,F199_3901,(Current));
				loc22 = F966_11522(RTCV(loc21), tr1, ((EIF_INTEGER_32) 1L));
				loc23 = F966_11522(RTCV(loc21), loc24, ((EIF_INTEGER_32) 1L));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8536[Dtype(loc24)-967])(RTCV(loc24));
				loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == loc11);
				F1067_13910(Current);
				F1067_13912(Current);
				if ((EIF_BOOLEAN) (loc25 && (EIF_BOOLEAN)(loc23 == (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 2L))))) {
					F1068_13932(Current, loc11, (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 1L)));
				}
				if ((EIF_BOOLEAN)(loc21 == loc11)) {
					loc17 = *(EIF_REFERENCE *)(RTCV(loc11) + _REFACS_3_);
					loc17 = RTRV(eif_non_attached_type(1143), loc17);
					RTCT0("tool_bar_imp_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc17 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					{
					/* INLINED CODE (block_selection_for_docking) */
					/* END INLINED CODE */
					}
					;
				}
			} else {
				loc17 = *(EIF_REFERENCE *)(RTCV(loc11) + _REFACS_3_);
				loc17 = RTRV(eif_non_attached_type(1143), loc17);
				RTCT0("tool_bar_imp_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc17 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				ti4_1 = F1144_15769(RTCV(loc17));
				tr1 = F966_11521(RTCV(loc11), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tr1 == loc9)) {
					loc18 = F966_11522(RTCV(loc11), loc9, ((EIF_INTEGER_32) 1L));
					ti4_1 = F966_11525(RTCV(loc11));
					if ((EIF_BOOLEAN) (loc18 < ti4_1)) {
						loc16 = F966_11521(RTCV(loc11), (EIF_INTEGER_32) (loc18 + ((EIF_INTEGER_32) 1L)));
						loc16 = RTRV(eif_non_attached_type(1002), loc16);
					}
					if ((EIF_BOOLEAN) (loc18 > ((EIF_INTEGER_32) 1L))) {
						loc15 = F966_11521(RTCV(loc11), (EIF_INTEGER_32) (loc18 - ((EIF_INTEGER_32) 1L)));
						loc15 = RTRV(eif_non_attached_type(1002), loc15);
					}
					tr1 = F962_11297(RTCV(RTOSCF(3905,F199_3905,(Current))));
					ti4_1 = F753_6930(RTCV(tr1));
					ti2_1 = *(EIF_INTEGER_16 *)(Current + O3621[dtype-198]);
					ti4_2 = (EIF_INTEGER_32) ti2_1;
					if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
						if ((EIF_BOOLEAN)(loc16 != NULL)) {
							F966_11545(RTCV(loc11), loc16);
						} else {
							if ((EIF_BOOLEAN)(loc15 == NULL)) {
								ti4_1 = F966_11522(RTCV(loc11), loc9, ((EIF_INTEGER_32) 1L));
								F966_11531(RTCV(loc11), ti4_1);
								tr1 = RTLNS(1002, 1002, _OBJSIZ_6_0_0_1_0_0_0_0_);
								F930_10736(RTCV(tr1));
								F966_11540(RTCV(loc11), tr1);
							}
						}
					} else {
						if ((EIF_BOOLEAN)(loc15 != NULL)) {
							F966_11545(RTCV(loc11), loc15);
						} else {
							if ((EIF_BOOLEAN)(loc16 == NULL)) {
								ti4_1 = F966_11522(RTCV(loc11), loc9, ((EIF_INTEGER_32) 1L));
								F966_11531(RTCV(loc11), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
								tr1 = RTLNS(1002, 1002, _OBJSIZ_6_0_0_1_0_0_0_0_);
								F930_10736(RTCV(tr1));
								F966_11540(RTCV(loc11), tr1);
							}
						}
					}
					loc22 = F966_11522(RTCV(loc11), loc9, ((EIF_INTEGER_32) 1L));
					F1068_13932(Current, loc11, loc22, loc22);
				}
			}
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2266[dtype-53]) != NULL)) {
			tr1 = F54_2264(Current);
			F732_6800(RTCV(tr1), NULL);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-198]);
	loc41 = tr1;
	if (EIF_TEST(loc41)) {
		loc20 = *(EIF_REFERENCE *)(RTCV(loc41) + O10149[Dtype(loc41)-1028]);
		loc20 = RTRV(eif_non_attached_type(967), loc20);
		if ((EIF_BOOLEAN)(loc20 != NULL)) {
			tr1 = F80_2803(RTCV(loc20));
			F726_6723(RTCV(tr1));
		} else {
			loc9 = *(EIF_REFERENCE *)(RTCV(loc41) + O10149[Dtype(loc41)-1028]);
			loc9 = RTRV(eif_non_attached_type(1003), loc9);
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				tr1 = F81_2817(RTCV(loc9));
				F726_6723(RTCV(tr1));
			} else {
				RTCT0("type_not_supported", EX_CHECK);
					RTCF0;
			}
		}
	}
	*(EIF_REFERENCE *)(Current + O3608[dtype-198]) = (EIF_REFERENCE) NULL;
	tb1 = '\0';
	if (loc26) {
		tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		tr1 = F936_10837(RTCV(tr1));
		loc42 = tr1;
		tb1 = EIF_TEST(loc42);
	}
	if (tb1) {
		loc27 = F946_11014(RTCV(loc42));
		if ((EIF_BOOLEAN)(loc27 != NULL)) {
			F980_12347(RTCV(loc27));
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.close_dockable_dialog */
void F1067_13901 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,loc10);
	RTLR(9,loc11);
	RTLR(10,loc12);
	RTLR(11,tr1);
	RTLR(12,loc9);
	RTLR(13,Current);
	RTLR(14,tr2);
	
	RTGC;
	loc1 = F969_11602(RTCV(arg1));
	F976_12019(RTCV(arg1));
	loc3 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_6_);
	loc3 = RTRV(eif_non_attached_type(975), loc3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = F976_12011(RTCV(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		F969_11611(RTCV(loc3), loc1);
	}
	loc4 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_6_);
	loc4 = RTRV(eif_non_attached_type(969), loc4);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_7_4_0_1_);
		tb1 = F585_5771(RTCV(loc4), loc2);
		if (tb1) {
			F966_11531(RTCV(loc4), loc2);
		} else {
			ti4_1 = F966_11525(RTCV(loc4));
			F966_11531(RTCV(loc4), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		F966_11540(RTCV(loc4), loc1);
		loc5 = loc4;
		loc5 = RTRV(eif_non_attached_type(972), loc5);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_7_3_);
			if (tb1) {
				F973_11872(RTCV(loc5), loc1);
			}
		}
	}
	loc6 = *(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_6_);
	loc6 = RTRV(eif_non_attached_type(1015), loc6);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		loc7 = loc1;
		loc7 = RTRV(eif_non_attached_type(1015), loc7);
		RTCT0("old_parent_was_tool_bar", EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc8 = F966_11521(RTCV(loc7), ((EIF_INTEGER_32) 1L));
		loc8 = RTRV(eif_non_attached_type(1003), loc8);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F966_11549(RTCV(loc7));
		loc2 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_7_4_0_1_);
		tb1 = F585_5771(RTCV(loc6), loc2);
		if (tb1) {
			F966_11531(RTCV(loc6), loc2);
		} else {
			ti4_1 = F966_11525(RTCV(loc6));
			F966_11531(RTCV(loc6), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		F966_11540(RTCV(loc6), loc8);
		loc10 = (EIF_REFERENCE) loc8;
	} else {
		loc10 = (EIF_REFERENCE) loc1;
	}
	tb1 = '\0';
	loc11 = arg1;
	if (EIF_TEST(loc11)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc11) + _REFACS_6_);
		loc12 = tr1;
		tb1 = EIF_TEST(loc12);
	}
	if (tb1) {
		loc9 = *(EIF_REFERENCE *)(RTCV(loc12) + O8345[Dtype(loc12)-929]);
		loc9 = RTRV(eif_non_attached_type(1072), loc9);
	}
	RTCT0("target_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc9 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc9) + O2597[Dtype(loc9)-73]);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F74_2648(RTCV(loc9));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,944,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc10;
		RTAR(tr2,loc10);
		F732_6800(RTCV(tr1), tr2);
	}
	F930_10739(RTCV(arg1));
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.drag_cursor */
static EIF_REFERENCE F1067_13902_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13902);
#define Result RTOSR(13902)
	RTOC_NEW(Result);
	tr1 = RTLNS(32, 32, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOSCF(1634,F33_1634,(RTCV(tr1)));
	RTOSE (13902);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1067_13902 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13902,F1067_13902_body,(Current));
}

/* {EV_DOCKABLE_SOURCE_I}.widget_source_being_docked */
EIF_REFERENCE F1067_13903 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-198]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + O10149[Dtype(loc2)-1028]);
		loc1 = RTRV(eif_non_attached_type(967), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = *(EIF_REFERENCE *)(Current + O3608[dtype-198]);
			RTLE;
			return RTRV(eif_non_attached_type(1095), Result);
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.item_source_being_docked */
EIF_REFERENCE F1067_13904 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	
	
	Result = *(EIF_REFERENCE *)(Current + O3608[Dtype(Current)-198]);
	return RTRV(eif_non_attached_type(1156), Result);
}

/* {EV_DOCKABLE_SOURCE_I}.position_in_parent */
EIF_INTEGER_32 F1067_13906 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCV(arg1) + O10149[Dtype(arg1)-1028]);
	loc3 = RTRV(eif_non_attached_type(967), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc1 = F968_11571(RTCV(loc3));
		loc1 = RTRV(eif_non_attached_type(975), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		loc2 = F968_11571(RTCV(loc3));
		loc2 = RTRV(eif_non_attached_type(972), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			Result = F966_11522(RTCV(loc2), loc3, ((EIF_INTEGER_32) 1L));
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	} else {
		loc4 = *(EIF_REFERENCE *)(RTCV(arg1) + O10149[Dtype(arg1)-1028]);
		loc4 = RTRV(eif_non_attached_type(1003), loc4);
		RTCT0("source_was_widget_or_tool_bar_button", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc5 = F1004_12714(RTCV(loc4));
		loc5 = RTRV(eif_non_attached_type(1015), loc5);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = F966_11522(RTCV(loc5), loc4, ((EIF_INTEGER_32) 1L));
		RTLE;
		return (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.initialize_transport */
void F1067_13907 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg3);
	RTLR(4,loc2);
	RTLR(5,loc3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O2265[dtype-53]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O2265[dtype-53]);
		F732_6800(RTCV(tr1), NULL);
	}
	loc1 = arg3;
	loc1 = RTRV(eif_non_attached_type(967), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F80_2803(RTCV(loc1));
		F726_6721(RTCV(tr1));
	} else {
		loc2 = arg3;
		loc2 = RTRV(eif_non_attached_type(1003), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = F81_2817(RTCV(loc2));
			F726_6721(RTCV(tr1));
		} else {
		}
	}
	tr1 = F945_11058(RTCV(arg3));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O8345[Dtype(loc3)-929]);
		*(EIF_REFERENCE *)(Current + O3608[dtype-198]) = RTRV(eif_non_attached_type(1066), tr1);
		RTAR(Current, tr1);
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg3) + O8345[Dtype(arg3)-929]);
		*(EIF_REFERENCE *)(Current + O3608[dtype-198]) = RTRV(eif_non_attached_type(1066), tr1);
		RTAR(Current, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(arg3) + O8345[Dtype(arg3)-929]);
	*(EIF_REFERENCE *)(Current + O3609[dtype-198]) = RTRV(eif_non_attached_type(1066), tr1);
	RTAR(Current, tr1);
	ti2_1 = (EIF_INTEGER_16) arg1;
	*(EIF_INTEGER_16 *)(Current + O3621[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg2;
	*(EIF_INTEGER_16 *)(Current + O3622[dtype-198]) = (EIF_INTEGER_16) ti2_1;
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.move_dialog_to_pointer */
void F1067_13908 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc3 = F950_11092(RTCV(arg1));
	ti4_1 = F969_11616(RTCV(arg1));
	ti4_2 = F950_11091(RTCV(arg1));
	ti4_3 = F969_11615(RTCV(arg1));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ti4_1) - ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) / ((EIF_INTEGER_32) 2L))));
	tr1 = F962_11297(RTCV(RTOSCF(3905,F199_3905,(Current))));
	loc1 = F753_6930(RTCV(tr1));
	tr1 = F962_11297(RTCV(RTOSCF(3905,F199_3905,(Current))));
	loc2 = F753_6932(RTCV(tr1));
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O3610[dtype-198]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	F951_11096(RTCV(arg1), (EIF_INTEGER_32) (loc1 - ti4_1));
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O3611[dtype-198]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	F951_11097(RTCV(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ti4_1) - loc3));
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.execute_dragging */
void F1067_13909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCFDT;
	RTLD;
	
	RTLI(17);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc15);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc16);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,tr2);
	RTLR(9,loc14);
	RTLR(10,loc5);
	RTLR(11,loc17);
	RTLR(12,loc18);
	RTLR(13,loc19);
	RTLR(14,loc11);
	RTLR(15,loc20);
	RTLR(16,loc10);
	
	RTGC;
	loc2 = F1067_13889(Current);
	tr1 = F1067_13903(Current);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb1 = (EIF_BOOLEAN)(loc2 != RTOSCF(3898,F199_3898,(Current)));
		}
		if (tb1) {
			loc3 = loc2;
			loc3 = RTRV(eif_non_attached_type(968), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F949_11081(RTCV(loc2));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc2 == NULL)) {
						tb3 = '\0';
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							tr1 = F949_11081(RTCV(loc2));
							tb3 = (EIF_BOOLEAN)(tr1 == NULL);
						}
						tb2 = tb3;
					}
					if (!tb2) {
						tb2 = '\0';
						tb3 = '\0';
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							tr1 = F949_11081(RTCV(loc2));
							tb3 = (EIF_BOOLEAN)(tr1 != NULL);
						}
						if (tb3) {
							tb2 = (EIF_BOOLEAN) !loc12;
						}
						tb1 = tb2;
					}
					if (tb1) break;
					loc1++;
					tr1 = F949_11081(RTCV(loc2));
					loc16 = tr1;
					if (EIF_TEST(loc16)) {
						tr1 = F1029_13066(RTCV(loc15));
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc16)+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(RTCV(loc16)+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(loc16) + _REFACS_1_), tr1);
						*(EIF_BOOLEAN *)(RTCV(loc16)+ _CHROFF_4_2_) = tb2;
						;
						tb2 = tb2;
						loc12 = *(EIF_BOOLEAN *)(RTCV(loc16)+ _CHROFF_4_2_);
						if (loc12) {
							loc2 = F1067_13888(Current, loc3);
						}
					}
				}
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					loc3 = loc2;
					loc3 = RTRV(eif_non_attached_type(968), loc3);
					RTCT0("container_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
					if ((EIF_BOOLEAN)(tr1 != loc3)) {
						F199_3900(Current);
					}
					loc4 = *(EIF_REFERENCE *)(RTCV(loc3) + O8345[Dtype(loc3)-929]);
					loc4 = RTRV(eif_non_attached_type(1107), loc4);
					loc6 = *(EIF_REFERENCE *)(RTCV(loc3) + O8345[Dtype(loc3)-929]);
					loc6 = RTRV(eif_non_attached_type(1110), loc6);
				}
			}
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc7 = F1102_14758(RTCV(loc4));
				if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) -1L))) {
					tb3 = '\01';
					ti4_1 = F1058_13827(RTCV(loc4));
					if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
						tb4 = '\01';
						ti4_1 = F1058_13827(RTCV(loc4));
						ti4_1 = eif_min_int32 (loc7,ti4_1);
						tr1 = F1058_13826(RTCV(loc4), ti4_1);
						if (!((EIF_BOOLEAN)(tr1 == RTOSCF(3898,F199_3898,(Current))))) {
							ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 1L));
							tr1 = F1058_13826(RTCV(loc4), ti4_1);
							tb4 = (EIF_BOOLEAN)(tr1 == RTOSCF(3898,F199_3898,(Current)));
						}
						tb3 = ((EIF_BOOLEAN) !tb4);
					}
					if (tb3) {
						tr1 = *(EIF_REFERENCE *)(RTCV(loc15) + O10149[Dtype(loc15)-1028]);
						loc8 = F1057_13796(RTCV(loc4), tr1, ((EIF_INTEGER_32) 1L));
						tb3 = '\0';
						tr1 = F1096_14507(RTCV(loc15));
						tr2 = *(EIF_REFERENCE *)(RTCV(loc4) + O10149[Dtype(loc4)-1028]);
						if ((EIF_BOOLEAN)(tr1 == tr2)) {
							tb3 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == loc7) || (EIF_BOOLEAN)(loc8 == (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L))));
						}
						if (tb3) {
							tr1 = *(EIF_REFERENCE *)(RTCV(loc15) + O10149[Dtype(loc15)-1028]);
							loc13 = F1057_13796(RTCV(loc4), tr1, ((EIF_INTEGER_32) 1L));
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc13 == loc7) || (EIF_BOOLEAN)((EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L)) == loc7))) {
								F199_3900(Current);
							}
						} else {
							tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
							if ((EIF_BOOLEAN)(tr1 != NULL)) {
								tr1 = RTOSCF(3899,F199_3899,(Current));
								loc9 = F1067_13906(Current, tr1);
								if ((EIF_BOOLEAN) (loc9 < loc7)) {
									loc7--;
								}
							}
							loc14 = F1081_14194(RTCV(loc4));
							RTCT0(NULL, EX_CHECK);
							if ((EIF_BOOLEAN)(loc14 != NULL)) {
								RTCK0;
							} else {
								RTCF0;
							}
							F1115_15270(RTCV(loc14));
							F199_3900(Current);
							loc5 = F1057_13792(RTCV(loc4));
							F1057_13805(RTCV(loc4), loc7);
							tr1 = RTOSCF(3898,F199_3898,(Current));
							F1057_13813(RTCV(loc4), tr1);
							tr1 = RTOSCF(3898,F199_3898,(Current));
							F1108_14815(RTCV(loc4), tr1, (EIF_BOOLEAN) 0);
							F1057_13806(RTCV(loc4), loc5);
							F1115_15271(RTCV(loc14));
						}
					}
				}
			}
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCV(loc6) + O11905[Dtype(loc6)-1118]);
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					F199_3900(Current);
					tr1 = RTOSCF(3898,F199_3898,(Current));
					F1111_14825(RTCV(loc6), tr1);
				}
			}
		} else {
			if ((EIF_BOOLEAN)(loc2 != RTOSCF(3898,F199_3898,(Current)))) {
				F199_3900(Current);
			}
		}
	} else {
		tb3 = '\0';
		loc17 = loc2;
		if (EIF_TEST(loc17)) {
			tr1 = F1067_13904(Current);
			loc18 = tr1;
			tb3 = EIF_TEST(loc18);
		}
		if (tb3) {
			tr1 = F949_11081(RTCV(loc17));
			loc19 = tr1;
			if (EIF_TEST(loc19)) {
				loc11 = *(EIF_REFERENCE *)(RTCV(loc18) + O10149[Dtype(loc18)-1028]);
				loc11 = RTRV(eif_non_attached_type(1003), loc11);
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc19)+ _PTROFF_4_3_0_3_0_0_))(
						*(EIF_POINTER *)(RTCV(loc19)+ _PTROFF_4_3_0_3_0_1_),
						*(EIF_REFERENCE *)(RTCV(loc19) + _REFACS_1_), loc11);
					*(EIF_BOOLEAN *)(RTCV(loc19)+ _CHROFF_4_2_) = tb3;
					;
					tb3 = tb3;
				}
			}
			tb4 = '\01';
			tb5 = '\0';
			tr1 = F949_11081(RTCV(loc17));
			loc20 = tr1;
			if (EIF_TEST(loc20)) {
				tb6 = *(EIF_BOOLEAN *)(RTCV(loc20)+ _CHROFF_4_2_);
				tb5 = (EIF_BOOLEAN) !tb6;
			}
			if (!(tb5)) {
				tr1 = F949_11081(RTCV(loc17));
				tb4 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			if (tb4) {
				loc10 = *(EIF_REFERENCE *)(RTCV(loc17) + O8345[Dtype(loc17)-929]);
				loc10 = RTRV(eif_non_attached_type(1143), loc10);
			}
			if ((EIF_BOOLEAN)(loc10 != NULL)) {
				loc7 = F1144_15769(RTCV(loc10));
				if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) -1L))) {
					ti4_1 = F1058_13827(RTCV(loc10));
					if ((EIF_BOOLEAN) (loc7 < ti4_1)) {
						loc7++;
					}
					tb4 = '\01';
					ti4_1 = F1058_13827(RTCV(loc10));
					ti4_1 = eif_min_int32 (loc7,ti4_1);
					tr1 = F1058_13826(RTCV(loc10), ti4_1);
					if (!((EIF_BOOLEAN)(tr1 == RTOSCF(3901,F199_3901,(Current))))) {
						ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 1L));
						tr1 = F1058_13826(RTCV(loc10), ti4_1);
						tb4 = (EIF_BOOLEAN)(tr1 == RTOSCF(3901,F199_3901,(Current)));
					}
					if ((EIF_BOOLEAN) !tb4) {
						loc11 = *(EIF_REFERENCE *)(RTCV(loc18) + O10149[Dtype(loc18)-1028]);
						loc11 = RTRV(eif_non_attached_type(1003), loc11);
						loc8 = F1057_13796(RTCV(loc10), loc11, ((EIF_INTEGER_32) 1L));
						tb4 = '\0';
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12326[Dtype(loc18)-1156])(RTCV(loc18));
						tr2 = *(EIF_REFERENCE *)(RTCV(loc10) + _REFACS_24_);
						if ((EIF_BOOLEAN)(tr1 == tr2)) {
							tb4 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == loc7) || (EIF_BOOLEAN)(loc8 == (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L))));
						}
						if (tb4) {
							F199_3903(Current);
						} else {
							tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
							if ((EIF_BOOLEAN)(tr1 != NULL)) {
								if ((EIF_BOOLEAN) (loc9 < loc7)) {
									loc7--;
								}
							}
							F199_3903(Current);
							F1057_13805(RTCV(loc10), loc7);
							tr1 = RTOSCF(3901,F199_3901,(Current));
							F1057_13813(RTCV(loc10), tr1);
						}
					}
				}
			}
		} else {
			F199_3903(Current);
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.unparent_source_being_docked */
void F1067_13910 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1067_13903(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1029_13066(RTCV(loc1));
		tr1 = F968_11571(RTCV(tr1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = F1029_13066(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R9024[Dtype(loc2)-969])(RTCV(loc2), tr1);
	} else {
		tb1 = '\0';
		tr1 = F1067_13904(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = F1029_13066(RTCV(loc3));
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R8536[Dtype(tr1)-967])(RTCV(tr1));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			tr1 = F1029_13066(RTCV(loc3));
			F966_11545(RTCV(loc4), tr1);
		} else {
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.replace_insert_label */
void F1067_13911 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,tr3);
	
	RTGC;
	tr1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		loc3 = *(EIF_REFERENCE *)(RTCV(loc6) + O8345[Dtype(loc6)-929]);
		loc3 = RTRV(eif_non_attached_type(1072), loc3);
	}
	loc4 = F1067_13903(Current);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTCT0("target_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
	loc1 = RTRV(eif_non_attached_type(972), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1029_13066(RTCV(loc4));
		tr2 = RTOSCF(3898,F199_3898,(Current));
		ti4_1 = F966_11522(RTCV(loc1), tr2, ((EIF_INTEGER_32) 1L));
		F966_11541(RTCV(loc1), tr1, ti4_1);
	}
	loc2 = F968_11571(RTCV(RTOSCF(3898,F199_3898,(Current))));
	loc2 = RTRV(eif_non_attached_type(975), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = F1029_13066(RTCV(loc4));
		F969_11612(RTCV(loc2), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc3) + O2597[Dtype(loc3)-73]);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F74_2648(RTCV(loc3));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,967,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		tr3 = F1029_13066(RTCV(loc4));
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		F732_6800(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.replace_insert_sep */
void F1067_13912 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,tr2);
	
	RTGC;
	loc1 = F1002_12711(RTCV(RTOSCF(3901,F199_3901,(Current))));
	loc1 = RTRV(eif_non_attached_type(1015), loc1);
	RTCT0("parent_was_tool_bar", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1067_13904(Current);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(loc7) + O10149[Dtype(loc7)-1028]);
		loc2 = RTRV(eif_non_attached_type(1001), loc2);
	}
	RTCT0("tool_bar_item_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = loc2;
	loc3 = RTRV(eif_non_attached_type(944), loc3);
	RTCT0("source_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = RTOSCF(3901,F199_3901,(Current));
	loc4 = F966_11522(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
	tr1 = RTOSCF(3901,F199_3901,(Current));
	ti4_1 = F966_11522(RTCV(loc1), tr1, ((EIF_INTEGER_32) 1L));
	F966_11541(RTCV(loc1), loc2, ti4_1);
	if ((EIF_BOOLEAN)(loc5 == (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)))) {
		F1068_13932(Current, loc1, loc5, loc4);
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F77_2687(RTCV(loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,944,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc3;
		RTAR(tr2,loc3);
		F732_6800(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.interface */
static EIF_REFERENCE F1067_13914_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1067_13914 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1067_13914_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit700 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
