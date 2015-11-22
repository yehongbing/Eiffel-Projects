/*
 * Code for class EV_GTK_C_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev380.h"
#include <string.h>
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_C_STRING}.make_from_pointer */
void F781_7422 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) strlen(((char*) arg1));
	F781_7433(Current, arg1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_GTK_C_STRING}.make_from_path */
void F781_7423 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = F795_8468(RTCV(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	tp1 = (EIF_POINTER) g_malloc((gulong) ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_GTK_C_STRING}.string */
EIF_REFERENCE F781_7426 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	loc1 = RTOSCF(7431,F781_7431,(Current));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	F778_7238(RTCV(loc1), tp1, loc5);
	tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F925_10552(RTCV(tr1), loc5);
	Result = (EIF_REFERENCE) tr1;
	F926_10691(RTCV(Result), loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc4 == loc5)) break;
		loc2 = F778_7244(RTCV(loc1), loc4);
		loc6++;
		tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc2 <= tu1_1)) {
			tc1 = (EIF_CHARACTER_8) loc2;
			tw1 = (EIF_CHARACTER_32) tc1;
			F926_10630(RTCV(Result), tw1, loc6);
		} else {
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
			tu1_1 = eif_bit_and(loc2,tu1_1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
			if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 31L);
				tu1_1 = eif_bit_and(loc2,tu1_1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc3 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
				loc4++;
				loc2 = F778_7244(RTCV(loc1), loc4);
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
				tu1_1 = eif_bit_and(loc2,tu1_1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc3 = eif_bit_or(loc3,tu4_1);
				tw1 = (EIF_CHARACTER_32) loc3;
				F926_10630(RTCV(Result), tw1, loc6);
			} else {
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
				tu1_1 = eif_bit_and(loc2,tu1_1);
				tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
				if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
					tu1_1 = eif_bit_and(loc2,tu1_1);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					loc3 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
					loc2 = F778_7244(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
					tu1_1 = eif_bit_and(loc2,tu1_1);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_1 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
					loc3 = eif_bit_or(loc3,tu4_1);
					loc2 = F778_7244(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)));
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
					tu1_1 = eif_bit_and(loc2,tu1_1);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					loc3 = eif_bit_or(loc3,tu4_1);
					tw1 = (EIF_CHARACTER_32) loc3;
					F926_10630(RTCV(Result), tw1, loc6);
					loc4 += ((EIF_INTEGER_32) 2L);
				} else {
					tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
					tu1_1 = eif_bit_and(loc2,tu1_1);
					tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
					if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 7L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						loc3 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 18L));
						loc2 = F778_7244(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						tu4_1 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
						loc3 = eif_bit_or(loc3,tu4_1);
						loc2 = F778_7244(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)));
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						tu4_1 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
						loc3 = eif_bit_or(loc3,tu4_1);
						loc2 = F778_7244(RTCV(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L)));
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						loc3 = eif_bit_or(loc3,tu4_1);
						tw1 = (EIF_CHARACTER_32) loc3;
						F926_10630(RTCV(Result), tw1, loc6);
						loc4 += ((EIF_INTEGER_32) 3L);
					} else {
						tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 252L);
						tu1_1 = eif_bit_and(loc2,tu1_1);
						tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
						if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
							F926_10630(RTCV(Result), tw1, loc6);
							loc4 += ((EIF_INTEGER_32) 4L);
						} else {
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
							F926_10630(RTCV(Result), tw1, loc6);
							loc4 += ((EIF_INTEGER_32) 5L);
						}
					}
				}
			}
		}
		loc4++;
	}
	F926_10691(RTCV(Result), loc6);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	F778_7238(RTCV(loc1), tp2, ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_GTK_C_STRING}.set_with_eiffel_string */
void F781_7428 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F781_7432(Current, arg1, (EIF_BOOLEAN) 0);
}

/* {EV_GTK_C_STRING}.share_with_eiffel_string */
void F781_7429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F781_7432(Current, arg1, (EIF_BOOLEAN) 1);
}

/* {EV_GTK_C_STRING}.share_from_pointer */
void F781_7430 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) strlen(((char*) arg1));
	F781_7433(Current, arg1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_GTK_C_STRING}.shared_pointer_helper */
static EIF_REFERENCE F781_7431_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTEV;
	RTGC;
	RTOSP (7431);
#define Result RTOSR(7431)
	RTOC_NEW(Result);
	tr1 = RTLNS(777, 777, _OBJSIZ_0_1_0_1_0_1_1_0_);
	tp1 = F1_33(Current);
	F778_7236(RTCV(tr1), tp1, ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (7431);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F781_7431 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(7431,F781_7431_body,(Current));
}

/* {EV_GTK_C_STRING}.internal_set_with_eiffel_string */
void F781_7432 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	
	RTGC;
	loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8045[Dtype(arg1)-920])(RTCV(arg1));
	loc3 = (EIF_INTEGER_32) loc5;
	for (;;) {
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
		loc4 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R8008[Dtype(arg1)-922])(RTCV(arg1), loc3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			loc2++;
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				loc2 += ((EIF_INTEGER_32) 2L);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					loc2 += ((EIF_INTEGER_32) 3L);
				} else {
					loc2 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		loc3--;
	}
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tb1 = '\0';
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != tp1)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		loc1 = (EIF_POINTER) g_realloc((gpointer) tp1, (gulong) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	} else {
		loc1 = (EIF_POINTER) g_malloc((gulong) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
	}
	loc6 = RTOSCF(7431,F781_7431,(Current));
	F778_7238(RTCV(loc6), loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > loc5)) break;
		loc4 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R8008[Dtype(arg1)-922])(RTCV(arg1), loc3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			tu1_1 = (EIF_NATURAL_8) loc4;
			F778_7260(RTCV(loc6), tu1_1, loc2);
			loc2++;
		} else {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
				tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
				tu4_1 = eif_bit_or(tu4_1,tu4_2);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F778_7260(RTCV(loc6), tu1_1, loc2);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_2 = eif_bit_and(loc4,tu4_2);
				tu4_1 = eif_bit_or(tu4_1,tu4_2);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				loc2 += ((EIF_INTEGER_32) 2L);
			} else {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
					tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 12L));
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, loc2);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
					tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and((tu4_2),tu4_3);
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(loc4,tu4_2);
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)));
					loc2 += ((EIF_INTEGER_32) 3L);
				} else {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
					tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 18L));
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, loc2);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 12L));
					tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and((tu4_2),tu4_3);
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_2 = eif_bit_shift_right(loc4,((EIF_INTEGER_32) 6L));
					tu4_3 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and((tu4_2),tu4_3);
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)));
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
					tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(loc4,tu4_2);
					tu4_1 = eif_bit_or(tu4_1,tu4_2);
					tu1_1 = (EIF_NATURAL_8) tu4_1;
					F778_7260(RTCV(loc6), tu1_1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 3L)));
					loc2 += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		loc3++;
	}
	ti1_1 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L);
	F778_7264(RTCV(loc6), ti1_1, loc2);
	F781_7433(Current, loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), arg2);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	F778_7238(RTCV(loc6), tp2, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_GTK_C_STRING}.set_from_pointer */
void F781_7433 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F781_7434(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) arg3;
	RTLE;
}

/* {EV_GTK_C_STRING}.dispose */
void F781_7434 (EIF_REFERENCE Current)
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
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != tp1)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		g_free((gpointer) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {EV_GTK_C_STRING}.c_strlen */
EIF_INTEGER_32 F781_7435 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) strlen(((char*) arg1));
	return Result;
}

void EIF_Minit380 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
