/*
 * Code for class EV_CELL_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev769.h"
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

/* {EV_CELL_IMP}.make */
void F1119_15323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O10979[Dtype(Current)-1078]) == tp1)) {
		tp1 = (EIF_POINTER) gtk_event_box_new();
		F1079_14134(Current, tp1);
	}
	F1098_14650(Current);
	RTLE;
}

/* {EV_CELL_IMP}.item */
EIF_REFERENCE F1119_15325 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O11905[Dtype(Current) - 1118]);
}


/* {EV_CELL_IMP}.count */
EIF_INTEGER_32 F1119_15326 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11905[Dtype(Current)-1118]) != NULL)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_CELL_IMP}.replace */
void F1119_15327 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F1098_14655(Current, arg1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O11905[Dtype(Current)-1118]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_CELL_IMP}.interface */
static EIF_REFERENCE F1119_15328_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1119_15328 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1119_15328_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit769 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
