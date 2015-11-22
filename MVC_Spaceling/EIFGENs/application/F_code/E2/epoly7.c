#include "epoly7.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R18[1258])();
void R18_init () {
	{long i; for (i = 0; i < 24; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 26; i < 40; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 42; i < 44; i++) R18[i] = (char *(*)()) F1_15;}
	R18[46] = (char *(*)()) F1_15;
	R18[50] = (char *(*)()) F1_15;
	{long i; for (i = 53; i < 55; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 56; i < 58; i++) R18[i] = (char *(*)()) F1_15;}
	R18[62] = (char *(*)()) F1_15;
	R18[64] = (char *(*)()) F1_15;
	{long i; for (i = 66; i < 69; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 73; i < 75; i++) R18[i] = (char *(*)()) F1_15;}
	R18[77] = (char *(*)()) F1_15;
	{long i; for (i = 81; i < 384; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 384; i < 387; i++) R18[i] = (char *(*)()) F385_4814;}
	{long i; for (i = 387; i < 489; i++) R18[i] = (char *(*)()) F1_15;}
	R18[489] = (char *(*)()) F490_5172;
	{long i; for (i = 490; i < 582; i++) R18[i] = (char *(*)()) F1_15;}
	R18[582] = (char *(*)()) F583_5737;
	R18[583] = (char *(*)()) F584_5755;
	{long i; for (i = 584; i < 644; i++) R18[i] = (char *(*)()) F1_15;}
	R18[644] = (char *(*)()) F645_6053;
	R18[645] = (char *(*)()) F646_6053;
	R18[646] = (char *(*)()) F647_6053;
	R18[647] = (char *(*)()) F645_6053;
	R18[648] = (char *(*)()) F646_6053;
	R18[649] = (char *(*)()) F647_6053;
	R18[650] = (char *(*)()) F651_6082;
	{long i; for (i = 651; i < 666; i++) R18[i] = (char *(*)()) F1_15;}
	R18[666] = (char *(*)()) F667_6288;
	R18[667] = (char *(*)()) F668_6288;
	R18[668] = (char *(*)()) F669_6288;
	R18[669] = (char *(*)()) F670_6288;
	R18[670] = (char *(*)()) F671_6288;
	R18[671] = (char *(*)()) F672_6288;
	R18[672] = (char *(*)()) F673_6288;
	R18[673] = (char *(*)()) F674_6288;
	R18[674] = (char *(*)()) F675_6288;
	R18[675] = (char *(*)()) F676_6288;
	R18[676] = (char *(*)()) F677_6288;
	R18[677] = (char *(*)()) F678_6288;
	R18[678] = (char *(*)()) F679_6288;
	R18[679] = (char *(*)()) F680_6288;
	R18[680] = (char *(*)()) F681_6288;
	R18[681] = (char *(*)()) F669_6288;
	{long i; for (i = 682; i < 690; i++) R18[i] = (char *(*)()) F1_15;}
	R18[690] = (char *(*)()) F691_6415;
	R18[691] = (char *(*)()) F692_6487;
	R18[692] = (char *(*)()) F693_6487;
	R18[693] = (char *(*)()) F694_6487;
	R18[694] = (char *(*)()) F695_6487;
	R18[695] = (char *(*)()) F696_6487;
	R18[696] = (char *(*)()) F697_6487;
	R18[697] = (char *(*)()) F692_6487;
	R18[698] = (char *(*)()) F694_6487;
	R18[699] = (char *(*)()) F692_6487;
	R18[700] = (char *(*)()) F701_6629;
	R18[701] = (char *(*)()) F702_6629;
	R18[702] = (char *(*)()) F703_6629;
	R18[703] = (char *(*)()) F704_6629;
	R18[704] = (char *(*)()) F705_6629;
	R18[705] = (char *(*)()) F706_6629;
	R18[706] = (char *(*)()) F707_6629;
	R18[707] = (char *(*)()) F708_6629;
	R18[708] = (char *(*)()) F709_6629;
	R18[709] = (char *(*)()) F710_6629;
	R18[710] = (char *(*)()) F711_6629;
	R18[711] = (char *(*)()) F712_6629;
	R18[712] = (char *(*)()) F713_6629;
	R18[713] = (char *(*)()) F714_6629;
	R18[714] = (char *(*)()) F715_6629;
	R18[715] = (char *(*)()) F701_6629;
	R18[716] = (char *(*)()) F710_6629;
	R18[717] = (char *(*)()) F704_6629;
	R18[718] = (char *(*)()) F701_6629;
	R18[719] = (char *(*)()) F704_6629;
	R18[720] = (char *(*)()) F701_6629;
	R18[721] = (char *(*)()) F704_6629;
	R18[722] = (char *(*)()) F701_6629;
	R18[723] = (char *(*)()) F704_6629;
	{long i; for (i = 724; i < 726; i++) R18[i] = (char *(*)()) F701_6629;}
	{long i; for (i = 726; i < 731; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 731; i < 750; i++) R18[i] = (char *(*)()) F701_6629;}
	{long i; for (i = 750; i < 772; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 772; i < 774; i++) R18[i] = (char *(*)()) F773_7071;}
	{long i; for (i = 774; i < 777; i++) R18[i] = (char *(*)()) F1_15;}
	R18[777] = (char *(*)()) F778_7243;
	{long i; for (i = 778; i < 787; i++) R18[i] = (char *(*)()) F1_15;}
	R18[787] = (char *(*)()) F788_7996;
	{long i; for (i = 788; i < 791; i++) R18[i] = (char *(*)()) F1_15;}
	R18[791] = (char *(*)()) F788_7996;
	{long i; for (i = 792; i < 794; i++) R18[i] = (char *(*)()) F1_15;}
	R18[794] = (char *(*)()) F795_8463;
	{long i; for (i = 795; i < 914; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 914; i < 916; i++) R18[i] = (char *(*)()) F915_9699;}
	R18[916] = (char *(*)()) F917_9731;
	{long i; for (i = 917; i < 919; i++) R18[i] = (char *(*)()) F918_9731;}
	R18[919] = (char *(*)()) F1_15;
	R18[920] = (char *(*)()) F921_10367;
	R18[921] = (char *(*)()) F1_15;
	{long i; for (i = 922; i < 924; i++) R18[i] = (char *(*)()) F921_10367;}
	{long i; for (i = 924; i < 926; i++) R18[i] = (char *(*)()) F925_10590;}
	R18[926] = (char *(*)()) F1_15;
	R18[927] = (char *(*)()) F928_10697;
	R18[928] = (char *(*)()) F929_10719;
	{long i; for (i = 929; i < 931; i++) R18[i] = (char *(*)()) F930_10746;}
	R18[931] = (char *(*)()) F932_10778;
	{long i; for (i = 932; i < 936; i++) R18[i] = (char *(*)()) F930_10746;}
	R18[936] = (char *(*)()) F937_10872;
	R18[937] = (char *(*)()) F938_10917;
	R18[938] = (char *(*)()) F939_10952;
	R18[939] = (char *(*)()) F940_10967;
	{long i; for (i = 940; i < 989; i++) R18[i] = (char *(*)()) F930_10746;}
	R18[989] = (char *(*)()) F990_12505;
	R18[990] = (char *(*)()) F991_12514;
	{long i; for (i = 991; i < 1000; i++) R18[i] = (char *(*)()) F930_10746;}
	R18[1000] = (char *(*)()) F701_6629;
	{long i; for (i = 1001; i < 1028; i++) R18[i] = (char *(*)()) F930_10746;}
	{long i; for (i = 1028; i < 1044; i++) R18[i] = (char *(*)()) F1_15;}
	R18[1044] = (char *(*)()) F788_7996;
	{long i; for (i = 1045; i < 1258; i++) R18[i] = (char *(*)()) F1_15;}
}

char *(*R28[1258])();
void R28_init () {
	{long i; for (i = 0; i < 24; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 26; i < 116; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 116; i < 155; i++) R28[i] = (char *(*)()) F117_3326;}
	{long i; for (i = 155; i < 699; i++) R28[i] = (char *(*)()) F1_25;}
	R28[699] = (char *(*)()) F700_6557;
	{long i; for (i = 700; i < 751; i++) R28[i] = (char *(*)()) F1_25;}
	R28[751] = (char *(*)()) F752_6923;
	{long i; for (i = 752; i < 794; i++) R28[i] = (char *(*)()) F1_25;}
	R28[794] = (char *(*)()) F795_8464;
	R28[795] = (char *(*)()) F796_8502;
	R28[796] = (char *(*)()) F797_8502;
	R28[797] = (char *(*)()) F798_8502;
	R28[798] = (char *(*)()) F799_8502;
	R28[799] = (char *(*)()) F800_8502;
	R28[800] = (char *(*)()) F801_8502;
	R28[801] = (char *(*)()) F802_8502;
	R28[802] = (char *(*)()) F803_8502;
	R28[803] = (char *(*)()) F804_8502;
	R28[804] = (char *(*)()) F805_8502;
	R28[805] = (char *(*)()) F806_8502;
	R28[806] = (char *(*)()) F807_8502;
	R28[807] = (char *(*)()) F808_8502;
	R28[808] = (char *(*)()) F809_8502;
	R28[809] = (char *(*)()) F810_8502;
	R28[810] = (char *(*)()) F811_8502;
	R28[811] = (char *(*)()) F812_8502;
	R28[812] = (char *(*)()) F813_8502;
	R28[813] = (char *(*)()) F814_8502;
	R28[814] = (char *(*)()) F815_8502;
	R28[815] = (char *(*)()) F816_8502;
	R28[816] = (char *(*)()) F817_8502;
	R28[817] = (char *(*)()) F818_8502;
	R28[818] = (char *(*)()) F819_8502;
	R28[819] = (char *(*)()) F820_8502;
	R28[820] = (char *(*)()) F821_8502;
	R28[821] = (char *(*)()) F822_8502;
	R28[822] = (char *(*)()) F823_8502;
	R28[823] = (char *(*)()) F824_8502;
	R28[824] = (char *(*)()) F825_8502;
	R28[825] = (char *(*)()) F826_8502;
	R28[826] = (char *(*)()) F827_8502;
	R28[827] = (char *(*)()) F828_8502;
	R28[828] = (char *(*)()) F829_8502;
	R28[829] = (char *(*)()) F830_8502;
	R28[830] = (char *(*)()) F831_8502;
	R28[831] = (char *(*)()) F832_8502;
	R28[832] = (char *(*)()) F833_8502;
	R28[833] = (char *(*)()) F834_8502;
	R28[834] = (char *(*)()) F835_8502;
	R28[835] = (char *(*)()) F836_8502;
	R28[836] = (char *(*)()) F837_8502;
	R28[837] = (char *(*)()) F838_8502;
	R28[838] = (char *(*)()) F839_8502;
	R28[839] = (char *(*)()) F840_8502;
	R28[840] = (char *(*)()) F841_8502;
	R28[841] = (char *(*)()) F1_25;
	{long i; for (i = 842; i < 845; i++) R28[i] = (char *(*)()) F843_8751;}
	R28[845] = (char *(*)()) F846_8821;
	R28[846] = (char *(*)()) F847_8839;
	R28[847] = (char *(*)()) F848_8839;
	{long i; for (i = 848; i < 851; i++) R28[i] = (char *(*)()) F849_8855;}
	{long i; for (i = 851; i < 854; i++) R28[i] = (char *(*)()) F852_8894;}
	{long i; for (i = 854; i < 857; i++) R28[i] = (char *(*)()) F855_8990;}
	{long i; for (i = 857; i < 860; i++) R28[i] = (char *(*)()) F858_9033;}
	R28[860] = (char *(*)()) F861_9081;
	R28[861] = (char *(*)()) F862_9099;
	R28[862] = (char *(*)()) F863_9099;
	{long i; for (i = 863; i < 866; i++) R28[i] = (char *(*)()) F864_9163;}
	{long i; for (i = 866; i < 869; i++) R28[i] = (char *(*)()) F867_9253;}
	{long i; for (i = 869; i < 872; i++) R28[i] = (char *(*)()) F870_9344;}
	{long i; for (i = 872; i < 875; i++) R28[i] = (char *(*)()) F873_9437;}
	{long i; for (i = 875; i < 878; i++) R28[i] = (char *(*)()) F876_9532;}
	{long i; for (i = 878; i < 881; i++) R28[i] = (char *(*)()) F879_9624;}
	{long i; for (i = 881; i < 912; i++) R28[i] = (char *(*)()) F882_9670;}
	R28[912] = (char *(*)()) F913_9683;
	R28[913] = (char *(*)()) F914_9683;
	{long i; for (i = 914; i < 920; i++) R28[i] = (char *(*)()) F1_25;}
	R28[920] = (char *(*)()) F921_10371;
	R28[921] = (char *(*)()) F1_25;
	{long i; for (i = 922; i < 924; i++) R28[i] = (char *(*)()) F921_10371;}
	{long i; for (i = 924; i < 926; i++) R28[i] = (char *(*)()) F925_10594;}
	R28[926] = (char *(*)()) F1_25;
	R28[927] = (char *(*)()) F921_10371;
	R28[928] = (char *(*)()) F925_10594;
	{long i; for (i = 929; i < 934; i++) R28[i] = (char *(*)()) F1_25;}
	R28[934] = (char *(*)()) F935_10832;
	R28[935] = (char *(*)()) F1_25;
	R28[936] = (char *(*)()) F937_10870;
	R28[937] = (char *(*)()) F938_10915;
	{long i; for (i = 938; i < 1043; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 1043; i < 1045; i++) R28[i] = (char *(*)()) F1044_13331;}
	{long i; for (i = 1045; i < 1205; i++) R28[i] = (char *(*)()) F1_25;}
	R28[1205] = (char *(*)()) F1206_17327;
	{long i; for (i = 1206; i < 1258; i++) R28[i] = (char *(*)()) F1_25;}
}

char *(*R2953[2])();
void R2953_init () {
	R2953[0] = (char *(*)()) F95_3044;
	R2953[1] = (char *(*)()) F96_3055;
}

char *(*R2954[2])();
void R2954_init () {
	R2954[0] = (char *(*)()) F95_3045;
	R2954[1] = (char *(*)()) F96_3056;
}

char *(*R2960[2])();
void R2960_init () {
	R2960[0] = (char *(*)()) F95_3051;
	R2960[1] = (char *(*)()) F96_3062;
}

char *(*R2963[2])();
void R2963_init () {
	R2963[0] = (char *(*)()) F95_3054;
	R2963[1] = (char *(*)()) F96_3065;
}

char *(*R3124[109])();
void R3124_init () {
	R3124[0] = (char *(*)()) F1094_14466;
	R3124[2] = (char *(*)()) F1094_14466;
	R3124[4] = (char *(*)()) F1094_14466;
	{long i; for (i = 11; i < 17; i++) R3124[i] = (char *(*)()) F1094_14466;}
	{long i; for (i = 25; i < 33; i++) R3124[i] = (char *(*)()) F1094_14466;}
	{long i; for (i = 48; i < 63; i++) R3124[i] = (char *(*)()) F1094_14466;}
	R3124[66] = (char *(*)()) F1078_14131;
	R3124[68] = (char *(*)()) F1078_14131;
	R3124[70] = (char *(*)()) F1078_14131;
	{long i; for (i = 71; i < 73; i++) R3124[i] = (char *(*)()) F1094_14466;}
	{long i; for (i = 78; i < 83; i++) R3124[i] = (char *(*)()) F1094_14466;}
	R3124[84] = (char *(*)()) F1078_14131;
	{long i; for (i = 87; i < 89; i++) R3124[i] = (char *(*)()) F1094_14466;}
	R3124[106] = (char *(*)()) F1094_14466;
	R3124[108] = (char *(*)()) F1094_14466;
}

char *(*R3177[39])();
void R3177_init () {
	R3177[0] = (char *(*)()) F117_3313;
	R3177[1] = (char *(*)()) F118_3337;
	R3177[4] = (char *(*)()) F121_3339;
	R3177[6] = (char *(*)()) F123_3343;
	R3177[7] = (char *(*)()) F124_3360;
	R3177[8] = (char *(*)()) F125_3364;
	R3177[10] = (char *(*)()) F127_3368;
	R3177[11] = (char *(*)()) F128_3370;
	R3177[12] = (char *(*)()) F129_3372;
	R3177[14] = (char *(*)()) F131_3374;
	R3177[15] = (char *(*)()) F132_3378;
	R3177[18] = (char *(*)()) F135_3380;
	R3177[19] = (char *(*)()) F136_3382;
	R3177[21] = (char *(*)()) F138_3386;
	R3177[22] = (char *(*)()) F139_3388;
	R3177[23] = (char *(*)()) F140_3390;
	R3177[25] = (char *(*)()) F142_3396;
	R3177[26] = (char *(*)()) F143_3398;
	R3177[27] = (char *(*)()) F144_3402;
	R3177[28] = (char *(*)()) F145_3406;
	R3177[30] = (char *(*)()) F147_3408;
	R3177[31] = (char *(*)()) F148_3410;
	R3177[33] = (char *(*)()) F150_3412;
	R3177[34] = (char *(*)()) F151_3414;
	R3177[35] = (char *(*)()) F152_3416;
	R3177[36] = (char *(*)()) F153_3418;
	R3177[37] = (char *(*)()) F154_3420;
	R3177[38] = (char *(*)()) F155_3422;
}

char *(*R3241[2])();
void R3241_init () {
	R3241[0] = (char *(*)()) F159_3443;
	R3241[1] = (char *(*)()) F160_3447;
}

char *(*R3243[2])();
void R3243_init () {
	R3243[0] = (char *(*)()) F159_3444;
	R3243[1] = (char *(*)()) F160_3448;
}

char *(*R3336[761])();
void R3336_init () {
	R3336[0] = (char *(*)()) F169_3578;
	R3336[626] = (char *(*)()) F795_8459;
	R3336[674] = (char *(*)()) F843_8694;
	R3336[675] = (char *(*)()) F844_8753_3336;
	R3336[676] = (char *(*)()) F845_8753_3336;
	R3336[677] = (char *(*)()) F846_8793;
	R3336[678] = (char *(*)()) F847_8823_3336;
	R3336[679] = (char *(*)()) F848_8823_3336;
	{long i; for (i = 680; i < 683; i++) R3336[i] = (char *(*)()) F849_8847;}
	{long i; for (i = 683; i < 686; i++) R3336[i] = (char *(*)()) F852_8886;}
	R3336[686] = (char *(*)()) F855_8934;
	R3336[687] = (char *(*)()) F856_8992_3336;
	R3336[688] = (char *(*)()) F857_8992_3336;
	R3336[692] = (char *(*)()) F861_9053;
	R3336[693] = (char *(*)()) F862_9083_3336;
	R3336[694] = (char *(*)()) F863_9083_3336;
	R3336[695] = (char *(*)()) F864_9108;
	R3336[696] = (char *(*)()) F865_9164_3336;
	R3336[697] = (char *(*)()) F866_9164_3336;
	R3336[698] = (char *(*)()) F867_9199;
	R3336[699] = (char *(*)()) F868_9254_3336;
	R3336[700] = (char *(*)()) F869_9254_3336;
	R3336[701] = (char *(*)()) F870_9289;
	R3336[702] = (char *(*)()) F871_9345_3336;
	R3336[703] = (char *(*)()) F872_9345_3336;
	R3336[704] = (char *(*)()) F873_9380;
	R3336[705] = (char *(*)()) F874_9439_3336;
	R3336[706] = (char *(*)()) F875_9439_3336;
	R3336[707] = (char *(*)()) F876_9475;
	R3336[708] = (char *(*)()) F877_9534_3336;
	R3336[709] = (char *(*)()) F878_9534_3336;
	R3336[710] = (char *(*)()) F879_9570;
	R3336[711] = (char *(*)()) F880_9625_3336;
	R3336[712] = (char *(*)()) F881_9625_3336;
	R3336[752] = (char *(*)()) F921_10357;
	{long i; for (i = 754; i < 756; i++) R3336[i] = (char *(*)()) F921_10357;}
	{long i; for (i = 756; i < 758; i++) R3336[i] = (char *(*)()) F925_10580;}
	R3336[759] = (char *(*)()) F921_10357;
	R3336[760] = (char *(*)()) F925_10580;
}
static EIF_BOOLEAN F844_8753_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F844_8753(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F845_8753_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F845_8753(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F847_8823_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F847_8823(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F848_8823_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F848_8823(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F856_8992_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F856_8992(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F857_8992_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F857_8992(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F862_9083_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F862_9083(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F863_9083_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F863_9083(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F865_9164_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F865_9164(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F866_9164_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F866_9164(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F868_9254_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F868_9254(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F869_9254_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F869_9254(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F871_9345_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F871_9345(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F872_9345_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F872_9345(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F874_9439_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F874_9439(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F875_9439_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F875_9439(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F877_9534_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F877_9534(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F878_9534_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F878_9534(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F880_9625_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F880_9625(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F881_9625_3336 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F881_9625(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R3460[1032])();
void R3460_init () {
	R3460[0] = (char *(*)()) F171_3742;
	R3460[925] = (char *(*)()) F171_3742;
	R3460[927] = (char *(*)()) F171_3742;
	{long i; for (i = 934; i < 940; i++) R3460[i] = (char *(*)()) F171_3742;}
	{long i; for (i = 948; i < 956; i++) R3460[i] = (char *(*)()) F171_3742;}
	{long i; for (i = 971; i < 974; i++) R3460[i] = (char *(*)()) F171_3742;}
	R3460[974] = (char *(*)()) F1145_15782;
	R3460[975] = (char *(*)()) F1146_15874;
	{long i; for (i = 976; i < 986; i++) R3460[i] = (char *(*)()) F171_3742;}
	R3460[1029] = (char *(*)()) F171_3742;
	R3460[1031] = (char *(*)()) F171_3742;
}

char *(*R3861[6])();
void R3861_init () {
	R3861[0] = (char *(*)()) F544_5682;
	R3861[1] = (char *(*)()) F545_5682;
	R3861[2] = (char *(*)()) F546_5682_3861;
	R3861[3] = (char *(*)()) F547_5682_3861;
	R3861[4] = (char *(*)()) F548_5682_3861;
	R3861[5] = (char *(*)()) F549_5682_3861;
}
static EIF_REFERENCE F546_5682_3861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F546_5682(Current);
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
static EIF_REFERENCE F547_5682_3861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F547_5682(Current);
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
static EIF_REFERENCE F548_5682_3861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F548_5682(Current);
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
static EIF_REFERENCE F549_5682_3861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F549_5682(Current);
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

char *(*R3862[32])();
void R3862_init () {
	R3862[0] = (char *(*)()) F521_5630;
	R3862[8] = (char *(*)()) F529_5671;
	R3862[9] = (char *(*)()) F530_5671;
	R3862[10] = (char *(*)()) F531_5671;
	R3862[11] = (char *(*)()) F532_5671;
	R3862[12] = (char *(*)()) F533_5671;
	R3862[13] = (char *(*)()) F534_5671;
	R3862[14] = (char *(*)()) F535_5671;
	R3862[15] = (char *(*)()) F536_5671;
	R3862[16] = (char *(*)()) F537_5671;
	R3862[17] = (char *(*)()) F538_5671;
	R3862[18] = (char *(*)()) F539_5671;
	R3862[19] = (char *(*)()) F540_5671;
	R3862[20] = (char *(*)()) F541_5671;
	R3862[21] = (char *(*)()) F542_5671;
	R3862[22] = (char *(*)()) F543_5671;
	R3862[23] = (char *(*)()) F544_5684;
	R3862[24] = (char *(*)()) F545_5684;
	R3862[25] = (char *(*)()) F546_5684;
	R3862[26] = (char *(*)()) F547_5684;
	R3862[27] = (char *(*)()) F548_5684;
	R3862[28] = (char *(*)()) F549_5684;
	R3862[29] = (char *(*)()) F550_5688;
	R3862[30] = (char *(*)()) F551_5688;
	R3862[31] = (char *(*)()) F552_5688;
}

char *(*R3863[32])();
void R3863_init () {
	R3863[0] = (char *(*)()) F521_5632;
	R3863[8] = (char *(*)()) F529_5679;
	R3863[9] = (char *(*)()) F530_5679;
	R3863[10] = (char *(*)()) F531_5679;
	R3863[11] = (char *(*)()) F532_5679;
	R3863[12] = (char *(*)()) F533_5679;
	R3863[13] = (char *(*)()) F534_5679;
	R3863[14] = (char *(*)()) F535_5679;
	R3863[15] = (char *(*)()) F536_5679;
	R3863[16] = (char *(*)()) F537_5679;
	R3863[17] = (char *(*)()) F538_5679;
	R3863[18] = (char *(*)()) F539_5679;
	R3863[19] = (char *(*)()) F540_5679;
	R3863[20] = (char *(*)()) F541_5679;
	R3863[21] = (char *(*)()) F542_5679;
	R3863[22] = (char *(*)()) F543_5679;
	R3863[23] = (char *(*)()) F544_5685;
	R3863[24] = (char *(*)()) F545_5685;
	R3863[25] = (char *(*)()) F546_5685;
	R3863[26] = (char *(*)()) F547_5685;
	R3863[27] = (char *(*)()) F548_5685;
	R3863[28] = (char *(*)()) F549_5685;
	R3863[29] = (char *(*)()) F550_5690;
	R3863[30] = (char *(*)()) F551_5690;
	R3863[31] = (char *(*)()) F552_5690;
}

char *(*R3867[6])();
void R3867_init () {
	R3867[0] = (char *(*)()) F544_5683;
	R3867[1] = (char *(*)()) F545_5683_3867;
	R3867[2] = (char *(*)()) F546_5683;
	R3867[3] = (char *(*)()) F547_5683_3867;
	R3867[4] = (char *(*)()) F548_5683_3867;
	R3867[5] = (char *(*)()) F549_5683_3867;
}
static EIF_REFERENCE F545_5683_3867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F545_5683(Current);
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
static EIF_REFERENCE F547_5683_3867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F547_5683(Current);
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
static EIF_REFERENCE F548_5683_3867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F548_5683(Current);
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
static EIF_REFERENCE F549_5683_3867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F549_5683(Current);
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

char *(*R3869[154])();
void R3869_init () {
	R3869[0] = (char *(*)()) F234_4164;
	R3869[1] = (char *(*)()) F235_4164_3869;
	R3869[2] = (char *(*)()) F236_4164_3869;
	R3869[3] = (char *(*)()) F237_4164_3869;
	R3869[4] = (char *(*)()) F238_4164_3869;
	R3869[5] = (char *(*)()) F234_4164;
	R3869[6] = (char *(*)()) F235_4164_3869;
	R3869[7] = (char *(*)()) F236_4164_3869;
	{long i; for (i = 152; i < 154; i++) R3869[i] = (char *(*)()) F234_4164;}
}
static EIF_REFERENCE F235_4164_3869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F235_4164(Current);
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
static EIF_REFERENCE F236_4164_3869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F236_4164(Current);
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
static EIF_REFERENCE F237_4164_3869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F237_4164(Current);
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
static EIF_REFERENCE F238_4164_3869 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F238_4164(Current);
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

char *(*R3870[154])();
void R3870_init () {
	R3870[0] = (char *(*)()) F234_4165;
	R3870[1] = (char *(*)()) F235_4165_3870;
	R3870[2] = (char *(*)()) F236_4165_3870;
	R3870[3] = (char *(*)()) F237_4165_3870;
	R3870[4] = (char *(*)()) F238_4165_3870;
	R3870[5] = (char *(*)()) F234_4165;
	R3870[6] = (char *(*)()) F235_4165_3870;
	R3870[7] = (char *(*)()) F236_4165_3870;
	{long i; for (i = 152; i < 154; i++) R3870[i] = (char *(*)()) F234_4165;}
}
static void F235_4165_3870 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F235_4165(Current, *(EIF_BOOLEAN *)arg1);
}
static void F236_4165_3870 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F236_4165(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F237_4165_3870 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F237_4165(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F238_4165_3870 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F238_4165(Current, *(EIF_NATURAL_64 *)arg1);
}

char *(*R3874[3])();
void R3874_init () {
	R3874[0] = (char *(*)()) F239_4168;
	R3874[1] = (char *(*)()) F240_4168;
	R3874[2] = (char *(*)()) F241_4168;
}

char *(*R3875[3])();
void R3875_init () {
	R3875[0] = (char *(*)()) F239_4169;
	R3875[1] = (char *(*)()) F240_4169;
	R3875[2] = (char *(*)()) F241_4169;
}

char *(*R4151[932])();
void R4151_init () {
	R4151[0] = (char *(*)()) F274_4465;
	R4151[1] = (char *(*)()) F275_4465_4151;
	R4151[2] = (char *(*)()) F276_4465_4151;
	R4151[3] = (char *(*)()) F277_4465_4151;
	R4151[4] = (char *(*)()) F278_4465_4151;
	R4151[5] = (char *(*)()) F279_4465_4151;
	R4151[6] = (char *(*)()) F280_4465_4151;
	R4151[7] = (char *(*)()) F281_4465_4151;
	R4151[8] = (char *(*)()) F282_4465_4151;
	R4151[9] = (char *(*)()) F283_4465_4151;
	R4151[10] = (char *(*)()) F284_4465_4151;
	R4151[11] = (char *(*)()) F285_4465_4151;
	R4151[12] = (char *(*)()) F286_4465_4151;
	R4151[13] = (char *(*)()) F287_4465_4151;
	R4151[14] = (char *(*)()) F288_4465_4151;
	R4151[15] = (char *(*)()) F274_4465;
	R4151[16] = (char *(*)()) F275_4465_4151;
	R4151[17] = (char *(*)()) F276_4465_4151;
	R4151[18] = (char *(*)()) F277_4465_4151;
	R4151[19] = (char *(*)()) F279_4465_4151;
	R4151[20] = (char *(*)()) F278_4465_4151;
	R4151[21] = (char *(*)()) F280_4465_4151;
	R4151[22] = (char *(*)()) F282_4465_4151;
	R4151[23] = (char *(*)()) F283_4465_4151;
	R4151[24] = (char *(*)()) F284_4465_4151;
	R4151[25] = (char *(*)()) F285_4465_4151;
	R4151[26] = (char *(*)()) F281_4465_4151;
	R4151[27] = (char *(*)()) F286_4465_4151;
	R4151[28] = (char *(*)()) F287_4465_4151;
	R4151[29] = (char *(*)()) F288_4465_4151;
	R4151[30] = (char *(*)()) F274_4465;
	{long i; for (i = 111; i < 113; i++) R4151[i] = (char *(*)()) F385_4792;}
	R4151[113] = (char *(*)()) F387_4945;
	R4151[131] = (char *(*)()) F277_4465_4151;
	R4151[132] = (char *(*)()) F406_5114_4151;
	R4151[148] = (char *(*)()) F274_4465;
	R4151[149] = (char *(*)()) F275_4465_4151;
	R4151[150] = (char *(*)()) F276_4465_4151;
	R4151[151] = (char *(*)()) F277_4465_4151;
	R4151[152] = (char *(*)()) F279_4465_4151;
	R4151[153] = (char *(*)()) F278_4465_4151;
	R4151[154] = (char *(*)()) F280_4465_4151;
	R4151[155] = (char *(*)()) F282_4465_4151;
	R4151[156] = (char *(*)()) F283_4465_4151;
	R4151[157] = (char *(*)()) F284_4465_4151;
	R4151[158] = (char *(*)()) F285_4465_4151;
	R4151[159] = (char *(*)()) F281_4465_4151;
	R4151[160] = (char *(*)()) F286_4465_4151;
	R4151[161] = (char *(*)()) F287_4465_4151;
	R4151[162] = (char *(*)()) F288_4465_4151;
	R4151[216] = (char *(*)()) F490_5160;
	{long i; for (i = 309; i < 311; i++) R4151[i] = (char *(*)()) F583_5717_4151;}
	R4151[311] = (char *(*)()) F585_5761;
	R4151[312] = (char *(*)()) F586_5761_4151;
	R4151[313] = (char *(*)()) F587_5761_4151;
	R4151[314] = (char *(*)()) F588_5761_4151;
	R4151[315] = (char *(*)()) F589_5761_4151;
	R4151[316] = (char *(*)()) F590_5761_4151;
	R4151[317] = (char *(*)()) F591_5761_4151;
	R4151[318] = (char *(*)()) F592_5761_4151;
	R4151[319] = (char *(*)()) F593_5761_4151;
	R4151[320] = (char *(*)()) F594_5761_4151;
	R4151[321] = (char *(*)()) F595_5761_4151;
	R4151[322] = (char *(*)()) F596_5761_4151;
	R4151[323] = (char *(*)()) F597_5761_4151;
	R4151[324] = (char *(*)()) F598_5761_4151;
	R4151[325] = (char *(*)()) F599_5761_4151;
	R4151[326] = (char *(*)()) F585_5761;
	R4151[327] = (char *(*)()) F586_5761_4151;
	R4151[328] = (char *(*)()) F587_5761_4151;
	R4151[329] = (char *(*)()) F588_5761_4151;
	R4151[330] = (char *(*)()) F589_5761_4151;
	R4151[331] = (char *(*)()) F590_5761_4151;
	R4151[332] = (char *(*)()) F591_5761_4151;
	R4151[333] = (char *(*)()) F592_5761_4151;
	R4151[334] = (char *(*)()) F593_5761_4151;
	R4151[335] = (char *(*)()) F594_5761_4151;
	R4151[336] = (char *(*)()) F595_5761_4151;
	R4151[337] = (char *(*)()) F596_5761_4151;
	R4151[338] = (char *(*)()) F597_5761_4151;
	R4151[339] = (char *(*)()) F598_5761_4151;
	R4151[340] = (char *(*)()) F599_5761_4151;
	R4151[341] = (char *(*)()) F585_5761;
	R4151[342] = (char *(*)()) F586_5761_4151;
	R4151[343] = (char *(*)()) F587_5761_4151;
	R4151[344] = (char *(*)()) F588_5761_4151;
	R4151[345] = (char *(*)()) F589_5761_4151;
	R4151[346] = (char *(*)()) F590_5761_4151;
	R4151[347] = (char *(*)()) F591_5761_4151;
	R4151[348] = (char *(*)()) F592_5761_4151;
	R4151[349] = (char *(*)()) F593_5761_4151;
	R4151[350] = (char *(*)()) F594_5761_4151;
	R4151[351] = (char *(*)()) F595_5761_4151;
	R4151[352] = (char *(*)()) F596_5761_4151;
	R4151[353] = (char *(*)()) F597_5761_4151;
	R4151[354] = (char *(*)()) F598_5761_4151;
	R4151[355] = (char *(*)()) F599_5761_4151;
	R4151[356] = (char *(*)()) F585_5761;
	R4151[357] = (char *(*)()) F586_5761_4151;
	R4151[358] = (char *(*)()) F587_5761_4151;
	R4151[359] = (char *(*)()) F588_5761_4151;
	R4151[360] = (char *(*)()) F589_5761_4151;
	R4151[361] = (char *(*)()) F590_5761_4151;
	R4151[362] = (char *(*)()) F591_5761_4151;
	R4151[363] = (char *(*)()) F592_5761_4151;
	R4151[364] = (char *(*)()) F593_5761_4151;
	R4151[365] = (char *(*)()) F594_5761_4151;
	R4151[366] = (char *(*)()) F595_5761_4151;
	R4151[367] = (char *(*)()) F596_5761_4151;
	R4151[368] = (char *(*)()) F597_5761_4151;
	R4151[369] = (char *(*)()) F598_5761_4151;
	R4151[370] = (char *(*)()) F599_5761_4151;
	R4151[371] = (char *(*)()) F585_5761;
	R4151[372] = (char *(*)()) F594_5761_4151;
	R4151[373] = (char *(*)()) F588_5761_4151;
	R4151[374] = (char *(*)()) F585_5761;
	R4151[375] = (char *(*)()) F594_5761_4151;
	R4151[376] = (char *(*)()) F588_5761_4151;
	R4151[377] = (char *(*)()) F585_5761;
	R4151[393] = (char *(*)()) F667_6243;
	R4151[394] = (char *(*)()) F668_6243_4151;
	R4151[395] = (char *(*)()) F669_6243_4151;
	R4151[396] = (char *(*)()) F670_6243_4151;
	R4151[397] = (char *(*)()) F671_6243_4151;
	R4151[398] = (char *(*)()) F672_6243_4151;
	R4151[399] = (char *(*)()) F673_6243_4151;
	R4151[400] = (char *(*)()) F674_6243_4151;
	R4151[401] = (char *(*)()) F675_6243_4151;
	R4151[402] = (char *(*)()) F676_6243_4151;
	R4151[403] = (char *(*)()) F677_6243_4151;
	R4151[404] = (char *(*)()) F678_6243_4151;
	R4151[405] = (char *(*)()) F679_6243_4151;
	R4151[406] = (char *(*)()) F680_6243_4151;
	R4151[407] = (char *(*)()) F681_6243_4151;
	R4151[408] = (char *(*)()) F669_6243_4151;
	R4151[417] = (char *(*)()) F691_6401;
	R4151[418] = (char *(*)()) F692_6440;
	R4151[419] = (char *(*)()) F693_6440;
	R4151[420] = (char *(*)()) F694_6440_4151;
	R4151[421] = (char *(*)()) F695_6440_4151;
	R4151[422] = (char *(*)()) F696_6440_4151;
	R4151[423] = (char *(*)()) F697_6440_4151;
	R4151[424] = (char *(*)()) F692_6440;
	R4151[425] = (char *(*)()) F694_6440_4151;
	R4151[426] = (char *(*)()) F692_6440;
	R4151[427] = (char *(*)()) F701_6590;
	R4151[428] = (char *(*)()) F702_6590_4151;
	R4151[429] = (char *(*)()) F703_6590_4151;
	R4151[430] = (char *(*)()) F704_6590_4151;
	R4151[431] = (char *(*)()) F705_6590_4151;
	R4151[432] = (char *(*)()) F706_6590_4151;
	R4151[433] = (char *(*)()) F707_6590_4151;
	R4151[434] = (char *(*)()) F708_6590_4151;
	R4151[435] = (char *(*)()) F709_6590_4151;
	R4151[436] = (char *(*)()) F710_6590_4151;
	R4151[437] = (char *(*)()) F711_6590_4151;
	R4151[438] = (char *(*)()) F712_6590_4151;
	R4151[439] = (char *(*)()) F713_6590_4151;
	R4151[440] = (char *(*)()) F714_6590_4151;
	R4151[441] = (char *(*)()) F715_6590_4151;
	R4151[442] = (char *(*)()) F701_6590;
	R4151[443] = (char *(*)()) F710_6590_4151;
	R4151[444] = (char *(*)()) F704_6590_4151;
	R4151[445] = (char *(*)()) F701_6590;
	R4151[446] = (char *(*)()) F704_6590_4151;
	R4151[447] = (char *(*)()) F701_6590;
	R4151[448] = (char *(*)()) F704_6590_4151;
	R4151[449] = (char *(*)()) F701_6590;
	R4151[450] = (char *(*)()) F704_6590_4151;
	{long i; for (i = 451; i < 453; i++) R4151[i] = (char *(*)()) F701_6590;}
	{long i; for (i = 458; i < 477; i++) R4151[i] = (char *(*)()) F701_6590;}
	{long i; for (i = 511; i < 514; i++) R4151[i] = (char *(*)()) F282_4465_4151;}
	{long i; for (i = 649; i < 651; i++) R4151[i] = (char *(*)()) F921_10362_4151;}
	R4151[652] = (char *(*)()) F925_10585_4151;
	R4151[692] = (char *(*)()) F585_5761;
	{long i; for (i = 696; i < 702; i++) R4151[i] = (char *(*)()) F585_5761;}
	{long i; for (i = 702; i < 706; i++) R4151[i] = (char *(*)()) F976_12010;}
	{long i; for (i = 706; i < 713; i++) R4151[i] = (char *(*)()) F980_12331;}
	R4151[727] = (char *(*)()) F701_6590;
	{long i; for (i = 741; i < 754; i++) R4151[i] = (char *(*)()) F585_5761;}
	R4151[931] = (char *(*)()) F282_4465_4151;
}
static EIF_BOOLEAN F275_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F275_4465(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F276_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F276_4465(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F277_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F277_4465(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F278_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F278_4465(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F279_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F279_4465(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F280_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F280_4465(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F281_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F281_4465(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F282_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F282_4465(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F283_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F283_4465(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F284_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F284_4465(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F285_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F285_4465(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F286_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F286_4465(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F287_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F287_4465(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F288_4465_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F288_4465(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F406_5114_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F406_5114(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F583_5717_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F583_5717(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F586_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F586_5761(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F587_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F587_5761(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F588_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F588_5761(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F589_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F589_5761(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F590_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F590_5761(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F591_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F591_5761(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F592_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F592_5761(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F593_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F593_5761(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F594_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F594_5761(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F595_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F595_5761(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F596_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F596_5761(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F597_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F597_5761(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F598_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F598_5761(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F599_5761_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F599_5761(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F668_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F668_6243(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F669_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F669_6243(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F670_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F670_6243(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F671_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F671_6243(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F672_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F672_6243(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F673_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F673_6243(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F674_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F674_6243(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F675_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F675_6243(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F676_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F676_6243(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F677_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F677_6243(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F678_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F678_6243(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F679_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F679_6243(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F680_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F680_6243(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F681_6243_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F681_6243(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F694_6440_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F694_6440(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F695_6440_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F695_6440(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F696_6440_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F696_6440(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F697_6440_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F697_6440(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F702_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F702_6590(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F703_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F703_6590(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F704_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F704_6590(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F705_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F705_6590(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F706_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F706_6590(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F707_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F707_6590(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F708_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F708_6590(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F709_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F709_6590(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F710_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F710_6590(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F711_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F711_6590(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F712_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F712_6590(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F713_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F713_6590(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F714_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F714_6590(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F715_6590_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F715_6590(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F921_10362_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F921_10362(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F925_10585_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F925_10585(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R4152[902])();
void R4152_init () {
	R4152[0] = (char *(*)()) F304_4494;
	{long i; for (i = 81; i < 84; i++) R4152[i] = (char *(*)()) F385_4786;}
	{long i; for (i = 99; i < 103; i++) R4152[i] = (char *(*)()) F403_5067;}
	R4152[103] = (char *(*)()) F407_5127;
	R4152[104] = (char *(*)()) F408_5127;
	R4152[105] = (char *(*)()) F409_5127;
	R4152[106] = (char *(*)()) F410_5127;
	R4152[107] = (char *(*)()) F411_5127;
	R4152[108] = (char *(*)()) F412_5127;
	R4152[109] = (char *(*)()) F413_5127;
	R4152[110] = (char *(*)()) F414_5127;
	R4152[111] = (char *(*)()) F415_5127;
	R4152[112] = (char *(*)()) F416_5127;
	R4152[113] = (char *(*)()) F417_5127;
	R4152[114] = (char *(*)()) F418_5127;
	R4152[115] = (char *(*)()) F419_5127;
	R4152[116] = (char *(*)()) F420_5127;
	R4152[117] = (char *(*)()) F421_5127;
	R4152[118] = (char *(*)()) F407_5127;
	R4152[119] = (char *(*)()) F408_5127;
	R4152[120] = (char *(*)()) F409_5127;
	R4152[121] = (char *(*)()) F410_5127;
	R4152[122] = (char *(*)()) F412_5127;
	R4152[123] = (char *(*)()) F411_5127;
	R4152[124] = (char *(*)()) F413_5127;
	R4152[125] = (char *(*)()) F414_5127;
	R4152[126] = (char *(*)()) F415_5127;
	R4152[127] = (char *(*)()) F416_5127;
	R4152[128] = (char *(*)()) F417_5127;
	R4152[129] = (char *(*)()) F418_5127;
	R4152[130] = (char *(*)()) F419_5127;
	R4152[131] = (char *(*)()) F420_5127;
	R4152[132] = (char *(*)()) F421_5127;
	R4152[133] = (char *(*)()) F407_5127;
	R4152[134] = (char *(*)()) F416_5127;
	R4152[135] = (char *(*)()) F410_5127;
	R4152[136] = (char *(*)()) F407_5127;
	R4152[137] = (char *(*)()) F416_5127;
	R4152[138] = (char *(*)()) F410_5127;
	{long i; for (i = 139; i < 142; i++) R4152[i] = (char *(*)()) F407_5127;}
	R4152[142] = (char *(*)()) F408_5127;
	R4152[143] = (char *(*)()) F409_5127;
	R4152[144] = (char *(*)()) F410_5127;
	R4152[145] = (char *(*)()) F411_5127;
	R4152[146] = (char *(*)()) F412_5127;
	R4152[147] = (char *(*)()) F413_5127;
	R4152[148] = (char *(*)()) F414_5127;
	R4152[149] = (char *(*)()) F415_5127;
	R4152[150] = (char *(*)()) F416_5127;
	R4152[151] = (char *(*)()) F417_5127;
	R4152[152] = (char *(*)()) F418_5127;
	R4152[153] = (char *(*)()) F419_5127;
	R4152[154] = (char *(*)()) F420_5127;
	R4152[155] = (char *(*)()) F421_5127;
	R4152[156] = (char *(*)()) F407_5127;
	R4152[157] = (char *(*)()) F408_5127;
	R4152[158] = (char *(*)()) F409_5127;
	R4152[159] = (char *(*)()) F410_5127;
	R4152[160] = (char *(*)()) F412_5127;
	R4152[161] = (char *(*)()) F411_5127;
	R4152[162] = (char *(*)()) F413_5127;
	R4152[163] = (char *(*)()) F414_5127;
	R4152[164] = (char *(*)()) F415_5127;
	R4152[165] = (char *(*)()) F416_5127;
	R4152[166] = (char *(*)()) F417_5127;
	R4152[167] = (char *(*)()) F418_5127;
	R4152[168] = (char *(*)()) F419_5127;
	R4152[169] = (char *(*)()) F420_5127;
	R4152[170] = (char *(*)()) F421_5127;
	R4152[171] = (char *(*)()) F407_5127;
	R4152[172] = (char *(*)()) F408_5127;
	R4152[173] = (char *(*)()) F409_5127;
	R4152[174] = (char *(*)()) F410_5127;
	R4152[175] = (char *(*)()) F412_5127;
	R4152[176] = (char *(*)()) F411_5127;
	R4152[177] = (char *(*)()) F413_5127;
	R4152[178] = (char *(*)()) F414_5127;
	R4152[179] = (char *(*)()) F415_5127;
	R4152[180] = (char *(*)()) F416_5127;
	R4152[181] = (char *(*)()) F417_5127;
	R4152[182] = (char *(*)()) F418_5127;
	R4152[183] = (char *(*)()) F419_5127;
	R4152[184] = (char *(*)()) F420_5127;
	R4152[185] = (char *(*)()) F421_5127;
	R4152[186] = (char *(*)()) F407_5127;
	{long i; for (i = 279; i < 281; i++) R4152[i] = (char *(*)()) F410_5127;}
	R4152[281] = (char *(*)()) F407_5127;
	R4152[282] = (char *(*)()) F408_5127;
	R4152[283] = (char *(*)()) F409_5127;
	R4152[284] = (char *(*)()) F410_5127;
	R4152[285] = (char *(*)()) F412_5127;
	R4152[286] = (char *(*)()) F411_5127;
	R4152[287] = (char *(*)()) F413_5127;
	R4152[288] = (char *(*)()) F414_5127;
	R4152[289] = (char *(*)()) F415_5127;
	R4152[290] = (char *(*)()) F416_5127;
	R4152[291] = (char *(*)()) F417_5127;
	R4152[292] = (char *(*)()) F418_5127;
	R4152[293] = (char *(*)()) F419_5127;
	R4152[294] = (char *(*)()) F420_5127;
	R4152[295] = (char *(*)()) F421_5127;
	R4152[296] = (char *(*)()) F407_5127;
	R4152[297] = (char *(*)()) F408_5127;
	R4152[298] = (char *(*)()) F409_5127;
	R4152[299] = (char *(*)()) F410_5127;
	R4152[300] = (char *(*)()) F412_5127;
	R4152[301] = (char *(*)()) F411_5127;
	R4152[302] = (char *(*)()) F413_5127;
	R4152[303] = (char *(*)()) F414_5127;
	R4152[304] = (char *(*)()) F415_5127;
	R4152[305] = (char *(*)()) F416_5127;
	R4152[306] = (char *(*)()) F417_5127;
	R4152[307] = (char *(*)()) F418_5127;
	R4152[308] = (char *(*)()) F419_5127;
	R4152[309] = (char *(*)()) F420_5127;
	R4152[310] = (char *(*)()) F421_5127;
	R4152[311] = (char *(*)()) F407_5127;
	R4152[312] = (char *(*)()) F408_5127;
	R4152[313] = (char *(*)()) F409_5127;
	R4152[314] = (char *(*)()) F410_5127;
	R4152[315] = (char *(*)()) F412_5127;
	R4152[316] = (char *(*)()) F411_5127;
	R4152[317] = (char *(*)()) F413_5127;
	R4152[318] = (char *(*)()) F414_5127;
	R4152[319] = (char *(*)()) F415_5127;
	R4152[320] = (char *(*)()) F416_5127;
	R4152[321] = (char *(*)()) F417_5127;
	R4152[322] = (char *(*)()) F418_5127;
	R4152[323] = (char *(*)()) F419_5127;
	R4152[324] = (char *(*)()) F420_5127;
	R4152[325] = (char *(*)()) F421_5127;
	R4152[326] = (char *(*)()) F407_5127;
	R4152[327] = (char *(*)()) F408_5127;
	R4152[328] = (char *(*)()) F409_5127;
	R4152[329] = (char *(*)()) F410_5127;
	R4152[330] = (char *(*)()) F412_5127;
	R4152[331] = (char *(*)()) F411_5127;
	R4152[332] = (char *(*)()) F413_5127;
	R4152[333] = (char *(*)()) F414_5127;
	R4152[334] = (char *(*)()) F415_5127;
	R4152[335] = (char *(*)()) F416_5127;
	R4152[336] = (char *(*)()) F417_5127;
	R4152[337] = (char *(*)()) F418_5127;
	R4152[338] = (char *(*)()) F419_5127;
	R4152[339] = (char *(*)()) F420_5127;
	R4152[340] = (char *(*)()) F421_5127;
	R4152[341] = (char *(*)()) F407_5127;
	R4152[342] = (char *(*)()) F416_5127;
	R4152[343] = (char *(*)()) F410_5127;
	R4152[344] = (char *(*)()) F407_5127;
	R4152[345] = (char *(*)()) F416_5127;
	R4152[346] = (char *(*)()) F410_5127;
	R4152[347] = (char *(*)()) F407_5127;
	R4152[363] = (char *(*)()) F407_5127;
	R4152[364] = (char *(*)()) F408_5127;
	R4152[365] = (char *(*)()) F409_5127;
	R4152[366] = (char *(*)()) F410_5127;
	R4152[367] = (char *(*)()) F412_5127;
	R4152[368] = (char *(*)()) F411_5127;
	R4152[369] = (char *(*)()) F413_5127;
	R4152[370] = (char *(*)()) F414_5127;
	R4152[371] = (char *(*)()) F415_5127;
	R4152[372] = (char *(*)()) F416_5127;
	R4152[373] = (char *(*)()) F417_5127;
	R4152[374] = (char *(*)()) F418_5127;
	R4152[375] = (char *(*)()) F419_5127;
	R4152[376] = (char *(*)()) F420_5127;
	R4152[377] = (char *(*)()) F421_5127;
	R4152[378] = (char *(*)()) F409_5127;
	R4152[387] = (char *(*)()) F691_6407;
	{long i; for (i = 388; i < 390; i++) R4152[i] = (char *(*)()) F407_5127;}
	{long i; for (i = 390; i < 392; i++) R4152[i] = (char *(*)()) F410_5127;}
	R4152[392] = (char *(*)()) F411_5127;
	R4152[393] = (char *(*)()) F410_5127;
	R4152[394] = (char *(*)()) F407_5127;
	R4152[395] = (char *(*)()) F410_5127;
	{long i; for (i = 396; i < 398; i++) R4152[i] = (char *(*)()) F407_5127;}
	R4152[398] = (char *(*)()) F408_5127;
	R4152[399] = (char *(*)()) F409_5127;
	R4152[400] = (char *(*)()) F410_5127;
	R4152[401] = (char *(*)()) F412_5127;
	R4152[402] = (char *(*)()) F411_5127;
	R4152[403] = (char *(*)()) F413_5127;
	R4152[404] = (char *(*)()) F414_5127;
	R4152[405] = (char *(*)()) F415_5127;
	R4152[406] = (char *(*)()) F416_5127;
	R4152[407] = (char *(*)()) F417_5127;
	R4152[408] = (char *(*)()) F418_5127;
	R4152[409] = (char *(*)()) F419_5127;
	R4152[410] = (char *(*)()) F420_5127;
	R4152[411] = (char *(*)()) F421_5127;
	R4152[412] = (char *(*)()) F407_5127;
	R4152[413] = (char *(*)()) F416_5127;
	R4152[414] = (char *(*)()) F410_5127;
	R4152[415] = (char *(*)()) F407_5127;
	R4152[416] = (char *(*)()) F410_5127;
	R4152[417] = (char *(*)()) F407_5127;
	R4152[418] = (char *(*)()) F410_5127;
	R4152[419] = (char *(*)()) F407_5127;
	R4152[420] = (char *(*)()) F410_5127;
	{long i; for (i = 421; i < 423; i++) R4152[i] = (char *(*)()) F407_5127;}
	{long i; for (i = 428; i < 447; i++) R4152[i] = (char *(*)()) F407_5127;}
	{long i; for (i = 481; i < 484; i++) R4152[i] = (char *(*)()) F414_5127;}
	{long i; for (i = 619; i < 621; i++) R4152[i] = (char *(*)()) F414_5127;}
	R4152[622] = (char *(*)()) F418_5127;
	R4152[662] = (char *(*)()) F407_5127;
	{long i; for (i = 666; i < 672; i++) R4152[i] = (char *(*)()) F407_5127;}
	{long i; for (i = 672; i < 683; i++) R4152[i] = (char *(*)()) F976_12011;}
	R4152[697] = (char *(*)()) F407_5127;
	{long i; for (i = 711; i < 724; i++) R4152[i] = (char *(*)()) F407_5127;}
	R4152[901] = (char *(*)()) F1205_17277;
}

char *(*R4156[962])();
void R4156_init () {
	R4156[0] = (char *(*)()) F244_4452;
	R4156[1] = (char *(*)()) F245_4452;
	R4156[2] = (char *(*)()) F246_4452;
	R4156[3] = (char *(*)()) F247_4452;
	R4156[4] = (char *(*)()) F248_4452;
	R4156[5] = (char *(*)()) F249_4452;
	R4156[6] = (char *(*)()) F250_4452;
	R4156[7] = (char *(*)()) F251_4452;
	R4156[8] = (char *(*)()) F252_4452;
	R4156[9] = (char *(*)()) F253_4452;
	R4156[10] = (char *(*)()) F254_4452;
	R4156[11] = (char *(*)()) F255_4452;
	R4156[12] = (char *(*)()) F256_4452;
	R4156[13] = (char *(*)()) F257_4452;
	R4156[14] = (char *(*)()) F258_4452;
	R4156[15] = (char *(*)()) F244_4452;
	R4156[16] = (char *(*)()) F245_4452;
	R4156[17] = (char *(*)()) F246_4452;
	R4156[18] = (char *(*)()) F247_4452;
	R4156[19] = (char *(*)()) F248_4452;
	R4156[20] = (char *(*)()) F249_4452;
	R4156[21] = (char *(*)()) F250_4452;
	R4156[22] = (char *(*)()) F251_4452;
	R4156[23] = (char *(*)()) F252_4452;
	R4156[24] = (char *(*)()) F253_4452;
	R4156[25] = (char *(*)()) F254_4452;
	R4156[26] = (char *(*)()) F255_4452;
	R4156[27] = (char *(*)()) F256_4452;
	R4156[28] = (char *(*)()) F257_4452;
	R4156[29] = (char *(*)()) F258_4452;
	R4156[30] = (char *(*)()) F244_4452;
	R4156[31] = (char *(*)()) F245_4452;
	R4156[32] = (char *(*)()) F246_4452;
	R4156[33] = (char *(*)()) F247_4452;
	R4156[34] = (char *(*)()) F248_4452;
	R4156[35] = (char *(*)()) F249_4452;
	R4156[36] = (char *(*)()) F250_4452;
	R4156[37] = (char *(*)()) F251_4452;
	R4156[38] = (char *(*)()) F252_4452;
	R4156[39] = (char *(*)()) F253_4452;
	R4156[40] = (char *(*)()) F254_4452;
	R4156[41] = (char *(*)()) F255_4452;
	R4156[42] = (char *(*)()) F256_4452;
	R4156[43] = (char *(*)()) F257_4452;
	R4156[44] = (char *(*)()) F258_4452;
	R4156[45] = (char *(*)()) F244_4452;
	R4156[46] = (char *(*)()) F245_4452;
	R4156[47] = (char *(*)()) F246_4452;
	R4156[48] = (char *(*)()) F247_4452;
	R4156[49] = (char *(*)()) F249_4452;
	R4156[50] = (char *(*)()) F248_4452;
	R4156[51] = (char *(*)()) F250_4452;
	R4156[52] = (char *(*)()) F252_4452;
	R4156[53] = (char *(*)()) F253_4452;
	R4156[54] = (char *(*)()) F254_4452;
	R4156[55] = (char *(*)()) F255_4452;
	R4156[56] = (char *(*)()) F251_4452;
	R4156[57] = (char *(*)()) F256_4452;
	R4156[58] = (char *(*)()) F257_4452;
	R4156[59] = (char *(*)()) F258_4452;
	{long i; for (i = 60; i < 62; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[62] = (char *(*)()) F245_4452;
	R4156[63] = (char *(*)()) F246_4452;
	R4156[64] = (char *(*)()) F247_4452;
	R4156[65] = (char *(*)()) F248_4452;
	R4156[66] = (char *(*)()) F249_4452;
	R4156[67] = (char *(*)()) F250_4452;
	R4156[68] = (char *(*)()) F251_4452;
	R4156[69] = (char *(*)()) F252_4452;
	R4156[70] = (char *(*)()) F253_4452;
	R4156[71] = (char *(*)()) F254_4452;
	R4156[72] = (char *(*)()) F255_4452;
	R4156[73] = (char *(*)()) F256_4452;
	R4156[74] = (char *(*)()) F257_4452;
	R4156[75] = (char *(*)()) F258_4452;
	R4156[76] = (char *(*)()) F247_4452;
	R4156[77] = (char *(*)()) F244_4452;
	R4156[78] = (char *(*)()) F245_4452;
	R4156[79] = (char *(*)()) F246_4452;
	R4156[80] = (char *(*)()) F247_4452;
	R4156[81] = (char *(*)()) F248_4452;
	R4156[82] = (char *(*)()) F249_4452;
	R4156[83] = (char *(*)()) F250_4452;
	R4156[84] = (char *(*)()) F251_4452;
	R4156[85] = (char *(*)()) F252_4452;
	R4156[86] = (char *(*)()) F253_4452;
	R4156[87] = (char *(*)()) F254_4452;
	R4156[88] = (char *(*)()) F255_4452;
	R4156[89] = (char *(*)()) F256_4452;
	R4156[90] = (char *(*)()) F257_4452;
	R4156[91] = (char *(*)()) F258_4452;
	{long i; for (i = 92; i < 94; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[94] = (char *(*)()) F245_4452;
	R4156[95] = (char *(*)()) F246_4452;
	{long i; for (i = 96; i < 98; i++) R4156[i] = (char *(*)()) F247_4452;}
	R4156[98] = (char *(*)()) F248_4452;
	R4156[99] = (char *(*)()) F249_4452;
	R4156[100] = (char *(*)()) F248_4452;
	R4156[101] = (char *(*)()) F247_4452;
	R4156[102] = (char *(*)()) F250_4452;
	R4156[103] = (char *(*)()) F251_4452;
	R4156[104] = (char *(*)()) F252_4452;
	R4156[105] = (char *(*)()) F253_4452;
	R4156[106] = (char *(*)()) F254_4452;
	R4156[107] = (char *(*)()) F255_4452;
	R4156[108] = (char *(*)()) F256_4452;
	R4156[109] = (char *(*)()) F257_4452;
	R4156[110] = (char *(*)()) F258_4452;
	R4156[111] = (char *(*)()) F244_4452;
	R4156[112] = (char *(*)()) F245_4452;
	R4156[113] = (char *(*)()) F246_4452;
	R4156[114] = (char *(*)()) F247_4452;
	R4156[115] = (char *(*)()) F248_4452;
	R4156[116] = (char *(*)()) F249_4452;
	R4156[117] = (char *(*)()) F250_4452;
	R4156[118] = (char *(*)()) F251_4452;
	R4156[119] = (char *(*)()) F252_4452;
	R4156[120] = (char *(*)()) F253_4452;
	R4156[121] = (char *(*)()) F254_4452;
	R4156[122] = (char *(*)()) F255_4452;
	R4156[123] = (char *(*)()) F256_4452;
	R4156[124] = (char *(*)()) F257_4452;
	R4156[125] = (char *(*)()) F258_4452;
	R4156[126] = (char *(*)()) F244_4452;
	R4156[127] = (char *(*)()) F245_4452;
	R4156[128] = (char *(*)()) F246_4452;
	R4156[129] = (char *(*)()) F247_4452;
	R4156[130] = (char *(*)()) F248_4452;
	R4156[131] = (char *(*)()) F249_4452;
	R4156[132] = (char *(*)()) F250_4452;
	R4156[133] = (char *(*)()) F251_4452;
	R4156[134] = (char *(*)()) F252_4452;
	R4156[135] = (char *(*)()) F253_4452;
	R4156[136] = (char *(*)()) F254_4452;
	R4156[137] = (char *(*)()) F255_4452;
	R4156[138] = (char *(*)()) F256_4452;
	R4156[139] = (char *(*)()) F257_4452;
	R4156[140] = (char *(*)()) F258_4452;
	{long i; for (i = 141; i < 145; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[145] = (char *(*)()) F245_4452;
	R4156[146] = (char *(*)()) F246_4452;
	R4156[147] = (char *(*)()) F247_4452;
	R4156[148] = (char *(*)()) F248_4452;
	R4156[149] = (char *(*)()) F249_4452;
	R4156[150] = (char *(*)()) F250_4452;
	R4156[151] = (char *(*)()) F252_4452;
	R4156[152] = (char *(*)()) F253_4452;
	R4156[153] = (char *(*)()) F254_4452;
	R4156[154] = (char *(*)()) F255_4452;
	R4156[155] = (char *(*)()) F251_4452;
	R4156[156] = (char *(*)()) F256_4452;
	R4156[157] = (char *(*)()) F257_4452;
	R4156[158] = (char *(*)()) F258_4452;
	{long i; for (i = 159; i < 163; i++) R4156[i] = (char *(*)()) F247_4452;}
	R4156[163] = (char *(*)()) F244_4452;
	R4156[164] = (char *(*)()) F245_4452;
	R4156[165] = (char *(*)()) F246_4452;
	R4156[166] = (char *(*)()) F247_4452;
	R4156[167] = (char *(*)()) F248_4452;
	R4156[168] = (char *(*)()) F249_4452;
	R4156[169] = (char *(*)()) F250_4452;
	R4156[170] = (char *(*)()) F252_4452;
	R4156[171] = (char *(*)()) F253_4452;
	R4156[172] = (char *(*)()) F254_4452;
	R4156[173] = (char *(*)()) F255_4452;
	R4156[174] = (char *(*)()) F251_4452;
	R4156[175] = (char *(*)()) F256_4452;
	R4156[176] = (char *(*)()) F257_4452;
	R4156[177] = (char *(*)()) F258_4452;
	R4156[178] = (char *(*)()) F244_4452;
	R4156[179] = (char *(*)()) F245_4452;
	R4156[180] = (char *(*)()) F246_4452;
	R4156[181] = (char *(*)()) F247_4452;
	R4156[182] = (char *(*)()) F249_4452;
	R4156[183] = (char *(*)()) F248_4452;
	R4156[184] = (char *(*)()) F250_4452;
	R4156[185] = (char *(*)()) F252_4452;
	R4156[186] = (char *(*)()) F253_4452;
	R4156[187] = (char *(*)()) F254_4452;
	R4156[188] = (char *(*)()) F255_4452;
	R4156[189] = (char *(*)()) F251_4452;
	R4156[190] = (char *(*)()) F256_4452;
	R4156[191] = (char *(*)()) F257_4452;
	R4156[192] = (char *(*)()) F258_4452;
	R4156[193] = (char *(*)()) F244_4452;
	R4156[194] = (char *(*)()) F254_4452;
	R4156[195] = (char *(*)()) F247_4452;
	R4156[196] = (char *(*)()) F244_4452;
	R4156[197] = (char *(*)()) F254_4452;
	R4156[198] = (char *(*)()) F247_4452;
	{long i; for (i = 199; i < 202; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[202] = (char *(*)()) F245_4452;
	R4156[203] = (char *(*)()) F246_4452;
	R4156[204] = (char *(*)()) F247_4452;
	R4156[205] = (char *(*)()) F248_4452;
	R4156[206] = (char *(*)()) F249_4452;
	R4156[207] = (char *(*)()) F250_4452;
	R4156[208] = (char *(*)()) F252_4452;
	R4156[209] = (char *(*)()) F253_4452;
	R4156[210] = (char *(*)()) F254_4452;
	R4156[211] = (char *(*)()) F255_4452;
	R4156[212] = (char *(*)()) F251_4452;
	R4156[213] = (char *(*)()) F256_4452;
	R4156[214] = (char *(*)()) F257_4452;
	R4156[215] = (char *(*)()) F258_4452;
	R4156[216] = (char *(*)()) F244_4452;
	R4156[217] = (char *(*)()) F245_4452;
	R4156[218] = (char *(*)()) F246_4452;
	R4156[219] = (char *(*)()) F247_4452;
	R4156[220] = (char *(*)()) F249_4452;
	R4156[221] = (char *(*)()) F248_4452;
	R4156[222] = (char *(*)()) F250_4452;
	R4156[223] = (char *(*)()) F252_4452;
	R4156[224] = (char *(*)()) F253_4452;
	R4156[225] = (char *(*)()) F254_4452;
	R4156[226] = (char *(*)()) F255_4452;
	R4156[227] = (char *(*)()) F251_4452;
	R4156[228] = (char *(*)()) F256_4452;
	R4156[229] = (char *(*)()) F257_4452;
	R4156[230] = (char *(*)()) F258_4452;
	R4156[231] = (char *(*)()) F244_4452;
	R4156[232] = (char *(*)()) F245_4452;
	R4156[233] = (char *(*)()) F246_4452;
	R4156[234] = (char *(*)()) F247_4452;
	R4156[235] = (char *(*)()) F249_4452;
	R4156[236] = (char *(*)()) F248_4452;
	R4156[237] = (char *(*)()) F250_4452;
	R4156[238] = (char *(*)()) F252_4452;
	R4156[239] = (char *(*)()) F253_4452;
	R4156[240] = (char *(*)()) F254_4452;
	R4156[241] = (char *(*)()) F255_4452;
	R4156[242] = (char *(*)()) F251_4452;
	R4156[243] = (char *(*)()) F256_4452;
	R4156[244] = (char *(*)()) F257_4452;
	R4156[245] = (char *(*)()) F258_4452;
	R4156[246] = (char *(*)()) F244_4452;
	R4156[324] = (char *(*)()) F244_4452;
	R4156[325] = (char *(*)()) F245_4452;
	R4156[326] = (char *(*)()) F246_4452;
	R4156[327] = (char *(*)()) F247_4452;
	R4156[328] = (char *(*)()) F249_4452;
	R4156[329] = (char *(*)()) F248_4452;
	R4156[330] = (char *(*)()) F250_4452;
	R4156[331] = (char *(*)()) F251_4452;
	R4156[332] = (char *(*)()) F252_4452;
	R4156[333] = (char *(*)()) F253_4452;
	R4156[334] = (char *(*)()) F254_4452;
	R4156[335] = (char *(*)()) F255_4452;
	R4156[336] = (char *(*)()) F256_4452;
	R4156[337] = (char *(*)()) F257_4452;
	R4156[338] = (char *(*)()) F258_4452;
	{long i; for (i = 339; i < 341; i++) R4156[i] = (char *(*)()) F247_4452;}
	R4156[341] = (char *(*)()) F244_4452;
	R4156[342] = (char *(*)()) F245_4452;
	R4156[343] = (char *(*)()) F246_4452;
	R4156[344] = (char *(*)()) F247_4452;
	R4156[345] = (char *(*)()) F249_4452;
	R4156[346] = (char *(*)()) F248_4452;
	R4156[347] = (char *(*)()) F250_4452;
	R4156[348] = (char *(*)()) F252_4452;
	R4156[349] = (char *(*)()) F253_4452;
	R4156[350] = (char *(*)()) F254_4452;
	R4156[351] = (char *(*)()) F255_4452;
	R4156[352] = (char *(*)()) F251_4452;
	R4156[353] = (char *(*)()) F256_4452;
	R4156[354] = (char *(*)()) F257_4452;
	R4156[355] = (char *(*)()) F258_4452;
	R4156[356] = (char *(*)()) F244_4452;
	R4156[357] = (char *(*)()) F245_4452;
	R4156[358] = (char *(*)()) F246_4452;
	R4156[359] = (char *(*)()) F247_4452;
	R4156[360] = (char *(*)()) F249_4452;
	R4156[361] = (char *(*)()) F248_4452;
	R4156[362] = (char *(*)()) F250_4452;
	R4156[363] = (char *(*)()) F252_4452;
	R4156[364] = (char *(*)()) F253_4452;
	R4156[365] = (char *(*)()) F254_4452;
	R4156[366] = (char *(*)()) F255_4452;
	R4156[367] = (char *(*)()) F251_4452;
	R4156[368] = (char *(*)()) F256_4452;
	R4156[369] = (char *(*)()) F257_4452;
	R4156[370] = (char *(*)()) F258_4452;
	R4156[371] = (char *(*)()) F244_4452;
	R4156[372] = (char *(*)()) F245_4452;
	R4156[373] = (char *(*)()) F246_4452;
	R4156[374] = (char *(*)()) F247_4452;
	R4156[375] = (char *(*)()) F249_4452;
	R4156[376] = (char *(*)()) F248_4452;
	R4156[377] = (char *(*)()) F250_4452;
	R4156[378] = (char *(*)()) F252_4452;
	R4156[379] = (char *(*)()) F253_4452;
	R4156[380] = (char *(*)()) F254_4452;
	R4156[381] = (char *(*)()) F255_4452;
	R4156[382] = (char *(*)()) F251_4452;
	R4156[383] = (char *(*)()) F256_4452;
	R4156[384] = (char *(*)()) F257_4452;
	R4156[385] = (char *(*)()) F258_4452;
	R4156[386] = (char *(*)()) F244_4452;
	R4156[387] = (char *(*)()) F245_4452;
	R4156[388] = (char *(*)()) F246_4452;
	R4156[389] = (char *(*)()) F247_4452;
	R4156[390] = (char *(*)()) F249_4452;
	R4156[391] = (char *(*)()) F248_4452;
	R4156[392] = (char *(*)()) F250_4452;
	R4156[393] = (char *(*)()) F252_4452;
	R4156[394] = (char *(*)()) F253_4452;
	R4156[395] = (char *(*)()) F254_4452;
	R4156[396] = (char *(*)()) F255_4452;
	R4156[397] = (char *(*)()) F251_4452;
	R4156[398] = (char *(*)()) F256_4452;
	R4156[399] = (char *(*)()) F257_4452;
	R4156[400] = (char *(*)()) F258_4452;
	R4156[401] = (char *(*)()) F244_4452;
	R4156[402] = (char *(*)()) F254_4452;
	R4156[403] = (char *(*)()) F247_4452;
	R4156[404] = (char *(*)()) F244_4452;
	R4156[405] = (char *(*)()) F254_4452;
	R4156[406] = (char *(*)()) F247_4452;
	R4156[407] = (char *(*)()) F244_4452;
	R4156[423] = (char *(*)()) F244_4452;
	R4156[424] = (char *(*)()) F245_4452;
	R4156[425] = (char *(*)()) F246_4452;
	R4156[426] = (char *(*)()) F247_4452;
	R4156[427] = (char *(*)()) F249_4452;
	R4156[428] = (char *(*)()) F248_4452;
	R4156[429] = (char *(*)()) F250_4452;
	R4156[430] = (char *(*)()) F252_4452;
	R4156[431] = (char *(*)()) F253_4452;
	R4156[432] = (char *(*)()) F254_4452;
	R4156[433] = (char *(*)()) F255_4452;
	R4156[434] = (char *(*)()) F251_4452;
	R4156[435] = (char *(*)()) F256_4452;
	R4156[436] = (char *(*)()) F257_4452;
	R4156[437] = (char *(*)()) F258_4452;
	R4156[438] = (char *(*)()) F246_4452;
	{long i; for (i = 447; i < 450; i++) R4156[i] = (char *(*)()) F244_4452;}
	{long i; for (i = 450; i < 452; i++) R4156[i] = (char *(*)()) F247_4452;}
	R4156[452] = (char *(*)()) F248_4452;
	R4156[453] = (char *(*)()) F247_4452;
	R4156[454] = (char *(*)()) F244_4452;
	R4156[455] = (char *(*)()) F247_4452;
	{long i; for (i = 456; i < 458; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[458] = (char *(*)()) F245_4452;
	R4156[459] = (char *(*)()) F246_4452;
	R4156[460] = (char *(*)()) F247_4452;
	R4156[461] = (char *(*)()) F249_4452;
	R4156[462] = (char *(*)()) F248_4452;
	R4156[463] = (char *(*)()) F250_4452;
	R4156[464] = (char *(*)()) F252_4452;
	R4156[465] = (char *(*)()) F253_4452;
	R4156[466] = (char *(*)()) F254_4452;
	R4156[467] = (char *(*)()) F255_4452;
	R4156[468] = (char *(*)()) F251_4452;
	R4156[469] = (char *(*)()) F256_4452;
	R4156[470] = (char *(*)()) F257_4452;
	R4156[471] = (char *(*)()) F258_4452;
	R4156[472] = (char *(*)()) F244_4452;
	R4156[473] = (char *(*)()) F254_4452;
	R4156[474] = (char *(*)()) F247_4452;
	R4156[475] = (char *(*)()) F244_4452;
	R4156[476] = (char *(*)()) F247_4452;
	R4156[477] = (char *(*)()) F244_4452;
	R4156[478] = (char *(*)()) F247_4452;
	R4156[479] = (char *(*)()) F244_4452;
	R4156[480] = (char *(*)()) F247_4452;
	{long i; for (i = 481; i < 483; i++) R4156[i] = (char *(*)()) F244_4452;}
	{long i; for (i = 488; i < 507; i++) R4156[i] = (char *(*)()) F244_4452;}
	{long i; for (i = 541; i < 544; i++) R4156[i] = (char *(*)()) F252_4452;}
	{long i; for (i = 679; i < 681; i++) R4156[i] = (char *(*)()) F252_4452;}
	R4156[682] = (char *(*)()) F251_4452;
	R4156[722] = (char *(*)()) F244_4452;
	{long i; for (i = 725; i < 743; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[757] = (char *(*)()) F244_4452;
	{long i; for (i = 771; i < 784; i++) R4156[i] = (char *(*)()) F244_4452;}
	R4156[961] = (char *(*)()) F252_4452;
}

char *(*R4158[932])();
void R4158_init () {
	R4158[0] = (char *(*)()) F274_4480;
	R4158[1] = (char *(*)()) F275_4480;
	R4158[2] = (char *(*)()) F276_4480;
	R4158[3] = (char *(*)()) F277_4480;
	R4158[4] = (char *(*)()) F278_4480;
	R4158[5] = (char *(*)()) F279_4480;
	R4158[6] = (char *(*)()) F280_4480;
	R4158[7] = (char *(*)()) F281_4480;
	R4158[8] = (char *(*)()) F282_4480;
	R4158[9] = (char *(*)()) F283_4480;
	R4158[10] = (char *(*)()) F284_4480;
	R4158[11] = (char *(*)()) F285_4480;
	R4158[12] = (char *(*)()) F286_4480;
	R4158[13] = (char *(*)()) F287_4480;
	R4158[14] = (char *(*)()) F288_4480;
	R4158[15] = (char *(*)()) F274_4480;
	R4158[16] = (char *(*)()) F275_4480;
	R4158[17] = (char *(*)()) F276_4480;
	R4158[18] = (char *(*)()) F277_4480;
	R4158[19] = (char *(*)()) F279_4480;
	R4158[20] = (char *(*)()) F278_4480;
	R4158[21] = (char *(*)()) F280_4480;
	R4158[22] = (char *(*)()) F282_4480;
	R4158[23] = (char *(*)()) F283_4480;
	R4158[24] = (char *(*)()) F284_4480;
	R4158[25] = (char *(*)()) F285_4480;
	R4158[26] = (char *(*)()) F281_4480;
	R4158[27] = (char *(*)()) F286_4480;
	R4158[28] = (char *(*)()) F287_4480;
	R4158[29] = (char *(*)()) F288_4480;
	R4158[30] = (char *(*)()) F274_4480;
	{long i; for (i = 111; i < 114; i++) R4158[i] = (char *(*)()) F385_4812;}
	{long i; for (i = 131; i < 133; i++) R4158[i] = (char *(*)()) F405_5082;}
	R4158[148] = (char *(*)()) F274_4480;
	R4158[149] = (char *(*)()) F275_4480;
	R4158[150] = (char *(*)()) F276_4480;
	R4158[151] = (char *(*)()) F277_4480;
	R4158[152] = (char *(*)()) F279_4480;
	R4158[153] = (char *(*)()) F278_4480;
	R4158[154] = (char *(*)()) F280_4480;
	R4158[155] = (char *(*)()) F282_4480;
	R4158[156] = (char *(*)()) F283_4480;
	R4158[157] = (char *(*)()) F284_4480;
	R4158[158] = (char *(*)()) F285_4480;
	R4158[159] = (char *(*)()) F281_4480;
	R4158[160] = (char *(*)()) F286_4480;
	R4158[161] = (char *(*)()) F287_4480;
	R4158[162] = (char *(*)()) F288_4480;
	R4158[216] = (char *(*)()) F490_5178;
	{long i; for (i = 309; i < 311; i++) R4158[i] = (char *(*)()) F583_5736;}
	R4158[311] = (char *(*)()) F274_4480;
	R4158[312] = (char *(*)()) F275_4480;
	R4158[313] = (char *(*)()) F276_4480;
	R4158[314] = (char *(*)()) F277_4480;
	R4158[315] = (char *(*)()) F279_4480;
	R4158[316] = (char *(*)()) F278_4480;
	R4158[317] = (char *(*)()) F280_4480;
	R4158[318] = (char *(*)()) F282_4480;
	R4158[319] = (char *(*)()) F283_4480;
	R4158[320] = (char *(*)()) F284_4480;
	R4158[321] = (char *(*)()) F285_4480;
	R4158[322] = (char *(*)()) F281_4480;
	R4158[323] = (char *(*)()) F286_4480;
	R4158[324] = (char *(*)()) F287_4480;
	R4158[325] = (char *(*)()) F288_4480;
	R4158[326] = (char *(*)()) F274_4480;
	R4158[327] = (char *(*)()) F275_4480;
	R4158[328] = (char *(*)()) F276_4480;
	R4158[329] = (char *(*)()) F277_4480;
	R4158[330] = (char *(*)()) F279_4480;
	R4158[331] = (char *(*)()) F278_4480;
	R4158[332] = (char *(*)()) F280_4480;
	R4158[333] = (char *(*)()) F282_4480;
	R4158[334] = (char *(*)()) F283_4480;
	R4158[335] = (char *(*)()) F284_4480;
	R4158[336] = (char *(*)()) F285_4480;
	R4158[337] = (char *(*)()) F281_4480;
	R4158[338] = (char *(*)()) F286_4480;
	R4158[339] = (char *(*)()) F287_4480;
	R4158[340] = (char *(*)()) F288_4480;
	R4158[341] = (char *(*)()) F274_4480;
	R4158[342] = (char *(*)()) F275_4480;
	R4158[343] = (char *(*)()) F276_4480;
	R4158[344] = (char *(*)()) F277_4480;
	R4158[345] = (char *(*)()) F279_4480;
	R4158[346] = (char *(*)()) F278_4480;
	R4158[347] = (char *(*)()) F280_4480;
	R4158[348] = (char *(*)()) F282_4480;
	R4158[349] = (char *(*)()) F283_4480;
	R4158[350] = (char *(*)()) F284_4480;
	R4158[351] = (char *(*)()) F285_4480;
	R4158[352] = (char *(*)()) F281_4480;
	R4158[353] = (char *(*)()) F286_4480;
	R4158[354] = (char *(*)()) F287_4480;
	R4158[355] = (char *(*)()) F288_4480;
	R4158[356] = (char *(*)()) F274_4480;
	R4158[357] = (char *(*)()) F275_4480;
	R4158[358] = (char *(*)()) F276_4480;
	R4158[359] = (char *(*)()) F277_4480;
	R4158[360] = (char *(*)()) F279_4480;
	R4158[361] = (char *(*)()) F278_4480;
	R4158[362] = (char *(*)()) F280_4480;
	R4158[363] = (char *(*)()) F282_4480;
	R4158[364] = (char *(*)()) F283_4480;
	R4158[365] = (char *(*)()) F284_4480;
	R4158[366] = (char *(*)()) F285_4480;
	R4158[367] = (char *(*)()) F281_4480;
	R4158[368] = (char *(*)()) F286_4480;
	R4158[369] = (char *(*)()) F287_4480;
	R4158[370] = (char *(*)()) F288_4480;
	R4158[371] = (char *(*)()) F274_4480;
	R4158[372] = (char *(*)()) F284_4480;
	R4158[373] = (char *(*)()) F277_4480;
	R4158[374] = (char *(*)()) F648_6067;
	R4158[375] = (char *(*)()) F649_6067;
	R4158[376] = (char *(*)()) F650_6067;
	R4158[377] = (char *(*)()) F651_6080;
	R4158[393] = (char *(*)()) F667_6287;
	R4158[394] = (char *(*)()) F668_6287;
	R4158[395] = (char *(*)()) F669_6287;
	R4158[396] = (char *(*)()) F670_6287;
	R4158[397] = (char *(*)()) F671_6287;
	R4158[398] = (char *(*)()) F672_6287;
	R4158[399] = (char *(*)()) F673_6287;
	R4158[400] = (char *(*)()) F674_6287;
	R4158[401] = (char *(*)()) F675_6287;
	R4158[402] = (char *(*)()) F676_6287;
	R4158[403] = (char *(*)()) F677_6287;
	R4158[404] = (char *(*)()) F678_6287;
	R4158[405] = (char *(*)()) F679_6287;
	R4158[406] = (char *(*)()) F680_6287;
	R4158[407] = (char *(*)()) F681_6287;
	R4158[408] = (char *(*)()) F669_6287;
	R4158[417] = (char *(*)()) F691_6421;
	R4158[418] = (char *(*)()) F692_6486;
	R4158[419] = (char *(*)()) F693_6486;
	R4158[420] = (char *(*)()) F694_6486;
	R4158[421] = (char *(*)()) F695_6486;
	R4158[422] = (char *(*)()) F696_6486;
	R4158[423] = (char *(*)()) F697_6486;
	R4158[424] = (char *(*)()) F692_6486;
	R4158[425] = (char *(*)()) F694_6486;
	R4158[426] = (char *(*)()) F692_6486;
	R4158[427] = (char *(*)()) F274_4480;
	R4158[428] = (char *(*)()) F275_4480;
	R4158[429] = (char *(*)()) F276_4480;
	R4158[430] = (char *(*)()) F277_4480;
	R4158[431] = (char *(*)()) F279_4480;
	R4158[432] = (char *(*)()) F278_4480;
	R4158[433] = (char *(*)()) F280_4480;
	R4158[434] = (char *(*)()) F282_4480;
	R4158[435] = (char *(*)()) F283_4480;
	R4158[436] = (char *(*)()) F284_4480;
	R4158[437] = (char *(*)()) F285_4480;
	R4158[438] = (char *(*)()) F281_4480;
	R4158[439] = (char *(*)()) F286_4480;
	R4158[440] = (char *(*)()) F287_4480;
	R4158[441] = (char *(*)()) F288_4480;
	R4158[442] = (char *(*)()) F716_6665;
	R4158[443] = (char *(*)()) F717_6665;
	R4158[444] = (char *(*)()) F718_6665;
	R4158[445] = (char *(*)()) F274_4480;
	R4158[446] = (char *(*)()) F277_4480;
	R4158[447] = (char *(*)()) F274_4480;
	R4158[448] = (char *(*)()) F277_4480;
	R4158[449] = (char *(*)()) F274_4480;
	R4158[450] = (char *(*)()) F277_4480;
	{long i; for (i = 451; i < 453; i++) R4158[i] = (char *(*)()) F274_4480;}
	{long i; for (i = 458; i < 477; i++) R4158[i] = (char *(*)()) F274_4480;}
	{long i; for (i = 511; i < 514; i++) R4158[i] = (char *(*)()) F282_4480;}
	{long i; for (i = 649; i < 651; i++) R4158[i] = (char *(*)()) F923_10477;}
	R4158[652] = (char *(*)()) F926_10685;
	R4158[692] = (char *(*)()) F274_4480;
	{long i; for (i = 696; i < 702; i++) R4158[i] = (char *(*)()) F274_4480;}
	{long i; for (i = 702; i < 713; i++) R4158[i] = (char *(*)()) F976_12020;}
	R4158[727] = (char *(*)()) F274_4480;
	{long i; for (i = 741; i < 754; i++) R4158[i] = (char *(*)()) F274_4480;}
	R4158[931] = (char *(*)()) F282_4480;
}

static EIF_TYPE_INDEX Y4159_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype60[] = {26,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype162[] = {874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype196[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype197[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype198[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype199[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype200[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype201[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype202[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype203[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype204[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype205[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype206[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype207[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype208[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype209[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype210[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype211[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype212[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype213[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype214[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype215[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype216[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype232[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype233[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype234[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype235[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype236[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype237[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype238[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype239[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype240[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype241[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype242[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype243[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype244[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype245[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype246[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype247[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype249[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype250[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype251[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype252[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype253[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype254[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype255[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype256[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype257[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype258[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype259[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype260[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype261[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype262[] = {874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype263[] = {874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype264[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype265[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype266[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype267[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype268[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype269[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype270[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype271[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype272[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype273[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype274[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype275[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype276[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype277[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype278[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype279[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype280[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype281[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype282[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype283[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype284[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype285[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype286[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype287[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype288[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype289[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype290[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype291[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype292[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype293[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype294[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype295[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype296[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype297[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype298[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype299[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype300[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype301[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype302[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype303[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype304[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype305[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype306[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype307[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype308[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype309[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype310[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype311[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype312[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype313[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype314[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype315[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype316[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype317[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype318[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype319[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype320[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype321[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype322[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype323[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype324[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype325[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype326[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype327[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype328[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype329[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype330[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype331[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype332[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype333[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype334[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype335[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype336[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype337[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype338[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype339[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype340[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype341[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype342[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype343[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype344[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype345[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype346[] = {865,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype347[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype348[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype349[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype350[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype351[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype352[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype353[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype354[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype355[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype356[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype357[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype358[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype359[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype360[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype361[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype362[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype363[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype364[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype365[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype366[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype367[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype368[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype369[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype370[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype371[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype372[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype373[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype374[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype375[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype376[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype377[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype378[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype379[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype380[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype381[] = {934,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype382[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype383[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype384[] = {915,0,0xFFF9,1,841,0,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype385[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype386[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype387[] = {915,0,0xFFF9,1,841,944,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype388[] = {915,0,0xFFF9,3,841,874,874,791,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype389[] = {915,0,0xFFF9,0,841,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype390[] = {915,0,0xFFF9,1,841,1205,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype391[] = {915,0,0xFFF9,1,841,925,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype392[] = {915,0,0xFFF9,1,841,1000,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype393[] = {915,0,0xFFF9,1,841,1005,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype394[] = {915,0,0xFFF9,7,841,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype395[] = {915,0,0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype396[] = {915,0,0xFFF9,1,841,791,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype397[] = {915,0,0xFFF9,2,841,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype398[] = {915,0,0xFFF9,1,841,967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype399[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype400[] = {915,0,0xFFF9,4,841,874,874,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype401[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype402[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype403[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype404[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype405[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype406[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype407[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype408[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype409[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype410[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype411[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype412[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype413[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype414[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype415[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype416[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype417[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype418[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype419[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype420[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype421[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype422[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype423[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype424[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype425[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype426[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype427[] = {925,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype428[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype429[] = {1001,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype430[] = {1000,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype431[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype432[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype433[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype434[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype435[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype436[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype437[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype438[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype439[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype440[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y4159_pgtype441[] = {853,0xFFFF};
EIF_TYPE_INDEX *Y4159_gen_type [962];
EIF_TYPE_INDEX Y4159 [962];
void Y4159_init (void)
{
	egc_routines_types [4159] = Y4159;
	egc_routines_gen_types [4159] = Y4159_gen_type;
	egc_routines_offset [4159] = 243;
	Y4159_gen_type [0] = Y4159_pgtype0;
	Y4159_gen_type [1] = Y4159_pgtype1;
	Y4159_gen_type [2] = Y4159_pgtype2;
	Y4159_gen_type [3] = Y4159_pgtype3;
	Y4159_gen_type [4] = Y4159_pgtype4;
	Y4159_gen_type [5] = Y4159_pgtype5;
	Y4159_gen_type [6] = Y4159_pgtype6;
	Y4159_gen_type [7] = Y4159_pgtype7;
	Y4159_gen_type [8] = Y4159_pgtype8;
	Y4159_gen_type [9] = Y4159_pgtype9;
	Y4159_gen_type [10] = Y4159_pgtype10;
	Y4159_gen_type [11] = Y4159_pgtype11;
	Y4159_gen_type [12] = Y4159_pgtype12;
	Y4159_gen_type [13] = Y4159_pgtype13;
	Y4159_gen_type [14] = Y4159_pgtype14;
	Y4159_gen_type [15] = Y4159_pgtype15;
	Y4159_gen_type [16] = Y4159_pgtype16;
	Y4159_gen_type [17] = Y4159_pgtype17;
	Y4159_gen_type [18] = Y4159_pgtype18;
	Y4159_gen_type [19] = Y4159_pgtype19;
	Y4159_gen_type [20] = Y4159_pgtype20;
	Y4159_gen_type [21] = Y4159_pgtype21;
	Y4159_gen_type [22] = Y4159_pgtype22;
	Y4159_gen_type [23] = Y4159_pgtype23;
	Y4159_gen_type [24] = Y4159_pgtype24;
	Y4159_gen_type [25] = Y4159_pgtype25;
	Y4159_gen_type [26] = Y4159_pgtype26;
	Y4159_gen_type [27] = Y4159_pgtype27;
	Y4159_gen_type [28] = Y4159_pgtype28;
	Y4159_gen_type [29] = Y4159_pgtype29;
	Y4159_gen_type [30] = Y4159_pgtype30;
	Y4159_gen_type [31] = Y4159_pgtype31;
	Y4159_gen_type [32] = Y4159_pgtype32;
	Y4159_gen_type [33] = Y4159_pgtype33;
	Y4159_gen_type [34] = Y4159_pgtype34;
	Y4159_gen_type [35] = Y4159_pgtype35;
	Y4159_gen_type [36] = Y4159_pgtype36;
	Y4159_gen_type [37] = Y4159_pgtype37;
	Y4159_gen_type [38] = Y4159_pgtype38;
	Y4159_gen_type [39] = Y4159_pgtype39;
	Y4159_gen_type [40] = Y4159_pgtype40;
	Y4159_gen_type [41] = Y4159_pgtype41;
	Y4159_gen_type [42] = Y4159_pgtype42;
	Y4159_gen_type [43] = Y4159_pgtype43;
	Y4159_gen_type [44] = Y4159_pgtype44;
	Y4159_gen_type [45] = Y4159_pgtype45;
	Y4159_gen_type [46] = Y4159_pgtype46;
	Y4159_gen_type [47] = Y4159_pgtype47;
	Y4159_gen_type [48] = Y4159_pgtype48;
	Y4159_gen_type [49] = Y4159_pgtype49;
	Y4159_gen_type [50] = Y4159_pgtype50;
	Y4159_gen_type [51] = Y4159_pgtype51;
	Y4159_gen_type [52] = Y4159_pgtype52;
	Y4159_gen_type [53] = Y4159_pgtype53;
	Y4159_gen_type [54] = Y4159_pgtype54;
	Y4159_gen_type [55] = Y4159_pgtype55;
	Y4159_gen_type [56] = Y4159_pgtype56;
	Y4159_gen_type [57] = Y4159_pgtype57;
	Y4159_gen_type [58] = Y4159_pgtype58;
	Y4159_gen_type [59] = Y4159_pgtype59;
	Y4159_gen_type [60] = Y4159_pgtype60;
	Y4159_gen_type [61] = Y4159_pgtype61;
	Y4159_gen_type [62] = Y4159_pgtype62;
	Y4159_gen_type [63] = Y4159_pgtype63;
	Y4159_gen_type [64] = Y4159_pgtype64;
	Y4159_gen_type [65] = Y4159_pgtype65;
	Y4159_gen_type [66] = Y4159_pgtype66;
	Y4159_gen_type [67] = Y4159_pgtype67;
	Y4159_gen_type [68] = Y4159_pgtype68;
	Y4159_gen_type [69] = Y4159_pgtype69;
	Y4159_gen_type [70] = Y4159_pgtype70;
	Y4159_gen_type [71] = Y4159_pgtype71;
	Y4159_gen_type [72] = Y4159_pgtype72;
	Y4159_gen_type [73] = Y4159_pgtype73;
	Y4159_gen_type [74] = Y4159_pgtype74;
	Y4159_gen_type [75] = Y4159_pgtype75;
	Y4159_gen_type [76] = Y4159_pgtype76;
	Y4159_gen_type [77] = Y4159_pgtype77;
	Y4159_gen_type [78] = Y4159_pgtype78;
	Y4159_gen_type [79] = Y4159_pgtype79;
	Y4159_gen_type [80] = Y4159_pgtype80;
	Y4159_gen_type [81] = Y4159_pgtype81;
	Y4159_gen_type [82] = Y4159_pgtype82;
	Y4159_gen_type [83] = Y4159_pgtype83;
	Y4159_gen_type [84] = Y4159_pgtype84;
	Y4159_gen_type [85] = Y4159_pgtype85;
	Y4159_gen_type [86] = Y4159_pgtype86;
	Y4159_gen_type [87] = Y4159_pgtype87;
	Y4159_gen_type [88] = Y4159_pgtype88;
	Y4159_gen_type [89] = Y4159_pgtype89;
	Y4159_gen_type [90] = Y4159_pgtype90;
	Y4159_gen_type [91] = Y4159_pgtype91;
	Y4159_gen_type [92] = Y4159_pgtype92;
	Y4159_gen_type [93] = Y4159_pgtype93;
	Y4159_gen_type [94] = Y4159_pgtype94;
	Y4159_gen_type [95] = Y4159_pgtype95;
	Y4159_gen_type [96] = Y4159_pgtype96;
	Y4159_gen_type [97] = Y4159_pgtype97;
	Y4159_gen_type [98] = Y4159_pgtype98;
	Y4159_gen_type [99] = Y4159_pgtype99;
	Y4159_gen_type [100] = Y4159_pgtype100;
	Y4159_gen_type [101] = Y4159_pgtype101;
	Y4159_gen_type [102] = Y4159_pgtype102;
	Y4159_gen_type [103] = Y4159_pgtype103;
	Y4159_gen_type [104] = Y4159_pgtype104;
	Y4159_gen_type [105] = Y4159_pgtype105;
	Y4159_gen_type [106] = Y4159_pgtype106;
	Y4159_gen_type [107] = Y4159_pgtype107;
	Y4159_gen_type [108] = Y4159_pgtype108;
	Y4159_gen_type [109] = Y4159_pgtype109;
	Y4159_gen_type [110] = Y4159_pgtype110;
	Y4159_gen_type [111] = Y4159_pgtype111;
	Y4159_gen_type [112] = Y4159_pgtype112;
	Y4159_gen_type [113] = Y4159_pgtype113;
	Y4159_gen_type [114] = Y4159_pgtype114;
	Y4159_gen_type [115] = Y4159_pgtype115;
	Y4159_gen_type [116] = Y4159_pgtype116;
	Y4159_gen_type [117] = Y4159_pgtype117;
	Y4159_gen_type [118] = Y4159_pgtype118;
	Y4159_gen_type [119] = Y4159_pgtype119;
	Y4159_gen_type [120] = Y4159_pgtype120;
	Y4159_gen_type [121] = Y4159_pgtype121;
	Y4159_gen_type [122] = Y4159_pgtype122;
	Y4159_gen_type [123] = Y4159_pgtype123;
	Y4159_gen_type [124] = Y4159_pgtype124;
	Y4159_gen_type [125] = Y4159_pgtype125;
	Y4159_gen_type [126] = Y4159_pgtype126;
	Y4159_gen_type [127] = Y4159_pgtype127;
	Y4159_gen_type [128] = Y4159_pgtype128;
	Y4159_gen_type [129] = Y4159_pgtype129;
	Y4159_gen_type [130] = Y4159_pgtype130;
	Y4159_gen_type [131] = Y4159_pgtype131;
	Y4159_gen_type [132] = Y4159_pgtype132;
	Y4159_gen_type [133] = Y4159_pgtype133;
	Y4159_gen_type [134] = Y4159_pgtype134;
	Y4159_gen_type [135] = Y4159_pgtype135;
	Y4159_gen_type [136] = Y4159_pgtype136;
	Y4159_gen_type [137] = Y4159_pgtype137;
	Y4159_gen_type [138] = Y4159_pgtype138;
	Y4159_gen_type [139] = Y4159_pgtype139;
	Y4159_gen_type [140] = Y4159_pgtype140;
	Y4159_gen_type [141] = Y4159_pgtype141;
	Y4159_gen_type [142] = Y4159_pgtype142;
	Y4159_gen_type [143] = Y4159_pgtype143;
	Y4159_gen_type [144] = Y4159_pgtype144;
	Y4159_gen_type [145] = Y4159_pgtype145;
	Y4159_gen_type [146] = Y4159_pgtype146;
	Y4159_gen_type [147] = Y4159_pgtype147;
	Y4159_gen_type [148] = Y4159_pgtype148;
	Y4159_gen_type [149] = Y4159_pgtype149;
	Y4159_gen_type [150] = Y4159_pgtype150;
	Y4159_gen_type [151] = Y4159_pgtype151;
	Y4159_gen_type [152] = Y4159_pgtype152;
	Y4159_gen_type [153] = Y4159_pgtype153;
	Y4159_gen_type [154] = Y4159_pgtype154;
	Y4159_gen_type [155] = Y4159_pgtype155;
	Y4159_gen_type [156] = Y4159_pgtype156;
	Y4159_gen_type [157] = Y4159_pgtype157;
	Y4159_gen_type [158] = Y4159_pgtype158;
	Y4159_gen_type [159] = Y4159_pgtype159;
	Y4159_gen_type [160] = Y4159_pgtype160;
	Y4159_gen_type [161] = Y4159_pgtype161;
	Y4159_gen_type [162] = Y4159_pgtype162;
	Y4159_gen_type [163] = Y4159_pgtype163;
	Y4159_gen_type [164] = Y4159_pgtype164;
	Y4159_gen_type [165] = Y4159_pgtype165;
	Y4159_gen_type [166] = Y4159_pgtype166;
	Y4159_gen_type [167] = Y4159_pgtype167;
	Y4159_gen_type [168] = Y4159_pgtype168;
	Y4159_gen_type [169] = Y4159_pgtype169;
	Y4159_gen_type [170] = Y4159_pgtype170;
	Y4159_gen_type [171] = Y4159_pgtype171;
	Y4159_gen_type [172] = Y4159_pgtype172;
	Y4159_gen_type [173] = Y4159_pgtype173;
	Y4159_gen_type [174] = Y4159_pgtype174;
	Y4159_gen_type [175] = Y4159_pgtype175;
	Y4159_gen_type [176] = Y4159_pgtype176;
	Y4159_gen_type [177] = Y4159_pgtype177;
	Y4159_gen_type [178] = Y4159_pgtype178;
	Y4159_gen_type [179] = Y4159_pgtype179;
	Y4159_gen_type [180] = Y4159_pgtype180;
	Y4159_gen_type [181] = Y4159_pgtype181;
	Y4159_gen_type [182] = Y4159_pgtype182;
	Y4159_gen_type [183] = Y4159_pgtype183;
	Y4159_gen_type [184] = Y4159_pgtype184;
	Y4159_gen_type [185] = Y4159_pgtype185;
	Y4159_gen_type [186] = Y4159_pgtype186;
	Y4159_gen_type [187] = Y4159_pgtype187;
	Y4159_gen_type [188] = Y4159_pgtype188;
	Y4159_gen_type [189] = Y4159_pgtype189;
	Y4159_gen_type [190] = Y4159_pgtype190;
	Y4159_gen_type [191] = Y4159_pgtype191;
	Y4159_gen_type [192] = Y4159_pgtype192;
	Y4159_gen_type [193] = Y4159_pgtype193;
	Y4159_gen_type [194] = Y4159_pgtype194;
	Y4159_gen_type [195] = Y4159_pgtype195;
	Y4159_gen_type [196] = Y4159_pgtype196;
	Y4159_gen_type [197] = Y4159_pgtype197;
	Y4159_gen_type [198] = Y4159_pgtype198;
	Y4159_gen_type [199] = Y4159_pgtype199;
	Y4159_gen_type [200] = Y4159_pgtype200;
	Y4159_gen_type [201] = Y4159_pgtype201;
	Y4159_gen_type [202] = Y4159_pgtype202;
	Y4159_gen_type [203] = Y4159_pgtype203;
	Y4159_gen_type [204] = Y4159_pgtype204;
	Y4159_gen_type [205] = Y4159_pgtype205;
	Y4159_gen_type [206] = Y4159_pgtype206;
	Y4159_gen_type [207] = Y4159_pgtype207;
	Y4159_gen_type [208] = Y4159_pgtype208;
	Y4159_gen_type [209] = Y4159_pgtype209;
	Y4159_gen_type [210] = Y4159_pgtype210;
	Y4159_gen_type [211] = Y4159_pgtype211;
	Y4159_gen_type [212] = Y4159_pgtype212;
	Y4159_gen_type [213] = Y4159_pgtype213;
	Y4159_gen_type [214] = Y4159_pgtype214;
	Y4159_gen_type [215] = Y4159_pgtype215;
	Y4159_gen_type [216] = Y4159_pgtype216;
	Y4159_gen_type [217] = Y4159_pgtype217;
	Y4159_gen_type [218] = Y4159_pgtype218;
	Y4159_gen_type [219] = Y4159_pgtype219;
	Y4159_gen_type [220] = Y4159_pgtype220;
	Y4159_gen_type [221] = Y4159_pgtype221;
	Y4159_gen_type [222] = Y4159_pgtype222;
	Y4159_gen_type [223] = Y4159_pgtype223;
	Y4159_gen_type [224] = Y4159_pgtype224;
	Y4159_gen_type [225] = Y4159_pgtype225;
	Y4159_gen_type [226] = Y4159_pgtype226;
	Y4159_gen_type [227] = Y4159_pgtype227;
	Y4159_gen_type [228] = Y4159_pgtype228;
	Y4159_gen_type [229] = Y4159_pgtype229;
	Y4159_gen_type [230] = Y4159_pgtype230;
	Y4159_gen_type [231] = Y4159_pgtype231;
	Y4159_gen_type [232] = Y4159_pgtype232;
	Y4159_gen_type [233] = Y4159_pgtype233;
	Y4159_gen_type [234] = Y4159_pgtype234;
	Y4159_gen_type [235] = Y4159_pgtype235;
	Y4159_gen_type [236] = Y4159_pgtype236;
	Y4159_gen_type [237] = Y4159_pgtype237;
	Y4159_gen_type [238] = Y4159_pgtype238;
	Y4159_gen_type [239] = Y4159_pgtype239;
	Y4159_gen_type [240] = Y4159_pgtype240;
	Y4159_gen_type [241] = Y4159_pgtype241;
	Y4159_gen_type [242] = Y4159_pgtype242;
	Y4159_gen_type [243] = Y4159_pgtype243;
	Y4159_gen_type [244] = Y4159_pgtype244;
	Y4159_gen_type [245] = Y4159_pgtype245;
	Y4159_gen_type [246] = Y4159_pgtype246;
	Y4159_gen_type [324] = Y4159_pgtype247;
	Y4159_gen_type [325] = Y4159_pgtype248;
	Y4159_gen_type [326] = Y4159_pgtype249;
	Y4159_gen_type [327] = Y4159_pgtype250;
	Y4159_gen_type [328] = Y4159_pgtype251;
	Y4159_gen_type [329] = Y4159_pgtype252;
	Y4159_gen_type [330] = Y4159_pgtype253;
	Y4159_gen_type [331] = Y4159_pgtype254;
	Y4159_gen_type [332] = Y4159_pgtype255;
	Y4159_gen_type [333] = Y4159_pgtype256;
	Y4159_gen_type [334] = Y4159_pgtype257;
	Y4159_gen_type [335] = Y4159_pgtype258;
	Y4159_gen_type [336] = Y4159_pgtype259;
	Y4159_gen_type [337] = Y4159_pgtype260;
	Y4159_gen_type [338] = Y4159_pgtype261;
	Y4159_gen_type [339] = Y4159_pgtype262;
	Y4159_gen_type [340] = Y4159_pgtype263;
	Y4159_gen_type [341] = Y4159_pgtype264;
	Y4159_gen_type [342] = Y4159_pgtype265;
	Y4159_gen_type [343] = Y4159_pgtype266;
	Y4159_gen_type [344] = Y4159_pgtype267;
	Y4159_gen_type [345] = Y4159_pgtype268;
	Y4159_gen_type [346] = Y4159_pgtype269;
	Y4159_gen_type [347] = Y4159_pgtype270;
	Y4159_gen_type [348] = Y4159_pgtype271;
	Y4159_gen_type [349] = Y4159_pgtype272;
	Y4159_gen_type [350] = Y4159_pgtype273;
	Y4159_gen_type [351] = Y4159_pgtype274;
	Y4159_gen_type [352] = Y4159_pgtype275;
	Y4159_gen_type [353] = Y4159_pgtype276;
	Y4159_gen_type [354] = Y4159_pgtype277;
	Y4159_gen_type [355] = Y4159_pgtype278;
	Y4159_gen_type [356] = Y4159_pgtype279;
	Y4159_gen_type [357] = Y4159_pgtype280;
	Y4159_gen_type [358] = Y4159_pgtype281;
	Y4159_gen_type [359] = Y4159_pgtype282;
	Y4159_gen_type [360] = Y4159_pgtype283;
	Y4159_gen_type [361] = Y4159_pgtype284;
	Y4159_gen_type [362] = Y4159_pgtype285;
	Y4159_gen_type [363] = Y4159_pgtype286;
	Y4159_gen_type [364] = Y4159_pgtype287;
	Y4159_gen_type [365] = Y4159_pgtype288;
	Y4159_gen_type [366] = Y4159_pgtype289;
	Y4159_gen_type [367] = Y4159_pgtype290;
	Y4159_gen_type [368] = Y4159_pgtype291;
	Y4159_gen_type [369] = Y4159_pgtype292;
	Y4159_gen_type [370] = Y4159_pgtype293;
	Y4159_gen_type [371] = Y4159_pgtype294;
	Y4159_gen_type [372] = Y4159_pgtype295;
	Y4159_gen_type [373] = Y4159_pgtype296;
	Y4159_gen_type [374] = Y4159_pgtype297;
	Y4159_gen_type [375] = Y4159_pgtype298;
	Y4159_gen_type [376] = Y4159_pgtype299;
	Y4159_gen_type [377] = Y4159_pgtype300;
	Y4159_gen_type [378] = Y4159_pgtype301;
	Y4159_gen_type [379] = Y4159_pgtype302;
	Y4159_gen_type [380] = Y4159_pgtype303;
	Y4159_gen_type [381] = Y4159_pgtype304;
	Y4159_gen_type [382] = Y4159_pgtype305;
	Y4159_gen_type [383] = Y4159_pgtype306;
	Y4159_gen_type [384] = Y4159_pgtype307;
	Y4159_gen_type [385] = Y4159_pgtype308;
	Y4159_gen_type [386] = Y4159_pgtype309;
	Y4159_gen_type [387] = Y4159_pgtype310;
	Y4159_gen_type [388] = Y4159_pgtype311;
	Y4159_gen_type [389] = Y4159_pgtype312;
	Y4159_gen_type [390] = Y4159_pgtype313;
	Y4159_gen_type [391] = Y4159_pgtype314;
	Y4159_gen_type [392] = Y4159_pgtype315;
	Y4159_gen_type [393] = Y4159_pgtype316;
	Y4159_gen_type [394] = Y4159_pgtype317;
	Y4159_gen_type [395] = Y4159_pgtype318;
	Y4159_gen_type [396] = Y4159_pgtype319;
	Y4159_gen_type [397] = Y4159_pgtype320;
	Y4159_gen_type [398] = Y4159_pgtype321;
	Y4159_gen_type [399] = Y4159_pgtype322;
	Y4159_gen_type [400] = Y4159_pgtype323;
	Y4159_gen_type [401] = Y4159_pgtype324;
	Y4159_gen_type [402] = Y4159_pgtype325;
	Y4159_gen_type [403] = Y4159_pgtype326;
	Y4159_gen_type [404] = Y4159_pgtype327;
	Y4159_gen_type [405] = Y4159_pgtype328;
	Y4159_gen_type [406] = Y4159_pgtype329;
	Y4159_gen_type [407] = Y4159_pgtype330;
	Y4159_gen_type [423] = Y4159_pgtype331;
	Y4159_gen_type [424] = Y4159_pgtype332;
	Y4159_gen_type [425] = Y4159_pgtype333;
	Y4159_gen_type [426] = Y4159_pgtype334;
	Y4159_gen_type [427] = Y4159_pgtype335;
	Y4159_gen_type [428] = Y4159_pgtype336;
	Y4159_gen_type [429] = Y4159_pgtype337;
	Y4159_gen_type [430] = Y4159_pgtype338;
	Y4159_gen_type [431] = Y4159_pgtype339;
	Y4159_gen_type [432] = Y4159_pgtype340;
	Y4159_gen_type [433] = Y4159_pgtype341;
	Y4159_gen_type [434] = Y4159_pgtype342;
	Y4159_gen_type [435] = Y4159_pgtype343;
	Y4159_gen_type [436] = Y4159_pgtype344;
	Y4159_gen_type [437] = Y4159_pgtype345;
	Y4159_gen_type [438] = Y4159_pgtype346;
	Y4159_gen_type [447] = Y4159_pgtype347;
	Y4159_gen_type [448] = Y4159_pgtype348;
	Y4159_gen_type [449] = Y4159_pgtype349;
	Y4159_gen_type [450] = Y4159_pgtype350;
	Y4159_gen_type [451] = Y4159_pgtype351;
	Y4159_gen_type [452] = Y4159_pgtype352;
	Y4159_gen_type [453] = Y4159_pgtype353;
	Y4159_gen_type [454] = Y4159_pgtype354;
	Y4159_gen_type [455] = Y4159_pgtype355;
	Y4159_gen_type [456] = Y4159_pgtype356;
	Y4159_gen_type [457] = Y4159_pgtype357;
	Y4159_gen_type [458] = Y4159_pgtype358;
	Y4159_gen_type [459] = Y4159_pgtype359;
	Y4159_gen_type [460] = Y4159_pgtype360;
	Y4159_gen_type [461] = Y4159_pgtype361;
	Y4159_gen_type [462] = Y4159_pgtype362;
	Y4159_gen_type [463] = Y4159_pgtype363;
	Y4159_gen_type [464] = Y4159_pgtype364;
	Y4159_gen_type [465] = Y4159_pgtype365;
	Y4159_gen_type [466] = Y4159_pgtype366;
	Y4159_gen_type [467] = Y4159_pgtype367;
	Y4159_gen_type [468] = Y4159_pgtype368;
	Y4159_gen_type [469] = Y4159_pgtype369;
	Y4159_gen_type [470] = Y4159_pgtype370;
	Y4159_gen_type [471] = Y4159_pgtype371;
	Y4159_gen_type [472] = Y4159_pgtype372;
	Y4159_gen_type [473] = Y4159_pgtype373;
	Y4159_gen_type [474] = Y4159_pgtype374;
	Y4159_gen_type [475] = Y4159_pgtype375;
	Y4159_gen_type [476] = Y4159_pgtype376;
	Y4159_gen_type [477] = Y4159_pgtype377;
	Y4159_gen_type [478] = Y4159_pgtype378;
	Y4159_gen_type [479] = Y4159_pgtype379;
	Y4159_gen_type [480] = Y4159_pgtype380;
	Y4159_gen_type [481] = Y4159_pgtype381;
	Y4159_gen_type [482] = Y4159_pgtype382;
	Y4159_gen_type [488] = Y4159_pgtype383;
	Y4159_gen_type [489] = Y4159_pgtype384;
	Y4159_gen_type [490] = Y4159_pgtype385;
	Y4159_gen_type [491] = Y4159_pgtype386;
	Y4159_gen_type [492] = Y4159_pgtype387;
	Y4159_gen_type [493] = Y4159_pgtype388;
	Y4159_gen_type [494] = Y4159_pgtype389;
	Y4159_gen_type [495] = Y4159_pgtype390;
	Y4159_gen_type [496] = Y4159_pgtype391;
	Y4159_gen_type [497] = Y4159_pgtype392;
	Y4159_gen_type [498] = Y4159_pgtype393;
	Y4159_gen_type [499] = Y4159_pgtype394;
	Y4159_gen_type [500] = Y4159_pgtype395;
	Y4159_gen_type [501] = Y4159_pgtype396;
	Y4159_gen_type [502] = Y4159_pgtype397;
	Y4159_gen_type [503] = Y4159_pgtype398;
	Y4159_gen_type [504] = Y4159_pgtype399;
	Y4159_gen_type [505] = Y4159_pgtype400;
	Y4159_gen_type [506] = Y4159_pgtype401;
	Y4159_gen_type [541] = Y4159_pgtype402;
	Y4159_gen_type [542] = Y4159_pgtype403;
	Y4159_gen_type [543] = Y4159_pgtype404;
	Y4159_gen_type [679] = Y4159_pgtype405;
	Y4159_gen_type [680] = Y4159_pgtype406;
	Y4159_gen_type [682] = Y4159_pgtype407;
	Y4159_gen_type [722] = Y4159_pgtype408;
	Y4159_gen_type [725] = Y4159_pgtype409;
	Y4159_gen_type [726] = Y4159_pgtype410;
	Y4159_gen_type [727] = Y4159_pgtype411;
	Y4159_gen_type [728] = Y4159_pgtype412;
	Y4159_gen_type [729] = Y4159_pgtype413;
	Y4159_gen_type [730] = Y4159_pgtype414;
	Y4159_gen_type [731] = Y4159_pgtype415;
	Y4159_gen_type [732] = Y4159_pgtype416;
	Y4159_gen_type [733] = Y4159_pgtype417;
	Y4159_gen_type [734] = Y4159_pgtype418;
	Y4159_gen_type [735] = Y4159_pgtype419;
	Y4159_gen_type [736] = Y4159_pgtype420;
	Y4159_gen_type [737] = Y4159_pgtype421;
	Y4159_gen_type [738] = Y4159_pgtype422;
	Y4159_gen_type [739] = Y4159_pgtype423;
	Y4159_gen_type [740] = Y4159_pgtype424;
	Y4159_gen_type [741] = Y4159_pgtype425;
	Y4159_gen_type [742] = Y4159_pgtype426;
	Y4159_gen_type [757] = Y4159_pgtype427;
	Y4159_gen_type [771] = Y4159_pgtype428;
	Y4159_gen_type [772] = Y4159_pgtype429;
	Y4159_gen_type [773] = Y4159_pgtype430;
	Y4159_gen_type [774] = Y4159_pgtype431;
	Y4159_gen_type [775] = Y4159_pgtype432;
	Y4159_gen_type [776] = Y4159_pgtype433;
	Y4159_gen_type [777] = Y4159_pgtype434;
	Y4159_gen_type [778] = Y4159_pgtype435;
	Y4159_gen_type [779] = Y4159_pgtype436;
	Y4159_gen_type [780] = Y4159_pgtype437;
	Y4159_gen_type [781] = Y4159_pgtype438;
	Y4159_gen_type [782] = Y4159_pgtype439;
	Y4159_gen_type [783] = Y4159_pgtype440;
	Y4159_gen_type [961] = Y4159_pgtype441;
	Y4159[60] = 26;
	Y4159[162] = 874;
	{long i; for (i = 339; i < 341; i++) Y4159[i] = 874;};
	Y4159[438] = 865;
	Y4159[456] = 0;
	Y4159[481] = 934;
	Y4159[482] = 915;
	{long i; for (i = 488; i < 507; i++) Y4159[i] = 915;};
	{long i; for (i = 541; i < 544; i++) Y4159[i] = 853;};
	{long i; for (i = 679; i < 681; i++) Y4159[i] = 853;};
	Y4159[682] = 850;
	{long i; for (i = 725; i < 743; i++) Y4159[i] = 967;};
	Y4159[757] = 925;
	Y4159[772] = 1001;
	Y4159[773] = 1000;
	{long i; for (i = 774; i < 778; i++) Y4159[i] = 1019;};
	{long i; for (i = 778; i < 781; i++) Y4159[i] = 999;};
	{long i; for (i = 781; i < 784; i++) Y4159[i] = 1005;};
	Y4159[961] = 853;
}

char *(*R4160[902])();
void R4160_init () {
	R4160[0] = (char *(*)()) F304_4499;
	{long i; for (i = 101; i < 103; i++) R4160[i] = (char *(*)()) F405_5071_4160;}
	R4160[341] = (char *(*)()) F645_6018;
	R4160[342] = (char *(*)()) F646_6018_4160;
	R4160[343] = (char *(*)()) F647_6018_4160;
	R4160[344] = (char *(*)()) F645_6018;
	R4160[345] = (char *(*)()) F646_6018_4160;
	R4160[346] = (char *(*)()) F647_6018_4160;
	R4160[347] = (char *(*)()) F645_6018;
	R4160[397] = (char *(*)()) F701_6583;
	R4160[398] = (char *(*)()) F702_6583_4160;
	R4160[399] = (char *(*)()) F703_6583_4160;
	R4160[400] = (char *(*)()) F704_6583_4160;
	R4160[401] = (char *(*)()) F705_6583_4160;
	R4160[402] = (char *(*)()) F706_6583_4160;
	R4160[403] = (char *(*)()) F707_6583_4160;
	R4160[404] = (char *(*)()) F708_6583_4160;
	R4160[405] = (char *(*)()) F709_6583_4160;
	R4160[406] = (char *(*)()) F710_6583_4160;
	R4160[407] = (char *(*)()) F711_6583_4160;
	R4160[408] = (char *(*)()) F712_6583_4160;
	R4160[409] = (char *(*)()) F713_6583_4160;
	R4160[410] = (char *(*)()) F714_6583_4160;
	R4160[411] = (char *(*)()) F715_6583_4160;
	R4160[412] = (char *(*)()) F701_6583;
	R4160[413] = (char *(*)()) F710_6583_4160;
	R4160[414] = (char *(*)()) F704_6583_4160;
	R4160[415] = (char *(*)()) F701_6583;
	R4160[416] = (char *(*)()) F704_6583_4160;
	R4160[417] = (char *(*)()) F701_6583;
	R4160[418] = (char *(*)()) F704_6583_4160;
	R4160[419] = (char *(*)()) F701_6583;
	R4160[420] = (char *(*)()) F704_6583_4160;
	{long i; for (i = 421; i < 423; i++) R4160[i] = (char *(*)()) F701_6583;}
	{long i; for (i = 428; i < 447; i++) R4160[i] = (char *(*)()) F701_6583;}
	{long i; for (i = 481; i < 484; i++) R4160[i] = (char *(*)()) F785_7684_4160;}
	R4160[662] = (char *(*)()) F966_11518;
	{long i; for (i = 666; i < 672; i++) R4160[i] = (char *(*)()) F966_11518;}
	R4160[697] = (char *(*)()) F701_6583;
	{long i; for (i = 711; i < 724; i++) R4160[i] = (char *(*)()) F966_11518;}
	R4160[901] = (char *(*)()) F785_7684_4160;
}
static EIF_REFERENCE F405_5071_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F405_5071(Current);
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
static EIF_REFERENCE F646_6018_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F646_6018(Current);
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
static EIF_REFERENCE F647_6018_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F647_6018(Current);
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
static EIF_REFERENCE F702_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F702_6583(Current);
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
static EIF_REFERENCE F703_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F703_6583(Current);
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
static EIF_REFERENCE F704_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F704_6583(Current);
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
static EIF_REFERENCE F705_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F705_6583(Current);
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
static EIF_REFERENCE F706_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F706_6583(Current);
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
static EIF_REFERENCE F707_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F707_6583(Current);
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
static EIF_REFERENCE F708_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F708_6583(Current);
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
static EIF_REFERENCE F709_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F709_6583(Current);
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
static EIF_REFERENCE F710_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F710_6583(Current);
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
static EIF_REFERENCE F711_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F711_6583(Current);
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
static EIF_REFERENCE F712_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F712_6583(Current);
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
static EIF_REFERENCE F713_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F713_6583(Current);
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
static EIF_REFERENCE F714_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F714_6583(Current);
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
static EIF_REFERENCE F715_6583_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F715_6583(Current);
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
static EIF_REFERENCE F785_7684_4160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F785_7684(Current);
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


#ifdef __cplusplus
}
#endif
