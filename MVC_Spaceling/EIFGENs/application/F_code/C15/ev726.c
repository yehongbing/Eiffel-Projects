/*
 * Code for class EV_FONTABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev726.h"
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

/* {EV_FONTABLE_IMP}.font */
EIF_REFERENCE F1091_14279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O11091[Dtype(Current)-1090]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNS(938, 938, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_FONTABLE_IMP}.set_font */
void F1091_14280 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11091[dtype-1090]) != arg1)) {
		loc2 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + O11091[dtype-1090]) = (EIF_REFERENCE) loc2;
		loc1 = *(EIF_REFERENCE *)(RTCV(loc2) + _REFACS_1_);
		loc1 = RTRV(eif_non_attached_type(1034), loc1);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tb1 = F1035_13182(RTCV(loc1));
		if (tb1) {
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11090[dtype-1090])(Current);
			{
			/* INLINED CODE (default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
			}
			tp3 = tp2;
			gtk_widget_modify_font((GtkWidget*) tp1, (PangoFontDescription*) tp3);
		} else {
			tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11090[dtype-1090])(Current);
			tp2 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_3_2_0_8_0_0_);
			gtk_widget_modify_font((GtkWidget*) tp1, (PangoFontDescription*) tp2);
		}
	}
	RTLE;
}

/* {EV_FONTABLE_IMP}.fontable_widget */
EIF_POINTER F1091_14282 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R11089[Dtype(Current)-1105])(Current);
}

/* {EV_FONTABLE_IMP}.private_font */
EIF_REFERENCE F1091_14283 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11091[Dtype(Current) - 1090]);
}


/* {EV_FONTABLE_IMP}.interface */
static EIF_REFERENCE F1091_14284_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1091_14284 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1091_14284_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit726 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
