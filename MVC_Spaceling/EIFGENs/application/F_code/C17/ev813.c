/*
 * Code for class EV_PRIMITIVE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev813.h"
#include <ev_gtk.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PRIMITIVE_IMP}.make */
void F1142_15736 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F1096_14500(Current);
	F1142_15745(Current);
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.interface */
static EIF_REFERENCE F1142_15737_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1142_15737 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1142_15737_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PRIMITIVE_IMP}.update_for_pick_and_drop */
void F1142_15738 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PRIMITIVE_IMP}.is_tabable_to */
EIF_BOOLEAN F1142_15739 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11057[Dtype(Current)-1141])(Current);
	ti4_1 = (EIF_INTEGER_32) GTK_WIDGET_FLAGS((tp1));
	ti4_2 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {EV_PRIMITIVE_IMP}.is_tabable_from */
EIF_BOOLEAN F1142_15740 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12157[Dtype(Current) - 1141]);
}


/* {EV_PRIMITIVE_IMP}.disable_tabable_to */
void F1142_15742 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11057[Dtype(Current)-1141])(Current);
	ti4_1 = (EIF_INTEGER_32) GTK_CAN_FOCUS;
	GTK_WIDGET_UNSET_FLAGS((tp1), (ti4_1));
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.enable_tabable_from */
void F1142_15743 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O12157[Dtype(Current)-1141]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PRIMITIVE_IMP}.disable_tabable_from */
void F1142_15744 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O12157[Dtype(Current)-1141]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PRIMITIVE_IMP}.initialize_tab_behavior */
void F1142_15745 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F1142_15739(Current)) {
		F1142_15743(Current);
	}
	RTLE;
}

void EIF_Minit813 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
