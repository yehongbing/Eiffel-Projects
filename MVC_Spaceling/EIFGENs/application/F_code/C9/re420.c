/*
 * Code for class REAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re420.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32}.is_less */
EIF_BOOLEAN F848_8823 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	Result = F846_8793(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.truncated_to_integer */
EIF_INTEGER_32 F848_8827 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F846_8804(Current);
}

/* {REAL_32}.to_double */
EIF_REAL_64 F848_8829 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F846_8806(Current);
}

/* {REAL_32}.floor_real_32 */
EIF_REAL_32 F848_8831 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F846_8811(Current);
}

/* {REAL_32}.plus */
EIF_REAL_32 F848_8832 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F846_8814(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.minus */
EIF_REAL_32 F848_8833 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F846_8815(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.product */
EIF_REAL_32 F848_8834 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F846_8816(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.quotient */
EIF_REAL_32 F848_8835 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	
	RTGC;
	tr1 = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F846_8817(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.opposite */
EIF_REAL_32 F848_8838 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_REAL_32 *)F846_8820(Current);
}

/* {REAL_32}.out */
EIF_REFERENCE F848_8839 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F846_8821(Current);
}

void EIF_Minit420 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
