/*
 * Code for class EV_STOCK_PIXMAPS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev328.h"
#include "ev_c_util.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_PIXMAPS_IMP}.information_pixmap */
EIF_REFERENCE F729_6760 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,Current);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
	tr2 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr3 = RTMS_EX_H("gtk-dialog-info",15,2003234927);
	F781_7428(RTCV(tr2), tr3);
	tr2 = F729_6769(Current, tr2);
	F990_12487(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.error_pixmap */
EIF_REFERENCE F729_6761 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,Current);
	RTLR(4,Result);
	
	RTGC;
	tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
	tr2 = RTLNS(780, 780, _OBJSIZ_0_1_0_1_0_1_0_0_);
	tr3 = RTMS_EX_H("gtk-dialog-error",16,1795811698);
	F781_7428(RTCV(tr2), tr3);
	tr2 = F729_6769(Current, tr2);
	F990_12487(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.default_window_icon */
EIF_REFERENCE F729_6768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	
	RTGC;
	tr1 = RTLNS(989, 989, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F930_10736(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	loc1 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_3_);
	F1202_17202(RTCV(loc1));
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.pixmap_from_stock_id */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F729_6769 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTXD;
	
	RTXI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,saved_except);
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc3) {
		loc1 = (EIF_REFERENCE) arg1;
		tr1 = RTLNS(932, 932, _OBJSIZ_3_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
		loc2 = *(EIF_REFERENCE *)(RTCV(Result) + _REFACS_1_);
		loc2 = RTRV(eif_non_attached_type(1052), loc2);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(RTCV(loc1)+ _PTROFF_0_1_0_1_0_0_);
		F1053_13757(RTCV(loc2), tp1);
	} else {
		tr1 = RTLNS(932, 932, _OBJSIZ_3_0_0_0_0_0_0_0_);
		F930_10736(RTCV(tr1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTE_E
	RTXS(6);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTXE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_STOCK_PIXMAPS_IMP}.no_cursor_xpm */
EIF_POINTER F729_6782 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) no_cursor_xpm();
	
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.sizenesw_cursor_xpm */
EIF_POINTER F729_6784 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) sizenesw_cursor_xpm();
	
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.sizenwse_cursor_xpm */
EIF_POINTER F729_6786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) sizenwse_cursor_xpm();
	
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.sizewe_cursor_xpm */
EIF_POINTER F729_6787 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) sizewe_cursor_xpm();
	
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.uparrow_cursor_xpm */
EIF_POINTER F729_6789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) uparrow_cursor_xpm();
	
	return Result;
}

void EIF_Minit328 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
