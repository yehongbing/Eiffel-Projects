/*
 * Code for class EV_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev757.h"
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

/* {EV_BOX_IMP}.border_width */
EIF_INTEGER_32 F1108_14809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	tp1 = (EIF_POINTER) &(((GtkBox *)tp1)->container);
	Result = (EIF_INTEGER_32) (((GtkContainer *)tp1)->border_width);
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.padding */
EIF_INTEGER_32 F1108_14810 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	Result = (EIF_INTEGER_32) (((GtkBox *)tp1)->spacing);
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.is_item_expanded */
EIF_BOOLEAN F1108_14811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc5 = RTRV(eif_non_attached_type(1095), loc5);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tp1 = F1098_14651(Current);
		tp2 = *(EIF_POINTER *)(RTCV(loc5) + O10979[Dtype(loc5)-1078]);
		gtk_box_query_child_packing((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean*) (EIF_INTEGER_32 *) &(loc2), (gboolean*) (EIF_INTEGER_32 *) &(loc1), (guint*) (EIF_INTEGER_32 *) &(loc3), (GtkPackType*) (EIF_INTEGER_32 *) &(loc4));
	}
	tr1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = loc2;
	
	tb1 = F873_9402(RTCV(tr1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {EV_BOX_IMP}.set_homogeneous */
void F1108_14812 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	gtk_box_set_homogeneous((GtkBox*) tp1, (gboolean) arg1);
	RTLE;
}

/* {EV_BOX_IMP}.set_border_width */
void F1108_14813 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	gtk_container_set_border_width((GtkContainer*) tp1, (guint) arg1);
	RTLE;
}

/* {EV_BOX_IMP}.set_padding */
void F1108_14814 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	gtk_box_set_spacing((GtkBox*) tp1, (gint) arg1);
	RTLE;
}

/* {EV_BOX_IMP}.set_child_expandable */
void F1108_14815 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc5 = RTRV(eif_non_attached_type(1095), loc5);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tp1 = F1098_14651(Current);
		tp2 = *(EIF_POINTER *)(RTCV(loc5) + O10979[Dtype(loc5)-1078]);
		gtk_box_query_child_packing((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean*) (EIF_INTEGER_32 *) &(loc1), (gboolean*) (EIF_INTEGER_32 *) &(loc2), (guint*) (EIF_INTEGER_32 *) &(loc3), (GtkPackType*) (EIF_INTEGER_32 *) &(loc4));
		tp1 = F1098_14651(Current);
		tp2 = *(EIF_POINTER *)(RTCV(loc5) + O10979[Dtype(loc5)-1078]);
		tr1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = loc2;
		
		tb1 = F873_9402(RTCV(tr1));
		gtk_box_set_child_packing((GtkBox*) tp1, (GtkWidget*) tp2, (gboolean) arg2, (gboolean) tb1, (guint) loc3, (GtkPackType) loc4);
	}
	RTLE;
}

/* {EV_BOX_IMP}.needs_event_box */
EIF_BOOLEAN F1108_14816 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_BOX_IMP}.gtk_insert_i_th */
void F1108_14817 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) arg2);
	if ((EIF_BOOLEAN) (arg3 < F1058_13827(Current))) {
		gtk_box_reorder_child((GtkBox*) arg1, (GtkWidget*) arg2, (gint) arg3);
	}
	RTLE;
}

/* {EV_BOX_IMP}.interface */
static EIF_REFERENCE F1108_14818_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1108_14818 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1108_14818_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit757 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
