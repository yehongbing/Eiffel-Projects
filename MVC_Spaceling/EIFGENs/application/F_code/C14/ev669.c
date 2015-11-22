/*
 * Code for class EV_FONT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev669.h"
#include <string.h>
#include <ev_gtk.h>
#include "eif_built_in.h"
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

/* {EV_FONT_IMP}.make */
void F1035_13181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	
	RTGC;
	loc1 = RTOSCF(13229,F1035_13229,(Current));
	tp1 = (EIF_POINTER) pango_font_description_new();
	*(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_) = (EIF_POINTER) tp1;
	{
		static EIF_TYPE_INDEX typarr0[] = {722,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F723_6703(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = F791_8099(RTCV(loc1));
	F1035_13190(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_4_);
	F1035_13194(Current, ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_5_);
	F1035_13192(Current, ti4_1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_6_);
	F1035_13191(Current, ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_3_);
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
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,1,841,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A669_105_2, (EIF_POINTER) _A669_105_2, (EIF_POINTER)(F1035_13211),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_4_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCV(tr2) + _REFACS_3_);
	tr2 = F701_6586(RTCV(tr2));
	F719_6679(RTCV(tr1), tr2);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_FONT_IMP}.font_is_default */
EIF_BOOLEAN F1035_13182 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	loc1 = RTOSCF(13229,F1035_13229,(Current));
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_4_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) == ti4_1)) {
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_) == ((EIF_INTEGER_32) 3L));
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_6_);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_5_) == ti4_1);
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_49_16_0_5_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_4_) == ti4_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_22_);
		tb1 = F925_10575(RTCV(tr1), tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.family */
EIF_INTEGER_32 F1035_13183 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_);
}


/* {EV_FONT_IMP}.weight */
EIF_INTEGER_32 F1035_13185 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_5_);
}


/* {EV_FONT_IMP}.shape */
EIF_INTEGER_32 F1035_13186 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_4_);
}


/* {EV_FONT_IMP}.height */
EIF_INTEGER_32 F1035_13187 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_3_);
}


/* {EV_FONT_IMP}.height_in_points */
EIF_INTEGER_32 F1035_13188 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_);
}


/* {EV_FONT_IMP}.set_family */
void F1035_13189 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_) = (EIF_INTEGER_32) arg1;
	F1035_13212(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_face_name */
void F1035_13190 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	
	RTGC;
	tr1 = F920_10294(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTOSCF(13229,F1035_13229,(Current));
	loc1 = F1049_13651(RTCV(tr1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	pango_font_description_set_family((PangoFontDescription*) tp1, (char*) tp2);
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_weight */
void F1035_13191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_5_) = (EIF_INTEGER_32) arg1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	ti4_1 = F1035_13220(Current);
	pango_font_description_set_weight((PangoFontDescription*) tp1, (PangoWeight) ti4_1);
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_shape */
void F1035_13192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_4_) = (EIF_INTEGER_32) arg1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	ti4_1 = F1035_13219(Current);
	pango_font_description_set_style((PangoFontDescription*) tp1, (PangoStyle) ti4_1);
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_height */
void F1035_13193 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(13229,F1035_13229,(Current));
	ti4_1 = F791_8092(RTCV(tr1), arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_3_) = (EIF_INTEGER_32) arg1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_);
	ti4_2 = (EIF_INTEGER_32) PANGO_SCALE;
	pango_font_description_set_size((PangoFontDescription*) tp1, (gint) (EIF_INTEGER_32) (ti4_1 * ti4_2));
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_height_in_points */
void F1035_13194 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) = (EIF_INTEGER_32) arg1;
	tr1 = RTOSCF(13229,F1035_13229,(Current));
	ti4_1 = F791_8091(RTCV(tr1), arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_3_) = (EIF_INTEGER_32) ti4_1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_);
	ti4_2 = (EIF_INTEGER_32) PANGO_SCALE;
	pango_font_description_set_size((PangoFontDescription*) tp1, (gint) (EIF_INTEGER_32) (ti4_1 * ti4_2));
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_values */
void F1035_13195 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1034_13158(Current, arg1, arg2, arg3, arg4, arg5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.name */
EIF_REFERENCE F1035_13196 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EV_FONT_IMP}.calculate_font_metrics */
RTEOMS(13197,1);
void F1035_13198 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
		loc1 = F1035_13204(Current, RTOMS(13197,0));
		loc2 = F842_8530(RTCV(loc1), ((EIF_INTEGER_32) 5L));
		loc3 = F842_8530(RTCV(loc1), ((EIF_INTEGER_32) 2L));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) = (EIF_INTEGER_32) loc2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_));
	}
	RTLE;
}

/* {EV_FONT_IMP}.ascent */
EIF_INTEGER_32 F1035_13199 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_);
}


/* {EV_FONT_IMP}.descent */
EIF_INTEGER_32 F1035_13200 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
}


/* {EV_FONT_IMP}.string_size */
EIF_REFERENCE F1035_13204 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc21);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,Result);
	
	RTGC;
	loc21 = RTOSCF(13229,F1035_13229,(Current));
	loc1 = F1049_13651(RTCV(loc21), arg1);
	loc2 = RTOSCF(8093,F791_8093,(RTCV(loc21)));
	tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	pango_layout_set_text((PangoLayout*) loc2, (char*) tp1, (int) ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	pango_layout_set_font_description((PangoLayout*) loc2, (PangoFontDescription*) tp1);
	loc4 = (EIF_POINTER) calloc (sizeof(PangoRectangle), 1);
	loc5 = RTOSCF(13207,F1035_13207,(Current));
	pango_layout_get_pixel_extents((PangoLayout*) loc2, (PangoRectangle*) loc4, (PangoRectangle*) loc5);
	loc3 = F791_8094(RTCV(loc21));
	loc20 = (EIF_INTEGER_32) pango_layout_iter_get_baseline((PangoLayoutIter*) loc3);
	ti4_1 = (EIF_INTEGER_32) PANGO_SCALE;
	loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc20 / ti4_1);
	pango_layout_iter_free((PangoLayoutIter*) loc3);
	loc6 = (EIF_INTEGER_32) (((PangoRectangle *)loc5)->x);
	loc7 = (EIF_INTEGER_32) (((PangoRectangle *)loc5)->y);
	loc8 = (EIF_INTEGER_32) (((PangoRectangle *)loc5)->width);
	loc9 = (EIF_INTEGER_32) (((PangoRectangle *)loc5)->height);
	loc10 = (EIF_INTEGER_32) (((PangoRectangle *)loc4)->x);
	loc11 = (EIF_INTEGER_32) (((PangoRectangle *)loc4)->y);
	loc12 = (EIF_INTEGER_32) (((PangoRectangle *)loc4)->width);
	loc13 = (EIF_INTEGER_32) (((PangoRectangle *)loc4)->height);
	loc14 = (EIF_INTEGER_32) loc8;
	loc15 = (EIF_INTEGER_32) loc9;
	if ((EIF_BOOLEAN) (loc12 > ((EIF_INTEGER_32) 0L))) {
		loc16 = (EIF_INTEGER_32) loc10;
		loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc12) - loc8);
	}
	if ((EIF_BOOLEAN) (loc13 > ((EIF_INTEGER_32) 0L))) {
		loc18 = (EIF_INTEGER_32) loc11;
		loc19 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc18 + loc13) - loc9);
	}
	Result = RTOSCF(13205,F1035_13205,(Current));
	ti4_1 = eif_max_int32 (loc14,((EIF_INTEGER_32) 1L));
	F842_8563(RTCV(Result), ti4_1, ((EIF_INTEGER_32) 1L));
	ti4_1 = eif_max_int32 (loc15,((EIF_INTEGER_32) 1L));
	F842_8563(RTCV(Result), ti4_1, ((EIF_INTEGER_32) 2L));
	F842_8563(RTCV(Result), loc16, ((EIF_INTEGER_32) 3L));
	F842_8563(RTCV(Result), loc17, ((EIF_INTEGER_32) 4L));
	F842_8563(RTCV(Result), loc20, ((EIF_INTEGER_32) 5L));
	F842_8563(RTCV(Result), loc18, ((EIF_INTEGER_32) 6L));
	F842_8563(RTCV(Result), loc19, ((EIF_INTEGER_32) 7L));
	free(loc4);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	pango_layout_set_font_description((PangoLayout*) loc2, (PangoFontDescription*) tp2);
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.reusable_string_size_tuple */
static EIF_REFERENCE F1035_13205_body (EIF_REFERENCE Current)
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
	RTOSP (13205);
#define Result RTOSR(13205)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,841,874,874,874,874,874,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 8, 1);
	}
	Result = (EIF_REFERENCE) tr1;
	RTOSE (13205);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1035_13205 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13205,F1035_13205_body,(Current));
}

/* {EV_FONT_IMP}.string_width */
EIF_INTEGER_32 F1035_13206 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,loc2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R8045[Dtype(arg1)-920])(RTCV(arg1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		loc4 = RTOSCF(13229,F1035_13229,(Current));
		loc2 = F1049_13651(RTCV(loc4), arg1);
		loc1 = RTOSCF(8093,F791_8093,(RTCV(loc4)));
		tp1 = *(EIF_POINTER *)(RTCV(loc2)+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc2)+ _LNGOFF_0_1_0_0_);
		pango_layout_set_text((PangoLayout*) loc1, (char*) tp1, (int) ti4_1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
		pango_layout_set_font_description((PangoLayout*) loc1, (PangoFontDescription*) tp1);
		pango_layout_get_pixel_size((PangoLayout*) loc1, (gint*) (EIF_INTEGER_32 *) &(Result), (gint*) (EIF_INTEGER_32 *) &(loc3));
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		pango_layout_set_font_description((PangoLayout*) loc1, (PangoFontDescription*) tp2);
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.reusable_pango_rectangle_struct */
static EIF_POINTER F1035_13207_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	

	
	RTEV;
	RTOSP (13207);
#define Result RTOSR(13207)
	Result = (EIF_POINTER) calloc (sizeof(PangoRectangle), 1);
	RTOSE (13207);
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1035_13207 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13207,F1035_13207_body,(Current));
}

/* {EV_FONT_IMP}.update_preferred_faces */
void F1035_13211 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1035_13212(Current);
}

/* {EV_FONT_IMP}.update_font_face */
void F1035_13212 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = F1035_13213(Current);
	F1035_13190(Current, tr1);
	F1035_13198(Current);
	RTLE;
}

/* {EV_FONT_IMP}.pango_family_string */
EIF_REFERENCE F1035_13213 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc6);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLR(6,Result);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F407_5127(RTCV(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		loc2 = RTOSCF(8114,F791_8114,(RTCV(RTOSCF(13229,F1035_13229,(Current)))));
		loc5 = F701_6600(RTCV(loc1));
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc6 != NULL) || (EIF_BOOLEAN) (loc4 > loc5))) break;
			loc3 = F701_6584(RTCV(loc1), loc4);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F926_10677(RTCV(loc3));
				tb2 = F701_6590(RTCV(loc2), tr1);
				tb1 = tb2;
			}
			if (tb1) {
				loc6 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc3);
			}
			loc4++;
		}
	}
	if ((EIF_BOOLEAN)(loc6 == NULL)) {
		if (F1035_13182(Current)) {
			Result = RTOSCF(13229,F1035_13229,(Current));
			Result = F791_8099(RTCV(Result));
			Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
		} else {
			tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F925_10552(RTCV(tr1), ((EIF_INTEGER_32) 10L));
			Result = (EIF_REFERENCE) tr1;
			switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_7_)) {
				case 1L:
					tr1 = RTOSCF(13214,F1035_13214,(Current));
					F926_10643(RTCV(Result), tr1);
					break;
				case 2L:
					tr1 = RTOSCF(13215,F1035_13215,(Current));
					F926_10643(RTCV(Result), tr1);
					break;
				case 4L:
					tr1 = RTOSCF(13216,F1035_13216,(Current));
					F926_10643(RTCV(Result), tr1);
					break;
				case 3L:
					tr1 = RTOSCF(13217,F1035_13217,(Current));
					F926_10643(RTCV(Result), tr1);
					break;
				case 5L:
					tr1 = RTOSCF(13218,F1035_13218,(Current));
					F926_10643(RTCV(Result), tr1);
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) loc6;
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.monospace_string */

EIF_REFERENCE F1035_13214 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (13214,RTMS32_EX_H("m\000\000\000o\000\000\000n\000\000\000o\000\000\000s\000\000\000p\000\000\000a\000\000\000c\000\000\000e\000\000\000",9,1647103077));
}

/* {EV_FONT_IMP}.serif_string */

EIF_REFERENCE F1035_13215 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (13215,RTMS32_EX_H("s\000\000\000e\000\000\000r\000\000\000i\000\000\000f\000\000\000",5,1702880102));
}

/* {EV_FONT_IMP}.courier_string */

EIF_REFERENCE F1035_13216 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (13216,RTMS32_EX_H("c\000\000\000o\000\000\000u\000\000\000r\000\000\000i\000\000\000e\000\000\000r\000\000\000",7,427459442));
}

/* {EV_FONT_IMP}.sans_string */

EIF_REFERENCE F1035_13217 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (13217,RTMS32_EX_H("s\000\000\000a\000\000\000n\000\000\000s\000\000\000",4,1935765107));
}

/* {EV_FONT_IMP}.lucida_string */

EIF_REFERENCE F1035_13218 (EIF_REFERENCE Current)
{
	GTCX
	RTOSC (13218,RTMS32_EX_H("l\000\000\000u\000\000\000c\000\000\000i\000\000\000d\000\000\000a\000\000\000",6,1881086561));
}

/* {EV_FONT_IMP}.pango_style */
EIF_INTEGER_32 F1035_13219 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_4_) == ((EIF_INTEGER_32) 11L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}/* NOTREACHED */
	
}

/* {EV_FONT_IMP}.pango_weight */
EIF_INTEGER_32 F1035_13220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_5_)) {
		case 8L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 700L);
			break;
		case 7L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 400L);
			break;
		case 6L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
			break;
		case 9L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 900L);
			break;
		default:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 400L);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.app_implementation */
static EIF_REFERENCE F1035_13229_body (EIF_REFERENCE Current)
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
	RTOSP (13229);
#define Result RTOSR(13229)
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
	RTOSE (13229);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1035_13229 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(13229,F1035_13229_body,(Current));
}

/* {EV_FONT_IMP}.interface */
static EIF_REFERENCE F1035_13230_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1035_13230 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1035_13230_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_FONT_IMP}.destroy */
void F1035_13231 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

/* {EV_FONT_IMP}.dispose */
void F1035_13232 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	pango_font_description_set_family((PangoFontDescription*) tp1, (char*) tp3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_2_0_8_0_0_);
	pango_font_description_free((PangoFontDescription*) tp1);
	RTLE;
}

void EIF_Minit669 (void)
{
	GTCX
	RTPOMS(13197,0,"Ag",2,16743);
}


#ifdef __cplusplus
}
#endif
