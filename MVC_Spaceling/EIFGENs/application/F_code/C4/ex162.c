/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex162.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.raise */
void F116_3289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = RTLNS(117, 117, _OBJSIZ_5_1_0_1_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	F117_3321(RTCV(loc1), arg1);
	F117_3306(RTCV(loc1));
	RTLE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F116_3290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = RTOSCF(3270,F115_3270,(Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2963[Dtype(tr1)-94])(RTCV(tr1), ((EIF_INTEGER_32) 31L));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F117_3321(RTCV(loc1), arg1);
		F117_3306(RTCV(loc1));
	}
	RTLE;
}

/* {EXCEPTIONS}.die */
void F116_3291 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	esdie(arg1);
	
	RTEC (EN_POST);
}

void EIF_Minit162 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
