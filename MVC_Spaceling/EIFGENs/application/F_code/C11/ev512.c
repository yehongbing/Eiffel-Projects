/*
 * Code for class EV_PARAGRAPH_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev512.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PARAGRAPH_FORMAT}.initialize */
void F941_10972 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F941_10982(Current);
	F930_10745(Current);
	RTLE;
}

/* {EV_PARAGRAPH_FORMAT}.enable_left_alignment */
void F941_10982 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F941_10986(Current, ((EIF_INTEGER_32) 1L));
}

/* {EV_PARAGRAPH_FORMAT}.set_alignment */
void F941_10986 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1040_13295(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_PARAGRAPH_FORMAT}.implementation */
EIF_REFERENCE F941_10992 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_PARAGRAPH_FORMAT}.create_interface_objects */
void F941_10993 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PARAGRAPH_FORMAT}.create_implementation */
void F941_10994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1039, 1039, _OBJSIZ_1_1_0_5_0_0_0_0_);
	F1040_13281(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit512 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
