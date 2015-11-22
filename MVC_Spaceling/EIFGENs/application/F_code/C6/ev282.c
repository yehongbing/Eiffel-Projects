/*
 * Code for class EV_GTK_KEY_CONVERSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev282.h"
#include <gdk/gdkkeysyms.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_KEY_CONVERSION}.key_code_from_gtk */
EIF_INTEGER_32 F243_4282 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(4285,F243_4285,(Current));
	Result = F697_6436(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.valid_gtk_code */
EIF_BOOLEAN F243_4283 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTOSCF(4285,F243_4285,(Current));
	Result = F697_6438(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.gtk_to_v2_table */
static EIF_REFERENCE F243_4285_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTEV;
	RTGC;
	RTOSP (4285);
#define Result RTOSR(4285)
	RTOC_NEW(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {696,874,868,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 696, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F697_6432(RTCV(tr1), ((EIF_INTEGER_32) 128L));
	Result = (EIF_REFERENCE) tr1;
	tu4_1 = (EIF_NATURAL_32) GDK_0;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 1L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_1;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 2L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_2;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 3L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_3;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 4L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_4;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 5L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_5;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 6L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_6;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 7L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_7;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 8L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_8;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 9L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_9;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 10L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_0;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 11L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_1;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 12L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_2;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 13L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_3;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 14L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_4;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 15L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_5;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 16L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_6;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 17L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_7;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 18L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_8;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 19L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_9;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 20L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Add;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 21L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Divide;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 22L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Multiply;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 23L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Num_Lock;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 24L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Subtract;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 25L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Decimal;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 26L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F1;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 27L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F2;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 28L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F3;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 29L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F4;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 30L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F5;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 31L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F6;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 32L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F7;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 33L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F8;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 34L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F9;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 35L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F10;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 36L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F11;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 37L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F12;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 38L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_space;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 39L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_BackSpace;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 40L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Return;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 41L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Enter;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 41L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Escape;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 42L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Tab;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 43L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_ISO_Left_Tab;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 43L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Pause;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 44L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Caps_Lock;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 45L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F23;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 46L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_comma;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 47L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_equal;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 48L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_period;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 49L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_semicolon;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 50L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_bracketleft;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 51L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_bracketright;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 52L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_slash;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 53L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_backslash;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 54L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_quoteright;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 55L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_quoteleft;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 56L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_minus;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 57L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Up;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 58L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Up;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 58L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Down;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 59L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Down;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 59L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Left;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 60L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Left;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 60L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Right;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 61L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Right;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 61L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Page_Up;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 62L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Page_Up;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 62L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Page_Down;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 63L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Page_Down;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 63L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Home;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 64L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Home;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 64L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_End;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 65L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_End;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 65L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Insert;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 66L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Insert;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 66L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Delete;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 67L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_KP_Delete;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 67L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_A;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 68L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_B;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 69L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_C;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 70L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_D;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 71L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_E;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 72L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_F;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 73L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_G;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 74L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_H;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 75L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_I;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 76L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_J;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 77L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_K;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 78L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_L;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 79L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_M;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 80L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_N;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 81L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_O;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 82L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_P;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 83L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Q;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 84L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_R;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 85L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_S;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 86L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_T;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 87L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_U;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 88L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_V;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 89L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_W;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 90L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_X;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 91L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Y;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 92L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Z;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 93L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_a;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 68L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_b;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 69L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_c;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 70L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_d;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 71L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_e;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 72L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_f;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 73L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_g;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 74L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_h;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 75L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_i;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 76L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_j;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 77L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_k;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 78L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_l;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 79L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_m;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 80L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_n;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 81L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_o;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 82L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_p;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 83L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_q;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 84L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_r;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 85L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_s;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 86L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_t;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 87L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_u;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 88L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_v;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 89L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_w;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 90L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_x;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 91L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_y;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 92L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_z;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 93L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Shift_L;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 94L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Shift_R;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 94L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Control_L;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 95L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Control_R;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 95L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Alt_L;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 96L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Alt_R;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 96L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Meta_L;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 97L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Meta_R;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 98L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_asciitilde;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 56L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_exclam;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 2L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_at;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 3L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_numbersign;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 4L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_dollar;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 5L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_percent;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 6L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_asciicircum;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 7L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_ampersand;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 8L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_asterisk;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 9L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_parenleft;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 10L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_parenright;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 1L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_underscore;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 57L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_plus;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 48L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_colon;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 50L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_quotedbl;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 55L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_less;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 47L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_greater;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 49L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_question;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 53L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_braceleft;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 51L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_braceright;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 52L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_bar;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 54L), tu4_1);
	tu4_1 = (EIF_NATURAL_32) GDK_Menu;
	F697_6476(RTCV(Result), ((EIF_INTEGER_32) 99L), tu4_1);
	RTOSE (4285);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F243_4285 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(4285,F243_4285_body,(Current));
}

/* {EV_GTK_KEY_CONVERSION}.key_tilde_keysym */
EIF_NATURAL_32 F243_4286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_asciitilde;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_exclamation_keysym */
EIF_NATURAL_32 F243_4287 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_exclam;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_at_keysym */
EIF_NATURAL_32 F243_4288 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_at;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numbersign_keysym */
EIF_NATURAL_32 F243_4289 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_numbersign;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_dollar_keysym */
EIF_NATURAL_32 F243_4290 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_dollar;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_percent_keysym */
EIF_NATURAL_32 F243_4291 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_percent;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_asciicircum_keysym */
EIF_NATURAL_32 F243_4292 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_asciicircum;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_ampersand_keysym */
EIF_NATURAL_32 F243_4293 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_ampersand;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_asterisk_keysym */
EIF_NATURAL_32 F243_4294 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_asterisk;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_parenleft_keysym */
EIF_NATURAL_32 F243_4295 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_parenleft;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_parenright_keysym */
EIF_NATURAL_32 F243_4296 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_parenright;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_underscore_keysym */
EIF_NATURAL_32 F243_4297 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_underscore;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_plus_keysym */
EIF_NATURAL_32 F243_4298 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_plus;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_colon_keysym */
EIF_NATURAL_32 F243_4299 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_colon;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_quotedbl_keysym */
EIF_NATURAL_32 F243_4300 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_quotedbl;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_less_keysym */
EIF_NATURAL_32 F243_4301 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_less;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_greater_keysym */
EIF_NATURAL_32 F243_4302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_greater;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_question_keysym */
EIF_NATURAL_32 F243_4303 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_question;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_braceleft_keysym */
EIF_NATURAL_32 F243_4304 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_braceleft;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_braceright_keysym */
EIF_NATURAL_32 F243_4305 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_braceright;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_bar_keysym */
EIF_NATURAL_32 F243_4306 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_bar;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_0_keysym */
EIF_NATURAL_32 F243_4307 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_0;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_1_keysym */
EIF_NATURAL_32 F243_4308 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_1;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_2_keysym */
EIF_NATURAL_32 F243_4309 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_2;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_3_keysym */
EIF_NATURAL_32 F243_4310 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_3;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_4_keysym */
EIF_NATURAL_32 F243_4311 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_4;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_5_keysym */
EIF_NATURAL_32 F243_4312 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_5;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_6_keysym */
EIF_NATURAL_32 F243_4313 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_6;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_7_keysym */
EIF_NATURAL_32 F243_4314 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_7;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_8_keysym */
EIF_NATURAL_32 F243_4315 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_8;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_9_keysym */
EIF_NATURAL_32 F243_4316 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_9;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_0_keysym */
EIF_NATURAL_32 F243_4317 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_0;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_1_keysym */
EIF_NATURAL_32 F243_4318 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_1;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_2_keysym */
EIF_NATURAL_32 F243_4319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_2;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_3_keysym */
EIF_NATURAL_32 F243_4320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_3;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_4_keysym */
EIF_NATURAL_32 F243_4321 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_4;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_5_keysym */
EIF_NATURAL_32 F243_4322 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_5;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_6_keysym */
EIF_NATURAL_32 F243_4323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_6;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_7_keysym */
EIF_NATURAL_32 F243_4324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_7;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_8_keysym */
EIF_NATURAL_32 F243_4325 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_8;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_9_keysym */
EIF_NATURAL_32 F243_4326 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_9;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_add_keysym */
EIF_NATURAL_32 F243_4327 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Add;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_divide_keysym */
EIF_NATURAL_32 F243_4328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Divide;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_multiply_keysym */
EIF_NATURAL_32 F243_4329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Multiply;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_num_lock_keysym */
EIF_NATURAL_32 F243_4330 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Num_Lock;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_subtract_keysym */
EIF_NATURAL_32 F243_4331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Subtract;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_numpad_decimal_keysym */
EIF_NATURAL_32 F243_4332 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Decimal;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f1_keysym */
EIF_NATURAL_32 F243_4333 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F1;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f2_keysym */
EIF_NATURAL_32 F243_4334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F2;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f3_keysym */
EIF_NATURAL_32 F243_4335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F3;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f4_keysym */
EIF_NATURAL_32 F243_4336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F4;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f5_keysym */
EIF_NATURAL_32 F243_4337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F5;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f6_keysym */
EIF_NATURAL_32 F243_4338 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F6;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f7_keysym */
EIF_NATURAL_32 F243_4339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F7;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f8_keysym */
EIF_NATURAL_32 F243_4340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F8;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f9_keysym */
EIF_NATURAL_32 F243_4341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F9;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f10_keysym */
EIF_NATURAL_32 F243_4342 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F10;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f11_keysym */
EIF_NATURAL_32 F243_4343 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F11;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f12_keysym */
EIF_NATURAL_32 F243_4344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F12;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_space_keysym */
EIF_NATURAL_32 F243_4345 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_space;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_back_space_keysym */
EIF_NATURAL_32 F243_4346 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_BackSpace;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_enter_keysym */
EIF_NATURAL_32 F243_4347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Return;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_enter_keysym */
EIF_NATURAL_32 F243_4348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Enter;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_escape_keysym */
EIF_NATURAL_32 F243_4349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Escape;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_tab_keysym */
EIF_NATURAL_32 F243_4350 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Tab;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_shift_tab_keysym */
EIF_NATURAL_32 F243_4351 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_ISO_Left_Tab;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_pause_keysym */
EIF_NATURAL_32 F243_4352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Pause;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_caps_lock_keysym */
EIF_NATURAL_32 F243_4353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Caps_Lock;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_scroll_lock_keysym */
EIF_NATURAL_32 F243_4354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F23;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_comma_keysym */
EIF_NATURAL_32 F243_4355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_comma;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_equal_keysym */
EIF_NATURAL_32 F243_4356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_equal;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_period_keysym */
EIF_NATURAL_32 F243_4357 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_period;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_semicolon_keysym */
EIF_NATURAL_32 F243_4358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_semicolon;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_open_bracket_keysym */
EIF_NATURAL_32 F243_4359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_bracketleft;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_close_bracket_keysym */
EIF_NATURAL_32 F243_4360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_bracketright;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_slash_keysym */
EIF_NATURAL_32 F243_4361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_slash;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_backslash_keysym */
EIF_NATURAL_32 F243_4362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_backslash;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_quote_keysym */
EIF_NATURAL_32 F243_4363 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_quoteright;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_backquote_keysym */
EIF_NATURAL_32 F243_4364 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_quoteleft;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_dash_keysym */
EIF_NATURAL_32 F243_4365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_minus;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_up_keysym */
EIF_NATURAL_32 F243_4366 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Up;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_up_keysym */
EIF_NATURAL_32 F243_4367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Up;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_down_keysym */
EIF_NATURAL_32 F243_4368 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Down;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_down_keysym */
EIF_NATURAL_32 F243_4369 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Down;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_left_keysym */
EIF_NATURAL_32 F243_4370 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Left;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_left_keysym */
EIF_NATURAL_32 F243_4371 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Left;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_right_keysym */
EIF_NATURAL_32 F243_4372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Right;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_right_keysym */
EIF_NATURAL_32 F243_4373 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Right;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_page_up_keysym */
EIF_NATURAL_32 F243_4374 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Page_Up;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_page_up_keysym */
EIF_NATURAL_32 F243_4375 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Page_Up;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_page_down_keysym */
EIF_NATURAL_32 F243_4376 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Page_Down;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_page_down_keysym */
EIF_NATURAL_32 F243_4377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Page_Down;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_home_keysym */
EIF_NATURAL_32 F243_4378 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Home;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_home_keysym */
EIF_NATURAL_32 F243_4379 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Home;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_end_keysym */
EIF_NATURAL_32 F243_4380 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_End;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_end_keysym */
EIF_NATURAL_32 F243_4381 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_End;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_insert_keysym */
EIF_NATURAL_32 F243_4382 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Insert;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_insert_keysym */
EIF_NATURAL_32 F243_4383 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Insert;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_delete_keysym */
EIF_NATURAL_32 F243_4384 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Delete;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_kp_delete_keysym */
EIF_NATURAL_32 F243_4385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_KP_Delete;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_a_upper_keysym */
EIF_NATURAL_32 F243_4386 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_A;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_b_upper_keysym */
EIF_NATURAL_32 F243_4387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_B;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_c_upper_keysym */
EIF_NATURAL_32 F243_4388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_C;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_d_upper_keysym */
EIF_NATURAL_32 F243_4389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_D;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_e_upper_keysym */
EIF_NATURAL_32 F243_4390 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_E;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f_upper_keysym */
EIF_NATURAL_32 F243_4391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_F;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_g_upper_keysym */
EIF_NATURAL_32 F243_4392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_G;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_h_upper_keysym */
EIF_NATURAL_32 F243_4393 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_H;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_i_upper_keysym */
EIF_NATURAL_32 F243_4394 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_I;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_j_upper_keysym */
EIF_NATURAL_32 F243_4395 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_J;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_k_upper_keysym */
EIF_NATURAL_32 F243_4396 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_K;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_l_upper_keysym */
EIF_NATURAL_32 F243_4397 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_L;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_m_upper_keysym */
EIF_NATURAL_32 F243_4398 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_M;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_n_upper_keysym */
EIF_NATURAL_32 F243_4399 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_N;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_o_upper_keysym */
EIF_NATURAL_32 F243_4400 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_O;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_p_upper_keysym */
EIF_NATURAL_32 F243_4401 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_P;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_q_upper_keysym */
EIF_NATURAL_32 F243_4402 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Q;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_r_upper_keysym */
EIF_NATURAL_32 F243_4403 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_R;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_s_upper_keysym */
EIF_NATURAL_32 F243_4404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_S;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_t_upper_keysym */
EIF_NATURAL_32 F243_4405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_T;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_u_upper_keysym */
EIF_NATURAL_32 F243_4406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_U;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_v_upper_keysym */
EIF_NATURAL_32 F243_4407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_V;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_w_upper_keysym */
EIF_NATURAL_32 F243_4408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_W;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_x_upper_keysym */
EIF_NATURAL_32 F243_4409 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_X;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_y_upper_keysym */
EIF_NATURAL_32 F243_4410 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Y;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_z_upper_keysym */
EIF_NATURAL_32 F243_4411 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Z;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_a_keysym */
EIF_NATURAL_32 F243_4412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_a;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_b_keysym */
EIF_NATURAL_32 F243_4413 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_b;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_c_keysym */
EIF_NATURAL_32 F243_4414 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_c;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_d_keysym */
EIF_NATURAL_32 F243_4415 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_d;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_e_keysym */
EIF_NATURAL_32 F243_4416 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_e;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_f_keysym */
EIF_NATURAL_32 F243_4417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_f;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_g_keysym */
EIF_NATURAL_32 F243_4418 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_g;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_h_keysym */
EIF_NATURAL_32 F243_4419 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_h;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_i_keysym */
EIF_NATURAL_32 F243_4420 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_i;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_j_keysym */
EIF_NATURAL_32 F243_4421 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_j;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_k_keysym */
EIF_NATURAL_32 F243_4422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_k;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_l_keysym */
EIF_NATURAL_32 F243_4423 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_l;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_m_keysym */
EIF_NATURAL_32 F243_4424 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_m;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_n_keysym */
EIF_NATURAL_32 F243_4425 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_n;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_o_keysym */
EIF_NATURAL_32 F243_4426 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_o;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_p_keysym */
EIF_NATURAL_32 F243_4427 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_p;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_q_keysym */
EIF_NATURAL_32 F243_4428 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_q;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_r_keysym */
EIF_NATURAL_32 F243_4429 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_r;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_s_keysym */
EIF_NATURAL_32 F243_4430 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_s;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_t_keysym */
EIF_NATURAL_32 F243_4431 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_t;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_u_keysym */
EIF_NATURAL_32 F243_4432 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_u;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_v_keysym */
EIF_NATURAL_32 F243_4433 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_v;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_w_keysym */
EIF_NATURAL_32 F243_4434 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_w;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_x_keysym */
EIF_NATURAL_32 F243_4435 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_x;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_y_keysym */
EIF_NATURAL_32 F243_4436 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_y;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_z_keysym */
EIF_NATURAL_32 F243_4437 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_z;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_shift_keysym */
EIF_NATURAL_32 F243_4438 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Shift_L;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_right_shift_keysym */
EIF_NATURAL_32 F243_4439 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Shift_R;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_ctrl_keysym */
EIF_NATURAL_32 F243_4440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Control_L;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_right_ctrl_keysym */
EIF_NATURAL_32 F243_4441 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Control_R;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_left_meta_keysym */
EIF_NATURAL_32 F243_4442 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Meta_L;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_right_meta_keysym */
EIF_NATURAL_32 F243_4443 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Meta_R;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_left_alt_keysym */
EIF_NATURAL_32 F243_4444 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Alt_L;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_right_alt_keysym */
EIF_NATURAL_32 F243_4445 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Alt_R;
	return Result;
}

/* {EV_GTK_KEY_CONVERSION}.key_menu_keysym */
EIF_NATURAL_32 F243_4446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = (EIF_NATURAL_32) GDK_Menu;
	return Result;
}

void EIF_Minit282 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
