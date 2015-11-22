/*
 * Code for class PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa414.h"
#include "eif_built_in.h"
#include "eif_path_name.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PATH}.make_from_string */
void F795_8427 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(922));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8045[Dtype(arg1)-920])(RTCV(arg1));
	ti4_2 = F795_8471(Current);
	F921_10330(RTCV(tr1), (EIF_INTEGER_32) (ti4_1 * ti4_2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R8023[Dtype(arg1)-922])(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F795_8480(Current, tr1, arg1, (EIF_CHARACTER_8) '\000');
		F795_8473(Current);
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	F795_8472(Current);
	RTLE;
}

/* {PATH}.make_from_pointer */
void F795_8431 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	loc2 = F771_7004(Current, arg1);
	loc2 -= (EIF_INTEGER_32) (loc2 % F795_8471(Current));
	tr1 = RTLNS(211, 211, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F212_4131(RTCV(tr1), arg1, loc2);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F212_4138(RTCV(loc1), ((EIF_INTEGER_32) 1L), loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F414_5127(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		F795_8473(Current);
	}
	F795_8472(Current);
	RTLE;
}

/* {PATH}.hash_code */
EIF_INTEGER_32 F795_8449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = F920_10244(RTCV(tr1));
	} else {
		Result = F920_10245(RTCV(F795_8466(Current)));
	}
	RTLE;
	return Result;
}

/* {PATH}.directory_separator */
EIF_CHARACTER_8 F795_8453 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\\';
	} else {
		return (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
	}/* NOTREACHED */
	
}

/* {PATH}.same_as */
EIF_BOOLEAN F795_8458 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
	} else {
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
				RTLE;
				return (EIF_BOOLEAN) F795_8461(Current, arg1);
			} else {
				RTLE;
				return (EIF_BOOLEAN) F795_8462(Current, arg1);
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH}.is_less */
EIF_BOOLEAN F795_8459 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = F921_10357(RTCV(tr1), tr2);
	} else {
		tr1 = F929_10726(RTCV(F795_8466(Current)));
		tr2 = F795_8466(RTCV(arg1));
		tr2 = F929_10726(RTCV(tr2));
		Result = F925_10580(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_equal */
EIF_BOOLEAN F795_8460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F795_8458(Current, arg1);
}

/* {PATH}.is_case_sensitive_equal */
EIF_BOOLEAN F795_8461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCV(arg1));
		Result = F921_10352(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_case_insensitive_equal */
EIF_BOOLEAN F795_8462 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tr1 = F795_8466(Current);
		tr2 = F795_8466(RTCV(arg1));
		Result = F925_10576(RTCV(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.copy */
void F795_8463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {PATH}.out */
EIF_REFERENCE F795_8464 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F795_8465(Current);
}

/* {PATH}.utf_8_name */
EIF_REFERENCE F795_8465 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_44 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 36);
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = F795_8466(Current);
	Result = F37_1969(RTCV(loc1), tr1);
	RTLE;
	return Result;
}

/* {PATH}.name */
EIF_REFERENCE F795_8466 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_44 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 36);
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTLE;
		return (EIF_REFERENCE) loc2;
	} else {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = RTLNS(928, 928, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = F37_2011(RTCV(loc1), *(EIF_REFERENCE *)(Current));
			F925_10554(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(928, 928, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = F37_1984(RTCV(loc1), *(EIF_REFERENCE *)(Current));
			F925_10554(RTCV(tr1), tr2);
			Result = (EIF_REFERENCE) tr1;
		}
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {PATH}.to_pointer */
EIF_REFERENCE F795_8468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	
	RTGC;
	tr1 = RTLNS(211, 211, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = F795_8471(Current);
	F212_4127(RTCV(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_REFERENCE) tr1;
	F212_4151(RTCV(loc1), *(EIF_REFERENCE *)(Current));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {PATH}.storage */
EIF_REFERENCE F795_8470 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PATH}.unit_size */
EIF_INTEGER_32 F795_8471 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}/* NOTREACHED */
	
}

/* {PATH}.reset_internal_data */
void F795_8472 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
}

/* {PATH}.normalize */
void F795_8473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	loc4 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 10L))) {
			tb1 = '\01';
			tb2 = '\0';
			if (F795_8483(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '/')) {
				tb3 = '\01';
				if (!F795_8483(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/')) {
					tb3 = F795_8483(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\');
				}
				tb2 = tb3;
			}
			if (!(tb2)) {
				tb2 = '\0';
				if (F795_8483(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\')) {
					tb3 = '\01';
					if (!F795_8483(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\')) {
						tb3 = F795_8483(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/');
					}
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				tb1 = '\0';
				if ((EIF_BOOLEAN) !F795_8483(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '/')) {
					tb1 = (EIF_BOOLEAN) !F795_8483(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\');
				}
				if (tb1) {
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		loc3 = (EIF_INTEGER_32) loc2;
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			if (loc6) {
				loc7 = '\0';
				if ((EIF_BOOLEAN) !F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '\\')) {
					loc7 = (EIF_BOOLEAN) !F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
				}
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				if (F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '/')) {
					F923_10422(RTCV(loc1), (EIF_CHARACTER_8) '\\', loc2);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					loc6 = F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '\\');
				}
			}
			if (loc7) {
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					tc1 = F923_10400(RTCV(loc1), loc2);
					F923_10422(RTCV(loc1), tc1, loc3);
					tc1 = F923_10400(RTCV(loc1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					F923_10422(RTCV(loc1), tc1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
				}
				loc3 += ((EIF_INTEGER_32) 2L);
			}
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	} else {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = (EIF_INTEGER_32) loc2;
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			if (loc6) {
				loc7 = F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				loc6 = F795_8483(Current, loc1, loc2, (EIF_CHARACTER_8) '/');
			}
			if (loc7) {
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					tc1 = F923_10400(RTCV(loc1), loc2);
					F923_10422(RTCV(loc1), tc1, loc3);
				}
				loc3++;
			}
			loc2++;
		}
	}
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		F923_10417(RTCV(loc1), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (loc8) {
		loc5 = F795_8477(Current);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = F795_8471(Current);
			F923_10456(RTCV(loc1), ti4_1);
		}
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = F795_8471(Current);
	tc1 = F795_8453(Current);
	if (F795_8483(Current, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), tc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (F795_8477(Current) < ti4_1)) {
			ti4_1 = F795_8471(Current);
			F923_10458(RTCV(loc1), ti4_1);
		}
	}
	RTLE;
}

/* {PATH}.internal_name */
EIF_REFERENCE F795_8474 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PATH}.root_end_position */
EIF_INTEGER_32 F795_8477 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = F414_5127(RTCV(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == F795_8471(Current))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = F795_8483(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\');
			}
			if (tb1) {
				RTLE;
				return (EIF_INTEGER_32) F795_8471(Current);
			} else {
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 2L));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 4L));
						tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
					}
					tb1 = tb2;
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current);
					loc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 1L));
					loc1 = (EIF_CHARACTER_8) tolower(loc1);
					tb1 = '\0';
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) 'z'))) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 3L));
						tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
					}
					if (tb1) {
						tb1 = '\0';
						tr1 = *(EIF_REFERENCE *)(Current);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * F795_8471(Current)))) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = F795_8483(Current, tr1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\');
						}
						if (tb1) {
							RTLE;
							return (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						} else {
							RTLE;
							return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					} else {
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\')) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 3L));
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
						}
						if (tb1) {
							Result = F795_8471(Current);
						} else {
							tb1 = '\0';
							tb2 = '\0';
							tb3 = '\0';
							tr1 = *(EIF_REFERENCE *)(Current);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 10L))) {
								tb3 = (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb3) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 3L));
								tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb2) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 5L));
								tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
							}
							if (tb1) {
								loc2 = F795_8479(Current, ((EIF_INTEGER_32) 7L));
								tb1 = '\0';
								if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
									tr1 = *(EIF_REFERENCE *)(Current);
									ti4_1 = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + F795_8471(Current)) <= ti4_1);
								}
								if (tb1) {
									ti4_1 = F795_8471(Current);
									loc2 = F795_8479(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
									if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
										RTLE;
										return (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									} else {
										tr1 = *(EIF_REFERENCE *)(Current);
										Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_1_1_0_2_);
									}
								}
							}
						}
					}
				}
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = F923_10400(RTCV(tr1), ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				RTLE;
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
		}
	}
	RTLE;
	return Result;
}

/* {PATH}.next_directory_separator */
EIF_INTEGER_32 F795_8479 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	
	RTGC;
	loc2 = F795_8471(Current);
	loc3 = F795_8453(Current);
	Result = (EIF_INTEGER_32) arg1;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc1 = *(EIF_INTEGER_32 *)(RTCV(loc4)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (Result > loc1))) {
			tb1 = F795_8483(Current, loc4, Result, loc3);
		}
		if (tb1) break;
		Result += loc2;
	}
	if ((EIF_BOOLEAN) (Result > loc1)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {PATH}.internal_append_into */
void F795_8480 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	struct eif_ex_44 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, 36);
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R8023[Dtype(arg2)-922])(RTCV(arg2));
	if ((EIF_BOOLEAN) !tb1) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
			tb2 = F414_5127(RTCV(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
			ti4_2 = F795_8471(Current);
			if ((EIF_BOOLEAN) !F795_8483(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg3)) {
				tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R8009[Dtype(arg2)-922])(RTCV(arg2), ((EIF_INTEGER_32) 1L));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
					tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R8009[Dtype(arg2)-922])(RTCV(arg2), ((EIF_INTEGER_32) 1L));
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
					if ((EIF_BOOLEAN)(tw1 != tw2)) {
						F923_10449(RTCV(arg1), arg3);
						F923_10449(RTCV(arg1), (EIF_CHARACTER_8) '\000');
					}
				} else {
					F923_10449(RTCV(arg1), arg3);
				}
			}
		}
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			F37_1998(RTCV(loc1), arg2, arg1);
		} else {
			F37_1973(RTCV(loc1), arg2, arg1);
		}
	}
	RTLE;
}

/* {PATH}.is_character */
EIF_BOOLEAN F795_8483 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		Result = '\0';
		tc1 = F923_10400(RTCV(arg1), arg2);
		if ((EIF_BOOLEAN)(tc1 == arg3)) {
			tc1 = F923_10400(RTCV(arg1), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
		}
	} else {
		tc1 = F923_10400(RTCV(arg1), arg2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == arg3);
	}
	RTLE;
	return Result;
}

void EIF_Minit414 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
