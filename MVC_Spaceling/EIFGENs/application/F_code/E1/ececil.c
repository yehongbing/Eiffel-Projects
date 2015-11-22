#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EV_APPLICATION destroy */
void _A515_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION destroy */
void __A515_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_GTK_CALLBACK_MARSHAL button_select_intermediary */
void _A412_330 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL button_select_intermediary */
void __A412_330 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL on_size_allocate_intermediate */
void _A412_326_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_size_allocate_intermediate */
void __A412_326_3_4_5_6 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_INTEGER_32 op_5, EIF_INTEGER_32 op_6)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, op_3, op_4, op_5, op_6);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of size_allocate_translate_agent */
EIF_REFERENCE _A412_429_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F793_18144)(closed [1].it_r, open [1].it_i4, open [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of size_allocate_translate_agent */
EIF_REFERENCE __A412_429_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_POINTER op_3)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F793_18144)(closed [1].it_r, op_2, op_3);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of set_focus_event_translate_agent */
EIF_REFERENCE _A412_431_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F793_18146)(closed [1].it_r, open [1].it_i4, open [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of set_focus_event_translate_agent */
EIF_REFERENCE __A412_431_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_POINTER op_3)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F793_18146)(closed [1].it_r, op_2, op_3);
}

	/* EV_GTK_CALLBACK_MARSHAL translate_and_call */
void _A412_401 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* EV_GTK_CALLBACK_MARSHAL translate_and_call */
void __A412_401 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* EV_GTK_CALLBACK_MARSHAL marshal */
void A412_414 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F793_8409)(Current, arg1, arg2, arg3);
}

	/* EV_GTK_CALLBACK_MARSHAL on_timeout_intermediary */
void _A412_140 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_timeout_intermediary */
void __A412_140 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_notebook_page_switch_intermediary */
void _A412_323_3 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p, open [1].it_n4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_notebook_page_switch_intermediary */
void __A412_323_3 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_NATURAL_32 op_3)
{
	f_ptr (closed [1].it_r, closed [2].it_p, op_3);
}

	/* EV_GTK_CALLBACK_MARSHAL page_switch_translate */
EIF_REFERENCE _A412_317_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL page_switch_translate */
EIF_REFERENCE __A412_317_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_POINTER op_3)
{
	return f_ptr (closed [1].it_r, op_2, op_3);
}

	/* EV_GTK_CALLBACK_MARSHAL on_set_focus_event_intermediary */
void _A412_327_3 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, open [1].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL on_set_focus_event_intermediary */
void __A412_327_3 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_POINTER op_3)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, op_3);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_resize_callback */
void _A412_313 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_resize_callback */
void __A412_313 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_click_callback */
void _A412_312 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_click_callback */
void __A412_312 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_pnd_deferred_item_parent_selection_change */
void _A412_318 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_pnd_deferred_item_parent_selection_change */
void __A412_318 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL tree_row_expansion_change_intermediary */
void _A412_315_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_b, open [1].it_i4, open [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL tree_row_expansion_change_intermediary */
void __A412_315_4_5 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_4, EIF_POINTER op_5)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_b, op_4, op_5);
}

	/* EV_GTK_CALLBACK_MARSHAL text_component_change_intermediary */
void _A412_328 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL text_component_change_intermediary */
void __A412_328 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL text_buffer_mark_set_intermediary */
void _A412_314_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, open [1].it_i4, open [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL text_buffer_mark_set_intermediary */
void __A412_314_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_3, EIF_POINTER op_4)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, op_3, op_4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_combo_box_toggle_button_event */
void _A412_319 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_combo_box_toggle_button_event */
void __A412_319 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* EV_GTK_CALLBACK_MARSHAL on_gauge_value_changed_intermediary */
void _A412_325 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL on_gauge_value_changed_intermediary */
void __A412_325 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL menu_item_activate_intermediary */
void _A412_331 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL menu_item_activate_intermediary */
void __A412_331 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_ok_intermediary */
void _A412_334 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_ok_intermediary */
void __A412_334 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_cancel_intermediary */
void _A412_335 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_cancel_intermediary */
void __A412_335 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_ok_intermediary */
void _A412_332 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_ok_intermediary */
void __A412_332 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_cancel_intermediary */
void _A412_333 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_cancel_intermediary */
void __A412_333 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_ok_intermediary */
void _A412_338 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_ok_intermediary */
void __A412_338 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_cancel_intermediary */
void _A412_339 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_cancel_intermediary */
void __A412_339 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_ok_intermediary */
void _A412_336 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_ok_intermediary */
void __A412_336 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_cancel_intermediary */
void _A412_337 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_cancel_intermediary */
void __A412_337 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN _A994_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN _A1218_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = open [1].it_i4;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN _A1446_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN _A1067_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN _A1103_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_p);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] has */
EIF_BOOLEAN _A1168_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_n4);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_BOOLEAN __A994_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_BOOLEAN __A1218_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	EIF_BOOLEAN Result;
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = op_2;
	Result = f_ptr (closed [1].it_r, arg1);
	RTLE;
	return Result;
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_BOOLEAN __A1446_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_BOOLEAN __A1067_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_BOOLEAN __A1103_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_POINTER op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] has */
EIF_BOOLEAN __A1168_47_2 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_NATURAL_32 op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* HASH_TABLE [G#1, G#2] put */
void _A994_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A1218_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(2,arg2);
	
	RTLR(1,closed [2].it_r);
	arg2 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg2 = closed [3].it_i4;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A1446_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(2,closed [3].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1, closed [3].it_r);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A1067_85 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A1103_85 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_n4, closed [3].it_p);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] put */
void _A1168_85 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_n4);
}

	/* HASH_TABLE [G#1, G#2] put */
void __A994_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void __A1218_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(2,arg2);
	
	RTLR(1,closed [2].it_r);
	arg2 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg2 = closed [3].it_i4;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void __A1446_85 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(2,closed [3].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1, closed [3].it_r);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void __A1067_85 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void __A1103_85 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_n4, closed [3].it_p);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] put */
void __A1168_85 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_n4);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A994_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A1218_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A1446_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A1067_91 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A1103_91 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] remove */
void _A1168_91 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_n4);
}

	/* HASH_TABLE [G#1, G#2] remove */
void __A994_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void __A1218_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	
	RTLR(1,arg1);
	arg1 = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void __A1446_91 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void __A1067_91 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void __A1103_91 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] remove */
void __A1168_91 (void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_n4);
}

	/* MISMATCH_INFORMATION clear_all */
void A322_91 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F692_6485)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A322_157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F700_6558)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A322_158 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F700_6559)(Current, arg1, arg2);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A325_165_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void __A325_165_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A325_166_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void __A325_166_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A339_177 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void __A339_177 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MENU_ITEM_IMP on_activate */
void _A865_264 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_MENU_ITEM_IMP on_activate */
void __A865_264 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_TEXT_FIELD set_text */
void _A599_196 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_TEXT_FIELD set_text */
void __A599_196 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_WINDOW_I connect_accelerator */
void _A765_260_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_WINDOW_I connect_accelerator */
void __A765_260_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A765_261_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_WINDOW_I disconnect_accelerator */
void __A765_261_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_DIALOG dialog_key_press_action */
void _A580_305_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void __A580_305_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_DIALOG destroy */
void _A580_43 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_DIALOG destroy */
void __A580_43 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A584_346 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void __A584_346 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A584_347_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void __A584_347_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A669_105_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void __A669_105_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_APPLICATION_I contextual_help */
void _A685_301_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_r8, open [5].it_r8, open [6].it_r8, open [7].it_i4, open [8].it_i4);
}

	/* EV_APPLICATION_I contextual_help */
void __A685_301_2_3_4_5_6_7_8_9 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_REAL_64 op_5, EIF_REAL_64 op_6, EIF_REAL_64 op_7, EIF_INTEGER_32 op_8, EIF_INTEGER_32 op_9)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, op_6, op_7, op_8, op_9);
}

	/* EV_APPLICATION_I safe_destroy */
void _A685_68 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I safe_destroy */
void __A685_68 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_BOOLEAN _A685_325_2_3 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1048_18239)(closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_BOOLEAN __A685_325_2_3 (EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1048_18239)(closed [1].it_r, op_2, op_3);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A685_326_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1048_18240)(closed [1].it_r, open [1].it_r, open [2].it_r, open [3].it_r);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void __A685_326_2_3_4 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3, EIF_REFERENCE op_4)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1048_18240)(closed [1].it_r, op_2, op_3, op_4);
}

	/* EV_APPLICATION_I help_handler */
void _A685_298 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I help_handler */
void __A685_298 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A685_243 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void __A685_243 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A331_181 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void __A331_181 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_APPLICATION_IMP inline-agent#1 of im_context_commit_translate_agent */
EIF_REFERENCE _A686_586_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F1049_18241)(closed [1].it_r, open [1].it_i4, open [2].it_p);
}

	/* EV_APPLICATION_IMP inline-agent#1 of im_context_commit_translate_agent */
EIF_REFERENCE __A686_586_2_3 (EIF_REFERENCE(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_POINTER op_3)
{
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER)) F1049_18241)(closed [1].it_r, op_2, op_3);
}

	/* EV_APPLICATION_IMP on_char */
void _A686_462_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_APPLICATION_IMP on_char */
void __A686_462_2 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A700_100 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void __A700_100 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_ANY_IMP c_object_dispose */
void A714_76 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F1079_14144)(Current);
}

	/* EV_PICK_AND_DROPABLE_IMP inline-agent#1 of start_transport */
void _A734_215 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) F1094_18250)(closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4);
}

	/* EV_PICK_AND_DROPABLE_IMP inline-agent#1 of start_transport */
void __A734_215 (void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) F1094_18250)(closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4);
}

	/* EV_RICH_TEXT_IMP format_region */
void _A825_472 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4, closed [4].it_r);
}

	/* EV_RICH_TEXT_IMP format_region */
void __A825_472 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4, closed [4].it_r);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A825_511_2 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void __A825_511_2 (void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32) , EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_GAUGE_IMP set_range */
void _A836_393 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_GAUGE_IMP set_range */
void __A836_393 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_MENU_IMP c_gtk_menu_popup */
void _A867_313 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_n4);
}

	/* EV_MENU_IMP c_gtk_menu_popup */
void __A867_313 (void(*f_ptr) (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_NATURAL_32) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_n4);
}

	/* EV_DRAWING_AREA_IMP update_tooltip_window */
void _A904_521 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_DRAWING_AREA_IMP update_tooltip_window */
void __A904_521 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* SPACELING sayhellopressed */
void _A1597_39 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* SPACELING sayhellopressed */
void __A1597_39 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* APPLICATION destroy */
void _A1598_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* APPLICATION destroy */
void __A1598_33 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}


#ifdef __cplusplus
}
#endif
