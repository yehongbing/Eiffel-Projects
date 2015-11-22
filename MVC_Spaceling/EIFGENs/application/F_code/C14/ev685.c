/*
 * Code for class EV_APPLICATION_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev685.h"
#include "eif_built_in.h"
#include "eif_memory.h"
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

/* {EV_APPLICATION_I}.make */
void F1048_13434 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {700,915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 25L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		tr1 = RTLNSMART(eif_non_attached_type(781));
		F782_7450(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O10450[dtype-1047]) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_non_attached_type(781));
		F782_7450(RTCV(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O10451[dtype-1047]) = (EIF_REFERENCE) tr1;
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {694,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F695_6432(RTCV(tr1), ((EIF_INTEGER_32) 8L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10414[dtype-1047]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {703,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F704_6579(RTCV(tr1), ((EIF_INTEGER_32) 8L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10412[dtype-1047]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(191, 191, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10421[dtype-1047]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(1205, 1205, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1206_17317(RTCV(tr1), ((EIF_INTEGER_32) 27L));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(934));
	F935_10816(RTCV(tr1), loc1, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10419[dtype-1047]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(934));
	F935_10816(RTCV(tr1), loc1, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O10420[dtype-1047]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A685_298, (EIF_POINTER) _A685_298, (EIF_POINTER)(F1048_13529),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + O10493[dtype-1047]) = (EIF_REFERENCE) tr2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRF(typres0, (EIF_POINTER) __A685_243, (EIF_POINTER) _A685_243, (EIF_POINTER)(F1048_13474),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + O10495[dtype-1047]) = (EIF_REFERENCE) tr2;
	F1048_13465(Current, *(EIF_REFERENCE *)(Current + O10419[dtype-1047]));
	F1048_13466(Current, *(EIF_REFERENCE *)(Current + O10420[dtype-1047]));
	tr1 = RTOSCF(13523,F1048_13523,(Current));
	F235_4165(RTCV(tr1), (EIF_BOOLEAN) 1);
	tr1 = F163_3469(Current);
	F732_6800(RTCV(tr1), NULL);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047]) = (EIF_NATURAL_32) tu4_1;
	F1048_13463(Current, (EIF_BOOLEAN) 1);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_APPLICATION_I}.idle_actions_snapshot */
static EIF_REFERENCE F1048_13438_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13438 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10404[Dtype(Current) - 1047]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {754,915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F1048_13438_body (Current));
				*(EIF_REFERENCE *)(Current + O10404[Dtype(Current) - 1047]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.kamikaze_idle_actions_snapshot */
static EIF_REFERENCE F1048_13439_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13439 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10405[Dtype(Current) - 1047]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {754,915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F1048_13439_body (Current));
				*(EIF_REFERENCE *)(Current + O10405[Dtype(Current) - 1047]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.process_event_queue */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1048_13440 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_INTEGER_32  EIF_VOLATILE ti4_4;
	EIF_INTEGER_32  EIF_VOLATILE ti4_5;
	EIF_INTEGER_32  EIF_VOLATILE ti4_6;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTCDT;
	RTXD;
	
	RTXI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc5);
	RTLR(7,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		F1049_13558(Current);
		if (*(EIF_BOOLEAN *)(Current + O10411[dtype-1047])) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047]) = (EIF_NATURAL_32) tu4_1;
		} else {
			if ((EIF_BOOLEAN) (arg1 && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10410[dtype-1047]))) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				(*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047])) += tu4_1;
				if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047]) == ((EIF_NATURAL_32) 1500U))) {
					if (*(EIF_BOOLEAN *)(Current + O10413[dtype-1047])) {
						plsc();
						eif_mem_coalesc();
					}
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
					*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047]) = (EIF_NATURAL_32) tu4_1;
				}
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				*(EIF_NATURAL_32 *)(Current + O10402[dtype-1047]) = (EIF_NATURAL_32) tu4_1;
			}
		}
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !F1029_13065(Current)) {
			tb2 = (EIF_BOOLEAN)(loc1 != NULL);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10410[dtype-1047]);
		}
		if (tb1) {
			if (F1048_13482(Current)) {
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10405[dtype-1047]) == NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F701_6600(RTCV(tr1));
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr1 = F701_6582(RTCV(tr1));
						tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10405[dtype-1047]) = (EIF_REFERENCE) tr1;
						loc6 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current + O10407[dtype-1047])) {
						tr1 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
						tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						ti4_1 = F701_6600(RTCV(tr2));
						tr1 = F755_6978(RTCV(tr1), ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10405[dtype-1047]) = (EIF_REFERENCE) tr1;
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						ti4_1 = F701_6600(RTCV(tr2));
						tr1 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (tr1, ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10405[dtype-1047]) = (EIF_REFERENCE) tr1;
					}
					tr1 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr2 = F701_6582(RTCV(tr2));
					tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F701_6600(RTCV(tr3));
					/* INLINED CODE (SPECIAL.copy_data) */
					sp_copy_data(tr1,tr2,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_1);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_1);
					/* END INLINED CODE */
					;
					loc6 = *(EIF_REFERENCE *)(Current + O10405[dtype-1047]);
				}
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R4205[Dtype(tr1)-404])(RTCV(tr1));
				}
				F1048_13483(Current);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			if (F1048_13479(Current)) {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10404[dtype-1047]) == NULL)) {
					ti4_1 = F701_6600(RTCV(loc1));
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
						tr1 = F701_6582(RTCV(loc1));
						tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10404[dtype-1047]) = (EIF_REFERENCE) tr1;
						loc5 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current + O10407[dtype-1047])) {
						tr1 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
						tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
						ti4_1 = F701_6600(RTCV(loc1));
						tr1 = F755_6978(RTCV(tr1), ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10404[dtype-1047]) = (EIF_REFERENCE) tr1;
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
						ti4_1 = F701_6600(RTCV(loc1));
						tr1 = (EIF_REFERENCE) eif_builtin_SPECIAL_aliased_resized_area (tr1, ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O10404[dtype-1047]) = (EIF_REFERENCE) tr1;
					}
					tr1 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
					tr2 = F701_6582(RTCV(loc1));
					ti4_1 = F701_6600(RTCV(loc1));
					/* INLINED CODE (SPECIAL.copy_data) */
					sp_copy_data(tr1,tr2,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_1);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_1);
					/* END INLINED CODE */
					;
					loc5 = *(EIF_REFERENCE *)(Current + O10404[dtype-1047]);
				}
				F1048_13480(Current);
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			*(EIF_BOOLEAN *)(Current + O10407[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc6);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc8)) {
						tb1 = F1029_13065(Current);
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr2 = *((EIF_REFERENCE *)loc6 + (loc7));
					/* END INLINED CODE */
					tr1 = tr2;
					F1048_13442(Current, tr1);
					loc7++;
				}
				F755_6983(RTCV(loc6));
			}
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc5);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc8)) {
						tb2 = F1029_13065(Current);
					}
					if (tb2) break;
					tr1 = F755_6948(RTCV(loc5), loc7);
					(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_0_))(
						*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
						*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_));
					;
					loc7++;
				}
				F755_6983(RTCV(loc5));
			}
			*(EIF_BOOLEAN *)(Current + O10407[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tb3 = '\0';
			if (arg1) {
				tb3 = (EIF_BOOLEAN) !F1029_13065(Current);
			}
			if (tb3) {
				F1049_13558(Current);
				tb3 = '\0';
				if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10410[dtype-1047])) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F701_6600(RTCV(tr1));
					tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
				}
				if (tb3) {
					F1049_13557(Current, ((EIF_INTEGER_32) 20L));
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
			tr1 = F1048_13520(Current);
			F1048_13515(Current, tr1);
		}
	}
	RTE_E
	RTXS(8);
	*(EIF_BOOLEAN *)(Current + O10407[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (loc3) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1048_13483(Current);
	}
	if (loc2) {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1048_13480(Current);
	}
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		loc4++;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION_I}.call_separate_action */
void F1048_13442 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F916_9723(RTCV(arg1));
}

/* {EV_APPLICATION_I}.dockable_targets */
EIF_REFERENCE F1048_13446 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10412[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.pnd_targets */
EIF_REFERENCE F1048_13448 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10414[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.locked_window */
EIF_REFERENCE F1048_13450 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10416[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.captured_widget */
EIF_REFERENCE F1048_13451 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10417[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.help_accelerator */
EIF_REFERENCE F1048_13453 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10419[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.contextual_help_accelerator */
EIF_REFERENCE F1048_13454 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10420[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.help_engine */
EIF_REFERENCE F1048_13455 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10421[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.set_invoke_garbage_collection_when_inactive */
void F1048_13463 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O10413[Dtype(Current)-1047]) = (EIF_BOOLEAN) arg1;
}

/* {EV_APPLICATION_I}.set_captured_widget */
void F1048_13464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10417[Dtype(Current)-1047]) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_I}.set_help_accelerator */
void F1048_13465 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10419[dtype-1047]) = (EIF_REFERENCE) arg1;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10493[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10419[dtype-1047]);
		tr1 = F935_10817(RTCV(tr1));
		tb2 = F701_6590(RTCV(tr1), *(EIF_REFERENCE *)(Current + O10493[dtype-1047]));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O10419[dtype-1047]);
		tr1 = F935_10817(RTCV(tr1));
		F719_6679(RTCV(tr1), *(EIF_REFERENCE *)(Current + O10493[dtype-1047]));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_contextual_help_accelerator */
void F1048_13466 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10420[dtype-1047]) = (EIF_REFERENCE) arg1;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10495[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10420[dtype-1047]);
		tr1 = F935_10817(RTCV(tr1));
		tb2 = F701_6590(RTCV(tr1), *(EIF_REFERENCE *)(Current + O10495[dtype-1047]));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O10420[dtype-1047]);
		tr1 = F935_10817(RTCV(tr1));
		F719_6679(RTCV(tr1), *(EIF_REFERENCE *)(Current + O10495[dtype-1047]));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_locked_window */
void F1048_13468 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10416[Dtype(Current)-1047]) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_I}.enable_contextual_help */
void F1048_13474 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10458[dtype-1047])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O10417[dtype-1047]) = (EIF_REFERENCE) loc1;
		tr1 = F80_2804(RTCV(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O10492[dtype-1047]) = (EIF_REFERENCE) tr1;
		tr1 = F80_2804(RTCV(loc1));
		F719_6691(RTCV(tr1));
		tr1 = F80_2804(RTCV(loc1));
		tr2 = RTOSCF(13531,F1048_13531,(Current));
		F726_6717(RTCV(tr1), tr2);
		tr1 = F968_11573(RTCV(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O10491[dtype-1047]) = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(32, 32, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr1 = RTOSCF(1631,F33_1631,(RTCV(tr1)));
		F968_11594(RTCV(loc1), tr1);
		F968_11586(RTCV(loc1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.display_help_for_widget */
void F1048_13475 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	
	RTGC;
	loc1 = F944_11053(RTCV(arg1));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10421[Dtype(Current)-1047]);
		tr2 = F917_9728(RTCV(loc1), NULL);
		F192_3859(RTCV(tr1), tr2);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.try_idle_lock */
EIF_BOOLEAN F1048_13479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10450[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10450[dtype-1047]);
		Result = F782_7454(RTCV(tr1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.idle_unlock */
void F1048_13480 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10450[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10450[dtype-1047]);
		F782_7455(RTCV(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.kamikaze_lock */
void F1048_13481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10451[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10451[dtype-1047]);
		F782_7453(RTCV(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.try_kamikaze_lock */
EIF_BOOLEAN F1048_13482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10451[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10451[dtype-1047]);
		Result = F782_7454(RTCV(tr1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.kamikaze_unlock */
void F1048_13483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10451[dtype-1047]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10451[dtype-1047]);
		F782_7455(RTCV(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.idle_action_mutex */
static EIF_REFERENCE F1048_13484_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13484 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10450[Dtype(Current) - 1047]);
	if (!r) {
		if (RTAT(781)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1048_13484_body (Current));
			*(EIF_REFERENCE *)(Current + O10450[Dtype(Current) - 1047]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.kamikaze_action_mutex */
static EIF_REFERENCE F1048_13485_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13485 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10451[Dtype(Current) - 1047]);
	if (!r) {
		if (RTAT(781)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1048_13485_body (Current));
			*(EIF_REFERENCE *)(Current + O10451[Dtype(Current) - 1047]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.do_once_on_idle */
void F1048_13486 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	F1048_13481(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F701_6590(RTCV(tr1), arg1);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), arg1);
	}
	if ((EIF_BOOLEAN) !F1048_13522(Current)) {
		{
		/* INLINED CODE (wake_up_gui_thread) */
		/* END INLINED CODE */
		}
		;
	}
	F1048_13483(Current);
	RTLE;
}

/* {EV_APPLICATION_I}.increase_action_sequence_call_counter */
void F1048_13488 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	(*(EIF_NATURAL_32 *)(Current + O10455[dtype-1047])) += tu4_1;
	RTLE;
}

/* {EV_APPLICATION_I}.focused_widget */
EIF_REFERENCE F1048_13492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	
	RTGC;
	loc1 = F1049_13568(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc1)-303])(RTCV(loc1));
	for (;;) {
		tb1 = '\01';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc1)-273])(RTCV(loc1));
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc1)-303])(RTCV(loc1));
		tb2 = F968_11581(RTCV(loc2));
		if (tb2) {
			tb2 = F976_12013(RTCV(loc2));
			if (tb2) {
				tr1 = F969_11602(RTCV(loc2));
				Result = F1048_13534(Current, tr1);
			} else {
				Result = (EIF_REFERENCE) loc2;
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc1)-303])(RTCV(loc1));
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.interface */
static EIF_REFERENCE F1048_13494_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13494 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1048_13494_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.pnd_screen */
static EIF_REFERENCE F1048_13495_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (13495);
#define Result RTOSR(13495)
	RTOC_NEW(Result);
	tr1 = RTLNS(961, 961, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F961_11259(RTCV(Result));
	tr1 = RTOSCF(1826,F34_1826,(RTCV(RTOSCF(13496,F1048_13496,(Current)))));
	F948_11075(RTCV(Result), tr1);
	F961_11284(RTCV(Result));
	RTOSE (13495);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1048_13495 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13495,F1048_13495_body,(Current));
}

/* {EV_APPLICATION_I}.stock_colors */
static EIF_REFERENCE F1048_13496_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13496);
#define Result RTOSR(13496)
	RTOC_NEW(Result);
	tr1 = RTLNS(33, 33, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13496);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1048_13496 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13496,F1048_13496_body,(Current));
}

/* {EV_APPLICATION_I}.set_x_y_origin */
void F1048_13499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O10462[dtype-1047]) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current + O10463[dtype-1047]) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_APPLICATION_I}.draw_rubber_band */
void F1048_13501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13495,F1048_13495,(Current));
	F961_11268(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O10462[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10463[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10468[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10469[dtype-1047]));
	*(EIF_BOOLEAN *)(Current + O10465[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_APPLICATION_I}.erase_rubber_band */
void F1048_13502 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O10465[dtype-1047])) {
		tr1 = RTOSCF(13495,F1048_13495,(Current));
		F961_11268(RTCV(tr1), *(EIF_INTEGER_32 *)(Current + O10462[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10463[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10468[dtype-1047]), *(EIF_INTEGER_32 *)(Current + O10469[dtype-1047]));
		*(EIF_BOOLEAN *)(Current + O10465[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_pnd_pointer_coords */
void F1048_13505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O10468[dtype-1047]) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current + O10469[dtype-1047]) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_APPLICATION_I}.create_target_menu */
void F1048_13506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_BOOLEAN arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc16 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(27);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc14);
	RTLR(3,tr1);
	RTLR(4,loc5);
	RTLR(5,loc1);
	RTLR(6,loc10);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLR(12,loc18);
	RTLR(13,arg6);
	RTLR(14,loc6);
	RTLR(15,arg7);
	RTLR(16,loc19);
	RTLR(17,loc7);
	RTLR(18,loc9);
	RTLR(19,loc8);
	RTLR(20,loc11);
	RTLR(21,loc12);
	RTLR(22,loc20);
	RTLR(23,arg5);
	RTLR(24,loc17);
	RTLR(25,loc21);
	RTLR(26,loc22);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + O10414[Dtype(Current)-1047]);
	tr1 = RTLNS(1026, 1026, _OBJSIZ_6_1_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc14 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(787, 787, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc5 = (EIF_REFERENCE) tr1;
	loc1 = F695_6444(RTCV(loc4));
	F695_6469(RTCV(loc4));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {918,0,0xFFF9,2,841,2,2,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A685_325_2_3, (EIF_POINTER) _A685_325_2_3, (EIF_POINTER)(0),tr1, 1, 2);
	}
	loc10 = (EIF_REFERENCE) tr4;
	for (;;) {
		tb1 = F695_6464(RTCV(loc4));
		if (tb1) break;
		ti4_1 = F695_6442(RTCV(loc4));
		loc2 = F788_7992(RTCV(loc5), ti4_1);
		loc2 = RTRV(eif_non_attached_type(791), loc2);
		loc3 = loc2;
		loc3 = RTRV(eif_non_attached_type(963), loc3);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb3 = '\01';
			if (!(EIF_BOOLEAN)(loc3 == NULL)) {
				tb4 = F930_10740(RTCV(loc3));
				tb3 = (EIF_BOOLEAN) !tb4;
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\0';
			loc18 = RTCCL(arg6);
			if (EIF_TEST(loc18)) {
				tr1 = F70_2603(RTCV(loc2));
				tr2 = RTCCL(loc18);
				tb3 = F733_6803(RTCV(tr1), tr2);
				tb2 = tb3;
			}
			if (tb2) {
				loc6 = loc2;
				loc6 = RTRV(eif_non_attached_type(966), loc6);
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tb3 = '\0';
					tb4 = F930_10740(RTCV(loc6));
					if ((EIF_BOOLEAN) !tb4) {
						tb4 = F967_11563(RTCV(loc6));
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					tb2 = tb3;
				}
				if ((EIF_BOOLEAN) !tb2) {
					loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc13 && (EIF_BOOLEAN)(arg7 != NULL))) {
						tr1 = RTLNS(1005, 1005, _OBJSIZ_6_0_0_1_0_0_0_0_);
						tr2 = RTMS_EX_H("Pick",4,1349084011);
						F1006_12732(RTCV(tr1), tr2, arg7);
						F966_11536(RTCV(loc14), tr1);
						loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
					tr1 = *(EIF_REFERENCE *)(RTCV(loc2) + O6625[Dtype(loc2)-791]);
					loc19 = tr1;
					if (EIF_TEST(loc19)) {
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNTS(typres0, 2, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = loc18;
						RTAR(tr1,loc18);
						loc7 = F917_9728(RTCV(loc19), tr1);
					}
					if ((EIF_BOOLEAN)(loc7 != NULL)) {
						F3_124(RTCV(loc7), loc2);
						{
							static EIF_TYPE_INDEX typarr0[] = {168,2,0xFFFF};
							EIF_TYPE_INDEX typres0;
							static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
							
							typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNS(typres0, 168, _OBJSIZ_2_0_0_0_0_0_0_0_);
						}
						F169_3575(RTCV(tr1), loc7, loc10);
						loc9 = (EIF_REFERENCE) tr1;
						if ((EIF_BOOLEAN)(loc8 == NULL)) {
							{
								static EIF_TYPE_INDEX typarr0[] = {386,168,2,0xFFFF};
								EIF_TYPE_INDEX typres0;
								static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
								
								typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr1 = RTLNS(typres0, 386, _OBJSIZ_4_1_0_1_0_0_0_0_);
							}
							F387_4943(RTCV(tr1), loc9);
							loc8 = (EIF_REFERENCE) tr1;
						} else {
							F387_4955(RTCV(loc8), loc9);
						}
						loc7 = (EIF_REFERENCE) NULL;
					}
				}
			}
		}
		F695_6470(RTCV(loc4));
	}
	if (loc16) {
		{
			static EIF_TYPE_INDEX typarr0[] = {700,2,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc11 = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			
			{
				static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,3,841,915,0,0xFFF9,0,841,386,168,2,700,2,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr4 = RTLNRF(typres0, (EIF_POINTER) __A685_326_2_3_4, (EIF_POINTER) _A685_326_2_3_4, (EIF_POINTER)(0),tr1, 1, 3);
			}
			loc12 = (EIF_REFERENCE) tr4;
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc12)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(loc12)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(loc12) + _REFACS_1_), loc12, loc8, loc11);
			;
		}
		loc15 = F966_11525(RTCV(loc14));
		tr1 = F964_11345(RTCV(arg5));
		loc20 = tr1;
		if (EIF_TEST(loc20)) {
			loc17 = (EIF_REFERENCE) RTCCL(arg6);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc17 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTCCL(loc17);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc20)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(loc20)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(loc20) + _REFACS_1_), loc14, loc11, arg5, tr1);
			;
		} else {
			F701_6609(RTCV(loc11));
			for (;;) {
				tb2 = F615_5836(RTCV(loc11));
				if (tb2) break;
				tr1 = F701_6583(RTCV(loc11));
				tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
				loc21 = tr1;
				if (EIF_TEST(loc21)) {
					loc17 = (EIF_REFERENCE) RTCCL(arg6);
					RTCT0(NULL, EX_CHECK);
					if ((EIF_BOOLEAN)(loc17 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = RTLNS(1005, 1005, _OBJSIZ_6_0_0_1_0_0_0_0_);
					tr2 = F701_6583(RTCV(loc11));
					tr2 = F3_120(RTCV(tr2));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,732,0xFFF9,1,841,0,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3 = RTLNTS(typres0, 3, 0);
					}
					tr4 = F70_2603(RTCV(loc21));
					((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
					RTAR(tr3,tr4);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr4 = RTLNTS(typres0, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr4+1)->it_r = loc17;
					RTAR(tr4,loc17);
					((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
					RTAR(tr3,tr4);
					
					{
						static EIF_TYPE_INDEX typarr0[] = {915,732,0xFFF9,0,841,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr4 = RTLNRF(typres0, (EIF_POINTER) __A331_181, (EIF_POINTER) _A331_181, (EIF_POINTER)(F733_6801),tr3, 1, 0);
					}
					F1006_12732(RTCV(tr1), tr2, tr4);
					F966_11536(RTCV(loc14), tr1);
				}
				F701_6611(RTCV(loc11));
			}
		}
		tb3 = '\0';
		tb4 = F930_10740(RTCV(loc14));
		if ((EIF_BOOLEAN) !tb4) {
			ti4_1 = F966_11525(RTCV(loc14));
			tb3 = (EIF_BOOLEAN) (ti4_1 > loc15);
		}
		if (tb3) {
			F1027_13047(RTCV(loc14), NULL, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 3L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 3L)));
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg7 != NULL) && (EIF_BOOLEAN) !arg8)) {
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg7)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(arg7)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(arg7) + _REFACS_1_));
				;
			}
		}
	} else {
		tr1 = F964_11345(RTCV(arg5));
		loc22 = tr1;
		if (EIF_TEST(loc22)) {
			tr1 = RTLNS(1026, 1026, _OBJSIZ_6_1_0_1_0_0_0_0_);
			F930_10736(RTCV(tr1));
			loc14 = (EIF_REFERENCE) tr1;
			{
				static EIF_TYPE_INDEX typarr0[] = {700,2,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
			tr2 = RTCCL(arg6);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc22)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCV(loc22)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCV(loc22) + _REFACS_1_), loc14, tr1, arg5, tr2);
			;
			tb3 = '\0';
			tb4 = '\0';
			tb5 = F930_10740(RTCV(loc14));
			if ((EIF_BOOLEAN) !tb5) {
				ti4_1 = F966_11525(RTCV(loc14));
				tb4 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
			if (tb4) {
				tb3 = (EIF_BOOLEAN) !F1049_13563(Current);
			}
			if (tb3) {
				F1027_13047(RTCV(loc14), NULL, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 3L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 3L)));
			}
		}
	}
	tb3 = F695_6466(RTCV(loc4), loc1);
	if (tb3) {
		F695_6471(RTCV(loc4), loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_tab_navigation_state */
void F1048_13509 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current + O10473[Dtype(Current)-1047]) = (EIF_NATURAL_8) arg1;
}

/* {EV_APPLICATION_I}.call_post_launch_actions */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1048_13514 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTXD;
	
	RTXI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		tr1 = F163_3466(Current);
		F732_6800(RTCV(tr1), NULL);
	} else {
		tr1 = F1048_13520(Current);
		F1048_13515(Current, tr1);
	}
	RTE_E
	RTXS(3);
	if ((EIF_BOOLEAN) !loc1) {
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION_I}.on_exception_action */
void F1048_13515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,arg1);
	RTLR(6,loc1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10416[dtype-1047]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F980_12347(RTCV(loc2));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O10417[dtype-1047]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F968_11587(RTCV(loc3));
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10484[dtype-1047]) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL))) {
		tb2 = F407_5127(RTCV(F163_3484(Current)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current + O10484[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = F163_3484(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,116,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
		*(EIF_BOOLEAN *)(Current + O10484[dtype-1047]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		tr1 = RTLNSMART(eif_non_attached_type(982));
		F930_10736(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O10482[dtype-1047]) = (EIF_REFERENCE) loc1;
		F1048_13516(Current, loc1, arg1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.raise_default_exception_dialog */
void F1048_13516 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(19);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,loc4);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc9);
	RTLR(9,loc3);
	RTLR(10,arg1);
	RTLR(11,loc5);
	RTLR(12,loc7);
	RTLR(13,tr2);
	RTLR(14,Current);
	RTLR(15,tr3);
	RTLR(16,loc8);
	RTLR(17,loc13);
	RTLR(18,loc12);
	
	RTGC;
	loc1 = F117_3312(RTCV(arg2));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
		F926_10668(RTCV(loc1), tw1);
	}
	tr1 = RTLNS(992, 992, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	F993_12554(RTCV(loc2));
	F992_12526(RTCV(loc2));
	tr1 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc6 = (EIF_REFERENCE) tr1;
	F939_10935(RTCV(loc6), ((EIF_INTEGER_32) 4L));
	F960_11241(RTCV(loc2), loc6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F958_11228(RTCV(loc2), loc1);
	} else {
		tr1 = RTMS_EX_H("No trace available.",19,2146208046);
		F958_11228(RTCV(loc2), tr1);
	}
	tr1 = RTLNS(973, 973, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc4 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc10 = (EIF_REFERENCE) tr1;
	F973_11868(RTCV(loc10), ((EIF_INTEGER_32) 5L));
	F973_11870(RTCV(loc10), ((EIF_INTEGER_32) 5L));
	tr1 = RTLNS(32, 32, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOSCF(1624,F33_1624,(RTCV(tr1)));
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	F966_11536(RTCV(loc10), tr1);
	tr1 = F585_5759(RTCV(loc10));
	F973_11872(RTCV(loc10), tr1);
	tr1 = F585_5759(RTCV(loc10));
	F968_11597(RTCV(tr1), ((EIF_INTEGER_32) 32L), ((EIF_INTEGER_32) 32L));
	tr1 = RTLNS(987, 987, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc11 = (EIF_REFERENCE) tr1;
	F959_11238(RTCV(loc11));
	tr1 = RTMS_EX_H("The following uncaught exception has occurred:\012\012Click Ignore to continue or Quit to exit the application",104,940859246);
	F958_11228(RTCV(loc11), tr1);
	F966_11536(RTCV(loc10), loc11);
	F966_11536(RTCV(loc4), loc10);
	F973_11872(RTCV(loc4), loc10);
	tr1 = RTLNS(976, 976, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc9 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc3 = (EIF_REFERENCE) tr1;
	F969_11611(RTCV(loc9), loc3);
	F973_11870(RTCV(loc3), ((EIF_INTEGER_32) 5L));
	F973_11868(RTCV(loc3), ((EIF_INTEGER_32) 5L));
	F966_11536(RTCV(loc3), loc2);
	tr1 = RTMS_EX_H("Exception Trace",15,1881935717);
	F958_11228(RTCV(loc9), tr1);
	F966_11536(RTCV(loc4), loc9);
	F969_11611(RTCV(arg1), loc4);
	tr1 = RTLNS(974, 974, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc5 = (EIF_REFERENCE) tr1;
	F966_11536(RTCV(loc4), loc5);
	F973_11872(RTCV(loc4), loc5);
	tr1 = RTLNS(995, 995, _OBJSIZ_6_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("Ignore",6,1997112421);
	F958_11226(RTCV(tr1), tr2);
	loc7 = (EIF_REFERENCE) tr1;
	tr1 = F50_2226(RTCV(loc7));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,982,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,982,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A580_43, (EIF_POINTER) _A580_43, (EIF_POINTER)(F930_10739),tr2, 1, 0);
	}
	F719_6679(RTCV(tr1), tr3);
	tr1 = RTLNS(975, 975, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	F966_11536(RTCV(loc5), tr1);
	F966_11536(RTCV(loc5), loc7);
	F973_11872(RTCV(loc5), loc7);
	tr1 = RTLNS(995, 995, _OBJSIZ_6_2_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("Quit",4,1366649204);
	F958_11226(RTCV(tr1), tr2);
	loc8 = (EIF_REFERENCE) tr1;
	ti4_1 = F950_11093(RTCV(loc7));
	F968_11595(RTCV(loc8), ti4_1);
	tr1 = F50_2226(RTCV(loc8));
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
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A685_68, (EIF_POINTER) _A685_68, (EIF_POINTER)(F1029_13063),tr2, 1, 0);
	}
	F719_6679(RTCV(tr1), tr3);
	F966_11536(RTCV(loc5), loc8);
	F973_11872(RTCV(loc5), loc8);
	F973_11868(RTCV(loc5), ((EIF_INTEGER_32) 5L));
	F973_11870(RTCV(loc5), ((EIF_INTEGER_32) 5L));
	tr1 = F117_3310(RTCV(arg2));
	loc13 = tr1;
	if (EIF_TEST(loc13)) {
		loc12 = (EIF_REFERENCE) loc13;
	} else {
		loc12 = RTMS_EX_H("",0,0);
	}
	tr1 = RTMS32_EX_H("U\000\000\000n\000\000\000c\000\000\000a\000\000\000u\000\000\000g\000\000\000h\000\000\000t\000\000\000 \000\000\000E\000\000\000x\000\000\000c\000\000\000e\000\000\000p\000\000\000t\000\000\000i\000\000\000o\000\000\000n\000\000\000:\000\000\000 \000\000\000",20,182364448);
	tr1 = F926_10645(RTCV(tr1), loc12);
	F980_12342(RTCV(arg1), tr1);
	F968_11596(RTCV(arg1), ((EIF_INTEGER_32) 350L));
	F951_11101(RTCV(arg1), ((EIF_INTEGER_32) 500L), ((EIF_INTEGER_32) 300L));
	F982_12367(RTCV(arg1));
	F968_11585(RTCV(loc7));
	RTLE;
}

/* {EV_APPLICATION_I}.exception_dialog */
EIF_REFERENCE F1048_13517 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10482[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.new_exception */
EIF_REFERENCE F1048_13520 (EIF_REFERENCE Current)
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
	tr1 = RTOSCF(3270,F115_3270,(Current));
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2953[Dtype(tr1)-94])(RTCV(tr1));
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_APPLICATION_I}.wake_up_gui_thread */
void F1048_13521 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_APPLICATION_I}.is_gui_thread */
EIF_BOOLEAN F1048_13522 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13523,F1048_13523,(Current));
	Result = *(EIF_BOOLEAN *)(eif_optimize_return = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3869[Dtype(tr1)-233])(RTCV(tr1)));
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.is_gui_thread_cell */
static EIF_REFERENCE F1048_13523_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13523);
#define Result RTOSR(13523)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {234,859,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 234, _OBJSIZ_0_1_0_0_0_0_0_0_);
	}
	F235_4165(RTCV(tr1), (EIF_BOOLEAN) 0);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13523);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1048_13523 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13523,F1048_13523_body,(Current));
}

/* {EV_APPLICATION_I}.old_pointer_style */
EIF_REFERENCE F1048_13526 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10491[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.old_pointer_button_press_actions */
EIF_REFERENCE F1048_13527 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O10492[Dtype(Current) - 1047]);
}


/* {EV_APPLICATION_I}.help_handler_procedure */
static EIF_REFERENCE F1048_13528_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13528 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10493[Dtype(Current) - 1047]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F1048_13528_body (Current));
				*(EIF_REFERENCE *)(Current + O10493[Dtype(Current) - 1047]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.help_handler */
void F1048_13529 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10458[Dtype(Current)-1047])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1048_13475(Current, loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.contextual_help_handler_procedure */
static EIF_REFERENCE F1048_13530_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1048_13530 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10495[Dtype(Current) - 1047]);
	if (!r) {
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			if (RTAT(typres0)) {
				GTCX
				RTLD;
				RTLI(1);
				RTLR(0,Current);
				r = (F1048_13530_body (Current));
				*(EIF_REFERENCE *)(Current + O10495[Dtype(Current) - 1047]) = r;
				RTAR(Current, r);
				RTLE;
			}
		}
	}
	return r;
}


/* {EV_APPLICATION_I}.contextual_help_procedure */
static EIF_REFERENCE F1048_13531_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDD;
	RTLD;
	
	dftype = Dftype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTEV;
	RTGC;
	RTOSP (13531);
#define Result RTOSR(13531)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A685_301_2_3_4_5_6_7_8_9, (EIF_POINTER) _A685_301_2_3_4_5_6_7_8_9, (EIF_POINTER)(F1048_13532),tr1, 1, 8);
	}
	Result = (EIF_REFERENCE) tr4;
	RTOSE (13531);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1048_13531 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13531,F1048_13531_body,(Current));
}

/* {EV_APPLICATION_I}.contextual_help */
void F1048_13532 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		F1048_13533(Current);
		loc1 = F962_11299(RTCV(RTOSCF(13495,F1048_13495,(Current))));
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F1048_13475(Current, loc1);
		}
	}
	RTLE;
}

/* {EV_APPLICATION_I}.disable_contextual_help */
void F1048_13533 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10417[dtype-1047]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O10492[dtype-1047]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = F80_2804(RTCV(loc1));
			F585_5779(RTCV(tr1), loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O10491[dtype-1047]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F968_11594(RTCV(loc1), loc3);
		}
		F968_11587(RTCV(loc1));
	} else {
	}
	RTLE;
}

/* {EV_APPLICATION_I}.focused_widget_from_container */
EIF_REFERENCE F1048_13534 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLR(6,tr1);
	RTLR(7,Result);
	
	RTGC;
	tb1 = F968_11581(RTCV(arg1));
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) arg1;
	} else {
		loc1 = arg1;
		loc1 = RTRV(eif_non_attached_type(968), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {584,967,0xFFFF};
				EIF_TYPE_INDEX typres0;
				static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
				
				typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = loc1;
				loc3 = RTRV(eif_non_attached_type(typres0), loc3);
			}
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4252[Dtype(loc3)-644])(RTCV(loc3));
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4158[Dtype(loc1)-273])(RTCV(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4162[Dtype(loc2)-303])(RTCV(loc2));
			for (;;) {
				tb1 = '\01';
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4161[Dtype(loc2)-273])(RTCV(loc2));
				if (!tb2) {
					tb1 = (EIF_BOOLEAN)(Result != NULL);
				}
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4160[Dtype(loc2)-303])(RTCV(loc2));
				Result = F1048_13534(Current, tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R4178[Dtype(loc2)-303])(RTCV(loc2));
			}
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCT0(NULL, EX_CHECK);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4254[Dtype(loc3)-644])(RTCV(loc3), loc4);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.inline-agent#1 of create_target_menu */
EIF_BOOLEAN F1048_18239 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg2);
	
	RTGC;
	tb1 = '\0';
	tr1 = F3_120(RTCV(arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F3_120(RTCV(arg2));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tb1 = F925_10580(RTCV(loc1), loc2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_I}.inline-agent#2 of create_target_menu */
void F1048_18240 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_2_);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), arg1, tr1, arg3);
		;
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2));
		tr1 = *(EIF_REFERENCE *)(RTCV(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(arg3)-404])(RTCV(arg3), tr1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg2) + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), arg1, tr1, arg3);
		;
	}
	RTLE;
}

void EIF_Minit685 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
