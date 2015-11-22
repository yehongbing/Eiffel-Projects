/*
 * Code for class EV_PIXMAPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev721.h"
#include <ev_gtk.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAPABLE_IMP}.pixmapable_imp_initialize */
void F1086_14245 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_hbox_new((gboolean) (EIF_BOOLEAN) 0, (gint) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O11069[Dtype(Current)-1085]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_PIXMAPABLE_IMP}.pixmap */
EIF_REFERENCE F1086_14246 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O11067[Dtype(Current)-1085]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1029_13066(RTCV(loc1));
		Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Result);
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAPABLE_IMP}.set_pixmap */
void F1086_14247 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	
	RTGC;
	loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	loc1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_3_);
	loc1 = RTRV(eif_non_attached_type(1201), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O11067[Dtype(Current)-1085]) = (EIF_REFERENCE) loc1;
	ti4_1 = F1202_17199(RTCV(loc1));
	ti4_2 = F1202_17200(RTCV(loc1));
	F1086_14249(Current, loc1, ti4_1, ti4_2);
	RTLE;
}

/* {EV_PIXMAPABLE_IMP}.internal_set_pixmap */
void F1086_14249 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	
	RTGC;
	F1086_14250(Current);
	loc2 = *(EIF_REFERENCE *)(Current + O11067[dtype-1085]);
	loc2 = RTRV(eif_non_attached_type(1201), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\01';
	ti4_1 = F1202_17199(RTCV(loc2));
	if (!(EIF_BOOLEAN)(arg2 != ti4_1)) {
		ti4_1 = F1202_17200(RTCV(loc2));
		tb1 = (EIF_BOOLEAN)(arg3 != ti4_1);
	}
	if (tb1) {
		F1202_17203(RTCV(arg1), arg2, arg3);
	}
	tp1 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_46_11_12_3_0_5_);
	tp2 = *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_46_11_12_3_0_4_);
	loc1 = (EIF_POINTER) gtk_pixmap_new((GdkPixmap*) tp1, (GdkBitmap*) tp2);
	gtk_widget_show((GtkWidget*) loc1);
	tp1 = *(EIF_POINTER *)(Current + O11069[dtype-1085]);
	gtk_container_add((GtkContainer*) tp1, (GtkWidget*) loc1);
	tp1 = *(EIF_POINTER *)(Current + O11069[dtype-1085]);
	gtk_widget_show((GtkWidget*) tp1);
	RTLE;
}

/* {EV_PIXMAPABLE_IMP}.internal_remove_pixmap */
void F1086_14250 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F1086_14252(Current);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tp1 = *(EIF_POINTER *)(Current + O11069[Dtype(Current)-1085]);
		gtk_container_remove((GtkContainer*) tp1, (GtkWidget*) loc1);
	}
	RTLE;
}

/* {EV_PIXMAPABLE_IMP}.internal_pixmap */
EIF_REFERENCE F1086_14251 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11067[Dtype(Current) - 1085]);
}


/* {EV_PIXMAPABLE_IMP}.gtk_pixmap */
EIF_POINTER F1086_14252 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O11069[Dtype(Current)-1085]);
	loc1 = (EIF_POINTER) gtk_container_children((GtkContainer*) tp1);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		Result = (EIF_POINTER) g_list_nth_data((GList*) loc1, (guint) ((EIF_INTEGER_32) 0L));
		g_list_free((GList*) loc1);
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAPABLE_IMP}.interface */
static EIF_REFERENCE F1086_14254_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1086_14254 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1086_14254_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit721 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
