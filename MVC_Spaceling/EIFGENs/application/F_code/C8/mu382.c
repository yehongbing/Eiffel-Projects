/*
 * Code for class MUTEX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mu382.h"
#include <eif_threads.h>
#include "eif_threads.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F200_3908
static EIF_POINTER inline_F200_3908 (void)
{
	return eif_thr_thread_id();
	;
}
#define INLINE_F200_3908
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MUTEX}.make */
void F782_7450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = (EIF_POINTER) eif_thr_mutex_create();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.is_set */
EIF_BOOLEAN F782_7452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	{
	/* INLINED CODE (default_pointer) */
	tp2 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {MUTEX}.lock */
void F782_7453 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_lock(tp1);
	tp1 = inline_F200_3908();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.try_lock */
EIF_BOOLEAN F782_7454 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_thr_mutex_trylock(tp1));
	if (Result) {
		tp1 = inline_F200_3908();
		*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	}
	RTLE;
	return Result;
}

/* {MUTEX}.unlock */
void F782_7455 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp2;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_unlock(tp1);
	RTLE;
}

/* {MUTEX}.destroy */
void F782_7456 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_destroy(tp1);
	{
	/* INLINED CODE (default_pointer) */
	tp1 = (EIF_POINTER)  0;
	/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {MUTEX}.dispose */
void F782_7459 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	if (F782_7452(Current)) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == loc1)) {
			tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == inline_F200_3908());
		}
		if (tb1) {
			F782_7456(Current);
		}
	}
	RTLE;
}

/* {MUTEX}.eif_thr_mutex_create */
EIF_POINTER F782_7461 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_mutex_create();
	
	return Result;
}

/* {MUTEX}.eif_thr_mutex_lock */
void F782_7462 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_thr_mutex_lock(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

/* {MUTEX}.eif_thr_mutex_unlock */
void F782_7463 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_unlock(arg1);
	
}

/* {MUTEX}.eif_thr_mutex_trylock */
EIF_BOOLEAN F782_7464 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_BOOLEAN) EIF_TEST(eif_thr_mutex_trylock(arg1));
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {MUTEX}.eif_thr_mutex_destroy */
void F782_7465 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_destroy(arg1);
	
}

void EIF_Minit382 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
