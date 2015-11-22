/*
 * Code for class EV_FILE_DIALOG_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev893.h"
#include <stdio.h>
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1186
static EIF_POINTER inline_F31_1186 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_POINTER) (gtk_file_chooser_dialog_new ((gchar*) arg1, (GtkWindow*) arg2, (GtkFileChooserAction) arg3, NULL, NULL))
	;
}
#define INLINE_F31_1186
#endif
#ifndef INLINE_F31_1178
static EIF_POINTER inline_F31_1178 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_POINTER) (gtk_dialog_add_button ((GtkDialog*) arg1, (gchar*) arg2, (gint) arg3))
	;
}
#define INLINE_F31_1178
#endif
#ifndef INLINE_F31_1192
static void inline_F31_1192 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	gtk_file_chooser_set_local_only ((GtkFileChooser*) arg1, (gboolean) arg2)
	;
}
#define INLINE_F31_1192
#endif
#ifndef INLINE_F31_1179
static void inline_F31_1179 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	gtk_dialog_set_default_response ((GtkDialog*) arg1, (gint) arg2)
	;
}
#define INLINE_F31_1179
#endif
#ifndef INLINE_F31_1188
static EIF_POINTER inline_F31_1188 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gtk_file_chooser_get_filename ((GtkFileChooser*) arg1))
	;
}
#define INLINE_F31_1188
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FILE_DIALOG_IMP}.make */
void F1192_16817 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr2 = RTMS_EX_H("Select file",11,1098209125);
	F781_7428(RTCV(tr1), tr2);
	loc3 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = (EIF_POINTER) NULL;
	ti4_1 = (RTNR(NULL), ((EIF_INTEGER_32) 0));
	tp1 = inline_F31_1186(tp1, tp2, ti4_1);
	F1079_14134(Current, tp1);
	{
		static EIF_TYPE_INDEX typarr0[] = {700,0xFFF9,2,841,919,919,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(eif_non_attached_type(typres0));
	}
	F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	F1081_14166(Current);
	F1029_13080(Current, (EIF_BOOLEAN) 0);
	tr1 = RTMS32_EX_H("*\000\000\000.\000\000\000*\000\000\000",3,2764330);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	tp2 = (EIF_POINTER) GTK_STOCK_CANCEL;
	ti4_1 = (EIF_INTEGER_32) GTK_RESPONSE_CANCEL;
	loc2 = inline_F31_1178(tp1, tp2, ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	tp2 = (EIF_POINTER) GTK_STOCK_OK;
	ti4_1 = (EIF_INTEGER_32) GTK_RESPONSE_ACCEPT;
	loc1 = inline_F31_1178(tp1, tp2, ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	inline_F31_1192(tp1, (EIF_BOOLEAN) 1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	ti4_1 = (EIF_INTEGER_32) GTK_RESPONSE_ACCEPT;
	inline_F31_1179(tp1, ti4_1);
	tr1 = RTMS_EX_H("clicked",7,169941860);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_336, (EIF_POINTER) _A412_336, (EIF_POINTER)(F790_8085),tr2, 1, 0);
	}
	F1079_14139(Current, loc1, tr1, tr3, NULL);
	tr1 = RTMS_EX_H("clicked",7,169941860);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 3, 0);
	}
	tr3 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	((EIF_TYPED_VALUE *)tr2+2)->it_p = tp1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNRF(typres0, (EIF_POINTER) __A412_337, (EIF_POINTER) _A412_337, (EIF_POINTER)(F790_8086),tr2, 1, 0);
	}
	F1079_14139(Current, loc2, tr1, tr3, NULL);
	F1188_16714(Current);
	tr1 = F775_7089(RTCV(RTOSCF(14148,F1079_14148,(Current))));
	F1192_16824(Current, tr1);
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_FILE_DIALOG_IMP}.filter */
EIF_REFERENCE F1192_16819 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {EV_FILE_DIALOG_IMP}.start_path */
EIF_REFERENCE F1192_16821 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {EV_FILE_DIALOG_IMP}.set_start_path */
void F1192_16824 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(2,loc1);
	RTLR(3,tr1);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) arg1;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7423(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_file_chooser_set_current_folder((GtkFileChooser*) tp1, (gchar*) tp2);
	RTLE;
}

/* {EV_FILE_DIALOG_IMP}.on_ok */
void F1192_16825 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_10_4_0_1_0_0_);
	loc3 = inline_F31_1188(tp1);
	if ((EIF_BOOLEAN)(loc3 != (EIF_POINTER) NULL)) {
		tr1 = RTLNS(794, 794, _OBJSIZ_2_1_0_0_0_0_0_0_);
		F795_8431(RTCV(tr1), loc3);
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(785, 785, _OBJSIZ_4_6_2_4_1_1_2_1_);
		F785_7675(RTCV(tr1), loc1);
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = '\01';
		tb2 = F785_7705(RTCV(loc2));
		if (!(EIF_BOOLEAN) !tb2) {
			tb2 = F785_7714(RTCV(loc2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			F1188_16719(Current);
		}
		g_free((gpointer) loc3);
	}
	RTLE;
}

/* {EV_FILE_DIALOG_IMP}.interface */
static EIF_REFERENCE F1192_16831_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1192_16831 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1192_16831_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit893 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
