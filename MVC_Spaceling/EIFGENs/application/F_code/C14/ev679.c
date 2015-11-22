/*
 * Code for class EV_CHARACTER_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev679.h"
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1406
static void inline_F31_1406 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	g_object_set ((gpointer) arg1, (gchar*) arg2, (gchar*) arg3, NULL)
	;
}
#define INLINE_F31_1406
#endif
#ifndef INLINE_F31_1409
static void inline_F31_1409 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, arg3, NULL)
	;
}
#define INLINE_F31_1409
#endif
#ifndef INLINE_F31_1411
static void inline_F31_1411 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	g_object_set((gpointer) arg1, (gchar*) arg2, (gboolean) arg3, NULL)
	;
}
#define INLINE_F31_1411
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_IMP}.make */
void F1045_13352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16777215L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = RTOSCF(13379,F1045_13379,(Current));
	tr1 = F791_8099(RTCV(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_4_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_6_);
	F1045_13358(Current, tr1, ((EIF_INTEGER_32) 3L), ti4_1, ti4_2, ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 0L));
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.font */
EIF_REFERENCE F1045_13353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	F939_10935(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_8_));
	F939_10939(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_7_));
	F939_10936(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_6_));
	F939_10937(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_5_));
	tr1 = F939_10934(RTCV(Result));
	F719_6679(RTCV(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.color */
EIF_REFERENCE F1045_13354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 255L));
	F938_10905(RTCV(Result), ti4_1);
	ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	F938_10906(RTCV(Result), ti4_1);
	ti4_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 16L));
	F938_10907(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.background_color */
EIF_REFERENCE F1045_13355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	tr1 = RTLNS(937, 937, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 255L));
	F938_10905(RTCV(Result), ti4_1);
	ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	F938_10906(RTCV(Result), ti4_1);
	ti4_1 = eif_bit_shift_right(loc1,((EIF_INTEGER_32) 16L));
	F938_10907(RTCV(Result), ti4_1);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.effects */
EIF_REFERENCE F1045_13356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(37, 37, _OBJSIZ_0_2_0_1_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		F38_2034(RTCV(Result));
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		F38_2032(RTCV(Result));
	}
	F38_2036(RTCV(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_3_));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_font */
void F1045_13357 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = F939_10940(RTCV(arg1));
	ti4_1 = F939_10927(RTCV(arg1));
	ti4_2 = F939_10932(RTCV(arg1));
	ti4_3 = F939_10929(RTCV(arg1));
	ti4_4 = F939_10930(RTCV(arg1));
	F1045_13358(Current, tr1, ti4_1, ti4_2, ti4_3, ti4_4, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_font_attributes */
void F1045_13358 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_8_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_7_) = (EIF_INTEGER_32) arg3;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_6_) = (EIF_INTEGER_32) arg4;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_5_) = (EIF_INTEGER_32) arg5;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_4_) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_color */
void F1045_13359 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = F938_10902(RTCV(arg1));
	ti4_2 = F938_10903(RTCV(arg1));
	ti4_3 = F938_10904(RTCV(arg1));
	F1045_13360(Current, ti4_1, ti4_2, ti4_3);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_fcolor */
void F1045_13360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) arg3;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 8L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ti4_1;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)) += arg2;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 8L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ti4_1;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)) += arg1;
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_bcolor */
void F1045_13361 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) arg3;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 8L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ti4_1;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += arg2;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 8L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ti4_1;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_background_color */
void F1045_13362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	ti4_1 = F938_10902(RTCV(arg1));
	ti4_2 = F938_10903(RTCV(arg1));
	ti4_3 = F938_10904(RTCV(arg1));
	F1045_13361(Current, ti4_1, ti4_2, ti4_3);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_effects */
void F1045_13363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
	tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_2_0_0_);
	F1045_13364(Current, tb1, tb2, ti4_1);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_effects_internal */
void F1045_13364 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_3_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.dummy_character_format_range_information */
static EIF_REFERENCE F1045_13365_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13365);
#define Result RTOSR(13365)
	RTOC_NEW(Result);
	tr1 = RTLNS(1206, 1206, _OBJSIZ_0_9_0_0_0_0_0_0_);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 2L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 32L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 64L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 128L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	F1207_17328(RTCV(tr1), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13365);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13365 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13365,F1045_13365_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.new_text_tag_from_applicable_attributes */
RTEOMS(13366,2);
EIF_POINTER F1045_13367 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc6);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	Result = (EIF_POINTER) gtk_text_tag_new((gchar*) tp2);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_0_);
	if (!tb4) {
		tb4 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_3_);
		tb3 = tb4;
	}
	if (!tb3) {
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_2_);
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_0_);
		if (tb1) {
			tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F781_7428(RTCV(tr1), tr2);
			loc2 = (EIF_REFERENCE) tr1;
			tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13368,F1045_13368,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
			inline_F31_1406(Result, tp1, tp2);
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_3_);
		if (tb1) {
			tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13369,F1045_13369,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_7_);
			ti4_2 = (EIF_INTEGER_32) PANGO_SCALE;
			inline_F31_1409(Result, tp1, (EIF_INTEGER_32) (ti4_1 * ti4_2));
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_2_);
		if (tb1) {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_5_) == ((EIF_INTEGER_32) 11L))) {
				tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13370,F1045_13370,(Current)))+ _PTROFF_0_1_0_1_0_0_);
				inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 2L));
			} else {
				tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13370,F1045_13370,(Current)))+ _PTROFF_0_1_0_1_0_0_);
				inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 0L));
			}
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_1_);
		if (tb1) {
			switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_6_)) {
				case 8L:
					tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13371,F1045_13371,(Current)))+ _PTROFF_0_1_0_1_0_0_);
					inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 700L));
					break;
				case 7L:
					tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13371,F1045_13371,(Current)))+ _PTROFF_0_1_0_1_0_0_);
					inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 400L));
					break;
				case 6L:
					tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13371,F1045_13371,(Current)))+ _PTROFF_0_1_0_1_0_0_);
					inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 200L));
					break;
				case 9L:
					tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13371,F1045_13371,(Current)))+ _PTROFF_0_1_0_1_0_0_);
					inline_F31_1409(Result, tp1, ((EIF_INTEGER_32) 900L));
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	}
	loc1 = RTOSCF(13653,F1049_13653,(RTCV(RTOSCF(13379,F1045_13379,(Current)))));
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_4_);
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
		ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
		loc3 = eif_bit_shift_left((ti4_1),((EIF_INTEGER_32) 16L));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
		loc4 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
		loc4 = (EIF_INTEGER_32) loc4;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
		loc5 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + loc5);
		
		tr2 = F873_9422(RTCV(tr2));
		F926_10603(RTCV(tr1), tr2);
		loc6 = (EIF_REFERENCE) tr1;
		F926_10626(RTCV(loc6), ((EIF_INTEGER_32) 6L));
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr2 = F923_10437(RTCV(RTOMS(13366,0)), loc6);
		F781_7428(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13372,F1045_13372,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1406(Result, tp1, tp2);
	}
	tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_5_);
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
		ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
		loc3 = eif_bit_shift_left((ti4_1),((EIF_INTEGER_32) 16L));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
		loc4 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
		loc4 = (EIF_INTEGER_32) loc4;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
		loc5 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + loc5);
		
		tr2 = F873_9422(RTCV(tr2));
		F926_10603(RTCV(tr1), tr2);
		loc6 = (EIF_REFERENCE) tr1;
		F926_10626(RTCV(loc6), ((EIF_INTEGER_32) 6L));
		tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
		tr2 = F923_10437(RTCV(RTOMS(13366,1)), loc6);
		F781_7428(RTCV(tr1), tr2);
		loc2 = (EIF_REFERENCE) tr1;
		tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13373,F1045_13373,(Current)))+ _PTROFF_0_1_0_1_0_0_);
		tp2 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		inline_F31_1406(Result, tp1, tp2);
	}
	tb1 = '\01';
	tb2 = '\01';
	tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_6_);
	if (!tb3) {
		tb3 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_7_);
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_8_);
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_6_);
		if (tb1) {
			tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13377,F1045_13377,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
			inline_F31_1411(Result, tp1, tb1);
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_7_);
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13376,F1045_13376,(Current)))+ _PTROFF_0_1_0_1_0_0_);
				ti4_1 = (EIF_INTEGER_32) PANGO_UNDERLINE_SINGLE;
				inline_F31_1409(Result, tp1, ti4_1);
			} else {
				tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13376,F1045_13376,(Current)))+ _PTROFF_0_1_0_1_0_0_);
				ti4_1 = (EIF_INTEGER_32) PANGO_UNDERLINE_NONE;
				inline_F31_1409(Result, tp1, ti4_1);
			}
		}
		tb1 = *(EIF_BOOLEAN *)(RTCV(arg1)+ _CHROFF_0_8_);
		if (tb1) {
			tp1 = *(EIF_POINTER *)(RTCV(RTOSCF(13378,F1045_13378,(Current)))+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_3_);
			inline_F31_1409(Result, tp1, ti4_1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.family_string */
static EIF_REFERENCE F1045_13368_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13368);
#define Result RTOSR(13368)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("family",6,2036910713);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13368);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13368 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13368,F1045_13368_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.size_string */
static EIF_REFERENCE F1045_13369_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13369);
#define Result RTOSR(13369)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("size",4,1936292453);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13369);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13369 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13369,F1045_13369_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.style_string */
static EIF_REFERENCE F1045_13370_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13370);
#define Result RTOSR(13370)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("style",5,1954997861);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13370);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13370 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13370,F1045_13370_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.weight_string */
static EIF_REFERENCE F1045_13371_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13371);
#define Result RTOSR(13371)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("weight",6,2003123828);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13371);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13371 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13371,F1045_13371_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.foreground_string */
static EIF_REFERENCE F1045_13372_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13372);
#define Result RTOSR(13372)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("foreground",10,1905076836);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13372);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13372 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13372,F1045_13372_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.background_string */
static EIF_REFERENCE F1045_13373_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13373);
#define Result RTOSR(13373)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("background",10,1679743332);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13373);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13373 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13373,F1045_13373_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.underline_string */
static EIF_REFERENCE F1045_13376_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13376);
#define Result RTOSR(13376)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("underline",9,1294276453);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13376);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13376 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13376,F1045_13376_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.strikethrough_string */
static EIF_REFERENCE F1045_13377_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13377);
#define Result RTOSR(13377)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("strikethrough",13,408507496);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13377);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13377 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13377,F1045_13377_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.rise_string */
static EIF_REFERENCE F1045_13378_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	
	RTEV;
	RTGC;
	RTOSP (13378);
#define Result RTOSR(13378)
	RTOC_NEW(Result);
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("rise",4,1919513445);
	F781_7428(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13378);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13378 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13378,F1045_13378_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.app_implementation */
static EIF_REFERENCE F1045_13379_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (13379);
#define Result RTOSR(13379)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
	loc1 = F1030_13088(RTCV(loc1));
	loc1 = RTRV(eif_non_attached_type(1048), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOSE (13379);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1045_13379 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13379,F1045_13379_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.name */
EIF_REFERENCE F1045_13380 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_CHARACTER_FORMAT_IMP}.family */
EIF_INTEGER_32 F1045_13381 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_8_);
}


/* {EV_CHARACTER_FORMAT_IMP}.height */
EIF_INTEGER_32 F1045_13382 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13379,F1045_13379,(Current));
	Result = F791_8091(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_7_));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.height_in_points */
EIF_INTEGER_32 F1045_13383 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_7_);
}


/* {EV_CHARACTER_FORMAT_IMP}.weight */
EIF_INTEGER_32 F1045_13384 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_6_);
}


/* {EV_CHARACTER_FORMAT_IMP}.shape */
EIF_INTEGER_32 F1045_13386 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_5_);
}


/* {EV_CHARACTER_FORMAT_IMP}.char_set */
EIF_INTEGER_32 F1045_13387 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_4_);
}


/* {EV_CHARACTER_FORMAT_IMP}.is_underlined */
EIF_BOOLEAN F1045_13388 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {EV_CHARACTER_FORMAT_IMP}.is_striked_out */
EIF_BOOLEAN F1045_13389 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {EV_CHARACTER_FORMAT_IMP}.vertical_offset */
EIF_INTEGER_32 F1045_13390 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_3_);
}


/* {EV_CHARACTER_FORMAT_IMP}.fcolor */
EIF_INTEGER_32 F1045_13391 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
}


/* {EV_CHARACTER_FORMAT_IMP}.bcolor */
EIF_INTEGER_32 F1045_13392 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
}


/* {EV_CHARACTER_FORMAT_IMP}.bcolor_set */
EIF_BOOLEAN F1045_13393 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {EV_CHARACTER_FORMAT_IMP}.destroy */
void F1045_13394 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit679 (void)
{
	GTCX
	RTPOMS(13366,1,"#",1,35);
	RTPOMS(13366,0,"#",1,35);
}


#ifdef __cplusplus
}
#endif
