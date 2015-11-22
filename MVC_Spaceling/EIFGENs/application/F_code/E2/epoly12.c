#include "epoly12.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX Y5205_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype30[] = {865,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype55[] = {934,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype56[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype57[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype58[] = {915,0,0xFFF9,1,841,0,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype59[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype60[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype61[] = {915,0,0xFFF9,1,841,944,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype62[] = {915,0,0xFFF9,3,841,874,874,791,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype63[] = {915,0,0xFFF9,0,841,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype64[] = {915,0,0xFFF9,1,841,1205,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype65[] = {915,0,0xFFF9,1,841,925,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype66[] = {915,0,0xFFF9,1,841,1000,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype67[] = {915,0,0xFFF9,1,841,1005,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype68[] = {915,0,0xFFF9,7,841,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype69[] = {915,0,0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype70[] = {915,0,0xFFF9,1,841,791,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype71[] = {915,0,0xFFF9,2,841,874,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype72[] = {915,0,0xFFF9,1,841,967,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype73[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype74[] = {915,0,0xFFF9,4,841,874,874,874,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype75[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype76[] = {865,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype77[] = {865,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype78[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype79[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype80[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y5205_pgtype81[] = {925,0xFFFF};
EIF_TYPE_INDEX *Y5205_gen_type [350];
EIF_TYPE_INDEX Y5205 [350];
void Y5205_init (void)
{
	egc_routines_types [5205] = Y5205;
	egc_routines_gen_types [5205] = Y5205_gen_type;
	egc_routines_offset [5205] = 651;
	Y5205_gen_type [0] = Y5205_pgtype0;
	Y5205_gen_type [1] = Y5205_pgtype1;
	Y5205_gen_type [2] = Y5205_pgtype2;
	Y5205_gen_type [3] = Y5205_pgtype3;
	Y5205_gen_type [4] = Y5205_pgtype4;
	Y5205_gen_type [5] = Y5205_pgtype5;
	Y5205_gen_type [6] = Y5205_pgtype6;
	Y5205_gen_type [7] = Y5205_pgtype7;
	Y5205_gen_type [8] = Y5205_pgtype8;
	Y5205_gen_type [9] = Y5205_pgtype9;
	Y5205_gen_type [10] = Y5205_pgtype10;
	Y5205_gen_type [11] = Y5205_pgtype11;
	Y5205_gen_type [12] = Y5205_pgtype12;
	Y5205_gen_type [13] = Y5205_pgtype13;
	Y5205_gen_type [14] = Y5205_pgtype14;
	Y5205_gen_type [15] = Y5205_pgtype15;
	Y5205_gen_type [16] = Y5205_pgtype16;
	Y5205_gen_type [17] = Y5205_pgtype17;
	Y5205_gen_type [18] = Y5205_pgtype18;
	Y5205_gen_type [19] = Y5205_pgtype19;
	Y5205_gen_type [20] = Y5205_pgtype20;
	Y5205_gen_type [21] = Y5205_pgtype21;
	Y5205_gen_type [22] = Y5205_pgtype22;
	Y5205_gen_type [23] = Y5205_pgtype23;
	Y5205_gen_type [24] = Y5205_pgtype24;
	Y5205_gen_type [25] = Y5205_pgtype25;
	Y5205_gen_type [26] = Y5205_pgtype26;
	Y5205_gen_type [27] = Y5205_pgtype27;
	Y5205_gen_type [28] = Y5205_pgtype28;
	Y5205_gen_type [29] = Y5205_pgtype29;
	Y5205_gen_type [30] = Y5205_pgtype30;
	Y5205_gen_type [49] = Y5205_pgtype31;
	Y5205_gen_type [50] = Y5205_pgtype32;
	Y5205_gen_type [51] = Y5205_pgtype33;
	Y5205_gen_type [52] = Y5205_pgtype34;
	Y5205_gen_type [53] = Y5205_pgtype35;
	Y5205_gen_type [54] = Y5205_pgtype36;
	Y5205_gen_type [55] = Y5205_pgtype37;
	Y5205_gen_type [56] = Y5205_pgtype38;
	Y5205_gen_type [57] = Y5205_pgtype39;
	Y5205_gen_type [58] = Y5205_pgtype40;
	Y5205_gen_type [59] = Y5205_pgtype41;
	Y5205_gen_type [60] = Y5205_pgtype42;
	Y5205_gen_type [61] = Y5205_pgtype43;
	Y5205_gen_type [62] = Y5205_pgtype44;
	Y5205_gen_type [63] = Y5205_pgtype45;
	Y5205_gen_type [64] = Y5205_pgtype46;
	Y5205_gen_type [65] = Y5205_pgtype47;
	Y5205_gen_type [66] = Y5205_pgtype48;
	Y5205_gen_type [67] = Y5205_pgtype49;
	Y5205_gen_type [68] = Y5205_pgtype50;
	Y5205_gen_type [69] = Y5205_pgtype51;
	Y5205_gen_type [70] = Y5205_pgtype52;
	Y5205_gen_type [71] = Y5205_pgtype53;
	Y5205_gen_type [72] = Y5205_pgtype54;
	Y5205_gen_type [73] = Y5205_pgtype55;
	Y5205_gen_type [74] = Y5205_pgtype56;
	Y5205_gen_type [80] = Y5205_pgtype57;
	Y5205_gen_type [81] = Y5205_pgtype58;
	Y5205_gen_type [82] = Y5205_pgtype59;
	Y5205_gen_type [83] = Y5205_pgtype60;
	Y5205_gen_type [84] = Y5205_pgtype61;
	Y5205_gen_type [85] = Y5205_pgtype62;
	Y5205_gen_type [86] = Y5205_pgtype63;
	Y5205_gen_type [87] = Y5205_pgtype64;
	Y5205_gen_type [88] = Y5205_pgtype65;
	Y5205_gen_type [89] = Y5205_pgtype66;
	Y5205_gen_type [90] = Y5205_pgtype67;
	Y5205_gen_type [91] = Y5205_pgtype68;
	Y5205_gen_type [92] = Y5205_pgtype69;
	Y5205_gen_type [93] = Y5205_pgtype70;
	Y5205_gen_type [94] = Y5205_pgtype71;
	Y5205_gen_type [95] = Y5205_pgtype72;
	Y5205_gen_type [96] = Y5205_pgtype73;
	Y5205_gen_type [97] = Y5205_pgtype74;
	Y5205_gen_type [98] = Y5205_pgtype75;
	Y5205_gen_type [121] = Y5205_pgtype76;
	Y5205_gen_type [122] = Y5205_pgtype77;
	Y5205_gen_type [271] = Y5205_pgtype78;
	Y5205_gen_type [272] = Y5205_pgtype79;
	Y5205_gen_type [274] = Y5205_pgtype80;
	Y5205_gen_type [349] = Y5205_pgtype81;
	Y5205[30] = 865;
	Y5205[73] = 934;
	Y5205[74] = 915;
	{long i; for (i = 80; i < 99; i++) Y5205[i] = 915;};
	{long i; for (i = 121; i < 123; i++) Y5205[i] = 865;};
	{long i; for (i = 271; i < 273; i++) Y5205[i] = 853;};
	Y5205[274] = 850;
	Y5205[349] = 925;
}

char *(*R5210[16])();
void R5210_init () {
	R5210[0] = (char *(*)()) F667_6238;
	R5210[1] = (char *(*)()) F668_6238;
	R5210[2] = (char *(*)()) F669_6238;
	R5210[3] = (char *(*)()) F670_6238;
	R5210[4] = (char *(*)()) F671_6238;
	R5210[5] = (char *(*)()) F672_6238;
	R5210[6] = (char *(*)()) F673_6238;
	R5210[7] = (char *(*)()) F674_6238;
	R5210[8] = (char *(*)()) F675_6238;
	R5210[9] = (char *(*)()) F676_6238;
	R5210[10] = (char *(*)()) F677_6238;
	R5210[11] = (char *(*)()) F678_6238;
	R5210[12] = (char *(*)()) F679_6238;
	R5210[13] = (char *(*)()) F680_6238;
	R5210[14] = (char *(*)()) F681_6238;
	R5210[15] = (char *(*)()) F669_6238;
}

char *(*R5229[16])();
void R5229_init () {
	R5229[0] = (char *(*)()) F667_6272;
	R5229[1] = (char *(*)()) F668_6272;
	R5229[2] = (char *(*)()) F669_6272;
	R5229[3] = (char *(*)()) F670_6272;
	R5229[4] = (char *(*)()) F671_6272;
	R5229[5] = (char *(*)()) F672_6272;
	R5229[6] = (char *(*)()) F673_6272;
	R5229[7] = (char *(*)()) F674_6272;
	R5229[8] = (char *(*)()) F675_6272;
	R5229[9] = (char *(*)()) F676_6272;
	R5229[10] = (char *(*)()) F677_6272;
	R5229[11] = (char *(*)()) F678_6272;
	R5229[12] = (char *(*)()) F679_6272;
	R5229[13] = (char *(*)()) F680_6272;
	R5229[14] = (char *(*)()) F681_6272;
	R5229[15] = (char *(*)()) F669_6272;
}

char *(*R5310[3])();
void R5310_init () {
	R5310[0] = (char *(*)()) F687_6358;
	R5310[1] = (char *(*)()) F688_6358;
	R5310[2] = (char *(*)()) F689_6358;
}

char *(*R5315[312])();
void R5315_init () {
	R5315[0] = (char *(*)()) F690_6365;
	R5315[1] = (char *(*)()) F691_6422;
	R5315[2] = (char *(*)()) F692_6489;
	R5315[3] = (char *(*)()) F693_6489;
	R5315[4] = (char *(*)()) F694_6489;
	R5315[5] = (char *(*)()) F695_6489;
	R5315[6] = (char *(*)()) F696_6489;
	R5315[7] = (char *(*)()) F697_6489;
	R5315[8] = (char *(*)()) F692_6489;
	R5315[9] = (char *(*)()) F694_6489;
	R5315[10] = (char *(*)()) F692_6489;
	R5315[11] = (char *(*)()) F701_6637;
	R5315[12] = (char *(*)()) F702_6637;
	R5315[13] = (char *(*)()) F703_6637;
	R5315[14] = (char *(*)()) F704_6637;
	R5315[15] = (char *(*)()) F705_6637;
	R5315[16] = (char *(*)()) F706_6637;
	R5315[17] = (char *(*)()) F707_6637;
	R5315[18] = (char *(*)()) F708_6637;
	R5315[19] = (char *(*)()) F709_6637;
	R5315[20] = (char *(*)()) F710_6637;
	R5315[21] = (char *(*)()) F711_6637;
	R5315[22] = (char *(*)()) F712_6637;
	R5315[23] = (char *(*)()) F713_6637;
	R5315[24] = (char *(*)()) F714_6637;
	R5315[25] = (char *(*)()) F715_6637;
	R5315[26] = (char *(*)()) F701_6637;
	R5315[27] = (char *(*)()) F710_6637;
	R5315[28] = (char *(*)()) F704_6637;
	R5315[29] = (char *(*)()) F701_6637;
	R5315[30] = (char *(*)()) F704_6637;
	R5315[31] = (char *(*)()) F701_6637;
	R5315[32] = (char *(*)()) F704_6637;
	R5315[33] = (char *(*)()) F701_6637;
	R5315[34] = (char *(*)()) F704_6637;
	{long i; for (i = 35; i < 37; i++) R5315[i] = (char *(*)()) F701_6637;}
	{long i; for (i = 42; i < 61; i++) R5315[i] = (char *(*)()) F701_6637;}
	R5315[152] = (char *(*)()) F842_8618;
	{long i; for (i = 233; i < 235; i++) R5315[i] = (char *(*)()) F923_10485;}
	R5315[236] = (char *(*)()) F926_10693;
	R5315[239] = (char *(*)()) F929_10735;
	R5315[311] = (char *(*)()) F701_6637;
}

char *(*R5351[9])();
void R5351_init () {
	R5351[0] = (char *(*)()) F692_6432;
	R5351[1] = (char *(*)()) F693_6432;
	R5351[2] = (char *(*)()) F694_6432;
	R5351[3] = (char *(*)()) F695_6432;
	R5351[4] = (char *(*)()) F696_6432;
	R5351[5] = (char *(*)()) F697_6432;
	R5351[6] = (char *(*)()) F692_6432;
	R5351[7] = (char *(*)()) F694_6432;
	R5351[8] = (char *(*)()) F692_6432;
}

char *(*R5353[9])();
void R5353_init () {
	R5353[0] = (char *(*)()) F692_6434;
	R5353[1] = (char *(*)()) F693_6434;
	R5353[2] = (char *(*)()) F694_6434;
	R5353[3] = (char *(*)()) F695_6434;
	R5353[4] = (char *(*)()) F696_6434;
	R5353[5] = (char *(*)()) F697_6434;
	R5353[6] = (char *(*)()) F692_6434;
	R5353[7] = (char *(*)()) F694_6434;
	R5353[8] = (char *(*)()) F692_6434;
}

char *(*R5354[9])();
void R5354_init () {
	R5354[0] = (char *(*)()) F692_6435;
	R5354[1] = (char *(*)()) F693_6435;
	R5354[2] = (char *(*)()) F694_6435_5354;
	R5354[3] = (char *(*)()) F695_6435_5354;
	R5354[4] = (char *(*)()) F696_6435_5354;
	R5354[5] = (char *(*)()) F697_6435_5354;
	R5354[6] = (char *(*)()) F692_6435;
	R5354[7] = (char *(*)()) F694_6435_5354;
	R5354[8] = (char *(*)()) F692_6435;
}
static EIF_REFERENCE F694_6435_5354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F694_6435(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_6435_5354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_6435(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_6435_5354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F696_6435(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_6435_5354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_6435(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R5358[9])();
void R5358_init () {
	R5358[0] = (char *(*)()) F692_6442;
	R5358[1] = (char *(*)()) F693_6442;
	R5358[2] = (char *(*)()) F694_6442_5358;
	R5358[3] = (char *(*)()) F695_6442_5358;
	R5358[4] = (char *(*)()) F696_6442_5358;
	R5358[5] = (char *(*)()) F697_6442_5358;
	R5358[6] = (char *(*)()) F692_6442;
	R5358[7] = (char *(*)()) F694_6442_5358;
	R5358[8] = (char *(*)()) F692_6442;
}
static EIF_REFERENCE F694_6442_5358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F694_6442(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_6442_5358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_6442(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_6442_5358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F696_6442(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_6442_5358 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_6442(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R5359[9])();
void R5359_init () {
	R5359[0] = (char *(*)()) F692_6443;
	R5359[1] = (char *(*)()) F693_6443_5359;
	R5359[2] = (char *(*)()) F694_6443;
	R5359[3] = (char *(*)()) F695_6443_5359;
	R5359[4] = (char *(*)()) F696_6443_5359;
	R5359[5] = (char *(*)()) F697_6443_5359;
	R5359[6] = (char *(*)()) F692_6443;
	R5359[7] = (char *(*)()) F694_6443;
	R5359[8] = (char *(*)()) F692_6443;
}
static EIF_REFERENCE F693_6443_5359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F693_6443(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_6443_5359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_6443(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_6443_5359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F696_6443(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(913, 913, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_6443_5359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F697_6443(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R5361[9])();
void R5361_init () {
	R5361[0] = (char *(*)()) F692_6447;
	R5361[1] = (char *(*)()) F693_6447_5361;
	R5361[2] = (char *(*)()) F694_6447;
	R5361[3] = (char *(*)()) F695_6447_5361;
	R5361[4] = (char *(*)()) F696_6447_5361;
	R5361[5] = (char *(*)()) F697_6447_5361;
	R5361[6] = (char *(*)()) F698_6544;
	R5361[7] = (char *(*)()) F699_6544;
	R5361[8] = (char *(*)()) F692_6447;
}
static EIF_INTEGER_32 F693_6447_5361 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F693_6447(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F695_6447_5361 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F695_6447(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F696_6447_5361 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F696_6447(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F697_6447_5361 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F697_6447(Current, *(EIF_NATURAL_32 *)arg1);
}

char *(*R5363[9])();
void R5363_init () {
	R5363[0] = (char *(*)()) F692_6453;
	R5363[1] = (char *(*)()) F693_6453_5363;
	R5363[2] = (char *(*)()) F694_6453;
	R5363[3] = (char *(*)()) F695_6453_5363;
	R5363[4] = (char *(*)()) F696_6453_5363;
	R5363[5] = (char *(*)()) F697_6453_5363;
	R5363[6] = (char *(*)()) F698_6546;
	R5363[7] = (char *(*)()) F699_6546;
	R5363[8] = (char *(*)()) F692_6453;
}
static EIF_BOOLEAN F693_6453_5363 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F693_6453(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F695_6453_5363 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F695_6453(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F696_6453_5363 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F696_6453(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}
static EIF_BOOLEAN F697_6453_5363 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F697_6453(Current, *(EIF_NATURAL_32 *)arg1, *(EIF_NATURAL_32 *)arg2);
}

char *(*R5369[9])();
void R5369_init () {
	R5369[0] = (char *(*)()) F692_6462;
	R5369[1] = (char *(*)()) F693_6462;
	R5369[2] = (char *(*)()) F694_6462;
	R5369[3] = (char *(*)()) F695_6462;
	R5369[4] = (char *(*)()) F696_6462;
	R5369[5] = (char *(*)()) F697_6462;
	R5369[6] = (char *(*)()) F692_6462;
	R5369[7] = (char *(*)()) F694_6462;
	R5369[8] = (char *(*)()) F692_6462;
}

char *(*R5370[9])();
void R5370_init () {
	R5370[0] = (char *(*)()) F692_6463;
	R5370[1] = (char *(*)()) F693_6463;
	R5370[2] = (char *(*)()) F694_6463;
	R5370[3] = (char *(*)()) F695_6463;
	R5370[4] = (char *(*)()) F696_6463;
	R5370[5] = (char *(*)()) F697_6463;
	R5370[6] = (char *(*)()) F692_6463;
	R5370[7] = (char *(*)()) F694_6463;
	R5370[8] = (char *(*)()) F692_6463;
}

char *(*R5371[9])();
void R5371_init () {
	R5371[0] = (char *(*)()) F692_6464;
	R5371[1] = (char *(*)()) F693_6464;
	R5371[2] = (char *(*)()) F694_6464;
	R5371[3] = (char *(*)()) F695_6464;
	R5371[4] = (char *(*)()) F696_6464;
	R5371[5] = (char *(*)()) F697_6464;
	R5371[6] = (char *(*)()) F692_6464;
	R5371[7] = (char *(*)()) F694_6464;
	R5371[8] = (char *(*)()) F692_6464;
}

char *(*R5372[9])();
void R5372_init () {
	R5372[0] = (char *(*)()) F692_6465;
	R5372[1] = (char *(*)()) F693_6465;
	R5372[2] = (char *(*)()) F694_6465;
	R5372[3] = (char *(*)()) F695_6465;
	R5372[4] = (char *(*)()) F696_6465;
	R5372[5] = (char *(*)()) F697_6465;
	R5372[6] = (char *(*)()) F692_6465;
	R5372[7] = (char *(*)()) F694_6465;
	R5372[8] = (char *(*)()) F692_6465;
}

char *(*R5374[9])();
void R5374_init () {
	R5374[0] = (char *(*)()) F692_6469;
	R5374[1] = (char *(*)()) F693_6469;
	R5374[2] = (char *(*)()) F694_6469;
	R5374[3] = (char *(*)()) F695_6469;
	R5374[4] = (char *(*)()) F696_6469;
	R5374[5] = (char *(*)()) F697_6469;
	R5374[6] = (char *(*)()) F692_6469;
	R5374[7] = (char *(*)()) F694_6469;
	R5374[8] = (char *(*)()) F692_6469;
}

char *(*R5375[9])();
void R5375_init () {
	R5375[0] = (char *(*)()) F692_6470;
	R5375[1] = (char *(*)()) F693_6470;
	R5375[2] = (char *(*)()) F694_6470;
	R5375[3] = (char *(*)()) F695_6470;
	R5375[4] = (char *(*)()) F696_6470;
	R5375[5] = (char *(*)()) F697_6470;
	R5375[6] = (char *(*)()) F692_6470;
	R5375[7] = (char *(*)()) F694_6470;
	R5375[8] = (char *(*)()) F692_6470;
}

char *(*R5377[9])();
void R5377_init () {
	R5377[0] = (char *(*)()) F692_6472;
	R5377[1] = (char *(*)()) F693_6472_5377;
	R5377[2] = (char *(*)()) F694_6472;
	R5377[3] = (char *(*)()) F695_6472_5377;
	R5377[4] = (char *(*)()) F696_6472_5377;
	R5377[5] = (char *(*)()) F697_6472_5377;
	R5377[6] = (char *(*)()) F692_6472;
	R5377[7] = (char *(*)()) F694_6472;
	R5377[8] = (char *(*)()) F692_6472;
}
static void F693_6472_5377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F693_6472(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F695_6472_5377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F695_6472(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F696_6472_5377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F696_6472(Current, *(EIF_POINTER *)arg1);
}
static void F697_6472_5377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F697_6472(Current, *(EIF_NATURAL_32 *)arg1);
}

char *(*R5379[9])();
void R5379_init () {
	R5379[0] = (char *(*)()) F692_6474;
	R5379[1] = (char *(*)()) F693_6474;
	R5379[2] = (char *(*)()) F694_6474;
	R5379[3] = (char *(*)()) F695_6474;
	R5379[4] = (char *(*)()) F696_6474;
	R5379[5] = (char *(*)()) F697_6474;
	R5379[6] = (char *(*)()) F692_6474;
	R5379[7] = (char *(*)()) F694_6474;
	R5379[8] = (char *(*)()) F692_6474;
}

char *(*R5380[9])();
void R5380_init () {
	R5380[0] = (char *(*)()) F692_6475;
	R5380[1] = (char *(*)()) F693_6475;
	R5380[2] = (char *(*)()) F694_6475;
	R5380[3] = (char *(*)()) F695_6475;
	R5380[4] = (char *(*)()) F696_6475;
	R5380[5] = (char *(*)()) F697_6475;
	R5380[6] = (char *(*)()) F692_6475;
	R5380[7] = (char *(*)()) F694_6475;
	R5380[8] = (char *(*)()) F692_6475;
}

char *(*R5385[9])();
void R5385_init () {
	R5385[0] = (char *(*)()) F692_6482;
	R5385[1] = (char *(*)()) F693_6482_5385;
	R5385[2] = (char *(*)()) F694_6482;
	R5385[3] = (char *(*)()) F695_6482_5385;
	R5385[4] = (char *(*)()) F696_6482_5385;
	R5385[5] = (char *(*)()) F697_6482_5385;
	R5385[6] = (char *(*)()) F692_6482;
	R5385[7] = (char *(*)()) F694_6482;
	R5385[8] = (char *(*)()) F692_6482;
}
static void F693_6482_5385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F693_6482(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F695_6482_5385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F695_6482(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F696_6482_5385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F696_6482(Current, *(EIF_POINTER *)arg1);
}
static void F697_6482_5385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F697_6482(Current, *(EIF_NATURAL_32 *)arg1);
}

char *(*R5387[9])();
void R5387_init () {
	R5387[0] = (char *(*)()) F692_6488;
	R5387[1] = (char *(*)()) F693_6488;
	R5387[2] = (char *(*)()) F694_6488;
	R5387[3] = (char *(*)()) F695_6488;
	R5387[4] = (char *(*)()) F696_6488;
	R5387[5] = (char *(*)()) F697_6488;
	R5387[6] = (char *(*)()) F698_6548;
	R5387[7] = (char *(*)()) F699_6548;
	R5387[8] = (char *(*)()) F692_6488;
}

char *(*R5396[9])();
void R5396_init () {
	R5396[0] = (char *(*)()) F692_6498;
	R5396[1] = (char *(*)()) F693_6498;
	R5396[2] = (char *(*)()) F694_6498;
	R5396[3] = (char *(*)()) F695_6498;
	R5396[4] = (char *(*)()) F696_6498;
	R5396[5] = (char *(*)()) F697_6498;
	R5396[6] = (char *(*)()) F692_6498;
	R5396[7] = (char *(*)()) F694_6498;
	R5396[8] = (char *(*)()) F692_6498;
}

char *(*R5397[9])();
void R5397_init () {
	R5397[0] = (char *(*)()) F692_6499;
	R5397[1] = (char *(*)()) F693_6499;
	R5397[2] = (char *(*)()) F694_6499;
	R5397[3] = (char *(*)()) F695_6499;
	R5397[4] = (char *(*)()) F696_6499;
	R5397[5] = (char *(*)()) F697_6499;
	R5397[6] = (char *(*)()) F692_6499;
	R5397[7] = (char *(*)()) F694_6499;
	R5397[8] = (char *(*)()) F692_6499;
}

char *(*R5404[9])();
void R5404_init () {
	R5404[0] = (char *(*)()) F692_6506;
	R5404[1] = (char *(*)()) F693_6506;
	R5404[2] = (char *(*)()) F694_6506_5404;
	R5404[3] = (char *(*)()) F695_6506_5404;
	R5404[4] = (char *(*)()) F696_6506_5404;
	R5404[5] = (char *(*)()) F697_6506_5404;
	R5404[6] = (char *(*)()) F692_6506;
	R5404[7] = (char *(*)()) F694_6506_5404;
	R5404[8] = (char *(*)()) F692_6506;
}
static EIF_REFERENCE F694_6506_5404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F694_6506(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_6506_5404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_6506(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_6506_5404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F696_6506(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_6506_5404 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F697_6506(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R5405[9])();
void R5405_init () {
	R5405[0] = (char *(*)()) F692_6507;
	R5405[1] = (char *(*)()) F693_6507_5405;
	R5405[2] = (char *(*)()) F694_6507;
	R5405[3] = (char *(*)()) F695_6507_5405;
	R5405[4] = (char *(*)()) F696_6507_5405;
	R5405[5] = (char *(*)()) F697_6507_5405;
	R5405[6] = (char *(*)()) F692_6507;
	R5405[7] = (char *(*)()) F694_6507;
	R5405[8] = (char *(*)()) F692_6507;
}
static EIF_REFERENCE F693_6507_5405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F693_6507(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_6507_5405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_6507(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F696_6507_5405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F696_6507(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(913, 913, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F697_6507_5405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F697_6507(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R5406[9])();
void R5406_init () {
	R5406[0] = (char *(*)()) F692_6508;
	R5406[1] = (char *(*)()) F693_6508;
	R5406[2] = (char *(*)()) F694_6508;
	R5406[3] = (char *(*)()) F695_6508;
	R5406[4] = (char *(*)()) F696_6508;
	R5406[5] = (char *(*)()) F697_6508;
	R5406[6] = (char *(*)()) F692_6508;
	R5406[7] = (char *(*)()) F694_6508;
	R5406[8] = (char *(*)()) F692_6508;
}

char *(*R5407[9])();
void R5407_init () {
	R5407[0] = (char *(*)()) F692_6509;
	R5407[1] = (char *(*)()) F693_6509;
	R5407[2] = (char *(*)()) F694_6509;
	R5407[3] = (char *(*)()) F695_6509;
	R5407[4] = (char *(*)()) F696_6509;
	R5407[5] = (char *(*)()) F697_6509;
	R5407[6] = (char *(*)()) F692_6509;
	R5407[7] = (char *(*)()) F694_6509;
	R5407[8] = (char *(*)()) F692_6509;
}

char *(*R5408[9])();
void R5408_init () {
	R5408[0] = (char *(*)()) F692_6510;
	R5408[1] = (char *(*)()) F693_6510;
	R5408[2] = (char *(*)()) F694_6510;
	R5408[3] = (char *(*)()) F695_6510;
	R5408[4] = (char *(*)()) F696_6510;
	R5408[5] = (char *(*)()) F697_6510;
	R5408[6] = (char *(*)()) F692_6510;
	R5408[7] = (char *(*)()) F694_6510;
	R5408[8] = (char *(*)()) F692_6510;
}

char *(*R5409[9])();
void R5409_init () {
	R5409[0] = (char *(*)()) F692_6511;
	R5409[1] = (char *(*)()) F693_6511;
	R5409[2] = (char *(*)()) F694_6511;
	R5409[3] = (char *(*)()) F695_6511;
	R5409[4] = (char *(*)()) F696_6511;
	R5409[5] = (char *(*)()) F697_6511;
	R5409[6] = (char *(*)()) F692_6511;
	R5409[7] = (char *(*)()) F694_6511;
	R5409[8] = (char *(*)()) F692_6511;
}

char *(*R5410[9])();
void R5410_init () {
	R5410[0] = (char *(*)()) F692_6512;
	R5410[1] = (char *(*)()) F693_6512;
	R5410[2] = (char *(*)()) F694_6512;
	R5410[3] = (char *(*)()) F695_6512;
	R5410[4] = (char *(*)()) F696_6512;
	R5410[5] = (char *(*)()) F697_6512;
	R5410[6] = (char *(*)()) F692_6512;
	R5410[7] = (char *(*)()) F694_6512;
	R5410[8] = (char *(*)()) F692_6512;
}

char *(*R5412[9])();
void R5412_init () {
	R5412[0] = (char *(*)()) F692_6514;
	R5412[1] = (char *(*)()) F693_6514;
	R5412[2] = (char *(*)()) F694_6514;
	R5412[3] = (char *(*)()) F695_6514;
	R5412[4] = (char *(*)()) F696_6514;
	R5412[5] = (char *(*)()) F697_6514;
	R5412[6] = (char *(*)()) F692_6514;
	R5412[7] = (char *(*)()) F694_6514;
	R5412[8] = (char *(*)()) F692_6514;
}

char *(*R5413[9])();
void R5413_init () {
	R5413[0] = (char *(*)()) F692_6515;
	R5413[1] = (char *(*)()) F693_6515;
	R5413[2] = (char *(*)()) F694_6515;
	R5413[3] = (char *(*)()) F695_6515;
	R5413[4] = (char *(*)()) F696_6515;
	R5413[5] = (char *(*)()) F697_6515;
	R5413[6] = (char *(*)()) F692_6515;
	R5413[7] = (char *(*)()) F694_6515;
	R5413[8] = (char *(*)()) F692_6515;
}

char *(*R5414[9])();
void R5414_init () {
	R5414[0] = (char *(*)()) F692_6516;
	R5414[1] = (char *(*)()) F693_6516;
	R5414[2] = (char *(*)()) F694_6516;
	R5414[3] = (char *(*)()) F695_6516;
	R5414[4] = (char *(*)()) F696_6516;
	R5414[5] = (char *(*)()) F697_6516;
	R5414[6] = (char *(*)()) F692_6516;
	R5414[7] = (char *(*)()) F694_6516;
	R5414[8] = (char *(*)()) F692_6516;
}

char *(*R5418[9])();
void R5418_init () {
	R5418[0] = (char *(*)()) F692_6520;
	R5418[1] = (char *(*)()) F693_6520_5418;
	R5418[2] = (char *(*)()) F694_6520;
	R5418[3] = (char *(*)()) F695_6520_5418;
	R5418[4] = (char *(*)()) F696_6520_5418;
	R5418[5] = (char *(*)()) F697_6520_5418;
	R5418[6] = (char *(*)()) F692_6520;
	R5418[7] = (char *(*)()) F694_6520;
	R5418[8] = (char *(*)()) F692_6520;
}
static void F693_6520_5418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F693_6520(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F695_6520_5418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F695_6520(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F696_6520_5418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F696_6520(Current, *(EIF_POINTER *)arg1);
}
static void F697_6520_5418 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F697_6520(Current, *(EIF_NATURAL_32 *)arg1);
}

char *(*R5424[9])();
void R5424_init () {
	R5424[0] = (char *(*)()) F692_6526;
	R5424[1] = (char *(*)()) F693_6526;
	R5424[2] = (char *(*)()) F694_6526;
	R5424[3] = (char *(*)()) F695_6526;
	R5424[4] = (char *(*)()) F696_6526;
	R5424[5] = (char *(*)()) F697_6526;
	R5424[6] = (char *(*)()) F692_6526;
	R5424[7] = (char *(*)()) F694_6526;
	R5424[8] = (char *(*)()) F692_6526;
}

char *(*R5437[9])();
void R5437_init () {
	R5437[0] = (char *(*)()) F692_6539;
	R5437[1] = (char *(*)()) F693_6539;
	R5437[2] = (char *(*)()) F694_6539;
	R5437[3] = (char *(*)()) F695_6539;
	R5437[4] = (char *(*)()) F696_6539;
	R5437[5] = (char *(*)()) F697_6539;
	R5437[6] = (char *(*)()) F692_6539;
	R5437[7] = (char *(*)()) F694_6539;
	R5437[8] = (char *(*)()) F692_6539;
}

char *(*R5440[2])();
void R5440_init () {
	R5440[0] = (char *(*)()) F698_6542;
	R5440[1] = (char *(*)()) F699_6542;
}

char *(*R5460[301])();
void R5460_init () {
	R5460[0] = (char *(*)()) F701_6579;
	R5460[1] = (char *(*)()) F702_6579;
	R5460[2] = (char *(*)()) F703_6579;
	R5460[3] = (char *(*)()) F704_6579;
	R5460[4] = (char *(*)()) F705_6579;
	R5460[5] = (char *(*)()) F706_6579;
	R5460[6] = (char *(*)()) F707_6579;
	R5460[7] = (char *(*)()) F708_6579;
	R5460[8] = (char *(*)()) F709_6579;
	R5460[9] = (char *(*)()) F710_6579;
	R5460[10] = (char *(*)()) F711_6579;
	R5460[11] = (char *(*)()) F712_6579;
	R5460[12] = (char *(*)()) F713_6579;
	R5460[13] = (char *(*)()) F714_6579;
	R5460[14] = (char *(*)()) F715_6579;
	R5460[15] = (char *(*)()) F701_6579;
	R5460[16] = (char *(*)()) F710_6579;
	R5460[17] = (char *(*)()) F704_6579;
	R5460[18] = (char *(*)()) F701_6579;
	R5460[19] = (char *(*)()) F704_6579;
	R5460[20] = (char *(*)()) F701_6579;
	R5460[21] = (char *(*)()) F704_6579;
	R5460[22] = (char *(*)()) F701_6579;
	R5460[23] = (char *(*)()) F704_6579;
	{long i; for (i = 24; i < 26; i++) R5460[i] = (char *(*)()) F701_6579;}
	{long i; for (i = 31; i < 50; i++) R5460[i] = (char *(*)()) F701_6579;}
	R5460[300] = (char *(*)()) F701_6579;
}

char *(*R5463[301])();
void R5463_init () {
	R5463[0] = (char *(*)()) F701_6582;
	R5463[1] = (char *(*)()) F702_6582;
	R5463[2] = (char *(*)()) F703_6582;
	R5463[3] = (char *(*)()) F704_6582;
	R5463[4] = (char *(*)()) F705_6582;
	R5463[5] = (char *(*)()) F706_6582;
	R5463[6] = (char *(*)()) F707_6582;
	R5463[7] = (char *(*)()) F708_6582;
	R5463[8] = (char *(*)()) F709_6582;
	R5463[9] = (char *(*)()) F710_6582;
	R5463[10] = (char *(*)()) F711_6582;
	R5463[11] = (char *(*)()) F712_6582;
	R5463[12] = (char *(*)()) F713_6582;
	R5463[13] = (char *(*)()) F714_6582;
	R5463[14] = (char *(*)()) F715_6582;
	R5463[15] = (char *(*)()) F701_6582;
	R5463[16] = (char *(*)()) F710_6582;
	R5463[17] = (char *(*)()) F704_6582;
	R5463[18] = (char *(*)()) F701_6582;
	R5463[19] = (char *(*)()) F704_6582;
	R5463[20] = (char *(*)()) F701_6582;
	R5463[21] = (char *(*)()) F704_6582;
	R5463[22] = (char *(*)()) F701_6582;
	R5463[23] = (char *(*)()) F704_6582;
	{long i; for (i = 24; i < 26; i++) R5463[i] = (char *(*)()) F701_6582;}
	{long i; for (i = 31; i < 50; i++) R5463[i] = (char *(*)()) F701_6582;}
	R5463[300] = (char *(*)()) F701_6582;
}

char *(*R5468[301])();
void R5468_init () {
	R5468[0] = (char *(*)()) F701_6599;
	R5468[1] = (char *(*)()) F702_6599;
	R5468[2] = (char *(*)()) F703_6599;
	R5468[3] = (char *(*)()) F704_6599;
	R5468[4] = (char *(*)()) F705_6599;
	R5468[5] = (char *(*)()) F706_6599;
	R5468[6] = (char *(*)()) F707_6599;
	R5468[7] = (char *(*)()) F708_6599;
	R5468[8] = (char *(*)()) F709_6599;
	R5468[9] = (char *(*)()) F710_6599;
	R5468[10] = (char *(*)()) F711_6599;
	R5468[11] = (char *(*)()) F712_6599;
	R5468[12] = (char *(*)()) F713_6599;
	R5468[13] = (char *(*)()) F714_6599;
	R5468[14] = (char *(*)()) F715_6599;
	R5468[15] = (char *(*)()) F701_6599;
	R5468[16] = (char *(*)()) F710_6599;
	R5468[17] = (char *(*)()) F704_6599;
	R5468[18] = (char *(*)()) F701_6599;
	R5468[19] = (char *(*)()) F704_6599;
	R5468[20] = (char *(*)()) F701_6599;
	R5468[21] = (char *(*)()) F704_6599;
	R5468[22] = (char *(*)()) F701_6599;
	R5468[23] = (char *(*)()) F704_6599;
	{long i; for (i = 24; i < 26; i++) R5468[i] = (char *(*)()) F701_6599;}
	{long i; for (i = 31; i < 50; i++) R5468[i] = (char *(*)()) F701_6599;}
	R5468[300] = (char *(*)()) F701_6599;
}

char *(*R5472[301])();
void R5472_init () {
	R5472[0] = (char *(*)()) F701_6641;
	R5472[1] = (char *(*)()) F702_6641_5472;
	R5472[2] = (char *(*)()) F703_6641_5472;
	R5472[3] = (char *(*)()) F704_6641_5472;
	R5472[4] = (char *(*)()) F705_6641_5472;
	R5472[5] = (char *(*)()) F706_6641_5472;
	R5472[6] = (char *(*)()) F707_6641_5472;
	R5472[7] = (char *(*)()) F708_6641_5472;
	R5472[8] = (char *(*)()) F709_6641_5472;
	R5472[9] = (char *(*)()) F710_6641_5472;
	R5472[10] = (char *(*)()) F711_6641_5472;
	R5472[11] = (char *(*)()) F712_6641_5472;
	R5472[12] = (char *(*)()) F713_6641_5472;
	R5472[13] = (char *(*)()) F714_6641_5472;
	R5472[14] = (char *(*)()) F715_6641_5472;
	R5472[15] = (char *(*)()) F701_6641;
	R5472[16] = (char *(*)()) F710_6641_5472;
	R5472[17] = (char *(*)()) F704_6641_5472;
	R5472[18] = (char *(*)()) F701_6641;
	R5472[19] = (char *(*)()) F704_6641_5472;
	R5472[20] = (char *(*)()) F701_6641;
	R5472[21] = (char *(*)()) F704_6641_5472;
	R5472[22] = (char *(*)()) F701_6641;
	R5472[23] = (char *(*)()) F704_6641_5472;
	{long i; for (i = 24; i < 26; i++) R5472[i] = (char *(*)()) F701_6641;}
	{long i; for (i = 31; i < 50; i++) R5472[i] = (char *(*)()) F701_6641;}
	R5472[300] = (char *(*)()) F701_6641;
}
static void F702_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F702_6641(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F703_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F703_6641(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F704_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F704_6641(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F705_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F705_6641(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F706_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F706_6641(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F707_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F707_6641(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F708_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F708_6641(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F709_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F709_6641(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F710_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F710_6641(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F711_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F711_6641(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F712_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F712_6641(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F713_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F713_6641(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F714_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F714_6641(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F715_6641_5472 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F715_6641(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5484[3])();
void R5484_init () {
	R5484[0] = (char *(*)()) F701_6619;
	R5484[1] = (char *(*)()) F710_6619_5484;
	R5484[2] = (char *(*)()) F704_6619_5484;
}
static void F710_6619_5484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F710_6619(Current, *(EIF_BOOLEAN *)arg1);
}
static void F704_6619_5484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F704_6619(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5485[3])();
void R5485_init () {
	R5485[0] = (char *(*)()) F701_6631;
	R5485[1] = (char *(*)()) F710_6631;
	R5485[2] = (char *(*)()) F704_6631;
}

char *(*R5486[283])();
void R5486_init () {
	R5486[0] = (char *(*)()) F719_6676;
	R5486[1] = (char *(*)()) F720_6676_5486;
	R5486[2] = (char *(*)()) F721_6700;
	R5486[3] = (char *(*)()) F722_6700_5486;
	R5486[4] = (char *(*)()) F723_6705;
	R5486[5] = (char *(*)()) F724_6705_5486;
	R5486[6] = (char *(*)()) F723_6705;
	R5486[7] = (char *(*)()) F726_6714;
	{long i; for (i = 13; i < 32; i++) R5486[i] = (char *(*)()) F726_6714;}
	R5486[282] = (char *(*)()) F1001_12692;
}
static void F720_6676_5486 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F720_6676(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F722_6700_5486 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F722_6700(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F724_6705_5486 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F724_6705(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R5487[283])();
void R5487_init () {
	R5487[0] = (char *(*)()) F719_6677;
	R5487[1] = (char *(*)()) F720_6677_5487;
	R5487[2] = (char *(*)()) F721_6701;
	R5487[3] = (char *(*)()) F722_6701_5487;
	R5487[4] = (char *(*)()) F723_6706;
	R5487[5] = (char *(*)()) F724_6706_5487;
	R5487[6] = (char *(*)()) F723_6706;
	R5487[7] = (char *(*)()) F726_6715;
	{long i; for (i = 13; i < 32; i++) R5487[i] = (char *(*)()) F726_6715;}
	R5487[282] = (char *(*)()) F1001_12693;
}
static void F720_6677_5487 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F720_6677(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F722_6701_5487 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F722_6701(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F724_6706_5487 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F724_6706(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R5491[283])();
void R5491_init () {
	R5491[0] = (char *(*)()) F719_6694;
	R5491[1] = (char *(*)()) F720_6694_5491;
	R5491[2] = (char *(*)()) F719_6694;
	R5491[3] = (char *(*)()) F720_6694_5491;
	R5491[4] = (char *(*)()) F719_6694;
	R5491[5] = (char *(*)()) F720_6694_5491;
	{long i; for (i = 6; i < 8; i++) R5491[i] = (char *(*)()) F719_6694;}
	{long i; for (i = 13; i < 32; i++) R5491[i] = (char *(*)()) F719_6694;}
	R5491[282] = (char *(*)()) F719_6694;
}
static void F720_6694_5491 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F720_6694(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R5492[283])();
void R5492_init () {
	R5492[0] = (char *(*)()) F719_6695;
	R5492[1] = (char *(*)()) F720_6695_5492;
	R5492[2] = (char *(*)()) F719_6695;
	R5492[3] = (char *(*)()) F720_6695_5492;
	R5492[4] = (char *(*)()) F719_6695;
	R5492[5] = (char *(*)()) F720_6695_5492;
	{long i; for (i = 6; i < 8; i++) R5492[i] = (char *(*)()) F719_6695;}
	{long i; for (i = 13; i < 32; i++) R5492[i] = (char *(*)()) F719_6695;}
	R5492[282] = (char *(*)()) F719_6695;
}
static void F720_6695_5492 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F720_6695(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R5500[25])();
void R5500_init () {
	R5500[0] = (char *(*)()) F726_6716;
	R5500[6] = (char *(*)()) F732_6800;
	R5500[7] = (char *(*)()) F733_6801;
	{long i; for (i = 8; i < 25; i++) R5500[i] = (char *(*)()) F732_6800;}
}

char *(*R5669[15])();
void R5669_init () {
	R5669[0] = (char *(*)()) F755_6958;
	R5669[1] = (char *(*)()) F756_6958;
	R5669[2] = (char *(*)()) F757_6958;
	R5669[3] = (char *(*)()) F758_6958;
	R5669[4] = (char *(*)()) F759_6958;
	R5669[5] = (char *(*)()) F760_6958;
	R5669[6] = (char *(*)()) F761_6958;
	R5669[7] = (char *(*)()) F762_6958;
	R5669[8] = (char *(*)()) F763_6958;
	R5669[9] = (char *(*)()) F764_6958;
	R5669[10] = (char *(*)()) F765_6958;
	R5669[11] = (char *(*)()) F766_6958;
	R5669[12] = (char *(*)()) F767_6958;
	R5669[13] = (char *(*)()) F768_6958;
	R5669[14] = (char *(*)()) F769_6958;
}

char *(*R5670[15])();
void R5670_init () {
	R5670[0] = (char *(*)()) F755_6959;
	R5670[1] = (char *(*)()) F756_6959;
	R5670[2] = (char *(*)()) F757_6959;
	R5670[3] = (char *(*)()) F758_6959;
	R5670[4] = (char *(*)()) F759_6959;
	R5670[5] = (char *(*)()) F760_6959;
	R5670[6] = (char *(*)()) F761_6959;
	R5670[7] = (char *(*)()) F762_6959;
	R5670[8] = (char *(*)()) F763_6959;
	R5670[9] = (char *(*)()) F764_6959;
	R5670[10] = (char *(*)()) F765_6959;
	R5670[11] = (char *(*)()) F766_6959;
	R5670[12] = (char *(*)()) F767_6959;
	R5670[13] = (char *(*)()) F768_6959;
	R5670[14] = (char *(*)()) F769_6959;
}

char *(*R5672[15])();
void R5672_init () {
	R5672[0] = (char *(*)()) F755_6945;
	R5672[1] = (char *(*)()) F756_6945;
	R5672[2] = (char *(*)()) F757_6945;
	R5672[3] = (char *(*)()) F758_6945;
	R5672[4] = (char *(*)()) F759_6945;
	R5672[5] = (char *(*)()) F760_6945;
	R5672[6] = (char *(*)()) F761_6945;
	R5672[7] = (char *(*)()) F762_6945;
	R5672[8] = (char *(*)()) F763_6945;
	R5672[9] = (char *(*)()) F764_6945;
	R5672[10] = (char *(*)()) F765_6945;
	R5672[11] = (char *(*)()) F766_6945;
	R5672[12] = (char *(*)()) F767_6945;
	R5672[13] = (char *(*)()) F768_6945;
	R5672[14] = (char *(*)()) F769_6945;
}

char *(*R5673[15])();
void R5673_init () {
	R5673[0] = (char *(*)()) F755_6946;
	R5673[1] = (char *(*)()) F756_6946_5673;
	R5673[2] = (char *(*)()) F757_6946_5673;
	R5673[3] = (char *(*)()) F758_6946_5673;
	R5673[4] = (char *(*)()) F759_6946_5673;
	R5673[5] = (char *(*)()) F760_6946_5673;
	R5673[6] = (char *(*)()) F761_6946_5673;
	R5673[7] = (char *(*)()) F762_6946_5673;
	R5673[8] = (char *(*)()) F763_6946_5673;
	R5673[9] = (char *(*)()) F764_6946_5673;
	R5673[10] = (char *(*)()) F765_6946_5673;
	R5673[11] = (char *(*)()) F766_6946_5673;
	R5673[12] = (char *(*)()) F767_6946_5673;
	R5673[13] = (char *(*)()) F768_6946_5673;
	R5673[14] = (char *(*)()) F769_6946_5673;
}
static void F756_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F756_6946(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F757_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F757_6946(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F758_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F758_6946(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F759_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F759_6946(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F760_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F760_6946(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F761_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_6946(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F762_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_6946(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F763_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_6946(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F764_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_6946(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F765_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_6946(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F766_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_6946(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F767_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_6946(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F768_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_6946(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F769_6946_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_6946(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5675[15])();
void R5675_init () {
	R5675[0] = (char *(*)()) F755_6949;
	R5675[1] = (char *(*)()) F756_6949_5675;
	R5675[2] = (char *(*)()) F757_6949_5675;
	R5675[3] = (char *(*)()) F758_6949_5675;
	R5675[4] = (char *(*)()) F759_6949_5675;
	R5675[5] = (char *(*)()) F760_6949_5675;
	R5675[6] = (char *(*)()) F761_6949_5675;
	R5675[7] = (char *(*)()) F762_6949_5675;
	R5675[8] = (char *(*)()) F763_6949_5675;
	R5675[9] = (char *(*)()) F764_6949_5675;
	R5675[10] = (char *(*)()) F765_6949_5675;
	R5675[11] = (char *(*)()) F766_6949_5675;
	R5675[12] = (char *(*)()) F767_6949_5675;
	R5675[13] = (char *(*)()) F768_6949_5675;
	R5675[14] = (char *(*)()) F769_6949_5675;
}
static EIF_REFERENCE F756_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F756_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F757_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F757_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(865, 865, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F758_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F758_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F759_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F759_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(913, 913, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F760_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F760_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F761_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F761_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(862, 862, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F762_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F762_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(853, 853, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F763_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F763_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(880, 880, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F764_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F764_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F765_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F765_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(871, 871, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F766_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F766_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(850, 850, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F767_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F767_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F768_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F768_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(856, 856, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F769_6949_5675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F769_6949(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(877, 877, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R5682[15])();
void R5682_init () {
	R5682[0] = (char *(*)()) F755_6957;
	R5682[1] = (char *(*)()) F756_6957;
	R5682[2] = (char *(*)()) F757_6957;
	R5682[3] = (char *(*)()) F758_6957;
	R5682[4] = (char *(*)()) F759_6957;
	R5682[5] = (char *(*)()) F760_6957;
	R5682[6] = (char *(*)()) F761_6957;
	R5682[7] = (char *(*)()) F762_6957;
	R5682[8] = (char *(*)()) F763_6957;
	R5682[9] = (char *(*)()) F764_6957;
	R5682[10] = (char *(*)()) F765_6957;
	R5682[11] = (char *(*)()) F766_6957;
	R5682[12] = (char *(*)()) F767_6957;
	R5682[13] = (char *(*)()) F768_6957;
	R5682[14] = (char *(*)()) F769_6957;
}

char *(*R5684[15])();
void R5684_init () {
	R5684[0] = (char *(*)()) F755_6961;
	R5684[1] = (char *(*)()) F756_6961;
	R5684[2] = (char *(*)()) F757_6961;
	R5684[3] = (char *(*)()) F758_6961;
	R5684[4] = (char *(*)()) F759_6961;
	R5684[5] = (char *(*)()) F760_6961;
	R5684[6] = (char *(*)()) F761_6961;
	R5684[7] = (char *(*)()) F762_6961;
	R5684[8] = (char *(*)()) F763_6961;
	R5684[9] = (char *(*)()) F764_6961;
	R5684[10] = (char *(*)()) F765_6961;
	R5684[11] = (char *(*)()) F766_6961;
	R5684[12] = (char *(*)()) F767_6961;
	R5684[13] = (char *(*)()) F768_6961;
	R5684[14] = (char *(*)()) F769_6961;
}

char *(*R5685[15])();
void R5685_init () {
	R5685[0] = (char *(*)()) F755_6963;
	R5685[1] = (char *(*)()) F756_6963_5685;
	R5685[2] = (char *(*)()) F757_6963_5685;
	R5685[3] = (char *(*)()) F758_6963_5685;
	R5685[4] = (char *(*)()) F759_6963_5685;
	R5685[5] = (char *(*)()) F760_6963_5685;
	R5685[6] = (char *(*)()) F761_6963_5685;
	R5685[7] = (char *(*)()) F762_6963_5685;
	R5685[8] = (char *(*)()) F763_6963_5685;
	R5685[9] = (char *(*)()) F764_6963_5685;
	R5685[10] = (char *(*)()) F765_6963_5685;
	R5685[11] = (char *(*)()) F766_6963_5685;
	R5685[12] = (char *(*)()) F767_6963_5685;
	R5685[13] = (char *(*)()) F768_6963_5685;
	R5685[14] = (char *(*)()) F769_6963_5685;
}
static void F756_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F756_6963(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F757_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F757_6963(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F758_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F758_6963(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F759_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F759_6963(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F760_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F760_6963(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F761_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_6963(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F762_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_6963(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F763_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_6963(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F764_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_6963(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F765_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_6963(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F766_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_6963(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F767_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_6963(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F768_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_6963(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F769_6963_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_6963(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5686[15])();
void R5686_init () {
	R5686[0] = (char *(*)()) F755_6964;
	R5686[1] = (char *(*)()) F756_6964_5686;
	R5686[2] = (char *(*)()) F757_6964_5686;
	R5686[3] = (char *(*)()) F758_6964_5686;
	R5686[4] = (char *(*)()) F759_6964_5686;
	R5686[5] = (char *(*)()) F760_6964_5686;
	R5686[6] = (char *(*)()) F761_6964_5686;
	R5686[7] = (char *(*)()) F762_6964_5686;
	R5686[8] = (char *(*)()) F763_6964_5686;
	R5686[9] = (char *(*)()) F764_6964_5686;
	R5686[10] = (char *(*)()) F765_6964_5686;
	R5686[11] = (char *(*)()) F766_6964_5686;
	R5686[12] = (char *(*)()) F767_6964_5686;
	R5686[13] = (char *(*)()) F768_6964_5686;
	R5686[14] = (char *(*)()) F769_6964_5686;
}
static void F756_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F756_6964(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F757_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F757_6964(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F758_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F758_6964(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F759_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F759_6964(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F760_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F760_6964(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F761_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_6964(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F762_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_6964(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F763_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_6964(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F764_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_6964(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F765_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_6964(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F766_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_6964(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F767_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_6964(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F768_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_6964(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F769_6964_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_6964(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5687[15])();
void R5687_init () {
	R5687[0] = (char *(*)()) F755_6965;
	R5687[1] = (char *(*)()) F756_6965_5687;
	R5687[2] = (char *(*)()) F757_6965_5687;
	R5687[3] = (char *(*)()) F758_6965_5687;
	R5687[4] = (char *(*)()) F759_6965_5687;
	R5687[5] = (char *(*)()) F760_6965_5687;
	R5687[6] = (char *(*)()) F761_6965_5687;
	R5687[7] = (char *(*)()) F762_6965_5687;
	R5687[8] = (char *(*)()) F763_6965_5687;
	R5687[9] = (char *(*)()) F764_6965_5687;
	R5687[10] = (char *(*)()) F765_6965_5687;
	R5687[11] = (char *(*)()) F766_6965_5687;
	R5687[12] = (char *(*)()) F767_6965_5687;
	R5687[13] = (char *(*)()) F768_6965_5687;
	R5687[14] = (char *(*)()) F769_6965_5687;
}
static void F756_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F756_6965(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F757_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F757_6965(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F758_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F758_6965(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F759_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F759_6965(Current, *(EIF_POINTER *)arg1);
}
static void F760_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F760_6965(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F761_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F761_6965(Current, *(EIF_REAL_64 *)arg1);
}
static void F762_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F762_6965(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F763_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F763_6965(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F764_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F764_6965(Current, *(EIF_BOOLEAN *)arg1);
}
static void F765_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F765_6965(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F766_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F766_6965(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F767_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F767_6965(Current, *(EIF_REAL_32 *)arg1);
}
static void F768_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F768_6965(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F769_6965_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F769_6965(Current, *(EIF_INTEGER_16 *)arg1);
}

char *(*R5689[15])();
void R5689_init () {
	R5689[0] = (char *(*)()) F755_6967;
	R5689[1] = (char *(*)()) F756_6967_5689;
	R5689[2] = (char *(*)()) F757_6967_5689;
	R5689[3] = (char *(*)()) F758_6967_5689;
	R5689[4] = (char *(*)()) F759_6967_5689;
	R5689[5] = (char *(*)()) F760_6967_5689;
	R5689[6] = (char *(*)()) F761_6967_5689;
	R5689[7] = (char *(*)()) F762_6967_5689;
	R5689[8] = (char *(*)()) F763_6967_5689;
	R5689[9] = (char *(*)()) F764_6967_5689;
	R5689[10] = (char *(*)()) F765_6967_5689;
	R5689[11] = (char *(*)()) F766_6967_5689;
	R5689[12] = (char *(*)()) F767_6967_5689;
	R5689[13] = (char *(*)()) F768_6967_5689;
	R5689[14] = (char *(*)()) F769_6967_5689;
}
static void F756_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F756_6967(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F757_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F757_6967(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F758_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F758_6967(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F759_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F759_6967(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F760_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F760_6967(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F761_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F761_6967(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F762_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F762_6967(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F763_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F763_6967(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F764_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F764_6967(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F765_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F765_6967(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F766_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F766_6967(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F767_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F767_6967(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F768_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F768_6967(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F769_6967_5689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F769_6967(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}

char *(*R5692[15])();
void R5692_init () {
	R5692[0] = (char *(*)()) F755_6970;
	R5692[1] = (char *(*)()) F756_6970;
	R5692[2] = (char *(*)()) F757_6970;
	R5692[3] = (char *(*)()) F758_6970;
	R5692[4] = (char *(*)()) F759_6970;
	R5692[5] = (char *(*)()) F760_6970;
	R5692[6] = (char *(*)()) F761_6970;
	R5692[7] = (char *(*)()) F762_6970;
	R5692[8] = (char *(*)()) F763_6970;
	R5692[9] = (char *(*)()) F764_6970;
	R5692[10] = (char *(*)()) F765_6970;
	R5692[11] = (char *(*)()) F766_6970;
	R5692[12] = (char *(*)()) F767_6970;
	R5692[13] = (char *(*)()) F768_6970;
	R5692[14] = (char *(*)()) F769_6970;
}

char *(*R5693[15])();
void R5693_init () {
	R5693[0] = (char *(*)()) F755_6971;
	R5693[1] = (char *(*)()) F756_6971;
	R5693[2] = (char *(*)()) F757_6971;
	R5693[3] = (char *(*)()) F758_6971;
	R5693[4] = (char *(*)()) F759_6971;
	R5693[5] = (char *(*)()) F760_6971;
	R5693[6] = (char *(*)()) F761_6971;
	R5693[7] = (char *(*)()) F762_6971;
	R5693[8] = (char *(*)()) F763_6971;
	R5693[9] = (char *(*)()) F764_6971;
	R5693[10] = (char *(*)()) F765_6971;
	R5693[11] = (char *(*)()) F766_6971;
	R5693[12] = (char *(*)()) F767_6971;
	R5693[13] = (char *(*)()) F768_6971;
	R5693[14] = (char *(*)()) F769_6971;
}

char *(*R5694[15])();
void R5694_init () {
	R5694[0] = (char *(*)()) F755_6972;
	R5694[1] = (char *(*)()) F756_6972;
	R5694[2] = (char *(*)()) F757_6972;
	R5694[3] = (char *(*)()) F758_6972;
	R5694[4] = (char *(*)()) F759_6972;
	R5694[5] = (char *(*)()) F760_6972;
	R5694[6] = (char *(*)()) F761_6972;
	R5694[7] = (char *(*)()) F762_6972;
	R5694[8] = (char *(*)()) F763_6972;
	R5694[9] = (char *(*)()) F764_6972;
	R5694[10] = (char *(*)()) F765_6972;
	R5694[11] = (char *(*)()) F766_6972;
	R5694[12] = (char *(*)()) F767_6972;
	R5694[13] = (char *(*)()) F768_6972;
	R5694[14] = (char *(*)()) F769_6972;
}

char *(*R5695[15])();
void R5695_init () {
	R5695[0] = (char *(*)()) F755_6973;
	R5695[1] = (char *(*)()) F756_6973;
	R5695[2] = (char *(*)()) F757_6973;
	R5695[3] = (char *(*)()) F758_6973;
	R5695[4] = (char *(*)()) F759_6973;
	R5695[5] = (char *(*)()) F760_6973;
	R5695[6] = (char *(*)()) F761_6973;
	R5695[7] = (char *(*)()) F762_6973;
	R5695[8] = (char *(*)()) F763_6973;
	R5695[9] = (char *(*)()) F764_6973;
	R5695[10] = (char *(*)()) F765_6973;
	R5695[11] = (char *(*)()) F766_6973;
	R5695[12] = (char *(*)()) F767_6973;
	R5695[13] = (char *(*)()) F768_6973;
	R5695[14] = (char *(*)()) F769_6973;
}

char *(*R5696[15])();
void R5696_init () {
	R5696[0] = (char *(*)()) F755_6974;
	R5696[1] = (char *(*)()) F756_6974;
	R5696[2] = (char *(*)()) F757_6974;
	R5696[3] = (char *(*)()) F758_6974;
	R5696[4] = (char *(*)()) F759_6974;
	R5696[5] = (char *(*)()) F760_6974;
	R5696[6] = (char *(*)()) F761_6974;
	R5696[7] = (char *(*)()) F762_6974;
	R5696[8] = (char *(*)()) F763_6974;
	R5696[9] = (char *(*)()) F764_6974;
	R5696[10] = (char *(*)()) F765_6974;
	R5696[11] = (char *(*)()) F766_6974;
	R5696[12] = (char *(*)()) F767_6974;
	R5696[13] = (char *(*)()) F768_6974;
	R5696[14] = (char *(*)()) F769_6974;
}

char *(*R5699[15])();
void R5699_init () {
	R5699[0] = (char *(*)()) F755_6977;
	R5699[1] = (char *(*)()) F756_6977;
	R5699[2] = (char *(*)()) F757_6977;
	R5699[3] = (char *(*)()) F758_6977;
	R5699[4] = (char *(*)()) F759_6977;
	R5699[5] = (char *(*)()) F760_6977;
	R5699[6] = (char *(*)()) F761_6977;
	R5699[7] = (char *(*)()) F762_6977;
	R5699[8] = (char *(*)()) F763_6977;
	R5699[9] = (char *(*)()) F764_6977;
	R5699[10] = (char *(*)()) F765_6977;
	R5699[11] = (char *(*)()) F766_6977;
	R5699[12] = (char *(*)()) F767_6977;
	R5699[13] = (char *(*)()) F768_6977;
	R5699[14] = (char *(*)()) F769_6977;
}

char *(*R5702[15])();
void R5702_init () {
	R5702[0] = (char *(*)()) F755_6980;
	R5702[1] = (char *(*)()) F756_6980;
	R5702[2] = (char *(*)()) F757_6980;
	R5702[3] = (char *(*)()) F758_6980;
	R5702[4] = (char *(*)()) F759_6980;
	R5702[5] = (char *(*)()) F760_6980;
	R5702[6] = (char *(*)()) F761_6980;
	R5702[7] = (char *(*)()) F762_6980;
	R5702[8] = (char *(*)()) F763_6980;
	R5702[9] = (char *(*)()) F764_6980;
	R5702[10] = (char *(*)()) F765_6980;
	R5702[11] = (char *(*)()) F766_6980;
	R5702[12] = (char *(*)()) F767_6980;
	R5702[13] = (char *(*)()) F768_6980;
	R5702[14] = (char *(*)()) F769_6980;
}

char *(*R5703[15])();
void R5703_init () {
	R5703[0] = (char *(*)()) F755_6981;
	R5703[1] = (char *(*)()) F756_6981_5703;
	R5703[2] = (char *(*)()) F757_6981_5703;
	R5703[3] = (char *(*)()) F758_6981_5703;
	R5703[4] = (char *(*)()) F759_6981_5703;
	R5703[5] = (char *(*)()) F760_6981_5703;
	R5703[6] = (char *(*)()) F761_6981_5703;
	R5703[7] = (char *(*)()) F762_6981_5703;
	R5703[8] = (char *(*)()) F763_6981_5703;
	R5703[9] = (char *(*)()) F764_6981_5703;
	R5703[10] = (char *(*)()) F765_6981_5703;
	R5703[11] = (char *(*)()) F766_6981_5703;
	R5703[12] = (char *(*)()) F767_6981_5703;
	R5703[13] = (char *(*)()) F768_6981_5703;
	R5703[14] = (char *(*)()) F769_6981_5703;
}
static EIF_REFERENCE F756_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F756_6981(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F757_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F757_6981(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F758_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F758_6981(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F759_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F759_6981(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F760_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F760_6981(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F761_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F761_6981(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F762_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F762_6981(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F763_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F763_6981(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F764_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F764_6981(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F765_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F765_6981(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F766_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F766_6981(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_REFERENCE F767_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F767_6981(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F768_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F768_6981(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F769_6981_5703 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F769_6981(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5705[15])();
void R5705_init () {
	R5705[0] = (char *(*)()) F755_6983;
	R5705[1] = (char *(*)()) F756_6983;
	R5705[2] = (char *(*)()) F757_6983;
	R5705[3] = (char *(*)()) F758_6983;
	R5705[4] = (char *(*)()) F759_6983;
	R5705[5] = (char *(*)()) F760_6983;
	R5705[6] = (char *(*)()) F761_6983;
	R5705[7] = (char *(*)()) F762_6983;
	R5705[8] = (char *(*)()) F763_6983;
	R5705[9] = (char *(*)()) F764_6983;
	R5705[10] = (char *(*)()) F765_6983;
	R5705[11] = (char *(*)()) F766_6983;
	R5705[12] = (char *(*)()) F767_6983;
	R5705[13] = (char *(*)()) F768_6983;
	R5705[14] = (char *(*)()) F769_6983;
}

char *(*R5714[15])();
void R5714_init () {
	R5714[0] = (char *(*)()) F755_6993;
	R5714[1] = (char *(*)()) F756_6993;
	R5714[2] = (char *(*)()) F757_6993;
	R5714[3] = (char *(*)()) F758_6993;
	R5714[4] = (char *(*)()) F759_6993;
	R5714[5] = (char *(*)()) F760_6993;
	R5714[6] = (char *(*)()) F761_6993;
	R5714[7] = (char *(*)()) F762_6993;
	R5714[8] = (char *(*)()) F763_6993;
	R5714[9] = (char *(*)()) F764_6993;
	R5714[10] = (char *(*)()) F765_6993;
	R5714[11] = (char *(*)()) F766_6993;
	R5714[12] = (char *(*)()) F767_6993;
	R5714[13] = (char *(*)()) F768_6993;
	R5714[14] = (char *(*)()) F769_6993;
}

char *(*R5724[36])();
void R5724_init () {
	R5724[0] = (char *(*)()) F843_8709;
	R5724[1] = (char *(*)()) F844_8759_5724;
	R5724[2] = (char *(*)()) F845_8759_5724;
	R5724[3] = (char *(*)()) F846_8820;
	R5724[4] = (char *(*)()) F847_8838_5724;
	R5724[5] = (char *(*)()) F848_8838_5724;
	R5724[12] = (char *(*)()) F855_8949;
	R5724[13] = (char *(*)()) F856_8998_5724;
	R5724[14] = (char *(*)()) F857_8998_5724;
	R5724[18] = (char *(*)()) F861_9080;
	R5724[19] = (char *(*)()) F862_9098_5724;
	R5724[20] = (char *(*)()) F863_9098_5724;
	R5724[30] = (char *(*)()) F873_9395;
	R5724[31] = (char *(*)()) F874_9445_5724;
	R5724[32] = (char *(*)()) F875_9445_5724;
	R5724[33] = (char *(*)()) F876_9490;
	R5724[34] = (char *(*)()) F877_9540_5724;
	R5724[35] = (char *(*)()) F878_9540_5724;
}
static EIF_REFERENCE F844_8759_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F844_8759(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F845_8759_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F845_8759(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_8838_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F847_8838(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_8838_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F848_8838(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F856_8998_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F856_8998(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(856, 856, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F857_8998_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F857_8998(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(856, 856, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F862_9098_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F862_9098(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(862, 862, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F863_9098_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F863_9098(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(862, 862, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_9445_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F874_9445(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F875_9445_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F875_9445(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_9540_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F877_9540(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(877, 877, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_9540_5724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F878_9540(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(877, 877, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R6232[421])();
void R6232_init () {
	{long i; for (i = 0; i < 3; i++) R6232[i] = (char *(*)()) F785_7705;}
	R6232[420] = (char *(*)()) F1205_17245;
}

char *(*R6245[421])();
void R6245_init () {
	{long i; for (i = 0; i < 3; i++) R6245[i] = (char *(*)()) F785_7778;}
	R6245[420] = (char *(*)()) F1205_17267;
}

char *(*R6247[421])();
void R6247_init () {
	{long i; for (i = 0; i < 3; i++) R6247[i] = (char *(*)()) F785_7781;}
	R6247[420] = (char *(*)()) F1205_17265;
}

char *(*R6271[421])();
void R6271_init () {
	{long i; for (i = 0; i < 3; i++) R6271[i] = (char *(*)()) F785_7809;}
	R6271[420] = (char *(*)()) F1205_17262;
}

char *(*R6335[421])();
void R6335_init () {
	{long i; for (i = 0; i < 3; i++) R6335[i] = (char *(*)()) F785_7704;}
	R6335[420] = (char *(*)()) F1205_17244;
}

char *(*R6418[421])();
void R6418_init () {
	R6418[0] = (char *(*)()) F785_7839;
	R6418[1] = (char *(*)()) F786_7937;
	R6418[2] = (char *(*)()) F785_7839;
	R6418[420] = (char *(*)()) F785_7839;
}

char *(*R6421[421])();
void R6421_init () {
	{long i; for (i = 0; i < 3; i++) R6421[i] = (char *(*)()) F785_7842;}
	R6421[420] = (char *(*)()) F1205_17299;
}

char *(*R6859[144])();
void R6859_init () {
	R6859[0] = (char *(*)()) F795_8449;
	R6859[1] = (char *(*)()) F796_8490;
	R6859[2] = (char *(*)()) F797_8490;
	R6859[3] = (char *(*)()) F798_8490;
	R6859[4] = (char *(*)()) F799_8490;
	R6859[5] = (char *(*)()) F800_8490;
	R6859[6] = (char *(*)()) F801_8490;
	R6859[7] = (char *(*)()) F802_8490;
	R6859[8] = (char *(*)()) F803_8490;
	R6859[9] = (char *(*)()) F804_8490;
	R6859[10] = (char *(*)()) F805_8490;
	R6859[11] = (char *(*)()) F806_8490;
	R6859[12] = (char *(*)()) F807_8490;
	R6859[13] = (char *(*)()) F808_8490;
	R6859[14] = (char *(*)()) F809_8490;
	R6859[15] = (char *(*)()) F810_8490;
	R6859[16] = (char *(*)()) F811_8490;
	R6859[17] = (char *(*)()) F812_8490;
	R6859[18] = (char *(*)()) F813_8490;
	R6859[19] = (char *(*)()) F814_8490;
	R6859[20] = (char *(*)()) F815_8490;
	R6859[21] = (char *(*)()) F816_8490;
	R6859[22] = (char *(*)()) F817_8490;
	R6859[23] = (char *(*)()) F818_8490;
	R6859[24] = (char *(*)()) F819_8490;
	R6859[25] = (char *(*)()) F820_8490;
	R6859[26] = (char *(*)()) F821_8490;
	R6859[27] = (char *(*)()) F822_8490;
	R6859[28] = (char *(*)()) F823_8490;
	R6859[29] = (char *(*)()) F824_8490;
	R6859[30] = (char *(*)()) F825_8490;
	R6859[31] = (char *(*)()) F826_8490;
	R6859[32] = (char *(*)()) F827_8490;
	R6859[33] = (char *(*)()) F828_8490;
	R6859[34] = (char *(*)()) F829_8490;
	R6859[35] = (char *(*)()) F830_8490;
	R6859[36] = (char *(*)()) F831_8490;
	R6859[37] = (char *(*)()) F832_8490;
	R6859[38] = (char *(*)()) F833_8490;
	R6859[39] = (char *(*)()) F834_8490;
	R6859[40] = (char *(*)()) F835_8490;
	R6859[41] = (char *(*)()) F836_8490;
	R6859[42] = (char *(*)()) F837_8490;
	R6859[43] = (char *(*)()) F838_8490;
	R6859[44] = (char *(*)()) F839_8490;
	R6859[45] = (char *(*)()) F840_8490;
	R6859[46] = (char *(*)()) F841_8490;
	R6859[47] = (char *(*)()) F842_8539;
	{long i; for (i = 48; i < 51; i++) R6859[i] = (char *(*)()) F843_8687;}
	{long i; for (i = 51; i < 54; i++) R6859[i] = (char *(*)()) F846_8782;}
	{long i; for (i = 54; i < 57; i++) R6859[i] = (char *(*)()) F849_8842;}
	{long i; for (i = 57; i < 60; i++) R6859[i] = (char *(*)()) F852_8882;}
	{long i; for (i = 60; i < 63; i++) R6859[i] = (char *(*)()) F855_8927;}
	{long i; for (i = 63; i < 66; i++) R6859[i] = (char *(*)()) F858_9021;}
	{long i; for (i = 66; i < 69; i++) R6859[i] = (char *(*)()) F861_9042;}
	{long i; for (i = 69; i < 72; i++) R6859[i] = (char *(*)()) F864_9101;}
	{long i; for (i = 72; i < 75; i++) R6859[i] = (char *(*)()) F867_9192;}
	{long i; for (i = 75; i < 78; i++) R6859[i] = (char *(*)()) F870_9282;}
	{long i; for (i = 78; i < 81; i++) R6859[i] = (char *(*)()) F873_9373;}
	{long i; for (i = 81; i < 84; i++) R6859[i] = (char *(*)()) F876_9468;}
	{long i; for (i = 84; i < 87; i++) R6859[i] = (char *(*)()) F879_9563;}
	{long i; for (i = 87; i < 118; i++) R6859[i] = (char *(*)()) F882_9653;}
	R6859[118] = (char *(*)()) F913_9679;
	R6859[119] = (char *(*)()) F914_9679;
	{long i; for (i = 120; i < 125; i++) R6859[i] = (char *(*)()) F915_9687;}
	{long i; for (i = 125; i < 135; i++) R6859[i] = (char *(*)()) F920_10244;}
	R6859[143] = (char *(*)()) F938_10918;
}

char *(*R6917[46])();
void R6917_init () {
	R6917[0] = (char *(*)()) F796_8487;
	R6917[1] = (char *(*)()) F797_8487;
	R6917[2] = (char *(*)()) F798_8487;
	R6917[3] = (char *(*)()) F799_8487;
	R6917[4] = (char *(*)()) F800_8487;
	R6917[5] = (char *(*)()) F801_8487;
	R6917[6] = (char *(*)()) F802_8487;
	R6917[7] = (char *(*)()) F803_8487;
	R6917[8] = (char *(*)()) F804_8487;
	R6917[9] = (char *(*)()) F805_8487;
	R6917[10] = (char *(*)()) F806_8487;
	R6917[11] = (char *(*)()) F807_8487;
	R6917[12] = (char *(*)()) F808_8487;
	R6917[13] = (char *(*)()) F809_8487;
	R6917[14] = (char *(*)()) F810_8487;
	R6917[15] = (char *(*)()) F811_8487;
	R6917[16] = (char *(*)()) F812_8487;
	R6917[17] = (char *(*)()) F813_8487;
	R6917[18] = (char *(*)()) F814_8487;
	R6917[19] = (char *(*)()) F815_8487;
	R6917[20] = (char *(*)()) F816_8487;
	R6917[21] = (char *(*)()) F817_8487;
	R6917[22] = (char *(*)()) F818_8487;
	R6917[23] = (char *(*)()) F819_8487;
	R6917[24] = (char *(*)()) F820_8487;
	R6917[25] = (char *(*)()) F821_8487;
	R6917[26] = (char *(*)()) F822_8487;
	R6917[27] = (char *(*)()) F823_8487;
	R6917[28] = (char *(*)()) F824_8487;
	R6917[29] = (char *(*)()) F825_8487;
	R6917[30] = (char *(*)()) F826_8487;
	R6917[31] = (char *(*)()) F827_8487;
	R6917[32] = (char *(*)()) F828_8487;
	R6917[33] = (char *(*)()) F829_8487;
	R6917[34] = (char *(*)()) F830_8487;
	R6917[35] = (char *(*)()) F831_8487;
	R6917[36] = (char *(*)()) F832_8487;
	R6917[37] = (char *(*)()) F833_8487;
	R6917[38] = (char *(*)()) F834_8487;
	R6917[39] = (char *(*)()) F835_8487;
	R6917[40] = (char *(*)()) F836_8487;
	R6917[41] = (char *(*)()) F837_8487;
	R6917[42] = (char *(*)()) F838_8487;
	R6917[43] = (char *(*)()) F839_8487;
	R6917[44] = (char *(*)()) F840_8487;
	R6917[45] = (char *(*)()) F841_8487;
}

char *(*R6918[46])();
void R6918_init () {
	R6918[0] = (char *(*)()) F796_8488;
	R6918[1] = (char *(*)()) F797_8488;
	R6918[2] = (char *(*)()) F798_8488;
	R6918[3] = (char *(*)()) F799_8488;
	R6918[4] = (char *(*)()) F800_8488;
	R6918[5] = (char *(*)()) F801_8488;
	R6918[6] = (char *(*)()) F802_8488;
	R6918[7] = (char *(*)()) F803_8488;
	R6918[8] = (char *(*)()) F804_8488;
	R6918[9] = (char *(*)()) F805_8488;
	R6918[10] = (char *(*)()) F806_8488;
	R6918[11] = (char *(*)()) F807_8488;
	R6918[12] = (char *(*)()) F808_8488;
	R6918[13] = (char *(*)()) F809_8488;
	R6918[14] = (char *(*)()) F810_8488;
	R6918[15] = (char *(*)()) F811_8488;
	R6918[16] = (char *(*)()) F812_8488;
	R6918[17] = (char *(*)()) F813_8488;
	R6918[18] = (char *(*)()) F814_8488;
	R6918[19] = (char *(*)()) F815_8488;
	R6918[20] = (char *(*)()) F816_8488;
	R6918[21] = (char *(*)()) F817_8488;
	R6918[22] = (char *(*)()) F818_8488;
	R6918[23] = (char *(*)()) F819_8488;
	R6918[24] = (char *(*)()) F820_8488;
	R6918[25] = (char *(*)()) F821_8488;
	R6918[26] = (char *(*)()) F822_8488;
	R6918[27] = (char *(*)()) F823_8488;
	R6918[28] = (char *(*)()) F824_8488;
	R6918[29] = (char *(*)()) F825_8488;
	R6918[30] = (char *(*)()) F826_8488;
	R6918[31] = (char *(*)()) F827_8488;
	R6918[32] = (char *(*)()) F828_8488;
	R6918[33] = (char *(*)()) F829_8488;
	R6918[34] = (char *(*)()) F830_8488;
	R6918[35] = (char *(*)()) F831_8488;
	R6918[36] = (char *(*)()) F832_8488;
	R6918[37] = (char *(*)()) F833_8488;
	R6918[38] = (char *(*)()) F834_8488;
	R6918[39] = (char *(*)()) F835_8488;
	R6918[40] = (char *(*)()) F836_8488;
	R6918[41] = (char *(*)()) F837_8488;
	R6918[42] = (char *(*)()) F838_8488;
	R6918[43] = (char *(*)()) F839_8488;
	R6918[44] = (char *(*)()) F840_8488;
	R6918[45] = (char *(*)()) F841_8488;
}

char *(*R6919[46])();
void R6919_init () {
	R6919[0] = (char *(*)()) F796_8489;
	R6919[1] = (char *(*)()) F797_8489;
	R6919[2] = (char *(*)()) F798_8489;
	R6919[3] = (char *(*)()) F799_8489;
	R6919[4] = (char *(*)()) F800_8489;
	R6919[5] = (char *(*)()) F801_8489;
	R6919[6] = (char *(*)()) F802_8489;
	R6919[7] = (char *(*)()) F803_8489;
	R6919[8] = (char *(*)()) F804_8489;
	R6919[9] = (char *(*)()) F805_8489;
	R6919[10] = (char *(*)()) F806_8489;
	R6919[11] = (char *(*)()) F807_8489;
	R6919[12] = (char *(*)()) F808_8489;
	R6919[13] = (char *(*)()) F809_8489;
	R6919[14] = (char *(*)()) F810_8489;
	R6919[15] = (char *(*)()) F811_8489;
	R6919[16] = (char *(*)()) F812_8489;
	R6919[17] = (char *(*)()) F813_8489;
	R6919[18] = (char *(*)()) F814_8489;
	R6919[19] = (char *(*)()) F815_8489;
	R6919[20] = (char *(*)()) F816_8489;
	R6919[21] = (char *(*)()) F817_8489;
	R6919[22] = (char *(*)()) F818_8489;
	R6919[23] = (char *(*)()) F819_8489;
	R6919[24] = (char *(*)()) F820_8489;
	R6919[25] = (char *(*)()) F821_8489;
	R6919[26] = (char *(*)()) F822_8489;
	R6919[27] = (char *(*)()) F823_8489;
	R6919[28] = (char *(*)()) F824_8489;
	R6919[29] = (char *(*)()) F825_8489;
	R6919[30] = (char *(*)()) F826_8489;
	R6919[31] = (char *(*)()) F827_8489;
	R6919[32] = (char *(*)()) F828_8489;
	R6919[33] = (char *(*)()) F829_8489;
	R6919[34] = (char *(*)()) F830_8489;
	R6919[35] = (char *(*)()) F831_8489;
	R6919[36] = (char *(*)()) F832_8489;
	R6919[37] = (char *(*)()) F833_8489;
	R6919[38] = (char *(*)()) F834_8489;
	R6919[39] = (char *(*)()) F835_8489;
	R6919[40] = (char *(*)()) F836_8489;
	R6919[41] = (char *(*)()) F837_8489;
	R6919[42] = (char *(*)()) F838_8489;
	R6919[43] = (char *(*)()) F839_8489;
	R6919[44] = (char *(*)()) F840_8489;
	R6919[45] = (char *(*)()) F841_8489;
}

char *(*R6923[46])();
void R6923_init () {
	R6923[0] = (char *(*)()) F796_8494;
	R6923[1] = (char *(*)()) F797_8494;
	R6923[2] = (char *(*)()) F798_8494;
	R6923[3] = (char *(*)()) F799_8494;
	R6923[4] = (char *(*)()) F800_8494;
	R6923[5] = (char *(*)()) F801_8494;
	R6923[6] = (char *(*)()) F802_8494;
	R6923[7] = (char *(*)()) F803_8494;
	R6923[8] = (char *(*)()) F804_8494;
	R6923[9] = (char *(*)()) F805_8494;
	R6923[10] = (char *(*)()) F806_8494;
	R6923[11] = (char *(*)()) F807_8494;
	R6923[12] = (char *(*)()) F808_8494;
	R6923[13] = (char *(*)()) F809_8494;
	R6923[14] = (char *(*)()) F810_8494;
	R6923[15] = (char *(*)()) F811_8494;
	R6923[16] = (char *(*)()) F812_8494;
	R6923[17] = (char *(*)()) F813_8494;
	R6923[18] = (char *(*)()) F814_8494;
	R6923[19] = (char *(*)()) F815_8494;
	R6923[20] = (char *(*)()) F816_8494;
	R6923[21] = (char *(*)()) F817_8494;
	R6923[22] = (char *(*)()) F818_8494;
	R6923[23] = (char *(*)()) F819_8494;
	R6923[24] = (char *(*)()) F820_8494;
	R6923[25] = (char *(*)()) F821_8494;
	R6923[26] = (char *(*)()) F822_8494;
	R6923[27] = (char *(*)()) F823_8494;
	R6923[28] = (char *(*)()) F824_8494;
	R6923[29] = (char *(*)()) F825_8494;
	R6923[30] = (char *(*)()) F826_8494;
	R6923[31] = (char *(*)()) F827_8494;
	R6923[32] = (char *(*)()) F828_8494;
	R6923[33] = (char *(*)()) F829_8494;
	R6923[34] = (char *(*)()) F830_8494;
	R6923[35] = (char *(*)()) F831_8494;
	R6923[36] = (char *(*)()) F832_8494;
	R6923[37] = (char *(*)()) F833_8494;
	R6923[38] = (char *(*)()) F834_8494;
	R6923[39] = (char *(*)()) F835_8494;
	R6923[40] = (char *(*)()) F836_8494;
	R6923[41] = (char *(*)()) F837_8494;
	R6923[42] = (char *(*)()) F838_8494;
	R6923[43] = (char *(*)()) F839_8494;
	R6923[44] = (char *(*)()) F840_8494;
	R6923[45] = (char *(*)()) F841_8494;
}

char *(*R6927[46])();
void R6927_init () {
	R6927[0] = (char *(*)()) F796_8501;
	R6927[1] = (char *(*)()) F797_8501_6927;
	R6927[2] = (char *(*)()) F798_8501;
	R6927[3] = (char *(*)()) F799_8501_6927;
	R6927[4] = (char *(*)()) F800_8501;
	R6927[5] = (char *(*)()) F801_8501_6927;
	R6927[6] = (char *(*)()) F802_8501;
	R6927[7] = (char *(*)()) F803_8501_6927;
	R6927[8] = (char *(*)()) F804_8501;
	R6927[9] = (char *(*)()) F805_8501_6927;
	R6927[10] = (char *(*)()) F806_8501;
	R6927[11] = (char *(*)()) F807_8501_6927;
	R6927[12] = (char *(*)()) F808_8501;
	R6927[13] = (char *(*)()) F809_8501_6927;
	R6927[14] = (char *(*)()) F810_8501;
	R6927[15] = (char *(*)()) F811_8501_6927;
	R6927[16] = (char *(*)()) F812_8501;
	R6927[17] = (char *(*)()) F813_8501_6927;
	R6927[18] = (char *(*)()) F814_8501;
	R6927[19] = (char *(*)()) F815_8501_6927;
	R6927[20] = (char *(*)()) F816_8501;
	R6927[21] = (char *(*)()) F817_8501_6927;
	R6927[22] = (char *(*)()) F818_8501;
	R6927[23] = (char *(*)()) F819_8501_6927;
	R6927[24] = (char *(*)()) F820_8501_6927;
	R6927[25] = (char *(*)()) F821_8501_6927;
	R6927[26] = (char *(*)()) F822_8501;
	R6927[27] = (char *(*)()) F823_8501_6927;
	R6927[28] = (char *(*)()) F824_8501_6927;
	R6927[29] = (char *(*)()) F825_8501_6927;
	R6927[30] = (char *(*)()) F826_8501_6927;
	R6927[31] = (char *(*)()) F827_8501;
	R6927[32] = (char *(*)()) F828_8501_6927;
	R6927[33] = (char *(*)()) F829_8501_6927;
	R6927[34] = (char *(*)()) F830_8501_6927;
	R6927[35] = (char *(*)()) F831_8501_6927;
	R6927[36] = (char *(*)()) F832_8501_6927;
	R6927[37] = (char *(*)()) F833_8501_6927;
	R6927[38] = (char *(*)()) F834_8501;
	R6927[39] = (char *(*)()) F835_8501_6927;
	R6927[40] = (char *(*)()) F836_8501_6927;
	R6927[41] = (char *(*)()) F837_8501;
	R6927[42] = (char *(*)()) F838_8501_6927;
	R6927[43] = (char *(*)()) F839_8501;
	R6927[44] = (char *(*)()) F840_8501_6927;
	R6927[45] = (char *(*)()) F841_8501_6927;
}
static EIF_REFERENCE F797_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F797_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {883,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 883, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F799_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F799_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(844, 844, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F801_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F801_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(865, 865, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F803_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F803_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(874, 874, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F805_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F805_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(913, 913, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F807_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F807_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(868, 868, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F809_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F809_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(862, 862, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F811_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F811_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {885,844,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 885, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F813_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F813_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(853, 853, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F815_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F815_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(880, 880, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F817_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F817_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F819_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(871, 871, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F820_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F820_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {887,871,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 887, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F821_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F821_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {889,862,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 889, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F823_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F823_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {891,877,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 891, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F824_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F824_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {893,850,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 893, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F825_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F825_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {895,853,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 895, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F826_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {897,913,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 897, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F828_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(850, 850, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F829_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {899,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 899, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F830_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {901,880,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 901, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F831_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {903,868,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 903, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F832_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F832_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {905,865,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 905, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F833_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F833_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {907,859,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 907, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F835_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F835_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(847, 847, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F836_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F836_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {909,847,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 909, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F838_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F838_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(856, 856, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F840_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F840_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(877, 877, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F841_8501_6927 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F841_8501(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {911,856,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0, 911, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}

char *(*R6936[46])();
void R6936_init () {
	R6936[0] = (char *(*)()) F796_8512;
	R6936[1] = (char *(*)()) F797_8512;
	R6936[2] = (char *(*)()) F798_8512;
	R6936[3] = (char *(*)()) F799_8512;
	R6936[4] = (char *(*)()) F800_8512;
	R6936[5] = (char *(*)()) F801_8512;
	R6936[6] = (char *(*)()) F802_8512;
	R6936[7] = (char *(*)()) F803_8512;
	R6936[8] = (char *(*)()) F804_8512;
	R6936[9] = (char *(*)()) F805_8512;
	R6936[10] = (char *(*)()) F806_8512;
	R6936[11] = (char *(*)()) F807_8512;
	R6936[12] = (char *(*)()) F808_8512;
	R6936[13] = (char *(*)()) F809_8512;
	R6936[14] = (char *(*)()) F810_8512;
	R6936[15] = (char *(*)()) F811_8512;
	R6936[16] = (char *(*)()) F812_8512;
	R6936[17] = (char *(*)()) F813_8512;
	R6936[18] = (char *(*)()) F814_8512;
	R6936[19] = (char *(*)()) F815_8512;
	R6936[20] = (char *(*)()) F816_8512;
	R6936[21] = (char *(*)()) F817_8512;
	R6936[22] = (char *(*)()) F818_8512;
	R6936[23] = (char *(*)()) F819_8512;
	R6936[24] = (char *(*)()) F820_8512;
	R6936[25] = (char *(*)()) F821_8512;
	R6936[26] = (char *(*)()) F822_8512;
	R6936[27] = (char *(*)()) F823_8512;
	R6936[28] = (char *(*)()) F824_8512;
	R6936[29] = (char *(*)()) F825_8512;
	R6936[30] = (char *(*)()) F826_8512;
	R6936[31] = (char *(*)()) F827_8512;
	R6936[32] = (char *(*)()) F828_8512;
	R6936[33] = (char *(*)()) F829_8512;
	R6936[34] = (char *(*)()) F830_8512;
	R6936[35] = (char *(*)()) F831_8512;
	R6936[36] = (char *(*)()) F832_8512;
	R6936[37] = (char *(*)()) F833_8512;
	R6936[38] = (char *(*)()) F834_8512;
	R6936[39] = (char *(*)()) F835_8512;
	R6936[40] = (char *(*)()) F836_8512;
	R6936[41] = (char *(*)()) F837_8512;
	R6936[42] = (char *(*)()) F838_8512;
	R6936[43] = (char *(*)()) F839_8512;
	R6936[44] = (char *(*)()) F840_8512;
	R6936[45] = (char *(*)()) F841_8512;
}

char *(*R7125[3])();
void R7125_init () {
	R7125[0] = (char *(*)()) F843_8720;
	R7125[1] = (char *(*)()) F844_8766;
	R7125[2] = (char *(*)()) F845_8766;
}

char *(*R7128[3])();
void R7128_init () {
	R7128[0] = (char *(*)()) F843_8723;
	R7128[1] = (char *(*)()) F844_8769;
	R7128[2] = (char *(*)()) F845_8769;
}

char *(*R7172[3])();
void R7172_init () {
	R7172[0] = (char *(*)()) F846_8804;
	R7172[1] = (char *(*)()) F847_8827;
	R7172[2] = (char *(*)()) F848_8827;
}

char *(*R7179[3])();
void R7179_init () {
	R7179[0] = (char *(*)()) F846_8811;
	R7179[1] = (char *(*)()) F847_8831;
	R7179[2] = (char *(*)()) F848_8831;
}

char *(*R7186[3])();
void R7186_init () {
	R7186[0] = (char *(*)()) F849_8843;
	R7186[1] = (char *(*)()) F850_8877;
	R7186[2] = (char *(*)()) F851_8877;
}

char *(*R7276[3])();
void R7276_init () {
	R7276[0] = (char *(*)()) F855_8959;
	R7276[1] = (char *(*)()) F856_9005;
	R7276[2] = (char *(*)()) F857_9005;
}

char *(*R7279[3])();
void R7279_init () {
	R7279[0] = (char *(*)()) F855_8962;
	R7279[1] = (char *(*)()) F856_9008;
	R7279[2] = (char *(*)()) F857_9008;
}

char *(*R7335[3])();
void R7335_init () {
	R7335[0] = (char *(*)()) F861_9064;
	R7335[1] = (char *(*)()) F862_9087;
	R7335[2] = (char *(*)()) F863_9087;
}

char *(*R7364[3])();
void R7364_init () {
	R7364[0] = (char *(*)()) F864_9131;
	R7364[1] = (char *(*)()) F865_9174;
	R7364[2] = (char *(*)()) F866_9174;
}

char *(*R7365[3])();
void R7365_init () {
	R7365[0] = (char *(*)()) F864_9132;
	R7365[1] = (char *(*)()) F865_9175;
	R7365[2] = (char *(*)()) F866_9175;
}

char *(*R7366[3])();
void R7366_init () {
	R7366[0] = (char *(*)()) F864_9133;
	R7366[1] = (char *(*)()) F865_9176;
	R7366[2] = (char *(*)()) F866_9176;
}

char *(*R7369[3])();
void R7369_init () {
	R7369[0] = (char *(*)()) F864_9136;
	R7369[1] = (char *(*)()) F865_9179;
	R7369[2] = (char *(*)()) F866_9179;
}

char *(*R7411[3])();
void R7411_init () {
	R7411[0] = (char *(*)()) F867_9220;
	R7411[1] = (char *(*)()) F868_9263;
	R7411[2] = (char *(*)()) F869_9263;
}

char *(*R7412[3])();
void R7412_init () {
	R7412[0] = (char *(*)()) F867_9221;
	R7412[1] = (char *(*)()) F868_9264;
	R7412[2] = (char *(*)()) F869_9264;
}

char *(*R7414[3])();
void R7414_init () {
	R7414[0] = (char *(*)()) F867_9223;
	R7414[1] = (char *(*)()) F868_9266;
	R7414[2] = (char *(*)()) F869_9266;
}

char *(*R7417[3])();
void R7417_init () {
	R7417[0] = (char *(*)()) F867_9226;
	R7417[1] = (char *(*)()) F868_9269;
	R7417[2] = (char *(*)()) F869_9269;
}

char *(*R7418[3])();
void R7418_init () {
	R7418[0] = (char *(*)()) F867_9227;
	R7418[1] = (char *(*)()) F868_9270;
	R7418[2] = (char *(*)()) F869_9270;
}

char *(*R7462[3])();
void R7462_init () {
	R7462[0] = (char *(*)()) F870_9313;
	R7462[1] = (char *(*)()) F871_9356;
	R7462[2] = (char *(*)()) F872_9356;
}

char *(*R7463[3])();
void R7463_init () {
	R7463[0] = (char *(*)()) F870_9314;
	R7463[1] = (char *(*)()) F871_9357;
	R7463[2] = (char *(*)()) F872_9357;
}

char *(*R7466[3])();
void R7466_init () {
	R7466[0] = (char *(*)()) F870_9317;
	R7466[1] = (char *(*)()) F871_9360;
	R7466[2] = (char *(*)()) F872_9360;
}

char *(*R7510[3])();
void R7510_init () {
	R7510[0] = (char *(*)()) F873_9403;
	R7510[1] = (char *(*)()) F874_9449;
	R7510[2] = (char *(*)()) F875_9449;
}

char *(*R7511[3])();
void R7511_init () {
	R7511[0] = (char *(*)()) F873_9404;
	R7511[1] = (char *(*)()) F874_9450;
	R7511[2] = (char *(*)()) F875_9450;
}

char *(*R7512[3])();
void R7512_init () {
	R7512[0] = (char *(*)()) F873_9405;
	R7512[1] = (char *(*)()) F874_9451;
	R7512[2] = (char *(*)()) F875_9451;
}

char *(*R7513[3])();
void R7513_init () {
	R7513[0] = (char *(*)()) F873_9406;
	R7513[1] = (char *(*)()) F874_9452;
	R7513[2] = (char *(*)()) F875_9452;
}

char *(*R7514[3])();
void R7514_init () {
	R7514[0] = (char *(*)()) F873_9407;
	R7514[1] = (char *(*)()) F874_9453;
	R7514[2] = (char *(*)()) F875_9453;
}

char *(*R7515[3])();
void R7515_init () {
	R7515[0] = (char *(*)()) F873_9408;
	R7515[1] = (char *(*)()) F874_9454;
	R7515[2] = (char *(*)()) F875_9454;
}

char *(*R7517[3])();
void R7517_init () {
	R7517[0] = (char *(*)()) F873_9410;
	R7517[1] = (char *(*)()) F874_9456;
	R7517[2] = (char *(*)()) F875_9456;
}

char *(*R7565[3])();
void R7565_init () {
	R7565[0] = (char *(*)()) F876_9501;
	R7565[1] = (char *(*)()) F877_9547;
	R7565[2] = (char *(*)()) F878_9547;
}

char *(*R7568[3])();
void R7568_init () {
	R7568[0] = (char *(*)()) F876_9504;
	R7568[1] = (char *(*)()) F877_9550;
	R7568[2] = (char *(*)()) F878_9550;
}

char *(*R7618[3])();
void R7618_init () {
	R7618[0] = (char *(*)()) F879_9597;
	R7618[1] = (char *(*)()) F880_9640;
	R7618[2] = (char *(*)()) F881_9640;
}

char *(*R7682[4])();
void R7682_init () {
	R7682[0] = (char *(*)()) F916_9724;
	R7682[1] = (char *(*)()) F917_9727;
	{long i; for (i = 2; i < 4; i++) R7682[i] = (char *(*)()) F918_9727;}
}

char *(*R7708[3])();
void R7708_init () {
	R7708[0] = (char *(*)()) F917_9726;
	{long i; for (i = 1; i < 3; i++) R7708[i] = (char *(*)()) F918_9726_7708;}
}
static EIF_REFERENCE F918_9726_7708 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F918_9726(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R7709[3])();
void R7709_init () {
	R7709[0] = (char *(*)()) F917_9728;
	{long i; for (i = 1; i < 3; i++) R7709[i] = (char *(*)()) F918_9728_7709;}
}
static EIF_REFERENCE F918_9728_7709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F918_9728(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R7711[3])();
void R7711_init () {
	R7711[0] = (char *(*)()) F917_9733;
	{long i; for (i = 1; i < 3; i++) R7711[i] = (char *(*)()) F918_9733;}
}

char *(*R7713[3])();
void R7713_init () {
	R7713[0] = (char *(*)()) F917_9735;
	{long i; for (i = 1; i < 3; i++) R7713[i] = (char *(*)()) F918_9735_7713;}
}
static EIF_REFERENCE F918_9735_7713 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F918_9735(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(859, 859, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

static EIF_TYPE_INDEX Y7714_pgtype0[] = {0xFFF8,3,0xFFFF};
static EIF_TYPE_INDEX Y7714_pgtype1[] = {0xFFF8,3,0xFFFF};
static EIF_TYPE_INDEX Y7714_pgtype2[] = {859,0xFFFF};
EIF_TYPE_INDEX *Y7714_gen_type [3];
EIF_TYPE_INDEX Y7714 [3];
void Y7714_init (void)
{
	egc_routines_types [7714] = Y7714;
	egc_routines_gen_types [7714] = Y7714_gen_type;
	egc_routines_offset [7714] = 916;
	Y7714_gen_type [0] = Y7714_pgtype0;
	Y7714_gen_type [1] = Y7714_pgtype1;
	Y7714_gen_type [2] = Y7714_pgtype2;
	Y7714[2] = 859;
}

char *(*R8006[9])();
void R8006_init () {
	R8006[0] = (char *(*)()) F921_10330;
	{long i; for (i = 2; i < 4; i++) R8006[i] = (char *(*)()) F921_10330;}
	{long i; for (i = 4; i < 6; i++) R8006[i] = (char *(*)()) F925_10552;}
	R8006[7] = (char *(*)()) F921_10330;
	R8006[8] = (char *(*)()) F925_10552;
}

char *(*R8008[7])();
void R8008_init () {
	{long i; for (i = 0; i < 2; i++) R8008[i] = (char *(*)()) F923_10403;}
	R8008[3] = (char *(*)()) F926_10611;
	R8008[5] = (char *(*)()) F928_10701;
	R8008[6] = (char *(*)()) F929_10722;
}

char *(*R8009[7])();
void R8009_init () {
	{long i; for (i = 0; i < 2; i++) R8009[i] = (char *(*)()) F923_10402;}
	R8009[3] = (char *(*)()) F926_10609;
	R8009[5] = (char *(*)()) F928_10700;
	R8009[6] = (char *(*)()) F929_10720;
}

char *(*R8010[10])();
void R8010_init () {
	{long i; for (i = 0; i < 5; i++) R8010[i] = (char *(*)()) F920_10238;}
	{long i; for (i = 5; i < 7; i++) R8010[i] = (char *(*)()) F925_10564;}
	{long i; for (i = 7; i < 9; i++) R8010[i] = (char *(*)()) F920_10238;}
	R8010[9] = (char *(*)()) F925_10564;
}

char *(*R8020[9])();
void R8020_init () {
	R8020[0] = (char *(*)()) F921_10358;
	{long i; for (i = 2; i < 4; i++) R8020[i] = (char *(*)()) F921_10358;}
	{long i; for (i = 4; i < 6; i++) R8020[i] = (char *(*)()) F925_10581;}
	R8020[7] = (char *(*)()) F921_10358;
	R8020[8] = (char *(*)()) F925_10581;
}

char *(*R8023[7])();
void R8023_init () {
	{long i; for (i = 0; i < 2; i++) R8023[i] = (char *(*)()) F414_5127;}
	R8023[3] = (char *(*)()) F418_5127;
	R8023[5] = (char *(*)()) F928_10709;
	R8023[6] = (char *(*)()) F929_10731;
}

char *(*R8026[10])();
void R8026_init () {
	{long i; for (i = 0; i < 5; i++) R8026[i] = (char *(*)()) F920_10255;}
	{long i; for (i = 5; i < 7; i++) R8026[i] = (char *(*)()) F925_10585;}
	{long i; for (i = 7; i < 9; i++) R8026[i] = (char *(*)()) F920_10255;}
	R8026[9] = (char *(*)()) F925_10585;
}

char *(*R8045[9])();
void R8045_init () {
	R8045[0] = (char *(*)()) F921_10349;
	{long i; for (i = 2; i < 4; i++) R8045[i] = (char *(*)()) F921_10349;}
	{long i; for (i = 4; i < 6; i++) R8045[i] = (char *(*)()) F925_10572;}
	R8045[7] = (char *(*)()) F921_10349;
	R8045[8] = (char *(*)()) F925_10572;
}

char *(*R8046[9])();
void R8046_init () {
	R8046[0] = (char *(*)()) F921_10348;
	{long i; for (i = 2; i < 4; i++) R8046[i] = (char *(*)()) F921_10348;}
	{long i; for (i = 4; i < 6; i++) R8046[i] = (char *(*)()) F925_10571;}
	R8046[7] = (char *(*)()) F921_10348;
	R8046[8] = (char *(*)()) F925_10571;
}

char *(*R8086[7])();
void R8086_init () {
	{long i; for (i = 0; i < 2; i++) R8086[i] = (char *(*)()) F923_10481;}
	R8086[3] = (char *(*)()) F926_10689;
	R8086[5] = (char *(*)()) F928_10707;
	R8086[6] = (char *(*)()) F929_10728;
}

char *(*R8090[7])();
void R8090_init () {
	{long i; for (i = 0; i < 2; i++) R8090[i] = (char *(*)()) F923_10484;}
	R8090[3] = (char *(*)()) F926_10692;
	R8090[5] = (char *(*)()) F928_10711;
	R8090[6] = (char *(*)()) F929_10732;
}

char *(*R8129[8])();
void R8129_init () {
	R8129[0] = (char *(*)()) F921_10378;
	{long i; for (i = 2; i < 4; i++) R8129[i] = (char *(*)()) F921_10378;}
	R8129[7] = (char *(*)()) F928_10713;
}

char *(*R8132[4])();
void R8132_init () {
	{long i; for (i = 0; i < 2; i++) R8132[i] = (char *(*)()) F923_10423;}
	R8132[3] = (char *(*)()) F926_10631;
}

char *(*R8133[4])();
void R8133_init () {
	{long i; for (i = 0; i < 2; i++) R8133[i] = (char *(*)()) F923_10483;}
	R8133[3] = (char *(*)()) F926_10691;
}

char *(*R8146[4])();
void R8146_init () {
	{long i; for (i = 0; i < 2; i++) R8146[i] = (char *(*)()) F923_10466;}
	R8146[3] = (char *(*)()) F926_10674;
}

char *(*R8270[5])();
void R8270_init () {
	{long i; for (i = 0; i < 2; i++) R8270[i] = (char *(*)()) F925_10601;}
	R8270[4] = (char *(*)()) F929_10734;
}

char *(*R8347[98])();
void R8347_init () {
	R8347[0] = (char *(*)()) F931_10768;
	R8347[1] = (char *(*)()) F932_10781;
	R8347[2] = (char *(*)()) F933_10805;
	R8347[3] = (char *(*)()) F934_10815;
	R8347[4] = (char *(*)()) F935_10835;
	R8347[5] = (char *(*)()) F936_10849;
	R8347[6] = (char *(*)()) F937_10878;
	R8347[7] = (char *(*)()) F938_10925;
	R8347[8] = (char *(*)()) F939_10956;
	R8347[9] = (char *(*)()) F940_10970;
	R8347[10] = (char *(*)()) F941_10994;
	{long i; for (i = 15; i < 17; i++) R8347[i] = (char *(*)()) F946_11048;}
	R8347[31] = (char *(*)()) F962_11319;
	R8347[32] = (char *(*)()) F963_11337;
	R8347[40] = (char *(*)()) F971_11839;
	R8347[41] = (char *(*)()) F972_11860;
	R8347[43] = (char *(*)()) F974_11876;
	R8347[44] = (char *(*)()) F975_11943;
	R8347[45] = (char *(*)()) F976_12022;
	R8347[46] = (char *(*)()) F977_12030;
	R8347[47] = (char *(*)()) F978_12287;
	R8347[48] = (char *(*)()) F979_12300;
	R8347[49] = (char *(*)()) F980_12353;
	R8347[50] = (char *(*)()) F981_12361;
	R8347[51] = (char *(*)()) F982_12376;
	{long i; for (i = 52; i < 56; i++) R8347[i] = (char *(*)()) F983_12391;}
	R8347[57] = (char *(*)()) F988_12447;
	R8347[58] = (char *(*)()) F989_12458;
	{long i; for (i = 59; i < 61; i++) R8347[i] = (char *(*)()) F990_12507;}
	R8347[62] = (char *(*)()) F993_12565;
	R8347[63] = (char *(*)()) F994_12598;
	R8347[64] = (char *(*)()) F995_12603;
	R8347[65] = (char *(*)()) F996_12619;
	R8347[66] = (char *(*)()) F997_12630;
	R8347[69] = (char *(*)()) F1000_12687;
	R8347[70] = (char *(*)()) F1001_12694;
	R8347[72] = (char *(*)()) F1003_12713;
	R8347[73] = (char *(*)()) F1004_12723;
	R8347[74] = (char *(*)()) F1005_12731;
	R8347[75] = (char *(*)()) F1006_12739;
	R8347[76] = (char *(*)()) F1007_12742;
	R8347[77] = (char *(*)()) F1008_12745;
	R8347[78] = (char *(*)()) F1009_12747;
	R8347[80] = (char *(*)()) F1011_12765;
	R8347[81] = (char *(*)()) F1012_12769;
	R8347[82] = (char *(*)()) F1013_12814;
	R8347[85] = (char *(*)()) F1016_12850;
	R8347[86] = (char *(*)()) F1017_12902;
	R8347[88] = (char *(*)()) F1019_12970;
	R8347[90] = (char *(*)()) F1021_13007;
	R8347[92] = (char *(*)()) F1023_13025;
	R8347[93] = (char *(*)()) F1024_13032;
	R8347[95] = (char *(*)()) F1026_13044;
	R8347[96] = (char *(*)()) F1027_13051;
	R8347[97] = (char *(*)()) F1028_13059;
}

char *(*R8348[98])();
void R8348_init () {
	R8348[0] = (char *(*)()) F931_10767;
	R8348[1] = (char *(*)()) F932_10780;
	R8348[2] = (char *(*)()) F933_10804;
	R8348[3] = (char *(*)()) F934_10814;
	R8348[4] = (char *(*)()) F935_10834;
	R8348[5] = (char *(*)()) F936_10848;
	R8348[6] = (char *(*)()) F937_10877;
	R8348[7] = (char *(*)()) F938_10924;
	R8348[8] = (char *(*)()) F939_10955;
	R8348[9] = (char *(*)()) F940_10969;
	R8348[10] = (char *(*)()) F941_10993;
	{long i; for (i = 15; i < 17; i++) R8348[i] = (char *(*)()) F946_11047;}
	R8348[31] = (char *(*)()) F962_11318;
	R8348[32] = (char *(*)()) F963_11336;
	R8348[33] = (char *(*)()) F792_8141;
	{long i; for (i = 37; i < 54; i++) R8348[i] = (char *(*)()) F792_8141;}
	{long i; for (i = 54; i < 56; i++) R8348[i] = (char *(*)()) F985_12402;}
	{long i; for (i = 56; i < 79; i++) R8348[i] = (char *(*)()) F792_8141;}
	{long i; for (i = 79; i < 84; i++) R8348[i] = (char *(*)()) F1010_12756;}
	{long i; for (i = 85; i < 87; i++) R8348[i] = (char *(*)()) F792_8141;}
	{long i; for (i = 88; i < 94; i++) R8348[i] = (char *(*)()) F792_8141;}
	R8348[95] = (char *(*)()) F1026_13043;
	R8348[96] = (char *(*)()) F792_8141;
	R8348[97] = (char *(*)()) F1028_13058;
}

char *(*R8349[99])();
void R8349_init () {
	{long i; for (i = 0; i < 11; i++) R8349[i] = (char *(*)()) F930_10745;}
	R8349[11] = (char *(*)()) F941_10972;
	{long i; for (i = 12; i < 16; i++) R8349[i] = (char *(*)()) F930_10745;}
	{long i; for (i = 16; i < 18; i++) R8349[i] = (char *(*)()) F946_11012;}
	{long i; for (i = 18; i < 50; i++) R8349[i] = (char *(*)()) F930_10745;}
	{long i; for (i = 50; i < 52; i++) R8349[i] = (char *(*)()) F980_12322;}
	R8349[52] = (char *(*)()) F982_12362;
	{long i; for (i = 53; i < 55; i++) R8349[i] = (char *(*)()) F983_12377;}
	R8349[55] = (char *(*)()) F985_12403;
	R8349[56] = (char *(*)()) F986_12435;
	{long i; for (i = 57; i < 99; i++) R8349[i] = (char *(*)()) F930_10745;}
}

char *(*R8536[60])();
void R8536_init () {
	{long i; for (i = 0; i < 31; i++) R8536[i] = (char *(*)()) F968_11571;}
	{long i; for (i = 31; i < 34; i++) R8536[i] = (char *(*)()) F999_12677;}
	{long i; for (i = 34; i < 36; i++) R8536[i] = (char *(*)()) F1002_12711;}
	{long i; for (i = 36; i < 38; i++) R8536[i] = (char *(*)()) F1004_12714;}
	{long i; for (i = 38; i < 42; i++) R8536[i] = (char *(*)()) F999_12677;}
	{long i; for (i = 48; i < 50; i++) R8536[i] = (char *(*)()) F968_11571;}
	R8536[51] = (char *(*)()) F968_11571;
	{long i; for (i = 52; i < 54; i++) R8536[i] = (char *(*)()) F1020_12977;}
	{long i; for (i = 54; i < 57; i++) R8536[i] = (char *(*)()) F968_11571;}
	R8536[58] = (char *(*)()) F1026_13041;
	R8536[59] = (char *(*)()) F1027_13045;
}

char *(*R8608[77])();
void R8608_init () {
	R8608[0] = (char *(*)()) F948_11075;
	{long i; for (i = 13; i < 16; i++) R8608[i] = (char *(*)()) F948_11075;}
	{long i; for (i = 20; i < 37; i++) R8608[i] = (char *(*)()) F948_11075;}
	{long i; for (i = 37; i < 39; i++) R8608[i] = (char *(*)()) F985_12410;}
	{long i; for (i = 39; i < 51; i++) R8608[i] = (char *(*)()) F948_11075;}
	{long i; for (i = 68; i < 70; i++) R8608[i] = (char *(*)()) F948_11075;}
	R8608[71] = (char *(*)()) F948_11075;
	{long i; for (i = 74; i < 77; i++) R8608[i] = (char *(*)()) F948_11075;}
}

char *(*R8609[77])();
void R8609_init () {
	R8609[0] = (char *(*)()) F948_11076;
	{long i; for (i = 13; i < 16; i++) R8609[i] = (char *(*)()) F948_11076;}
	{long i; for (i = 20; i < 37; i++) R8609[i] = (char *(*)()) F948_11076;}
	{long i; for (i = 37; i < 39; i++) R8609[i] = (char *(*)()) F985_12409;}
	{long i; for (i = 39; i < 51; i++) R8609[i] = (char *(*)()) F948_11076;}
	{long i; for (i = 68; i < 70; i++) R8609[i] = (char *(*)()) F948_11076;}
	R8609[71] = (char *(*)()) F948_11076;
	{long i; for (i = 74; i < 77; i++) R8609[i] = (char *(*)()) F948_11076;}
}

char *(*R9021[18])();
void R9021_init () {
	R9021[0] = (char *(*)()) F969_11611;
	{long i; for (i = 1; i < 7; i++) R9021[i] = (char *(*)()) F966_11536;}
	{long i; for (i = 7; i < 18; i++) R9021[i] = (char *(*)()) F969_11611;}
}

char *(*R9024[17])();
void R9024_init () {
	{long i; for (i = 0; i < 6; i++) R9024[i] = (char *(*)()) F966_11545;}
	{long i; for (i = 6; i < 17; i++) R9024[i] = (char *(*)()) F976_12018;}
}

char *(*R10146[175])();
void R10146_init () {
	{long i; for (i = 0; i < 2; i++) R10146[i] = (char *(*)()) F1030_13104;}
	R10146[3] = (char *(*)()) F1033_13146;
	R10146[5] = (char *(*)()) F1035_13231;
	R10146[7] = (char *(*)()) F1037_13253;
	R10146[10] = (char *(*)()) F1040_13302;
	R10146[12] = (char *(*)()) F1042_13318;
	R10146[15] = (char *(*)()) F1045_13394;
	R10146[17] = (char *(*)()) F1047_13431;
	R10146[19] = (char *(*)()) F1049_13614;
	R10146[21] = (char *(*)()) F1051_13714;
	R10146[23] = (char *(*)()) F1053_13763;
	{long i; for (i = 49; i < 53; i++) R10146[i] = (char *(*)()) F1079_14137;}
	R10146[62] = (char *(*)()) F1092_14292;
	R10146[64] = (char *(*)()) F1079_14137;
	R10146[66] = (char *(*)()) F1096_14516;
	R10146[68] = (char *(*)()) F1098_14670;
	{long i; for (i = 75; i < 81; i++) R10146[i] = (char *(*)()) F1098_14670;}
	{long i; for (i = 89; i < 93; i++) R10146[i] = (char *(*)()) F1098_14670;}
	{long i; for (i = 93; i < 97; i++) R10146[i] = (char *(*)()) F1123_15434;}
	{long i; for (i = 112; i < 115; i++) R10146[i] = (char *(*)()) F1096_14516;}
	R10146[115] = (char *(*)()) F1145_15802;
	{long i; for (i = 116; i < 127; i++) R10146[i] = (char *(*)()) F1096_14516;}
	R10146[130] = (char *(*)()) F1160_16377;
	R10146[132] = (char *(*)()) F1162_16395;
	R10146[134] = (char *(*)()) F1162_16395;
	{long i; for (i = 135; i < 137; i++) R10146[i] = (char *(*)()) F1165_16459;}
	{long i; for (i = 142; i < 144; i++) R10146[i] = (char *(*)()) F1165_16459;}
	R10146[144] = (char *(*)()) F1174_16508;
	{long i; for (i = 145; i < 147; i++) R10146[i] = (char *(*)()) F1165_16459;}
	R10146[148] = (char *(*)()) F1178_16546;
	{long i; for (i = 151; i < 153; i++) R10146[i] = (char *(*)()) F1165_16459;}
	{long i; for (i = 158; i < 163; i++) R10146[i] = (char *(*)()) F1079_14137;}
	R10146[169] = (char *(*)()) F1199_17096;
	R10146[170] = (char *(*)()) F1200_17135;
	R10146[171] = (char *(*)()) F1201_17186;
	R10146[172] = (char *(*)()) F1202_17220;
	R10146[174] = (char *(*)()) F1204_17239;
}

char *(*R10217[2])();
void R10217_init () {
	R10217[0] = (char *(*)()) F1034_13158;
	R10217[1] = (char *(*)()) F1035_13195;
}

char *(*R10458[2])();
void R10458_init () {
	R10458[0] = (char *(*)()) F1048_13492;
	R10458[1] = (char *(*)()) F1049_13556;
}

char *(*R10479[2])();
void R10479_init () {
	R10479[0] = (char *(*)()) F1048_13514;
	R10479[1] = (char *(*)()) F1049_13571;
}

char *(*R10632[2])();
void R10632_init () {
	R10632[0] = (char *(*)()) F1050_13684;
	R10632[1] = (char *(*)()) F1051_13712;
}

char *(*R10679[123])();
void R10679_init () {
	R10679[0] = (char *(*)()) F1080_14154;
	R10679[14] = (char *(*)()) F1081_14167;
	R10679[16] = (char *(*)()) F1081_14167;
	R10679[18] = (char *(*)()) F1081_14167;
	{long i; for (i = 25; i < 31; i++) R10679[i] = (char *(*)()) F1081_14167;}
	{long i; for (i = 39; i < 43; i++) R10679[i] = (char *(*)()) F1081_14167;}
	{long i; for (i = 43; i < 47; i++) R10679[i] = (char *(*)()) F1082_14214;}
	{long i; for (i = 62; i < 77; i++) R10679[i] = (char *(*)()) F1081_14167;}
	R10679[80] = (char *(*)()) F1160_16370;
	R10679[82] = (char *(*)()) F1162_16402;
	R10679[84] = (char *(*)()) F1162_16402;
	{long i; for (i = 85; i < 87; i++) R10679[i] = (char *(*)()) F1081_14167;}
	{long i; for (i = 92; i < 97; i++) R10679[i] = (char *(*)()) F1081_14167;}
	R10679[98] = (char *(*)()) F1178_16565;
	{long i; for (i = 101; i < 103; i++) R10679[i] = (char *(*)()) F1081_14167;}
	{long i; for (i = 108; i < 113; i++) R10679[i] = (char *(*)()) F1082_14214;}
	R10679[120] = (char *(*)()) F1081_14167;
	R10679[122] = (char *(*)()) F1081_14167;
}

char *(*R10680[123])();
void R10680_init () {
	R10680[0] = (char *(*)()) F1080_14155;
	R10680[14] = (char *(*)()) F1081_14168;
	R10680[16] = (char *(*)()) F1081_14168;
	R10680[18] = (char *(*)()) F1081_14168;
	{long i; for (i = 25; i < 31; i++) R10680[i] = (char *(*)()) F1081_14168;}
	{long i; for (i = 39; i < 43; i++) R10680[i] = (char *(*)()) F1081_14168;}
	{long i; for (i = 43; i < 47; i++) R10680[i] = (char *(*)()) F1082_14216;}
	{long i; for (i = 62; i < 77; i++) R10680[i] = (char *(*)()) F1081_14168;}
	R10680[80] = (char *(*)()) F1160_16371;
	R10680[82] = (char *(*)()) F1162_16403;
	R10680[84] = (char *(*)()) F1162_16403;
	{long i; for (i = 85; i < 87; i++) R10680[i] = (char *(*)()) F1081_14168;}
	{long i; for (i = 92; i < 97; i++) R10680[i] = (char *(*)()) F1081_14168;}
	R10680[98] = (char *(*)()) F1178_16566;
	{long i; for (i = 101; i < 103; i++) R10680[i] = (char *(*)()) F1081_14168;}
	{long i; for (i = 108; i < 113; i++) R10680[i] = (char *(*)()) F1082_14216;}
	R10680[120] = (char *(*)()) F1081_14168;
	R10680[122] = (char *(*)()) F1081_14168;
}

char *(*R10681[123])();
void R10681_init () {
	R10681[0] = (char *(*)()) F1080_14156;
	R10681[14] = (char *(*)()) F1081_14187;
	R10681[16] = (char *(*)()) F1081_14187;
	R10681[18] = (char *(*)()) F1081_14187;
	{long i; for (i = 25; i < 31; i++) R10681[i] = (char *(*)()) F1081_14187;}
	{long i; for (i = 39; i < 43; i++) R10681[i] = (char *(*)()) F1081_14187;}
	{long i; for (i = 43; i < 47; i++) R10681[i] = (char *(*)()) F1082_14207;}
	{long i; for (i = 62; i < 77; i++) R10681[i] = (char *(*)()) F1081_14187;}
	R10681[80] = (char *(*)()) F1160_16372;
	R10681[82] = (char *(*)()) F1162_16404;
	R10681[84] = (char *(*)()) F1162_16404;
	{long i; for (i = 85; i < 87; i++) R10681[i] = (char *(*)()) F1081_14187;}
	{long i; for (i = 92; i < 97; i++) R10681[i] = (char *(*)()) F1081_14187;}
	R10681[98] = (char *(*)()) F1178_16567;
	{long i; for (i = 101; i < 103; i++) R10681[i] = (char *(*)()) F1081_14187;}
	{long i; for (i = 108; i < 113; i++) R10681[i] = (char *(*)()) F1082_14207;}
	R10681[120] = (char *(*)()) F1081_14187;
	R10681[122] = (char *(*)()) F1202_17199;
}

char *(*R10682[123])();
void R10682_init () {
	R10682[0] = (char *(*)()) F1080_14157;
	R10682[14] = (char *(*)()) F1081_14188;
	R10682[16] = (char *(*)()) F1081_14188;
	R10682[18] = (char *(*)()) F1081_14188;
	{long i; for (i = 25; i < 31; i++) R10682[i] = (char *(*)()) F1081_14188;}
	{long i; for (i = 39; i < 43; i++) R10682[i] = (char *(*)()) F1081_14188;}
	{long i; for (i = 43; i < 47; i++) R10682[i] = (char *(*)()) F1082_14208;}
	{long i; for (i = 62; i < 77; i++) R10682[i] = (char *(*)()) F1081_14188;}
	R10682[80] = (char *(*)()) F1160_16373;
	R10682[82] = (char *(*)()) F1162_16405;
	R10682[84] = (char *(*)()) F1162_16405;
	{long i; for (i = 85; i < 87; i++) R10682[i] = (char *(*)()) F1081_14188;}
	{long i; for (i = 92; i < 97; i++) R10682[i] = (char *(*)()) F1081_14188;}
	R10682[98] = (char *(*)()) F1178_16568;
	{long i; for (i = 101; i < 103; i++) R10682[i] = (char *(*)()) F1081_14188;}
	{long i; for (i = 108; i < 113; i++) R10682[i] = (char *(*)()) F1082_14208;}
	R10682[120] = (char *(*)()) F1081_14188;
	R10682[122] = (char *(*)()) F1202_17200;
}

char *(*R10683[123])();
void R10683_init () {
	R10683[0] = (char *(*)()) F1080_14158;
	R10683[14] = (char *(*)()) F1081_14174;
	R10683[16] = (char *(*)()) F1081_14174;
	R10683[18] = (char *(*)()) F1081_14174;
	{long i; for (i = 25; i < 31; i++) R10683[i] = (char *(*)()) F1081_14174;}
	{long i; for (i = 39; i < 47; i++) R10683[i] = (char *(*)()) F1081_14174;}
	{long i; for (i = 62; i < 77; i++) R10683[i] = (char *(*)()) F1081_14174;}
	R10683[80] = (char *(*)()) F1160_16374;
	R10683[82] = (char *(*)()) F1162_16406;
	R10683[84] = (char *(*)()) F1162_16406;
	{long i; for (i = 85; i < 87; i++) R10683[i] = (char *(*)()) F1081_14174;}
	{long i; for (i = 92; i < 97; i++) R10683[i] = (char *(*)()) F1081_14174;}
	R10683[98] = (char *(*)()) F1178_16569;
	{long i; for (i = 101; i < 103; i++) R10683[i] = (char *(*)()) F1081_14174;}
	{long i; for (i = 108; i < 113; i++) R10683[i] = (char *(*)()) F1081_14174;}
	R10683[120] = (char *(*)()) F1081_14174;
	R10683[122] = (char *(*)()) F1081_14174;
}

char *(*R10696[117])();
void R10696_init () {
	R10696[0] = (char *(*)()) F1058_13826;
	{long i; for (i = 5; i < 7; i++) R10696[i] = (char *(*)()) F1058_13826;}
	R10696[22] = (char *(*)()) F1058_13826;
	{long i; for (i = 47; i < 53; i++) R10696[i] = (char *(*)()) F1058_13826;}
	R10696[86] = (char *(*)()) F1058_13826;
	R10696[87] = (char *(*)()) F1145_15796;
	{long i; for (i = 88; i < 91; i++) R10696[i] = (char *(*)()) F1058_13826;}
	R10696[95] = (char *(*)()) F1058_13826;
	R10696[104] = (char *(*)()) F1058_13826;
	R10696[106] = (char *(*)()) F1058_13826;
	R10696[116] = (char *(*)()) F1058_13826;
}

char *(*R10701[117])();
void R10701_init () {
	R10701[0] = (char *(*)()) F1058_13827;
	{long i; for (i = 5; i < 7; i++) R10701[i] = (char *(*)()) F1058_13827;}
	R10701[22] = (char *(*)()) F1058_13827;
	{long i; for (i = 47; i < 53; i++) R10701[i] = (char *(*)()) F1058_13827;}
	R10701[86] = (char *(*)()) F1058_13827;
	R10701[87] = (char *(*)()) F1145_15795;
	{long i; for (i = 88; i < 91; i++) R10701[i] = (char *(*)()) F1058_13827;}
	R10701[95] = (char *(*)()) F1058_13827;
	R10701[104] = (char *(*)()) F1058_13827;
	R10701[106] = (char *(*)()) F1058_13827;
	R10701[116] = (char *(*)()) F1058_13827;
}

char *(*R10712[118])();
void R10712_init () {
	{long i; for (i = 0; i < 8; i++) R10712[i] = (char *(*)()) F1057_13810;}
	R10712[23] = (char *(*)()) F1057_13810;
	{long i; for (i = 42; i < 49; i++) R10712[i] = (char *(*)()) F1057_13810;}
	R10712[49] = (char *(*)()) F1106_14787;
	{long i; for (i = 50; i < 54; i++) R10712[i] = (char *(*)()) F1057_13810;}
	R10712[71] = (char *(*)()) F1057_13810;
	{long i; for (i = 73; i < 75; i++) R10712[i] = (char *(*)()) F1057_13810;}
	{long i; for (i = 81; i < 84; i++) R10712[i] = (char *(*)()) F1057_13810;}
	{long i; for (i = 87; i < 92; i++) R10712[i] = (char *(*)()) F1057_13810;}
	R10712[96] = (char *(*)()) F1057_13810;
	{long i; for (i = 104; i < 108; i++) R10712[i] = (char *(*)()) F1057_13810;}
	R10712[112] = (char *(*)()) F1057_13810;
	R10712[117] = (char *(*)()) F1057_13810;
}

char *(*R10723[118])();
void R10723_init () {
	{long i; for (i = 0; i < 8; i++) R10723[i] = (char *(*)()) F1057_13821;}
	R10723[23] = (char *(*)()) F1057_13821;
	{long i; for (i = 42; i < 54; i++) R10723[i] = (char *(*)()) F1057_13821;}
	R10723[71] = (char *(*)()) F1057_13821;
	{long i; for (i = 73; i < 75; i++) R10723[i] = (char *(*)()) F1057_13821;}
	{long i; for (i = 81; i < 84; i++) R10723[i] = (char *(*)()) F1057_13821;}
	R10723[87] = (char *(*)()) F1057_13821;
	R10723[88] = (char *(*)()) F1145_15815;
	{long i; for (i = 89; i < 92; i++) R10723[i] = (char *(*)()) F1057_13821;}
	R10723[96] = (char *(*)()) F1057_13821;
	{long i; for (i = 104; i < 108; i++) R10723[i] = (char *(*)()) F1057_13821;}
	R10723[112] = (char *(*)()) F1057_13821;
	R10723[117] = (char *(*)()) F1057_13821;
}

char *(*R10724[111])();
void R10724_init () {
	R10724[0] = (char *(*)()) F1064_13843;
	R10724[16] = (char *(*)()) F1064_13843;
	{long i; for (i = 41; i < 47; i++) R10724[i] = (char *(*)()) F1105_14769;}
	R10724[80] = (char *(*)()) F1144_15770;
	R10724[81] = (char *(*)()) F1145_15840;
	R10724[82] = (char *(*)()) F1146_15901;
	{long i; for (i = 83; i < 85; i++) R10724[i] = (char *(*)()) F1147_15948;}
	R10724[89] = (char *(*)()) F1153_16164;
	R10724[98] = (char *(*)()) F1162_16449;
	R10724[100] = (char *(*)()) F1162_16449;
	R10724[110] = (char *(*)()) F1064_13843;
}

char *(*R10725[111])();
void R10725_init () {
	R10725[0] = (char *(*)()) F1064_13847;
	R10725[16] = (char *(*)()) F1064_13847;
	R10725[41] = (char *(*)()) F1105_14770;
	R10725[42] = (char *(*)()) F1106_14786;
	{long i; for (i = 43; i < 47; i++) R10725[i] = (char *(*)()) F1105_14770;}
	R10725[80] = (char *(*)()) F1144_15771;
	R10725[81] = (char *(*)()) F1145_15841;
	R10725[82] = (char *(*)()) F1146_15902;
	{long i; for (i = 83; i < 85; i++) R10725[i] = (char *(*)()) F1147_15951;}
	R10725[89] = (char *(*)()) F1147_15951;
	R10725[98] = (char *(*)()) F1162_16450;
	R10725[100] = (char *(*)()) F1162_16450;
	R10725[110] = (char *(*)()) F1064_13847;
}

static EIF_TYPE_INDEX Y10726_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype3[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype4[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype5[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype7[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype8[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype9[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype10[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype11[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype12[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype13[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype14[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype15[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype16[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype17[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype18[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype19[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype20[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype21[] = {1001,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype22[] = {1000,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype23[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype24[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype25[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype26[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype27[] = {1001,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype28[] = {1000,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype29[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype30[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype31[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype32[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype33[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype34[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype35[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype36[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype37[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y10726_pgtype38[] = {1005,0xFFFF};
EIF_TYPE_INDEX *Y10726_gen_type [118];
EIF_TYPE_INDEX Y10726 [118];
void Y10726_init (void)
{
	egc_routines_types [10726] = Y10726;
	egc_routines_gen_types [10726] = Y10726_gen_type;
	egc_routines_offset [10726] = 1056;
	Y10726_gen_type [0] = Y10726_pgtype0;
	Y10726_gen_type [1] = Y10726_pgtype1;
	Y10726_gen_type [2] = Y10726_pgtype2;
	Y10726_gen_type [3] = Y10726_pgtype3;
	Y10726_gen_type [4] = Y10726_pgtype4;
	Y10726_gen_type [5] = Y10726_pgtype5;
	Y10726_gen_type [6] = Y10726_pgtype6;
	Y10726_gen_type [7] = Y10726_pgtype7;
	Y10726_gen_type [23] = Y10726_pgtype8;
	Y10726_gen_type [42] = Y10726_pgtype9;
	Y10726_gen_type [43] = Y10726_pgtype10;
	Y10726_gen_type [44] = Y10726_pgtype11;
	Y10726_gen_type [45] = Y10726_pgtype12;
	Y10726_gen_type [46] = Y10726_pgtype13;
	Y10726_gen_type [47] = Y10726_pgtype14;
	Y10726_gen_type [48] = Y10726_pgtype15;
	Y10726_gen_type [49] = Y10726_pgtype16;
	Y10726_gen_type [50] = Y10726_pgtype17;
	Y10726_gen_type [51] = Y10726_pgtype18;
	Y10726_gen_type [52] = Y10726_pgtype19;
	Y10726_gen_type [53] = Y10726_pgtype20;
	Y10726_gen_type [71] = Y10726_pgtype21;
	Y10726_gen_type [73] = Y10726_pgtype22;
	Y10726_gen_type [74] = Y10726_pgtype23;
	Y10726_gen_type [81] = Y10726_pgtype24;
	Y10726_gen_type [82] = Y10726_pgtype25;
	Y10726_gen_type [83] = Y10726_pgtype26;
	Y10726_gen_type [87] = Y10726_pgtype27;
	Y10726_gen_type [88] = Y10726_pgtype28;
	Y10726_gen_type [89] = Y10726_pgtype29;
	Y10726_gen_type [90] = Y10726_pgtype30;
	Y10726_gen_type [91] = Y10726_pgtype31;
	Y10726_gen_type [96] = Y10726_pgtype32;
	Y10726_gen_type [104] = Y10726_pgtype33;
	Y10726_gen_type [105] = Y10726_pgtype34;
	Y10726_gen_type [106] = Y10726_pgtype35;
	Y10726_gen_type [107] = Y10726_pgtype36;
	Y10726_gen_type [112] = Y10726_pgtype37;
	Y10726_gen_type [117] = Y10726_pgtype38;
	{long i; for (i = 3; i < 5; i++) Y10726[i] = 1005;};
	Y10726[5] = 1019;
	Y10726[7] = 1005;
	Y10726[23] = 1005;
	{long i; for (i = 42; i < 54; i++) Y10726[i] = 967;};
	Y10726[71] = 1001;
	Y10726[73] = 1000;
	Y10726[74] = 1019;
	{long i; for (i = 81; i < 84; i++) Y10726[i] = 999;};
	Y10726[87] = 1001;
	Y10726[88] = 1000;
	Y10726[89] = 1019;
	{long i; for (i = 90; i < 92; i++) Y10726[i] = 999;};
	Y10726[96] = 999;
	{long i; for (i = 104; i < 108; i++) Y10726[i] = 1019;};
	Y10726[112] = 1005;
	Y10726[117] = 1005;
}

char *(*R10735[111])();
void R10735_init () {
	R10735[0] = (char *(*)()) F1064_13842;
	R10735[16] = (char *(*)()) F1064_13842;
	R10735[110] = (char *(*)()) F1174_16507;
}

char *(*R10747[137])();
void R10747_init () {
	R10747[0] = (char *(*)()) F1066_13864;
	R10747[30] = (char *(*)()) F1066_13864;
	R10747[32] = (char *(*)()) F1066_13864;
	{long i; for (i = 39; i < 45; i++) R10747[i] = (char *(*)()) F1066_13864;}
	{long i; for (i = 53; i < 61; i++) R10747[i] = (char *(*)()) F1066_13864;}
	{long i; for (i = 76; i < 91; i++) R10747[i] = (char *(*)()) F1066_13864;}
	{long i; for (i = 132; i < 137; i++) R10747[i] = (char *(*)()) F1198_17018;}
}

char *(*R10748[137])();
void R10748_init () {
	R10748[0] = (char *(*)()) F1066_13863;
	R10748[30] = (char *(*)()) F1066_13863;
	R10748[32] = (char *(*)()) F1066_13863;
	{long i; for (i = 39; i < 45; i++) R10748[i] = (char *(*)()) F1066_13863;}
	{long i; for (i = 53; i < 61; i++) R10748[i] = (char *(*)()) F1066_13863;}
	{long i; for (i = 76; i < 91; i++) R10748[i] = (char *(*)()) F1066_13863;}
	{long i; for (i = 132; i < 137; i++) R10748[i] = (char *(*)()) F1198_17019;}
}

char *(*R10749[137])();
void R10749_init () {
	R10749[0] = (char *(*)()) F1066_13867;
	R10749[30] = (char *(*)()) F1066_13867;
	R10749[32] = (char *(*)()) F1066_13867;
	{long i; for (i = 39; i < 45; i++) R10749[i] = (char *(*)()) F1066_13867;}
	{long i; for (i = 53; i < 61; i++) R10749[i] = (char *(*)()) F1066_13867;}
	{long i; for (i = 76; i < 88; i++) R10749[i] = (char *(*)()) F1066_13867;}
	{long i; for (i = 88; i < 90; i++) R10749[i] = (char *(*)()) F1154_16197;}
	R10749[90] = (char *(*)()) F1066_13867;
	{long i; for (i = 132; i < 137; i++) R10749[i] = (char *(*)()) F1198_17027;}
}

char *(*R10750[137])();
void R10750_init () {
	R10750[0] = (char *(*)()) F1066_13865;
	R10750[30] = (char *(*)()) F1066_13865;
	R10750[32] = (char *(*)()) F1066_13865;
	{long i; for (i = 39; i < 45; i++) R10750[i] = (char *(*)()) F1066_13865;}
	{long i; for (i = 53; i < 61; i++) R10750[i] = (char *(*)()) F1066_13865;}
	{long i; for (i = 76; i < 91; i++) R10750[i] = (char *(*)()) F1066_13865;}
	{long i; for (i = 132; i < 137; i++) R10750[i] = (char *(*)()) F1198_17026;}
}


#ifdef __cplusplus
}
#endif
