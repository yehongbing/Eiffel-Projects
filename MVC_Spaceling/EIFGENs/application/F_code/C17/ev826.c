/*
 * Code for class EV_TEXT_FIELD_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev826.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F31_1118
static void inline_F31_1118 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	gtk_widget_set_size_request ((GtkWidget*) arg1, (gint) arg2, (gint) arg3)
	;
}
#define INLINE_F31_1118
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_FIELD_IMP}.needs_event_box */
EIF_BOOLEAN F1152_16116 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TEXT_FIELD_IMP}.make */
void F1152_16118 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = (EIF_POINTER) gtk_vbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	F1079_14134(Current, loc1);
	tp1 = F1152_16155(Current);
	*(EIF_POINTER *)(Current + O12297[dtype-1151]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12297[dtype-1151]);
	gtk_widget_show((GtkWidget*) tp1);
	tp1 = *(EIF_POINTER *)(Current + O12297[dtype-1151]);
	gtk_box_pack_start((GtkBox*) loc1, (GtkWidget*) tp1, (gboolean) (EIF_BOOLEAN) 0, (gboolean) (EIF_BOOLEAN) 0, (guint) ((EIF_INTEGER_32) 0L));
	F1152_16125(Current);
	F1149_15986(Current);
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.text */
EIF_REFERENCE F1152_16119 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current + O12297[Dtype(Current)-1151]);
	tp1 = (EIF_POINTER) gtk_entry_get_text((GtkEntry*) tp1);
	F781_7430(RTCV(tr1), tp1);
	loc1 = (EIF_REFERENCE) tr1;
	tr1 = F781_7426(RTCV(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_TEXT_FIELD_IMP}.set_minimum_width_in_characters */
void F1152_16120 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12297[Dtype(Current)-1151]);
	ti4_1 = F1149_15989(Current);
	inline_F31_1118(tp1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ti4_1), ((EIF_INTEGER_32) -1L));
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.set_text */
void F1152_16121 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	
	RTGC;
	tr1 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr1), arg1);
	loc1 = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O12297[Dtype(Current)-1151]);
	tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
	gtk_entry_set_text((GtkEntry*) tp1, (gchar*) tp2);
	F1152_16153(Current);
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.align_text_left */
void F1152_16125 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O12298[dtype-1151]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tp1 = *(EIF_POINTER *)(Current + O12297[dtype-1151]);
	gtk_entry_set_alignment((GtkEntry*) tp1, (gfloat) (EIF_REAL_32) 0.0);
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.align_text_center */
void F1152_16127 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O12298[dtype-1151]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tp1 = *(EIF_POINTER *)(Current + O12297[dtype-1151]);
	gtk_entry_set_alignment((GtkEntry*) tp1, (gfloat) (EIF_REAL_32) 0.5);
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.text_alignment */
EIF_INTEGER_32 F1152_16128 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O12298[Dtype(Current) - 1151]);
}


/* {EV_TEXT_FIELD_IMP}.on_key_event */
void F1152_16131 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	
	RTGC;
	F1096_14502(Current, arg1, arg2, arg3);
	if (arg3) {
		F1152_16153(Current);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.set_editable */
void F1152_16140 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12297[Dtype(Current)-1151]);
	gtk_editable_set_editable((GtkEditable*) tp1, (gboolean) arg1);
}

/* {EV_TEXT_FIELD_IMP}.stored_text */
EIF_REFERENCE F1152_16152 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12294[Dtype(Current) - 1151]);
}


/* {EV_TEXT_FIELD_IMP}.on_change_actions */
void F1152_16153 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	
	RTGC;
	loc1 = F1152_16119(Current);
	tb1 = '\01';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O12294[dtype-1151]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb3 = F925_10575(RTCV(loc1), loc2);
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (!(tb2)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O12294[dtype-1151]) == NULL);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current + O12295[dtype-1151]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + O3559[dtype-186]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F732_6800(RTCV(loc3), NULL);
		}
		*(EIF_BOOLEAN *)(Current + O12295[dtype-1151]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = F1152_16119(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O12294[dtype-1151]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.new_entry_widget */
EIF_POINTER F1152_16155 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) gtk_entry_new();
}

/* {EV_TEXT_FIELD_IMP}.visual_widget */
EIF_POINTER F1152_16157 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O12297[Dtype(Current)-1151]);
}

/* {EV_TEXT_FIELD_IMP}.interface */
static EIF_REFERENCE F1152_16158_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1152_16158 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1152_16158_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit826 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
