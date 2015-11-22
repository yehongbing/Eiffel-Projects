/*
 * Code for class EV_TOOL_BAR_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev625.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_ITEM}.parent */
EIF_REFERENCE F1002_12711 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	
	RTGC;
	Result = F999_12677(Current);
	RTLE;
	return RTRV(eif_non_attached_type(1015), Result);
}

void EIF_Minit625 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
