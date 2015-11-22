/*
 * Code for class EV_G_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev376.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F779_7329
static EIF_INTEGER_32 inline_F779_7329 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	{
	#if GTK_MAJOR_VERSION > 1 && GTK_MINOR_VERSION > 13
		return g_input_stream_close ((GInputStream *)arg1, (GCancellable *)arg2, (GError **)arg3);
	#endif
}
	;
}
#define INLINE_F779_7329
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_G_INPUT_STREAM}.item */
EIF_POINTER F779_7323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {EV_G_INPUT_STREAM}.dispose */
void F779_7325 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	loc1 = F779_7323(Current);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		{
		/* INLINED CODE (default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
		}
		tp2 = tp1;
		loc3 = inline_F779_7329(loc1, tp2, (EIF_POINTER *) &(loc2));
	} else {
	}
	RTLE;
}

/* {EV_G_INPUT_STREAM}.internal_item */
EIF_REFERENCE F779_7326 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EV_G_INPUT_STREAM}.c_g_input_stream_close */
EIF_INTEGER_32 F779_7329 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F779_7329 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER*) arg3);
	return Result;
}

void EIF_Minit376 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
