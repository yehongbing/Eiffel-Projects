/*
 * Code for class EV_TOOL_BAR_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev859.h"
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

/* {EV_TOOL_BAR_SEPARATOR_IMP}.needs_event_box */
EIF_BOOLEAN F1166_16464 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.is_dockable */
EIF_BOOLEAN F1166_16465 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.make */
void F1166_16467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) gtk_separator_tool_item_new();
	F1079_14134(Current, tp1);
	F1081_14166(Current);
	RTLE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.interface */
static EIF_REFERENCE F1166_16468_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1166_16468 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1166_16468_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_10_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit859 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
