/*
 * Code for class EV_TEXTABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev723.h"
#include <ev_gtk.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_307
static EIF_INTEGER_32 inline_F24_307 (void)
{
	return (EIF_INTEGER_32) (GTK_JUSTIFY_CENTER)
	;
}
#define INLINE_F24_307
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXTABLE_IMP}.textable_imp_initialize */
void F1088_14258 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	tp1 = (EIF_POINTER) gtk_label_new((gchar*) tp2);
	*(EIF_POINTER *)(Current + O11078[dtype-1087]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	gtk_misc_set_alignment((GtkMisc*) tp1, (gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 0.5);
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	gtk_misc_set_padding((GtkMisc*) tp1, (gint) ((EIF_INTEGER_32) 2L), (gint) ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_TEXTABLE_IMP}.text */
EIF_REFERENCE F1088_14259 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11080[dtype-1087]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		Result = F920_10294(RTCV(loc2));
		Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
		loc1 = (EIF_POINTER) gtk_label_get_label((GtkLabel*) tp1);
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F781_7430(RTCV(tr1), loc1);
			Result = F781_7426(RTCV(tr1));
		} else {
			tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F920_10235(RTCV(tr1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_TEXTABLE_IMP}.align_text_center */
void F1088_14261 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	gtk_misc_set_alignment((GtkMisc*) tp1, (gfloat) (EIF_REAL_32) 0.5, (gfloat) (EIF_REAL_32) 0.5);
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	ti4_1 = inline_F24_307();
	gtk_label_set_justify((GtkLabel*) tp1, (GtkJustification) ti4_1);
	RTLE;
}

/* {EV_TEXTABLE_IMP}.align_text_left */
void F1088_14262 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	gtk_misc_set_alignment((GtkMisc*) tp1, (gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 0.5);
	tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
	ti4_1 = (EIF_INTEGER_32) GTK_JUSTIFY_LEFT;
	gtk_label_set_justify((GtkLabel*) tp1, (GtkJustification) ti4_1);
	RTLE;
}

/* {EV_TEXTABLE_IMP}.set_text */
void F1088_14264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11079[dtype-1087])(Current)) {
		loc2 = F920_10294(RTCV(arg1));
		if ((EIF_BOOLEAN)(loc2 == arg1)) {
			tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O11080[dtype-1087]) = (EIF_REFERENCE) tr1;
		} else {
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + O11080[dtype-1087]) = (EIF_REFERENCE) loc2;
		}
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		tr2 = F1088_14269(Current, arg1);
		loc1 = F1049_13651(RTCV(tr1), tr2);
		tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
		tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
		gtk_label_set_text_with_mnemonic((GtkLabel*) tp1, (gchar*) tp2);
	} else {
		tr1 = RTOSCF(14148,F1079_14148,(Current));
		loc1 = F1049_13651(RTCV(tr1), arg1);
		*(EIF_REFERENCE *)(Current + O11080[dtype-1087]) = (EIF_REFERENCE) NULL;
		tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
		tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
		gtk_label_set_text((GtkLabel*) tp1, (gchar*) tp2);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(loc1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
		gtk_widget_hide((GtkWidget*) tp1);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O11078[dtype-1087]);
		gtk_widget_show((GtkWidget*) tp1);
	}
	RTLE;
}

/* {EV_TEXTABLE_IMP}.accelerators_enabled */
EIF_BOOLEAN F1088_14267 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TEXTABLE_IMP}.real_text */
EIF_REFERENCE F1088_14268 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11080[Dtype(Current) - 1087]);
}


/* {EV_TEXTABLE_IMP}.u_lined_filter */
EIF_REFERENCE F1088_14269 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Result);
	
	RTGC;
	Result = F920_10294(RTCV(arg1));
	loc1 = *(EIF_INTEGER_32 *)(RTCV(Result)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		loc2 = F926_10609(RTCV(Result), loc1);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		if ((EIF_BOOLEAN)(loc2 == tw1)) {
			if ((EIF_BOOLEAN)(Result == arg1)) {
				Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
			}
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
				loc2 = F926_10609(RTCV(Result), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
				if ((EIF_BOOLEAN)(loc2 == tw1)) {
					F926_10663(RTCV(Result), loc1);
					loc1--;
				} else {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
					F926_10630(RTCV(Result), tw1, loc1);
				}
			} else {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
				F926_10630(RTCV(Result), tw1, loc1);
			}
		} else {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
			if ((EIF_BOOLEAN)(loc2 == tw1)) {
				if ((EIF_BOOLEAN)(Result == arg1)) {
					Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
				}
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
				F926_10662(RTCV(Result), tw1, loc1);
			}
		}
		loc1--;
	}
	RTLE;
	return Result;
}

/* {EV_TEXTABLE_IMP}.interface */
static EIF_REFERENCE F1088_14270_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1088_14270 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1088_14270_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit723 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
