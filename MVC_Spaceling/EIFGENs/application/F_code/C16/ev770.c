/*
 * Code for class EV_FRAME_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev770.h"
#include <stdio.h>
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

/* {EV_FRAME_IMP}.needs_event_box */
EIF_BOOLEAN F1120_15329 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_FRAME_IMP}.make */
void F1120_15331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) NULL;
	tp1 = (EIF_POINTER) gtk_frame_new((gchar*) tp1);
	F1079_14134(Current, tp1);
	tp1 = F1098_14651(Current);
	tp2 = (EIF_POINTER) NULL;
	gtk_frame_set_label((GtkFrame*) tp1, (gchar*) tp2);
	F1120_15333(Current, ((EIF_INTEGER_32) 3L));
	F1120_15334(Current);
	F1119_15323(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.set_style */
void F1120_15333 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	switch (arg1) {
		case 1L:
			loc1 = (EIF_INTEGER_32) GTK_SHADOW_IN;
			break;
		case 2L:
			loc1 = (EIF_INTEGER_32) GTK_SHADOW_OUT;
			break;
		case 3L:
			loc1 = (EIF_INTEGER_32) GTK_SHADOW_ETCHED_IN;
			break;
		case 4L:
			loc1 = (EIF_INTEGER_32) GTK_SHADOW_ETCHED_OUT;
			break;
		default:
			break;
	}
	tp1 = F1098_14651(Current);
	gtk_frame_set_shadow_type((GtkFrame*) tp1, (GtkShadowType) loc1);
	RTLE;
}

/* {EV_FRAME_IMP}.align_text_left */
void F1120_15334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	gtk_frame_set_label_align((GtkFrame*) tp1, (gfloat) (EIF_REAL_32) 0.0, (gfloat) (EIF_REAL_32) 0.5);
	ti4_1 = (EIF_INTEGER_32) GTK_JUSTIFY_LEFT;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_11_10_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_FRAME_IMP}.align_text_center */
void F1120_15336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	gtk_frame_set_label_align((GtkFrame*) tp1, (gfloat) (EIF_REAL_32) 0.5, (gfloat) (EIF_REAL_32) 0.5);
	ti4_1 = inline_F24_307();
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_49_11_10_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_FRAME_IMP}.text */
EIF_REFERENCE F1120_15338 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_48_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(925, 925, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F920_10235(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.set_text */
void F1120_15339 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = F1098_14651(Current);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_frame_set_label((GtkFrame*) tp1, (gchar*) tp2);
	RTLE;
}

/* {EV_FRAME_IMP}.internal_text */
EIF_REFERENCE F1120_15341 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_48_);
}


/* {EV_FRAME_IMP}.interface */
static EIF_REFERENCE F1120_15343_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1120_15343 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1120_15343_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_25_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit770 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
