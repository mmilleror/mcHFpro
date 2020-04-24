/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2012-2020                      **
**                            mail: djchrismarc@gmail.com                          **
**                                 twitter: @bph_co                                **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:                                                                       **
**          The mcHF project is released for radio amateurs experimentation,       **
**          non-commercial use only. All source files under GPL-3.0, unless        **
**          third party drivers specifies otherwise. Thank you!                    **
************************************************************************************/
#include "mchf_pro_board.h"

#include "ui_menu_layout.h"

const struct UIMenuLayout menu_layout[2] =
{
	// ------------------------------------------------------
	// Theme 1
	{
			BKG_COLOR_1,
			//
			MENU_BAR_X_1, MENU_BAR_Y_1, MENU_BAR_X_SIZE_1, MENU_BAR_Y_SIZE_1, MENU_BAR_COLOR_1, MENU_TXT_COLOR_1,
			//
			ICONVIEW_X_1, ICONVIEW_Y_1, ICONVIEW_BKG_COL_UNSEL_1, ICONVIEW_BKG_COL_SEL_1, ICONVIEW_TXT_COL_UNSEL_1, ICONVIEW_TXT_COL_SEL_1
	},

	// ------------------------------------------------------
	// Theme 2
	{
			BKG_COLOR_2,
			//
			MENU_BAR_X_2, MENU_BAR_Y_2, MENU_BAR_X_SIZE_2, MENU_BAR_Y_SIZE_2, MENU_BAR_COLOR_2, MENU_TXT_COLOR_2,
			//
			ICONVIEW_X_2, ICONVIEW_Y_2, ICONVIEW_BKG_COL_UNSEL_2, ICONVIEW_BKG_COL_SEL_2, ICONVIEW_TXT_COL_UNSEL_2, ICONVIEW_TXT_COL_SEL_2
	}
};
