/*
 * Code for class EV_FIXED_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev756.h"
#include <string.h>
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
#ifndef INLINE_F31_1119
static void inline_F31_1119 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gtk_widget_size_allocate ((GtkWidget*) arg1, (GtkAllocation*) arg2)
	;
}
#define INLINE_F31_1119
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FIXED_IMP}.make */
void F1107_14797 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_fixed_new();
	F1079_14134(Current, tp1);
	tp1 = F1098_14651(Current);
	gtk_fixed_set_has_window((GtkFixed*) tp1, (gboolean) (EIF_BOOLEAN) 1);
	F1105_14768(Current);
	RTLE;
}

/* {EV_FIXED_IMP}.set_item_position_and_size */
void F1107_14799 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc2);
	RTLR(1,arg1);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc2 = RTRV(eif_non_attached_type(1095), loc2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCV(loc2) + O10979[Dtype(loc2)-1078]);
	loc1 = (EIF_POINTER) (((GtkWidget *)tp1)->parent);
	ti4_1 = (EIF_INTEGER_32) sizeof(GtkAllocation);
	loc3 = malloc((size_t)ti4_1);
	(((GtkAllocation *)loc3)->x = (gint)(arg2));
	(((GtkAllocation *)loc3)->y = (gint)(arg3));
	(((GtkAllocation *)loc3)->width = (gint)(arg4));
	(((GtkAllocation *)loc3)->height = (gint)(arg5));
	inline_F31_1118(loc1, arg4, arg5);
	inline_F31_1119(loc1, loc3);
	free(loc3);
	RTLE;
}

/* {EV_FIXED_IMP}.set_item_size */
void F1107_14801 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	loc1 = *(EIF_REFERENCE *)(RTCV(arg1) + O8345[Dtype(arg1)-929]);
	loc1 = RTRV(eif_non_attached_type(1095), loc1);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1107_14803(Current, loc1);
	ti4_2 = F1107_14804(Current, loc1);
	F1107_14799(Current, arg1, ti4_1, ti4_2, arg2, arg3);
	RTLE;
}

/* {EV_FIXED_IMP}.i_th_fixed_child */
EIF_POINTER F1107_14802 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = F1098_14651(Current);
	loc1 = (EIF_POINTER) (((GtkFixed *)tp1)->children);
	RTLE;
	return (EIF_POINTER) (EIF_POINTER) g_list_nth_data((GList*) loc1, (guint) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
}

/* {EV_FIXED_IMP}.x_position_of_child */
EIF_INTEGER_32 F1107_14803 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O10149[Dtype(arg1)-1028]);
	ti4_1 = F1057_13796(Current, tr1, ((EIF_INTEGER_32) 1L));
	tp1 = F1107_14802(Current, ti4_1);
	Result = (EIF_INTEGER_32) (((GtkFixedChild *)tp1)->x);
	RTLE;
	return Result;
}

/* {EV_FIXED_IMP}.y_position_of_child */
EIF_INTEGER_32 F1107_14804 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(arg1) + O10149[Dtype(arg1)-1028]);
	ti4_1 = F1057_13796(Current, tr1, ((EIF_INTEGER_32) 1L));
	tp1 = F1107_14802(Current, ti4_1);
	Result = (EIF_INTEGER_32) (((GtkFixedChild *)tp1)->y);
	RTLE;
	return Result;
}

/* {EV_FIXED_IMP}.gtk_insert_i_th */
void F1107_14805 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc5 = (EIF_POINTER) gtk_event_box_new();
	gtk_event_box_set_visible_window((GtkEventBox*) loc5, (gboolean) (EIF_BOOLEAN) 0);
	gtk_widget_show((GtkWidget*) loc5);
	gtk_container_add((GtkContainer*) loc5, (GtkWidget*) arg2);
	gtk_container_add((GtkContainer*) arg1, (GtkWidget*) loc5);
	if ((EIF_BOOLEAN) (arg3 < F1058_13827(Current))) {
		loc1 = (EIF_POINTER) gtk_container_children((GtkContainer*) arg1);
		loc4 = (EIF_INTEGER_32) g_list_index((GList*) loc1, (gpointer) loc5);
		loc2 = (EIF_POINTER) (((GtkFixed *)arg1)->children);
		loc3 = (EIF_POINTER) g_list_nth_data((GList*) loc2, (guint) loc4);
		loc2 = (EIF_POINTER) g_list_remove((GList*) loc2, (gpointer) loc3);
		loc2 = (EIF_POINTER) g_list_insert((GList*) loc2, (gpointer) loc3, (gint) arg3);
		(((GtkFixed *)arg1)->children = (GList*)(loc2));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_45_10_10_3_0_0_);
		gtk_widget_queue_resize((GtkWidget*) tp1);
		g_list_free((GList*) loc1);
	}
	tp1 = F1098_14651(Current);
	gtk_container_check_resize((GtkContainer*) tp1);
	RTLE;
}

/* {EV_FIXED_IMP}.gtk_container_remove */
void F1107_14806 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	
	
	RTGC;
	loc1 = (EIF_POINTER) (((GtkWidget *)arg2)->parent);
	gtk_container_remove((GtkContainer*) loc1, (GtkWidget*) arg2);
	gtk_container_remove((GtkContainer*) arg1, (GtkWidget*) loc1);
}

/* {EV_FIXED_IMP}.interface */
static EIF_REFERENCE F1107_14807_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1107_14807 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1107_14807_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_24_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit756 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
