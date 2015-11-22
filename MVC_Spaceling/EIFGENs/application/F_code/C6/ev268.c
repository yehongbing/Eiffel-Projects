/*
 * Code for class EV_GTK_DEPENDENT_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev268.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_DEPENDENT_ROUTINES}.create_gtk_dialog */
EIF_POINTER F206_4006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GTK_WINDOW_TOPLEVEL;
	Result = (EIF_POINTER) gtk_window_new((GtkWindowType) ti4_1);
	return Result;
}

/* {EV_GTK_DEPENDENT_ROUTINES}.client_area_from_c_object */
EIF_POINTER F206_4007 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	return (EIF_POINTER) arg1;
}

void EIF_Minit268 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
