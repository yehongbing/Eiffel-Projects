/*
 * Code for class OPERATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F895_7616(EIF_REFERENCE);
extern EIF_TYPED_VALUE F895_7617(EIF_REFERENCE);
extern void F895_7553(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit895(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATION}.op_date */
EIF_TYPED_VALUE F895_7616 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5404,Dtype(Current)));
	return r;
}


/* {OPERATION}.op_type */
EIF_TYPED_VALUE F895_7617 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5405,Dtype(Current)));
	return r;
}


/* {OPERATION}.make */
void F895_7553 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 894, Current, 0, 2, 13080);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(894, Current, 13080);
	if (arg1) {
		RTCC(arg1, 894, l_feature_name, 1, 886);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5404, 0xF8000376, 0); /* op_date */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5404, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5405, 0x10000000, 1); /* op_type */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(5405, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

void EIF_Minit895 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
