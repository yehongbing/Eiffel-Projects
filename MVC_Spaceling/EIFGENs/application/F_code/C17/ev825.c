/*
 * Code for class EV_RICH_TEXT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev825.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RICH_TEXT_IMP}.make */
void F1151_16041 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(495));
	F492_5199(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(495));
	F492_5199(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {723,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F724_6703(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	F1150_15994(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
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
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,1,841,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A825_511_2, (EIF_POINTER) _A825_511_2, (EIF_POINTER)(F1151_16112),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	tr1 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_4_);
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
		static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,1,841,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A825_511_2, (EIF_POINTER) _A825_511_2, (EIF_POINTER)(F1151_16112),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	tp1 = (EIF_POINTER) pango_tab_array_new((gint) ((EIF_INTEGER_32) 1L), (gboolean) (EIF_BOOLEAN) 1);
	*(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_);
	gtk_text_view_set_tabs((GtkTextView*) tp1, (PangoTabArray*) tp2);
	F1151_16080(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 96L) / ((EIF_INTEGER_32) 2L)));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.initialize_buffer_events */
void F1151_16042 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	F1150_15996(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_3_);
	tr1 = RTMS_EX_H("mark_set",8,1281129588);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	ti4_1 = F788_7991(Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,2,841,874,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A412_314_3_4, (EIF_POINTER) _A412_314_3_4, (EIF_POINTER)(F789_8062),tr2, 1, 2);
	}
	F1079_14139(Current, tp1, tr1, tr5, NULL);
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.current_format */
EIF_REFERENCE F1151_16072 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_46_);
}


/* {EV_RICH_TEXT_IMP}.format_region */
void F1151_16073 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg3);
	RTLR(3,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1029_13065(Current)) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg3) + _REFACS_1_);
		loc1 = RTRV(eif_non_attached_type(1044), loc1);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_3_);
		tr1 = RTOSCF(13365,F1045_13365,(RTCV(loc1)));
		F1151_16110(Current, tp1, arg1, arg2, loc1, tr1);
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.temp_start_iter */
EIF_REFERENCE F1151_16076 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_47_);
}


/* {EV_RICH_TEXT_IMP}.temp_end_iter */
EIF_REFERENCE F1151_16077 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_48_);
}


/* {EV_RICH_TEXT_IMP}.set_tab_width */
void F1151_16080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_5_) = (EIF_INTEGER_32) arg1;
	F1151_16112(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.tab_width */
EIF_INTEGER_32 F1151_16082 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_5_);
}


/* {EV_RICH_TEXT_IMP}.on_key_event */
void F1151_16083 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	
	RTGC;
	F1096_14502(Current, arg1, arg2, arg3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && arg3) && (EIF_BOOLEAN)(arg1 != NULL))) {
		tb1 = '\01';
		tb2 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
		if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 67L))) {
			tb3 = F1206_17324(RTCV(arg1));
			tb2 = tb3;
		}
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_0_0_0_0_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 40L));
		}
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) NULL;
		} else {
			tr1 = RTOSCF(14148,F1079_14148,(Current));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,0,874,874,936,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0, 5, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
			RTAR(tr2,Current);
			ti4_1 = F1150_16021(Current);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			ti4_1 = F1150_16021(Current);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			((EIF_TYPED_VALUE *)tr2+4)->it_r = loc1;
			RTAR(tr2,loc1);
			
			{
				static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[1] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr3 = RTLNRF(typres0, (EIF_POINTER) __A825_472, (EIF_POINTER) _A825_472, (EIF_POINTER)(F1151_16073),tr2, 1, 0);
			}
			F1048_13486(RTCV(tr1), tr3);
		}
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.on_text_mark_changed */
void F1151_16084 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	if (F1081_14192(Current)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_3_);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg2 == (EIF_POINTER) gtk_text_buffer_get_insert((GtkTextBuffer*) tp1))) {
			loc2 = F1150_16002(Current);
			loc3 = F1150_16003(Current);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL) && (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_3_) != loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_4_) != loc3)))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				F732_6800(RTCV(tr1), NULL);
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_3_) = (EIF_INTEGER_32) loc2;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_4_) = (EIF_INTEGER_32) loc3;
		} else {
			loc1 = F1150_16021(Current);
			if ((EIF_BOOLEAN)(loc1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_2_))) {
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,874,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0, 2, 1);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = loc1;
					F732_6800(RTCV(tr1), tr2);
				}
				*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) NULL;
			}
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_2_) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.modify_region_internal */
void F1151_16110 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,arg4);
	RTLR(4,arg5);
	
	RTGC;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(495, 495, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F492_5199(RTCV(tr1));
	loc2 = (EIF_REFERENCE) tr1;
	tp1 = F492_5202(RTCV(loc1));
	gtk_text_buffer_get_iter_at_offset((GtkTextBuffer*) arg1, (GtkTextIter*) tp1, (gint) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	tp1 = F492_5202(RTCV(loc2));
	gtk_text_buffer_get_iter_at_offset((GtkTextBuffer*) arg1, (GtkTextIter*) tp1, (gint) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)));
	loc4 = F1045_13367(RTCV(arg4), arg5);
	loc3 = (EIF_POINTER) gtk_text_buffer_get_tag_table((GtkTextBuffer*) arg1);
	gtk_text_tag_table_add((GtkTextTagTable*) loc3, (GtkTextTag*) loc4);
	tp1 = F492_5202(RTCV(loc1));
	tp2 = F492_5202(RTCV(loc2));
	gtk_text_buffer_apply_tag((GtkTextBuffer*) arg1, (GtkTextTag*) loc4, (GtkTextIter*) tp1, (GtkTextIter*) tp2);
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.update_tab_positions */
void F1151_16112 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
	ti4_1 = F704_6600(RTCV(tr1));
	pango_tab_array_resize((PangoTabArray*) tp1, (gint) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		ti4_1 = F704_6600(RTCV(tr1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		ti4_2 = F704_6584(RTCV(tr1), loc1);
		loc2 += ti4_2;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_);
		pango_tab_array_set_tab((PangoTabArray*) tp1, (gint) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), (PangoTabAlign) ((EIF_INTEGER_32) 0L), (gint) loc2);
		loc1++;
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_16_10_5_);
	pango_tab_array_set_tab((PangoTabArray*) tp1, (gint) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), (PangoTabAlign) ((EIF_INTEGER_32) 0L), (gint) (EIF_INTEGER_32) (loc2 + ti4_2));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_49_16_10_6_0_4_);
	gtk_text_view_set_tabs((GtkTextView*) tp1, (PangoTabArray*) tp2);
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.interface */
static EIF_REFERENCE F1151_16115_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1151_16115 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1151_16115_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_27_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit825 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
