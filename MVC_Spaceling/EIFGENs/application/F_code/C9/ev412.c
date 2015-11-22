/*
 * Code for class EV_GTK_CALLBACK_MARSHAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev412.h"
#include "ev_gtk_callback_marshal.h"
#include <ev_gtk.h>
#include "ev_any_imp.h"
#include "../C9/ev412.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F793_8416
static void inline_F793_8416 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	c_ev_gtk_callback_marshal_init ((EIF_REFERENCE) arg1, (void (*) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER, EIF_POINTER)) arg2);
	;
}
#define INLINE_F793_8416
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_CALLBACK_MARSHAL}.default_create */
void F793_8394 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTOSCP(8395,F793_8395,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.initialize */
static void F793_8395_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	

	RTLI(1);
	RTLR(0,Current);
	
	RTEV;
	RTGC;
	RTOSP (8395);
	inline_F793_8416(Current, (EIF_POINTER) F793_8409);
	c_ev_gtk_callback_marshal_set_is_enabled((int) (EIF_BOOLEAN) 1);
	RTOSE (8395);
	RTLE;
	RTEE;
#undef Result
}

void F793_8395 (EIF_REFERENCE Current)
{
	GTCX
	RTOSCP(8395,F793_8395_body,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.translate_and_call */
void F793_8396 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	
	RTGC;
	tr1 = RTOSCF(8414,F793_8414,(Current));
	tr1 = F917_9728(RTCV(arg2), tr1);
	(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_2_))(
		*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
		*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), tr1);
	;
	RTLE;
}

/* {EV_GTK_CALLBACK_MARSHAL}.dimension_tuple */
EIF_REFERENCE F793_8397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = RTOSCF(8410,F793_8410,(Current));
	
	eif_put_integer_32_item(RTCV(Result),1,arg1);
	
	eif_put_integer_32_item(RTCV(Result),2,arg2);
	
	eif_put_integer_32_item(RTCV(Result),3,arg3);
	
	eif_put_integer_32_item(RTCV(Result),4,arg4);
	RTLE;
	return Result;
}

/* {EV_GTK_CALLBACK_MARSHAL}.signal_connect */
void F793_8399 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg4);
	RTLR(1,loc1);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,arg2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg4 == NULL)) {
		loc1 = (EIF_REFERENCE) arg3;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,841,0,915,0,0xFFF9,0,841,916,0,0xFFF9,2,841,874,913,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = arg3;
		RTAR(tr1,arg3);
		((EIF_TYPED_VALUE *)tr1+3)->it_r = arg4;
		RTAR(tr1,arg4);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNRF(typres0, (EIF_POINTER) __A412_401, (EIF_POINTER) _A412_401, (EIF_POINTER)(F793_8396),tr1, 1, 0);
		}
		loc1 = (EIF_REFERENCE) tr2;
	}
	tp1 = *(EIF_POINTER *)(RTCV(arg2)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F793_8420(Current, arg1, tp1, loc1, arg5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_GTK_CALLBACK_MARSHAL}.set_focus_event_translate_agent */
static EIF_REFERENCE F793_8401_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDD;
	RTLD;
	
	dftype = Dftype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTEV;
	RTGC;
	RTOSP (8401);
#define Result RTOSR(8401)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {916,0,0xFFF9,2,841,874,913,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A412_431_2_3, (EIF_POINTER) _A412_431_2_3, (EIF_POINTER)(0),tr1, 1, 2);
	}
	Result = (EIF_REFERENCE) tr4;
	RTOSE (8401);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F793_8401 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8401,F793_8401_body,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.size_allocate_translate_agent */
static EIF_REFERENCE F793_8403_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDD;
	RTLD;
	
	dftype = Dftype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	
	RTEV;
	RTGC;
	RTOSP (8403);
#define Result RTOSR(8403)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {916,0,0xFFF9,2,841,874,913,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A412_429_2_3, (EIF_POINTER) _A412_429_2_3, (EIF_POINTER)(0),tr1, 1, 2);
	}
	Result = (EIF_REFERENCE) tr4;
	RTOSE (8403);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F793_8403 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8403,F793_8403_body,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.marshal */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F793_8409 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTXD;
	
	RTXI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			loc2 = RTOSCF(8414,F793_8414,(Current));
			
			eif_put_integer_32_item(RTCV(loc2),1,arg2);
			
			eif_put_pointer_item(RTCV(loc2),2,arg3);
		}
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_2_))(
			*(EIF_POINTER *)(RTCV(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCV(arg1) + _REFACS_1_), loc2);
		;
	} else {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L))) {
			tr1 = RTLNS(935, 935, _OBJSIZ_2_0_0_0_0_0_0_0_);
			F930_10736(RTCV(tr1));
			loc3 = *(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_);
			loc3 = F1030_13088(RTCV(loc3));
			loc3 = RTRV(eif_non_attached_type(1048), loc3);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = F1048_13520(RTCV(loc3));
			F1048_13515(RTCV(loc3), tr1);
		}
	}
	RTE_E
	RTXS(6);
	loc1++;
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L))) {
		RTER;
	} else {
		tr1 = RTMS_EX_H("Error: An exception was raised when during handling of a previous exception\012",76,1274026506);
		F1_27(Current, tr1);
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_GTK_CALLBACK_MARSHAL}.internal_dimension_tuple */
static EIF_REFERENCE F793_8410_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8410);
#define Result RTOSR(8410)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,841,874,874,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 5, 1);
	}
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8410);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F793_8410 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8410,F793_8410_body,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.integer_pointer_tuple */
static EIF_REFERENCE F793_8414_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (8414);
#define Result RTOSR(8414)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,874,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 3, 1);
	}
	Result = (EIF_REFERENCE) tr1;
	RTOSE (8414);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F793_8414 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(8414,F793_8414_body,(Current));
}

/* {EV_GTK_CALLBACK_MARSHAL}.c_ev_gtk_callback_marshal_init */
void F793_8416 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F793_8416 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {EV_GTK_CALLBACK_MARSHAL}.c_ev_gtk_callback_marshal_set_is_enabled */
void F793_8418 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	c_ev_gtk_callback_marshal_set_is_enabled((int) arg1);
	
}

/* {EV_GTK_CALLBACK_MARSHAL}.set_eif_oid_in_c_object */
void F793_8419 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	set_eif_oid_in_c_object((arg1), (arg2), (arg3));
}

/* {EV_GTK_CALLBACK_MARSHAL}.c_signal_connect */
EIF_INTEGER_32 F793_8420 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_REFERENCE arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg3);
	{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = RTHP(arg3);
		EIF_BOOLEAN larg4 = arg4;Result = (EIF_INTEGER_32) c_ev_gtk_callback_marshal_signal_connect((GtkObject*) larg1, (gchar*) larg2, (EIF_OBJECT) larg3, (gboolean) larg4);
		
		RTHF(1);
	}
	RTLE;
	return Result;
}

/* {EV_GTK_CALLBACK_MARSHAL}.c_ev_gtk_callback_marshal_timeout_connect */
EIF_INTEGER_32 F793_8422 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg2);
	{
		EIF_INTEGER_32 larg1 = arg1;
		EIF_OBJECT larg2 = RTHP(arg2);Result = (EIF_INTEGER_32) c_ev_gtk_callback_marshal_timeout_connect((gint) larg1, (EIF_OBJECT) larg2);
		
		RTHF(1);
	}
	RTLE;
	return Result;
}

/* {EV_GTK_CALLBACK_MARSHAL}.inline-agent#1 of size_allocate_translate_agent */
EIF_REFERENCE F793_18144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	loc1 = (EIF_POINTER) g_value_peek_pointer((GValue*) arg2);
	ti4_1 = (EIF_INTEGER_32) (((GtkAllocation *)loc1)->x);
	ti4_2 = (EIF_INTEGER_32) (((GtkAllocation *)loc1)->y);
	ti4_3 = (EIF_INTEGER_32) (((GtkAllocation *)loc1)->width);
	ti4_4 = (EIF_INTEGER_32) (((GtkAllocation *)loc1)->height);
	Result = F793_8397(Current, ti4_1, ti4_2, ti4_3, ti4_4);
	RTLE;
	return Result;
}

/* {EV_GTK_CALLBACK_MARSHAL}.inline-agent#1 of set_focus_event_translate_agent */
EIF_REFERENCE F793_18146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 2, 1);
	}
	tp1 = (EIF_POINTER) g_value_peek_pointer((GValue*) arg2);
	((EIF_TYPED_VALUE *)tr1+1)->it_p = tp1;
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

void EIF_Minit412 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
