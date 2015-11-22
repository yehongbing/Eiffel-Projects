/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi386.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F785_7674 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F785_7827(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O6325[dtype-784]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(922));
	F920_10235(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.make_with_path */
void F785_7675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	F785_7828(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O6325[dtype-784]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_non_attached_type(922));
	F920_10235(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.item */
EIF_CHARACTER_8 F785_7684 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R6271[dtype-784])(Current);
	Result = *(EIF_CHARACTER_8 *)(Current + O6217[dtype-783]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4180[dtype-303])(Current);
	RTLE;
	return Result;
}

/* {FILE}.position */
EIF_INTEGER_32 F785_7685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((EIF_BOOLEAN) !F785_7729(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_tell((FILE*) tp1);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F785_7687 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O6471[Dtype(Current) - 784]);
}


/* {FILE}.count */
EIF_INTEGER_32 F785_7700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6232[dtype-784])(Current)) {
		if ((EIF_BOOLEAN) !F785_7731(Current)) {
			F785_7836(Current);
			Result = F773_7032(RTCV(RTOSCF(7834,F785_7834,(Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O6325[dtype-784]);
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.after */
EIF_BOOLEAN F785_7701 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F785_7729(Current)) {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6335[dtype-784])(Current)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F785_7702 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F785_7729(Current);
}

/* {FILE}.off */
EIF_BOOLEAN F785_7703 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4552[dtype-489])(Current) == ((EIF_INTEGER_32) 0L)))) {
		tb1 = F785_7729(Current);
	}
	if (!tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6335[dtype-784])(Current);
	}
	RTLE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F785_7704 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) tp1));
}

/* {FILE}.exists */
EIF_BOOLEAN F785_7705 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F785_7729(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F785_7825(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_directory */
EIF_BOOLEAN F785_7714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F785_7836(Current);
	Result = F773_7053(RTCV(RTOSCF(7834,F785_7834,(Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F785_7729 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6461[Dtype(Current)-784]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F785_7731 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.extendible */
EIF_BOOLEAN F785_7734 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O6461[Dtype(Current)-784]) >= ((EIF_INTEGER_32) 2L));
}

/* {FILE}.prunable */
EIF_BOOLEAN F785_7738 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {FILE}.open_write */
void F785_7741 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F785_7825(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R6418[dtype-784])(Current, tp1, ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O6325[dtype-784]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {FILE}.close */
void F785_7757 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6325[dtype-784]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R6421[dtype-784])(Current, tp1);
	*(EIF_INTEGER_32 *)(Current + O6461[dtype-784]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O6325[dtype-784]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O6471[dtype-784]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.start */
void F785_7758 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
}

/* {FILE}.forth */
void F785_7760 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6325[dtype-784]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current + O6325[dtype-784]);
	tc1 = (EIF_CHARACTER_8) eif_file_gc((FILE*) tp1);
	eif_do_nothing_value.it_c1 = tc1;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6335[dtype-784])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4180[dtype-303])(Current);
	}
	RTLE;
}

/* {FILE}.back */
void F785_7761 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) -1L));
}

/* {FILE}.extend */
void F785_7766 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6247[Dtype(Current)-784])(Current, arg1);
}

/* {FILE}.put_string */
void F785_7778 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCV(arg1));
		tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.put_character */
void F785_7781 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O6325[Dtype(Current)-784]);
	eif_file_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {FILE}.wipe_out */
void F785_7801 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F785_7741(Current);
	F785_7757(Current);
	RTLE;
}

/* {FILE}.read_character */
void F785_7809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O6325[dtype-784]);
	tc1 = (EIF_CHARACTER_8) eif_file_gc((FILE*) tp1);
	*(EIF_CHARACTER_8 *)(Current + O6217[dtype-783]) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {FILE}.internal_name */
EIF_REFERENCE F785_7824 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE}.internal_name_pointer */
EIF_REFERENCE F785_7825 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {FILE}.internal_detachable_name_pointer */
static EIF_REFERENCE F785_7826_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F785_7826 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(777)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F785_7826_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {FILE}.set_name */
void F785_7827 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = RTOSCF(7834,F785_7834,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = F773_7045(RTCV(tr1), arg1, tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.set_path */
void F785_7828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = F795_8466(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F795_8468(RTCV(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F785_7834_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (7834);
#define Result RTOSR(7834)
	RTOC_NEW(Result);
	tr1 = RTLNS(772, 772, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F773_7028(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (7834);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F785_7834 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(7834,F785_7834_body,(Current));
}

/* {FILE}.set_buffer */
void F785_7836 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	
	RTGC;
	tr1 = RTOSCF(7834,F785_7834,(Current));
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = F785_7825(Current);
	F773_7075(RTCV(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_open */
EIF_POINTER F785_7839 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

/* {FILE}.file_close */
void F785_7842 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F785_7845 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F785_7853 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tell */
EIF_INTEGER_32 F785_7855 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_tell((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_ps */
void F785_7865 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_pc */
void F785_7866 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {FILE}.file_go */
void F785_7867 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_move */
void F785_7869 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_feof */
EIF_BOOLEAN F785_7870 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F785_7871 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.replace */
void F785_7882 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {FILE}.remove */
void F785_7883 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {FILE}.prune */
void F785_7884 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {FILE}.set_write_mode */
void F785_7893 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O6461[Dtype(Current)-784]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit386 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
