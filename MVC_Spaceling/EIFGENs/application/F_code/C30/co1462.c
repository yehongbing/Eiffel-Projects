/*
 * Code for class COUNTABLE_SEQUENCE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1462.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COUNTABLE_SEQUENCE}.index */
EIF_INTEGER_32 F405_5070 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
}


/* {COUNTABLE_SEQUENCE}.item */
EIF_INTEGER_32 F405_5071 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F406_5115(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
}

/* {COUNTABLE_SEQUENCE}.after */
EIF_BOOLEAN F405_5072 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.extendible */
EIF_BOOLEAN F405_5073 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.prunable */
EIF_BOOLEAN F405_5074 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.forth */
void F405_5078 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))++;
}

/* {COUNTABLE_SEQUENCE}.start */
void F405_5079 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {COUNTABLE_SEQUENCE}.extend */
void F405_5080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.linear_representation */
EIF_REFERENCE F405_5082 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {646,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = eif_final_id(Y4159,Y4159_gen_type,Dftype(Current),243);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0, 646, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F647_6017(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {COUNTABLE_SEQUENCE}.prune */
void F405_5083 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.remove */
void F405_5085 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.replace */
void F405_5086 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.wipe_out */
void F405_5087 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1462 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
