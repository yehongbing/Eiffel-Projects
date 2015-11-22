/*
 * Code for class EV_ANY_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev714.h"
#include "ev_gtk_callback_marshal.h"
#include <ev_gtk.h>
#include "eif_built_in.h"
#include "ev_any_imp.h"
#include "../C15/ev714.h"
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1079_14135
static EIF_REFERENCE inline_F1079_14135 (EIF_POINTER arg1)
{
	return (EIF_REFERENCE) (c_ev_any_imp_get_eif_reference_from_object_id (arg1))
	;
}
#define INLINE_F1079_14135
#endif
#ifndef INLINE_F31_1413
static void inline_F31_1413 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	g_signal_handlers_disconnect_matched ((gpointer) arg1, G_SIGNAL_MATCH_DATA, 0, 0, NULL, NULL, (gpointer) (rt_int_ptr) arg2)
	;
}
#define INLINE_F31_1413
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ANY_IMP}.c_object */
EIF_POINTER F1079_14133 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O10979[Dtype(Current) - 1078]);
}


/* {EV_ANY_IMP}.set_c_object */
void F1079_14134 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10987[dtype-1078])(Current)) {
		loc1 = (EIF_POINTER) gtk_event_box_new();
		gtk_container_add((GtkContainer*) loc1, (GtkWidget*) arg1);
		gtk_widget_show((GtkWidget*) arg1);
	} else {
		loc1 = (EIF_POINTER) arg1;
	}
	g_object_ref((gpointer) loc1);
	gtk_object_sink((GtkObject*) loc1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_EV_ANY_IMP_eif_current_object_id (Current);
		*(EIF_INTEGER_32 *)(Current + O6499[dtype-787]) = (EIF_INTEGER_32) ti4_1;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
	set_eif_oid_in_c_object((loc1), (ti4_1), ((EIF_POINTER) F1079_14144));
	*(EIF_POINTER *)(Current + O10979[dtype-1078]) = (EIF_POINTER) loc1;
	RTLE;
}

/* {EV_ANY_IMP}.eif_object_from_c */
EIF_REFERENCE F1079_14135 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = inline_F1079_14135 ((EIF_POINTER) arg1);
	RTLE;
	return Result;
}

/* {EV_ANY_IMP}.destroy */
void F1079_14137 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

/* {EV_ANY_IMP}.real_signal_connect */
void F1079_14139 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,arg4);
	
	RTGC;
	loc1 = RTOSCF(14148,F1079_14148,(Current));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
	tr2 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F781_7428(RTCV(tr2), arg2);
	F793_8399(RTCV(tr1), arg1, tr2, arg3, arg4, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_ANY_IMP}.real_signal_connect_after */
void F1079_14140 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	RTLR(5,arg3);
	RTLR(6,arg4);
	
	RTGC;
	loc1 = RTOSCF(14148,F1079_14148,(Current));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
	tr2 = F1049_13651(RTCV(loc1), arg2);
	F793_8399(RTCV(tr1), arg1, tr2, arg3, arg4, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY_IMP}.last_signal_connection_id */
EIF_INTEGER_32 F1079_14141 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOSCF(14148,F1079_14148,(Current))) + _REFACS_42_);
	Result = *(EIF_INTEGER_32 *)(RTCV(tr1)+ _LNGOFF_0_1_0_1_);
	RTLE;
	return Result;
}

/* {EV_ANY_IMP}.needs_event_box */
EIF_BOOLEAN F1079_14142 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_ANY_IMP}.dispose */
void F1079_14143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	c_ev_gtk_callback_marshal_set_is_enabled((int) (EIF_BOOLEAN) 0);
	loc1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O6499[dtype-787]);
		inline_F31_1413(loc1, ti4_1);
		if ((EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((loc1)))) {
			gtk_object_destroy((GtkObject*) loc1);
		}
		g_object_unref((gpointer) loc1);
	}
	F788_7997(Current);
	c_ev_gtk_callback_marshal_set_is_enabled((int) (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY_IMP}.c_object_dispose */
void F1079_14144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	c_ev_gtk_callback_marshal_set_is_enabled((int) (EIF_BOOLEAN) 0);
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	g_object_unref((gpointer) tp1);
	*(EIF_POINTER *)(Current + O10979[dtype-1078]) = (EIF_POINTER) loc1;
	F1029_13081(Current, (EIF_BOOLEAN) 1);
	c_ev_gtk_callback_marshal_set_is_enabled((int) (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY_IMP}.visual_widget */
EIF_POINTER F1079_14146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10987[dtype-1078])(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		RTLE;
		return (EIF_POINTER) (EIF_POINTER) (((GtkBin *)tp1)->child);
	} else {
		RTLE;
		return (EIF_POINTER) *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	}/* NOTREACHED */
	
}

/* {EV_ANY_IMP}.eif_current_object_id */
EIF_INTEGER_32 F1079_14147 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_EV_ANY_IMP_eif_current_object_id (Current);
	return Result;
}

/* {EV_ANY_IMP}.app_implementation */
static EIF_REFERENCE F1079_14148_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	
	RTEV;
	RTGC;
	RTOSP (14148);
#define Result RTOSR(14148)
	RTOC_NEW(Result);
	tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F930_10736(RTCV(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	loc2 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_1_);
	loc2 = F1030_13088(RTCV(loc2));
	loc2 = RTRV(eif_non_attached_type(1048), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc2;
	RTOSE (14148);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1079_14148 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(14148,F1079_14148_body,(Current));
}

/* {EV_ANY_IMP}.null */
EIF_POINTER F1079_14149 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) NULL;
	return Result;
}

void EIF_Minit714 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
