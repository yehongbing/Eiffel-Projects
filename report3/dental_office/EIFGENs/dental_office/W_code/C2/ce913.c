/*
 * Code for class CELL [TOOTH]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F913_1888(EIF_REFERENCE);
extern void F913_1889(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F913_1890(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit913(void);

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

/* {CELL}.item */
EIF_TYPED_VALUE F913_1888 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = (Current + RTWA(1674,Dtype(Current)));
	return r;
}


/* {CELL}.put */
void F913_1889 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_892 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 8 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(3);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 1, 13162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(912, Current, 13162);
	RTCC(earg1, 912, l_feature_name, 1, RTWCT(1674, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1674, 0x8000037C, 0); /* item */
	
	tr1 = RTRCL(earg1);
	RTXA(tr1, (Current + RTWA(1674, dtype)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1674, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, earg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {CELL}.replace */
void F913_1890 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_892 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 8 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(3);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 1, 13163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(912, Current, 13163);
	RTCC(earg1, 912, l_feature_name, 1, RTWCT(1674, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1674, 0x8000037C, 0); /* item */
	
	tr1 = RTRCL(earg1);
	RTXA(tr1, (Current + RTWA(1674, dtype)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1674, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, earg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

void EIF_Minit913 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
