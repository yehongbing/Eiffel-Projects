#include "epoly10.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R4252[383])();
void R4252_init () {
	R4252[0] = (char *(*)()) F645_6022;
	R4252[1] = (char *(*)()) F646_6022;
	R4252[2] = (char *(*)()) F647_6022;
	R4252[3] = (char *(*)()) F645_6022;
	R4252[4] = (char *(*)()) F646_6022;
	R4252[5] = (char *(*)()) F647_6022;
	R4252[6] = (char *(*)()) F645_6022;
	R4252[56] = (char *(*)()) F701_6589;
	R4252[57] = (char *(*)()) F702_6589;
	R4252[58] = (char *(*)()) F703_6589;
	R4252[59] = (char *(*)()) F704_6589;
	R4252[60] = (char *(*)()) F705_6589;
	R4252[61] = (char *(*)()) F706_6589;
	R4252[62] = (char *(*)()) F707_6589;
	R4252[63] = (char *(*)()) F708_6589;
	R4252[64] = (char *(*)()) F709_6589;
	R4252[65] = (char *(*)()) F710_6589;
	R4252[66] = (char *(*)()) F711_6589;
	R4252[67] = (char *(*)()) F712_6589;
	R4252[68] = (char *(*)()) F713_6589;
	R4252[69] = (char *(*)()) F714_6589;
	R4252[70] = (char *(*)()) F715_6589;
	R4252[71] = (char *(*)()) F701_6589;
	R4252[72] = (char *(*)()) F710_6589;
	R4252[73] = (char *(*)()) F704_6589;
	R4252[74] = (char *(*)()) F701_6589;
	R4252[75] = (char *(*)()) F704_6589;
	R4252[76] = (char *(*)()) F701_6589;
	R4252[77] = (char *(*)()) F704_6589;
	R4252[78] = (char *(*)()) F701_6589;
	R4252[79] = (char *(*)()) F704_6589;
	{long i; for (i = 80; i < 82; i++) R4252[i] = (char *(*)()) F701_6589;}
	{long i; for (i = 87; i < 106; i++) R4252[i] = (char *(*)()) F701_6589;}
	R4252[321] = (char *(*)()) F966_11520;
	{long i; for (i = 325; i < 331; i++) R4252[i] = (char *(*)()) F966_11520;}
	R4252[356] = (char *(*)()) F701_6589;
	{long i; for (i = 370; i < 383; i++) R4252[i] = (char *(*)()) F966_11520;}
}

static EIF_TYPE_INDEX Y4252_pgtype0[] = {686,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype1[] = {687,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype2[] = {688,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype3[] = {686,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype4[] = {687,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype5[] = {688,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype6[] = {686,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype7[] = {685,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype8[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype9[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype10[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype11[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype12[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype13[] = {685,967,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype14[] = {685,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype15[] = {685,1001,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype16[] = {685,1000,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype17[] = {685,1019,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype18[] = {685,1019,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype19[] = {685,1019,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype20[] = {685,1019,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype21[] = {685,999,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype22[] = {685,999,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype23[] = {685,999,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype24[] = {685,1005,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype25[] = {685,1005,0xFFFF};
static EIF_TYPE_INDEX Y4252_pgtype26[] = {685,1005,0xFFFF};
EIF_TYPE_INDEX *Y4252_gen_type [658];
EIF_TYPE_INDEX Y4252 [658];
void Y4252_init (void)
{
	egc_routines_types [4252] = Y4252;
	egc_routines_gen_types [4252] = Y4252_gen_type;
	egc_routines_offset [4252] = 369;
	Y4252_gen_type [275] = Y4252_pgtype0;
	Y4252_gen_type [276] = Y4252_pgtype1;
	Y4252_gen_type [277] = Y4252_pgtype2;
	Y4252_gen_type [278] = Y4252_pgtype3;
	Y4252_gen_type [279] = Y4252_pgtype4;
	Y4252_gen_type [280] = Y4252_pgtype5;
	Y4252_gen_type [281] = Y4252_pgtype6;
	Y4252_gen_type [596] = Y4252_pgtype7;
	Y4252_gen_type [600] = Y4252_pgtype8;
	Y4252_gen_type [601] = Y4252_pgtype9;
	Y4252_gen_type [602] = Y4252_pgtype10;
	Y4252_gen_type [603] = Y4252_pgtype11;
	Y4252_gen_type [604] = Y4252_pgtype12;
	Y4252_gen_type [605] = Y4252_pgtype13;
	Y4252_gen_type [645] = Y4252_pgtype14;
	Y4252_gen_type [646] = Y4252_pgtype15;
	Y4252_gen_type [647] = Y4252_pgtype16;
	Y4252_gen_type [648] = Y4252_pgtype17;
	Y4252_gen_type [649] = Y4252_pgtype18;
	Y4252_gen_type [650] = Y4252_pgtype19;
	Y4252_gen_type [651] = Y4252_pgtype20;
	Y4252_gen_type [652] = Y4252_pgtype21;
	Y4252_gen_type [653] = Y4252_pgtype22;
	Y4252_gen_type [654] = Y4252_pgtype23;
	Y4252_gen_type [655] = Y4252_pgtype24;
	Y4252_gen_type [656] = Y4252_pgtype25;
	Y4252_gen_type [657] = Y4252_pgtype26;
	{long i; for (i = 0; i < 15; i++) Y4252[i] = 682;};
	{long i; for (i = 215; i < 275; i++) Y4252[i] = 682;};
	Y4252[275] = 686;
	Y4252[276] = 687;
	Y4252[277] = 688;
	Y4252[278] = 686;
	Y4252[279] = 687;
	Y4252[280] = 688;
	Y4252[281] = 686;
	{long i; for (i = 331; i < 357; i++) Y4252[i] = 684;};
	{long i; for (i = 362; i < 381; i++) Y4252[i] = 684;};
	Y4252[596] = 685;
	{long i; for (i = 600; i < 606; i++) Y4252[i] = 685;};
	Y4252[631] = 684;
	{long i; for (i = 645; i < 658; i++) Y4252[i] = 685;};
}

char *(*R4254[383])();
void R4254_init () {
	R4254[0] = (char *(*)()) F645_6041;
	R4254[1] = (char *(*)()) F646_6041;
	R4254[2] = (char *(*)()) F647_6041;
	R4254[3] = (char *(*)()) F645_6041;
	R4254[4] = (char *(*)()) F646_6041;
	R4254[5] = (char *(*)()) F647_6041;
	R4254[6] = (char *(*)()) F645_6041;
	R4254[56] = (char *(*)()) F701_6614;
	R4254[57] = (char *(*)()) F702_6614;
	R4254[58] = (char *(*)()) F703_6614;
	R4254[59] = (char *(*)()) F704_6614;
	R4254[60] = (char *(*)()) F705_6614;
	R4254[61] = (char *(*)()) F706_6614;
	R4254[62] = (char *(*)()) F707_6614;
	R4254[63] = (char *(*)()) F708_6614;
	R4254[64] = (char *(*)()) F709_6614;
	R4254[65] = (char *(*)()) F710_6614;
	R4254[66] = (char *(*)()) F711_6614;
	R4254[67] = (char *(*)()) F712_6614;
	R4254[68] = (char *(*)()) F713_6614;
	R4254[69] = (char *(*)()) F714_6614;
	R4254[70] = (char *(*)()) F715_6614;
	R4254[71] = (char *(*)()) F701_6614;
	R4254[72] = (char *(*)()) F710_6614;
	R4254[73] = (char *(*)()) F704_6614;
	R4254[74] = (char *(*)()) F701_6614;
	R4254[75] = (char *(*)()) F704_6614;
	R4254[76] = (char *(*)()) F701_6614;
	R4254[77] = (char *(*)()) F704_6614;
	R4254[78] = (char *(*)()) F701_6614;
	R4254[79] = (char *(*)()) F704_6614;
	{long i; for (i = 80; i < 82; i++) R4254[i] = (char *(*)()) F701_6614;}
	{long i; for (i = 87; i < 106; i++) R4254[i] = (char *(*)()) F701_6614;}
	R4254[321] = (char *(*)()) F966_11532;
	{long i; for (i = 325; i < 331; i++) R4254[i] = (char *(*)()) F966_11532;}
	R4254[356] = (char *(*)()) F701_6614;
	{long i; for (i = 370; i < 383; i++) R4254[i] = (char *(*)()) F966_11532;}
}

char *(*R4346[3])();
void R4346_init () {
	R4346[0] = (char *(*)()) F385_4773;
	{long i; for (i = 1; i < 3; i++) R4346[i] = (char *(*)()) F386_4908;}
}

char *(*R4357[3])();
void R4357_init () {
	R4357[0] = (char *(*)()) F385_4785;
	{long i; for (i = 1; i < 3; i++) R4357[i] = (char *(*)()) F386_4909;}
}

char *(*R4358[3])();
void R4358_init () {
	R4358[0] = (char *(*)()) F385_4787;
	{long i; for (i = 1; i < 3; i++) R4358[i] = (char *(*)()) F386_4910;}
}

char *(*R4384[3])();
void R4384_init () {
	R4384[0] = (char *(*)()) F385_4816;
	{long i; for (i = 1; i < 3; i++) R4384[i] = (char *(*)()) F386_4939;}
}

char *(*R4385[3])();
void R4385_init () {
	R4385[0] = (char *(*)()) F385_4817;
	{long i; for (i = 1; i < 3; i++) R4385[i] = (char *(*)()) F386_4940;}
}

char *(*R4386[3])();
void R4386_init () {
	R4386[0] = (char *(*)()) F385_4818;
	{long i; for (i = 1; i < 3; i++) R4386[i] = (char *(*)()) F386_4936;}
}

char *(*R4552[716])();
void R4552_init () {
	R4552[0] = (char *(*)()) F490_5161;
	{long i; for (i = 93; i < 95; i++) R4552[i] = (char *(*)()) F583_5721;}
	R4552[155] = (char *(*)()) F645_6025;
	R4552[156] = (char *(*)()) F646_6025;
	R4552[157] = (char *(*)()) F647_6025;
	R4552[158] = (char *(*)()) F645_6025;
	R4552[159] = (char *(*)()) F646_6025;
	R4552[160] = (char *(*)()) F647_6025;
	R4552[161] = (char *(*)()) F645_6025;
	R4552[177] = (char *(*)()) F667_6246;
	R4552[178] = (char *(*)()) F668_6246;
	R4552[179] = (char *(*)()) F669_6246;
	R4552[180] = (char *(*)()) F670_6246;
	R4552[181] = (char *(*)()) F671_6246;
	R4552[182] = (char *(*)()) F672_6246;
	R4552[183] = (char *(*)()) F673_6246;
	R4552[184] = (char *(*)()) F674_6246;
	R4552[185] = (char *(*)()) F675_6246;
	R4552[186] = (char *(*)()) F676_6246;
	R4552[187] = (char *(*)()) F677_6246;
	R4552[188] = (char *(*)()) F678_6246;
	R4552[189] = (char *(*)()) F679_6246;
	R4552[190] = (char *(*)()) F680_6246;
	R4552[191] = (char *(*)()) F681_6246;
	R4552[192] = (char *(*)()) F669_6246;
	R4552[201] = (char *(*)()) F691_6403;
	R4552[202] = (char *(*)()) F692_6448;
	R4552[203] = (char *(*)()) F693_6448;
	R4552[204] = (char *(*)()) F694_6448;
	R4552[205] = (char *(*)()) F695_6448;
	R4552[206] = (char *(*)()) F696_6448;
	R4552[207] = (char *(*)()) F697_6448;
	R4552[208] = (char *(*)()) F692_6448;
	R4552[209] = (char *(*)()) F694_6448;
	R4552[210] = (char *(*)()) F692_6448;
	R4552[211] = (char *(*)()) F701_6600;
	R4552[212] = (char *(*)()) F702_6600;
	R4552[213] = (char *(*)()) F703_6600;
	R4552[214] = (char *(*)()) F704_6600;
	R4552[215] = (char *(*)()) F705_6600;
	R4552[216] = (char *(*)()) F706_6600;
	R4552[217] = (char *(*)()) F707_6600;
	R4552[218] = (char *(*)()) F708_6600;
	R4552[219] = (char *(*)()) F709_6600;
	R4552[220] = (char *(*)()) F710_6600;
	R4552[221] = (char *(*)()) F711_6600;
	R4552[222] = (char *(*)()) F712_6600;
	R4552[223] = (char *(*)()) F713_6600;
	R4552[224] = (char *(*)()) F714_6600;
	R4552[225] = (char *(*)()) F715_6600;
	R4552[226] = (char *(*)()) F701_6600;
	R4552[227] = (char *(*)()) F710_6600;
	R4552[228] = (char *(*)()) F704_6600;
	R4552[229] = (char *(*)()) F701_6600;
	R4552[230] = (char *(*)()) F704_6600;
	R4552[231] = (char *(*)()) F701_6600;
	R4552[232] = (char *(*)()) F704_6600;
	R4552[233] = (char *(*)()) F701_6600;
	R4552[234] = (char *(*)()) F704_6600;
	{long i; for (i = 235; i < 237; i++) R4552[i] = (char *(*)()) F701_6600;}
	{long i; for (i = 242; i < 261; i++) R4552[i] = (char *(*)()) F701_6600;}
	{long i; for (i = 295; i < 298; i++) R4552[i] = (char *(*)()) F785_7700;}
	{long i; for (i = 433; i < 435; i++) R4552[i] = (char *(*)()) F921_10349;}
	R4552[436] = (char *(*)()) F925_10572;
	R4552[476] = (char *(*)()) F966_11525;
	{long i; for (i = 480; i < 486; i++) R4552[i] = (char *(*)()) F966_11525;}
	R4552[511] = (char *(*)()) F701_6600;
	{long i; for (i = 525; i < 538; i++) R4552[i] = (char *(*)()) F966_11525;}
	R4552[715] = (char *(*)()) F1205_17246;
}

char *(*R4557[512])();
void R4557_init () {
	R4557[0] = (char *(*)()) F490_5162;
	{long i; for (i = 93; i < 95; i++) R4557[i] = (char *(*)()) F583_5720;}
	R4557[177] = (char *(*)()) F667_6247;
	R4557[178] = (char *(*)()) F668_6247;
	R4557[179] = (char *(*)()) F669_6247;
	R4557[180] = (char *(*)()) F670_6247;
	R4557[181] = (char *(*)()) F671_6247;
	R4557[182] = (char *(*)()) F672_6247;
	R4557[183] = (char *(*)()) F673_6247;
	R4557[184] = (char *(*)()) F674_6247;
	R4557[185] = (char *(*)()) F675_6247;
	R4557[186] = (char *(*)()) F676_6247;
	R4557[187] = (char *(*)()) F677_6247;
	R4557[188] = (char *(*)()) F678_6247;
	R4557[189] = (char *(*)()) F679_6247;
	R4557[190] = (char *(*)()) F680_6247;
	R4557[191] = (char *(*)()) F681_6247;
	R4557[192] = (char *(*)()) F669_6247;
	R4557[201] = (char *(*)()) F691_6404;
	R4557[211] = (char *(*)()) F701_6601;
	R4557[212] = (char *(*)()) F702_6601;
	R4557[213] = (char *(*)()) F703_6601;
	R4557[214] = (char *(*)()) F704_6601;
	R4557[215] = (char *(*)()) F705_6601;
	R4557[216] = (char *(*)()) F706_6601;
	R4557[217] = (char *(*)()) F707_6601;
	R4557[218] = (char *(*)()) F708_6601;
	R4557[219] = (char *(*)()) F709_6601;
	R4557[220] = (char *(*)()) F710_6601;
	R4557[221] = (char *(*)()) F711_6601;
	R4557[222] = (char *(*)()) F712_6601;
	R4557[223] = (char *(*)()) F713_6601;
	R4557[224] = (char *(*)()) F714_6601;
	R4557[225] = (char *(*)()) F715_6601;
	R4557[226] = (char *(*)()) F701_6601;
	R4557[227] = (char *(*)()) F710_6601;
	R4557[228] = (char *(*)()) F704_6601;
	R4557[229] = (char *(*)()) F701_6601;
	R4557[230] = (char *(*)()) F704_6601;
	R4557[231] = (char *(*)()) F701_6601;
	R4557[232] = (char *(*)()) F704_6601;
	R4557[233] = (char *(*)()) F701_6601;
	R4557[234] = (char *(*)()) F704_6601;
	{long i; for (i = 235; i < 237; i++) R4557[i] = (char *(*)()) F701_6601;}
	{long i; for (i = 242; i < 261; i++) R4557[i] = (char *(*)()) F701_6601;}
	{long i; for (i = 433; i < 435; i++) R4557[i] = (char *(*)()) F921_10348;}
	R4557[436] = (char *(*)()) F925_10571;
	R4557[511] = (char *(*)()) F701_6601;
}

char *(*R4561[527])();
void R4561_init () {
	R4561[0] = (char *(*)()) F475_5153;
	R4561[1] = (char *(*)()) F476_5153;
	R4561[2] = (char *(*)()) F477_5153;
	R4561[3] = (char *(*)()) F478_5153;
	R4561[4] = (char *(*)()) F479_5153;
	R4561[5] = (char *(*)()) F480_5153;
	R4561[6] = (char *(*)()) F481_5153;
	R4561[7] = (char *(*)()) F482_5153;
	R4561[8] = (char *(*)()) F483_5153;
	R4561[9] = (char *(*)()) F484_5153;
	R4561[10] = (char *(*)()) F485_5153;
	R4561[11] = (char *(*)()) F486_5153;
	R4561[12] = (char *(*)()) F487_5153;
	R4561[13] = (char *(*)()) F488_5153;
	R4561[14] = (char *(*)()) F489_5153;
	R4561[15] = (char *(*)()) F475_5153;
	{long i; for (i = 108; i < 110; i++) R4561[i] = (char *(*)()) F478_5153;}
	R4561[192] = (char *(*)()) F475_5153;
	R4561[193] = (char *(*)()) F476_5153;
	R4561[194] = (char *(*)()) F477_5153;
	R4561[195] = (char *(*)()) F478_5153;
	R4561[196] = (char *(*)()) F479_5153;
	R4561[197] = (char *(*)()) F480_5153;
	R4561[198] = (char *(*)()) F481_5153;
	R4561[199] = (char *(*)()) F482_5153;
	R4561[200] = (char *(*)()) F483_5153;
	R4561[201] = (char *(*)()) F484_5153;
	R4561[202] = (char *(*)()) F485_5153;
	R4561[203] = (char *(*)()) F486_5153;
	R4561[204] = (char *(*)()) F487_5153;
	R4561[205] = (char *(*)()) F488_5153;
	R4561[206] = (char *(*)()) F489_5153;
	R4561[207] = (char *(*)()) F477_5153;
	R4561[216] = (char *(*)()) F475_5153;
	R4561[226] = (char *(*)()) F475_5153;
	R4561[227] = (char *(*)()) F476_5153;
	R4561[228] = (char *(*)()) F477_5153;
	R4561[229] = (char *(*)()) F478_5153;
	R4561[230] = (char *(*)()) F479_5153;
	R4561[231] = (char *(*)()) F480_5153;
	R4561[232] = (char *(*)()) F481_5153;
	R4561[233] = (char *(*)()) F482_5153;
	R4561[234] = (char *(*)()) F483_5153;
	R4561[235] = (char *(*)()) F484_5153;
	R4561[236] = (char *(*)()) F485_5153;
	R4561[237] = (char *(*)()) F486_5153;
	R4561[238] = (char *(*)()) F487_5153;
	R4561[239] = (char *(*)()) F488_5153;
	R4561[240] = (char *(*)()) F489_5153;
	R4561[241] = (char *(*)()) F475_5153;
	R4561[242] = (char *(*)()) F484_5153;
	R4561[243] = (char *(*)()) F478_5153;
	R4561[244] = (char *(*)()) F475_5153;
	R4561[245] = (char *(*)()) F478_5153;
	R4561[246] = (char *(*)()) F475_5153;
	R4561[247] = (char *(*)()) F478_5153;
	R4561[248] = (char *(*)()) F475_5153;
	R4561[249] = (char *(*)()) F478_5153;
	{long i; for (i = 250; i < 252; i++) R4561[i] = (char *(*)()) F475_5153;}
	{long i; for (i = 257; i < 276; i++) R4561[i] = (char *(*)()) F475_5153;}
	{long i; for (i = 448; i < 450; i++) R4561[i] = (char *(*)()) F482_5153;}
	R4561[451] = (char *(*)()) F486_5153;
	R4561[526] = (char *(*)()) F475_5153;
}

char *(*R4563[311])();
void R4563_init () {
	R4563[0] = (char *(*)()) F691_6426;
	R4563[10] = (char *(*)()) F701_6626;
	R4563[11] = (char *(*)()) F702_6626;
	R4563[12] = (char *(*)()) F703_6626;
	R4563[13] = (char *(*)()) F704_6626;
	R4563[14] = (char *(*)()) F705_6626;
	R4563[15] = (char *(*)()) F706_6626;
	R4563[16] = (char *(*)()) F707_6626;
	R4563[17] = (char *(*)()) F708_6626;
	R4563[18] = (char *(*)()) F709_6626;
	R4563[19] = (char *(*)()) F710_6626;
	R4563[20] = (char *(*)()) F711_6626;
	R4563[21] = (char *(*)()) F712_6626;
	R4563[22] = (char *(*)()) F713_6626;
	R4563[23] = (char *(*)()) F714_6626;
	R4563[24] = (char *(*)()) F715_6626;
	R4563[25] = (char *(*)()) F701_6626;
	R4563[26] = (char *(*)()) F710_6626;
	R4563[27] = (char *(*)()) F704_6626;
	R4563[28] = (char *(*)()) F701_6626;
	R4563[29] = (char *(*)()) F704_6626;
	R4563[30] = (char *(*)()) F701_6626;
	R4563[31] = (char *(*)()) F704_6626;
	R4563[32] = (char *(*)()) F701_6626;
	R4563[33] = (char *(*)()) F704_6626;
	{long i; for (i = 34; i < 36; i++) R4563[i] = (char *(*)()) F701_6626;}
	{long i; for (i = 41; i < 60; i++) R4563[i] = (char *(*)()) F701_6626;}
	{long i; for (i = 232; i < 234; i++) R4563[i] = (char *(*)()) F923_10467;}
	R4563[235] = (char *(*)()) F926_10675;
	R4563[310] = (char *(*)()) F701_6626;
}

char *(*R4574[10])();
void R4574_init () {
	R4574[0] = (char *(*)()) F1144_15767;
	R4574[1] = (char *(*)()) F1145_15833;
	R4574[2] = (char *(*)()) F1146_15898;
	R4574[3] = (char *(*)()) F1147_15926;
	R4574[4] = (char *(*)()) F1148_15967;
	R4574[9] = (char *(*)()) F1147_15926;
}

char *(*R4576[663])();
void R4576_init () {
	R4576[0] = (char *(*)()) F491_5189;
	R4576[653] = (char *(*)()) F491_5189;
	R4576[654] = (char *(*)()) F1145_15780;
	R4576[655] = (char *(*)()) F1146_15870;
	R4576[656] = (char *(*)()) F491_5189;
	R4576[657] = (char *(*)()) F1148_15973;
	R4576[662] = (char *(*)()) F1153_16161;
}

char *(*R4590[4])();
void R4590_init () {
	R4590[0] = (char *(*)()) F493_5220;
	R4590[1] = (char *(*)()) F494_5226;
	R4590[2] = (char *(*)()) F495_5249;
	R4590[3] = (char *(*)()) F496_5269;
}

char *(*R4957[9])();
void R4957_init () {
	R4957[0] = (char *(*)()) F692_6445;
	R4957[1] = (char *(*)()) F693_6445;
	R4957[2] = (char *(*)()) F694_6445;
	R4957[3] = (char *(*)()) F695_6445;
	R4957[4] = (char *(*)()) F696_6445;
	R4957[5] = (char *(*)()) F697_6445;
	R4957[6] = (char *(*)()) F692_6445;
	R4957[7] = (char *(*)()) F694_6445;
	R4957[8] = (char *(*)()) F692_6445;
}

static EIF_TYPE_INDEX Y4958_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype15[] = {922,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype16[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype17[] = {928,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype78[] = {874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype79[] = {874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype147[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype148[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype149[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype150[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype151[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype152[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype153[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype154[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype155[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype156[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype157[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype158[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype159[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype160[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype161[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype162[] = {865,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype163[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype164[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype165[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype166[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype167[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype168[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype169[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype170[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype171[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype172[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype173[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype174[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype175[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype176[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype177[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype179[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype180[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype181[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype182[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype183[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype184[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype185[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype186[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype187[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype188[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype189[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype190[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype191[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype192[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype193[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype194[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype195[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype196[] = {934,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype197[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype198[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype199[] = {915,0,0xFFF9,1,841,0,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype200[] = {915,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype201[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype202[] = {915,0,0xFFF9,1,841,944,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype203[] = {915,0,0xFFF9,3,841,874,874,791,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype204[] = {915,0,0xFFF9,0,841,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype205[] = {915,0,0xFFF9,1,841,1205,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype206[] = {915,0,0xFFF9,1,841,925,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype207[] = {915,0,0xFFF9,1,841,1000,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype208[] = {915,0,0xFFF9,1,841,1005,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype209[] = {915,0,0xFFF9,7,841,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype210[] = {915,0,0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype211[] = {915,0,0xFFF9,1,841,791,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype212[] = {915,0,0xFFF9,2,841,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype213[] = {915,0,0xFFF9,1,841,967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype214[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype215[] = {915,0,0xFFF9,4,841,874,874,874,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype216[] = {915,0,0xFFF9,1,841,874,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype217[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype218[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype219[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype220[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype221[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype222[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype223[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype224[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype225[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype226[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype227[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype228[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype229[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype230[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype231[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype232[] = {0,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype233[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype234[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype235[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype236[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype237[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype238[] = {853,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype239[] = {850,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype240[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype241[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype242[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype243[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype244[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype245[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype246[] = {967,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype247[] = {925,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype248[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype249[] = {1001,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype250[] = {1000,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype251[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype252[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype253[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype254[] = {1019,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype255[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype256[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype257[] = {999,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype258[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype259[] = {1005,0xFFFF};
static EIF_TYPE_INDEX Y4958_pgtype260[] = {1005,0xFFFF};
EIF_TYPE_INDEX *Y4958_gen_type [523];
EIF_TYPE_INDEX Y4958 [523];
void Y4958_init (void)
{
	egc_routines_types [4958] = Y4958;
	egc_routines_gen_types [4958] = Y4958_gen_type;
	egc_routines_offset [4958] = 504;
	Y4958_gen_type [0] = Y4958_pgtype0;
	Y4958_gen_type [1] = Y4958_pgtype1;
	Y4958_gen_type [2] = Y4958_pgtype2;
	Y4958_gen_type [3] = Y4958_pgtype3;
	Y4958_gen_type [4] = Y4958_pgtype4;
	Y4958_gen_type [5] = Y4958_pgtype5;
	Y4958_gen_type [6] = Y4958_pgtype6;
	Y4958_gen_type [7] = Y4958_pgtype7;
	Y4958_gen_type [8] = Y4958_pgtype8;
	Y4958_gen_type [9] = Y4958_pgtype9;
	Y4958_gen_type [10] = Y4958_pgtype10;
	Y4958_gen_type [11] = Y4958_pgtype11;
	Y4958_gen_type [12] = Y4958_pgtype12;
	Y4958_gen_type [13] = Y4958_pgtype13;
	Y4958_gen_type [14] = Y4958_pgtype14;
	Y4958_gen_type [15] = Y4958_pgtype15;
	Y4958_gen_type [16] = Y4958_pgtype16;
	Y4958_gen_type [17] = Y4958_pgtype17;
	Y4958_gen_type [18] = Y4958_pgtype18;
	Y4958_gen_type [19] = Y4958_pgtype19;
	Y4958_gen_type [20] = Y4958_pgtype20;
	Y4958_gen_type [21] = Y4958_pgtype21;
	Y4958_gen_type [22] = Y4958_pgtype22;
	Y4958_gen_type [23] = Y4958_pgtype23;
	Y4958_gen_type [24] = Y4958_pgtype24;
	Y4958_gen_type [25] = Y4958_pgtype25;
	Y4958_gen_type [26] = Y4958_pgtype26;
	Y4958_gen_type [27] = Y4958_pgtype27;
	Y4958_gen_type [28] = Y4958_pgtype28;
	Y4958_gen_type [29] = Y4958_pgtype29;
	Y4958_gen_type [30] = Y4958_pgtype30;
	Y4958_gen_type [31] = Y4958_pgtype31;
	Y4958_gen_type [32] = Y4958_pgtype32;
	Y4958_gen_type [33] = Y4958_pgtype33;
	Y4958_gen_type [34] = Y4958_pgtype34;
	Y4958_gen_type [35] = Y4958_pgtype35;
	Y4958_gen_type [36] = Y4958_pgtype36;
	Y4958_gen_type [37] = Y4958_pgtype37;
	Y4958_gen_type [38] = Y4958_pgtype38;
	Y4958_gen_type [39] = Y4958_pgtype39;
	Y4958_gen_type [40] = Y4958_pgtype40;
	Y4958_gen_type [41] = Y4958_pgtype41;
	Y4958_gen_type [42] = Y4958_pgtype42;
	Y4958_gen_type [43] = Y4958_pgtype43;
	Y4958_gen_type [44] = Y4958_pgtype44;
	Y4958_gen_type [45] = Y4958_pgtype45;
	Y4958_gen_type [46] = Y4958_pgtype46;
	Y4958_gen_type [47] = Y4958_pgtype47;
	Y4958_gen_type [48] = Y4958_pgtype48;
	Y4958_gen_type [49] = Y4958_pgtype49;
	Y4958_gen_type [50] = Y4958_pgtype50;
	Y4958_gen_type [51] = Y4958_pgtype51;
	Y4958_gen_type [52] = Y4958_pgtype52;
	Y4958_gen_type [53] = Y4958_pgtype53;
	Y4958_gen_type [54] = Y4958_pgtype54;
	Y4958_gen_type [55] = Y4958_pgtype55;
	Y4958_gen_type [56] = Y4958_pgtype56;
	Y4958_gen_type [57] = Y4958_pgtype57;
	Y4958_gen_type [58] = Y4958_pgtype58;
	Y4958_gen_type [59] = Y4958_pgtype59;
	Y4958_gen_type [60] = Y4958_pgtype60;
	Y4958_gen_type [61] = Y4958_pgtype61;
	Y4958_gen_type [62] = Y4958_pgtype62;
	Y4958_gen_type [63] = Y4958_pgtype63;
	Y4958_gen_type [64] = Y4958_pgtype64;
	Y4958_gen_type [65] = Y4958_pgtype65;
	Y4958_gen_type [66] = Y4958_pgtype66;
	Y4958_gen_type [67] = Y4958_pgtype67;
	Y4958_gen_type [68] = Y4958_pgtype68;
	Y4958_gen_type [69] = Y4958_pgtype69;
	Y4958_gen_type [70] = Y4958_pgtype70;
	Y4958_gen_type [71] = Y4958_pgtype71;
	Y4958_gen_type [72] = Y4958_pgtype72;
	Y4958_gen_type [73] = Y4958_pgtype73;
	Y4958_gen_type [74] = Y4958_pgtype74;
	Y4958_gen_type [75] = Y4958_pgtype75;
	Y4958_gen_type [76] = Y4958_pgtype76;
	Y4958_gen_type [77] = Y4958_pgtype77;
	Y4958_gen_type [78] = Y4958_pgtype78;
	Y4958_gen_type [79] = Y4958_pgtype79;
	Y4958_gen_type [80] = Y4958_pgtype80;
	Y4958_gen_type [81] = Y4958_pgtype81;
	Y4958_gen_type [82] = Y4958_pgtype82;
	Y4958_gen_type [83] = Y4958_pgtype83;
	Y4958_gen_type [84] = Y4958_pgtype84;
	Y4958_gen_type [85] = Y4958_pgtype85;
	Y4958_gen_type [86] = Y4958_pgtype86;
	Y4958_gen_type [87] = Y4958_pgtype87;
	Y4958_gen_type [88] = Y4958_pgtype88;
	Y4958_gen_type [89] = Y4958_pgtype89;
	Y4958_gen_type [90] = Y4958_pgtype90;
	Y4958_gen_type [91] = Y4958_pgtype91;
	Y4958_gen_type [92] = Y4958_pgtype92;
	Y4958_gen_type [93] = Y4958_pgtype93;
	Y4958_gen_type [94] = Y4958_pgtype94;
	Y4958_gen_type [95] = Y4958_pgtype95;
	Y4958_gen_type [96] = Y4958_pgtype96;
	Y4958_gen_type [97] = Y4958_pgtype97;
	Y4958_gen_type [98] = Y4958_pgtype98;
	Y4958_gen_type [99] = Y4958_pgtype99;
	Y4958_gen_type [100] = Y4958_pgtype100;
	Y4958_gen_type [101] = Y4958_pgtype101;
	Y4958_gen_type [102] = Y4958_pgtype102;
	Y4958_gen_type [103] = Y4958_pgtype103;
	Y4958_gen_type [104] = Y4958_pgtype104;
	Y4958_gen_type [105] = Y4958_pgtype105;
	Y4958_gen_type [106] = Y4958_pgtype106;
	Y4958_gen_type [107] = Y4958_pgtype107;
	Y4958_gen_type [108] = Y4958_pgtype108;
	Y4958_gen_type [109] = Y4958_pgtype109;
	Y4958_gen_type [110] = Y4958_pgtype110;
	Y4958_gen_type [111] = Y4958_pgtype111;
	Y4958_gen_type [112] = Y4958_pgtype112;
	Y4958_gen_type [113] = Y4958_pgtype113;
	Y4958_gen_type [114] = Y4958_pgtype114;
	Y4958_gen_type [115] = Y4958_pgtype115;
	Y4958_gen_type [116] = Y4958_pgtype116;
	Y4958_gen_type [117] = Y4958_pgtype117;
	Y4958_gen_type [118] = Y4958_pgtype118;
	Y4958_gen_type [119] = Y4958_pgtype119;
	Y4958_gen_type [120] = Y4958_pgtype120;
	Y4958_gen_type [121] = Y4958_pgtype121;
	Y4958_gen_type [122] = Y4958_pgtype122;
	Y4958_gen_type [123] = Y4958_pgtype123;
	Y4958_gen_type [124] = Y4958_pgtype124;
	Y4958_gen_type [125] = Y4958_pgtype125;
	Y4958_gen_type [126] = Y4958_pgtype126;
	Y4958_gen_type [127] = Y4958_pgtype127;
	Y4958_gen_type [128] = Y4958_pgtype128;
	Y4958_gen_type [129] = Y4958_pgtype129;
	Y4958_gen_type [130] = Y4958_pgtype130;
	Y4958_gen_type [131] = Y4958_pgtype131;
	Y4958_gen_type [132] = Y4958_pgtype132;
	Y4958_gen_type [133] = Y4958_pgtype133;
	Y4958_gen_type [134] = Y4958_pgtype134;
	Y4958_gen_type [135] = Y4958_pgtype135;
	Y4958_gen_type [136] = Y4958_pgtype136;
	Y4958_gen_type [137] = Y4958_pgtype137;
	Y4958_gen_type [138] = Y4958_pgtype138;
	Y4958_gen_type [139] = Y4958_pgtype139;
	Y4958_gen_type [140] = Y4958_pgtype140;
	Y4958_gen_type [141] = Y4958_pgtype141;
	Y4958_gen_type [142] = Y4958_pgtype142;
	Y4958_gen_type [143] = Y4958_pgtype143;
	Y4958_gen_type [144] = Y4958_pgtype144;
	Y4958_gen_type [145] = Y4958_pgtype145;
	Y4958_gen_type [146] = Y4958_pgtype146;
	Y4958_gen_type [162] = Y4958_pgtype147;
	Y4958_gen_type [163] = Y4958_pgtype148;
	Y4958_gen_type [164] = Y4958_pgtype149;
	Y4958_gen_type [165] = Y4958_pgtype150;
	Y4958_gen_type [166] = Y4958_pgtype151;
	Y4958_gen_type [167] = Y4958_pgtype152;
	Y4958_gen_type [168] = Y4958_pgtype153;
	Y4958_gen_type [169] = Y4958_pgtype154;
	Y4958_gen_type [170] = Y4958_pgtype155;
	Y4958_gen_type [171] = Y4958_pgtype156;
	Y4958_gen_type [172] = Y4958_pgtype157;
	Y4958_gen_type [173] = Y4958_pgtype158;
	Y4958_gen_type [174] = Y4958_pgtype159;
	Y4958_gen_type [175] = Y4958_pgtype160;
	Y4958_gen_type [176] = Y4958_pgtype161;
	Y4958_gen_type [177] = Y4958_pgtype162;
	Y4958_gen_type [187] = Y4958_pgtype163;
	Y4958_gen_type [188] = Y4958_pgtype164;
	Y4958_gen_type [189] = Y4958_pgtype165;
	Y4958_gen_type [190] = Y4958_pgtype166;
	Y4958_gen_type [191] = Y4958_pgtype167;
	Y4958_gen_type [192] = Y4958_pgtype168;
	Y4958_gen_type [193] = Y4958_pgtype169;
	Y4958_gen_type [194] = Y4958_pgtype170;
	Y4958_gen_type [195] = Y4958_pgtype171;
	Y4958_gen_type [196] = Y4958_pgtype172;
	Y4958_gen_type [197] = Y4958_pgtype173;
	Y4958_gen_type [198] = Y4958_pgtype174;
	Y4958_gen_type [199] = Y4958_pgtype175;
	Y4958_gen_type [200] = Y4958_pgtype176;
	Y4958_gen_type [201] = Y4958_pgtype177;
	Y4958_gen_type [202] = Y4958_pgtype178;
	Y4958_gen_type [203] = Y4958_pgtype179;
	Y4958_gen_type [204] = Y4958_pgtype180;
	Y4958_gen_type [205] = Y4958_pgtype181;
	Y4958_gen_type [206] = Y4958_pgtype182;
	Y4958_gen_type [207] = Y4958_pgtype183;
	Y4958_gen_type [208] = Y4958_pgtype184;
	Y4958_gen_type [209] = Y4958_pgtype185;
	Y4958_gen_type [210] = Y4958_pgtype186;
	Y4958_gen_type [211] = Y4958_pgtype187;
	Y4958_gen_type [212] = Y4958_pgtype188;
	Y4958_gen_type [213] = Y4958_pgtype189;
	Y4958_gen_type [214] = Y4958_pgtype190;
	Y4958_gen_type [215] = Y4958_pgtype191;
	Y4958_gen_type [216] = Y4958_pgtype192;
	Y4958_gen_type [217] = Y4958_pgtype193;
	Y4958_gen_type [218] = Y4958_pgtype194;
	Y4958_gen_type [219] = Y4958_pgtype195;
	Y4958_gen_type [220] = Y4958_pgtype196;
	Y4958_gen_type [221] = Y4958_pgtype197;
	Y4958_gen_type [227] = Y4958_pgtype198;
	Y4958_gen_type [228] = Y4958_pgtype199;
	Y4958_gen_type [229] = Y4958_pgtype200;
	Y4958_gen_type [230] = Y4958_pgtype201;
	Y4958_gen_type [231] = Y4958_pgtype202;
	Y4958_gen_type [232] = Y4958_pgtype203;
	Y4958_gen_type [233] = Y4958_pgtype204;
	Y4958_gen_type [234] = Y4958_pgtype205;
	Y4958_gen_type [235] = Y4958_pgtype206;
	Y4958_gen_type [236] = Y4958_pgtype207;
	Y4958_gen_type [237] = Y4958_pgtype208;
	Y4958_gen_type [238] = Y4958_pgtype209;
	Y4958_gen_type [239] = Y4958_pgtype210;
	Y4958_gen_type [240] = Y4958_pgtype211;
	Y4958_gen_type [241] = Y4958_pgtype212;
	Y4958_gen_type [242] = Y4958_pgtype213;
	Y4958_gen_type [243] = Y4958_pgtype214;
	Y4958_gen_type [244] = Y4958_pgtype215;
	Y4958_gen_type [245] = Y4958_pgtype216;
	Y4958_gen_type [250] = Y4958_pgtype217;
	Y4958_gen_type [251] = Y4958_pgtype218;
	Y4958_gen_type [252] = Y4958_pgtype219;
	Y4958_gen_type [253] = Y4958_pgtype220;
	Y4958_gen_type [254] = Y4958_pgtype221;
	Y4958_gen_type [255] = Y4958_pgtype222;
	Y4958_gen_type [256] = Y4958_pgtype223;
	Y4958_gen_type [257] = Y4958_pgtype224;
	Y4958_gen_type [258] = Y4958_pgtype225;
	Y4958_gen_type [259] = Y4958_pgtype226;
	Y4958_gen_type [260] = Y4958_pgtype227;
	Y4958_gen_type [261] = Y4958_pgtype228;
	Y4958_gen_type [262] = Y4958_pgtype229;
	Y4958_gen_type [263] = Y4958_pgtype230;
	Y4958_gen_type [264] = Y4958_pgtype231;
	Y4958_gen_type [337] = Y4958_pgtype232;
	Y4958_gen_type [416] = Y4958_pgtype233;
	Y4958_gen_type [418] = Y4958_pgtype234;
	Y4958_gen_type [419] = Y4958_pgtype235;
	Y4958_gen_type [420] = Y4958_pgtype236;
	Y4958_gen_type [421] = Y4958_pgtype237;
	Y4958_gen_type [423] = Y4958_pgtype238;
	Y4958_gen_type [424] = Y4958_pgtype239;
	Y4958_gen_type [461] = Y4958_pgtype240;
	Y4958_gen_type [465] = Y4958_pgtype241;
	Y4958_gen_type [466] = Y4958_pgtype242;
	Y4958_gen_type [467] = Y4958_pgtype243;
	Y4958_gen_type [468] = Y4958_pgtype244;
	Y4958_gen_type [469] = Y4958_pgtype245;
	Y4958_gen_type [470] = Y4958_pgtype246;
	Y4958_gen_type [496] = Y4958_pgtype247;
	Y4958_gen_type [510] = Y4958_pgtype248;
	Y4958_gen_type [511] = Y4958_pgtype249;
	Y4958_gen_type [512] = Y4958_pgtype250;
	Y4958_gen_type [513] = Y4958_pgtype251;
	Y4958_gen_type [514] = Y4958_pgtype252;
	Y4958_gen_type [515] = Y4958_pgtype253;
	Y4958_gen_type [516] = Y4958_pgtype254;
	Y4958_gen_type [517] = Y4958_pgtype255;
	Y4958_gen_type [518] = Y4958_pgtype256;
	Y4958_gen_type [519] = Y4958_pgtype257;
	Y4958_gen_type [520] = Y4958_pgtype258;
	Y4958_gen_type [521] = Y4958_pgtype259;
	Y4958_gen_type [522] = Y4958_pgtype260;
	Y4958[15] = 922;
	Y4958[16] = 850;
	Y4958[17] = 928;
	{long i; for (i = 78; i < 80; i++) Y4958[i] = 874;};
	Y4958[177] = 865;
	Y4958[195] = 0;
	Y4958[220] = 934;
	Y4958[221] = 915;
	{long i; for (i = 227; i < 246; i++) Y4958[i] = 915;};
	Y4958[337] = 0;
	Y4958[416] = 853;
	{long i; for (i = 418; i < 420; i++) Y4958[i] = 853;};
	{long i; for (i = 420; i < 422; i++) Y4958[i] = 850;};
	Y4958[423] = 853;
	Y4958[424] = 850;
	{long i; for (i = 465; i < 471; i++) Y4958[i] = 967;};
	Y4958[496] = 925;
	Y4958[511] = 1001;
	Y4958[512] = 1000;
	{long i; for (i = 513; i < 517; i++) Y4958[i] = 1019;};
	{long i; for (i = 517; i < 520; i++) Y4958[i] = 999;};
	{long i; for (i = 520; i < 523; i++) Y4958[i] = 1005;};
}

char *(*R5010[24])();
void R5010_init () {
	R5010[0] = (char *(*)()) F529_5658;
	R5010[1] = (char *(*)()) F530_5658;
	R5010[2] = (char *(*)()) F531_5658;
	R5010[3] = (char *(*)()) F532_5658;
	R5010[4] = (char *(*)()) F533_5658;
	R5010[5] = (char *(*)()) F534_5658;
	R5010[6] = (char *(*)()) F535_5658;
	R5010[7] = (char *(*)()) F536_5658;
	R5010[8] = (char *(*)()) F537_5658;
	R5010[9] = (char *(*)()) F538_5658;
	R5010[10] = (char *(*)()) F539_5658;
	R5010[11] = (char *(*)()) F540_5658;
	R5010[12] = (char *(*)()) F541_5658;
	R5010[13] = (char *(*)()) F542_5658;
	R5010[14] = (char *(*)()) F543_5658;
	{long i; for (i = 15; i < 17; i++) R5010[i] = (char *(*)()) F529_5658;}
	{long i; for (i = 17; i < 19; i++) R5010[i] = (char *(*)()) F532_5658;}
	R5010[19] = (char *(*)()) F534_5658;
	R5010[20] = (char *(*)()) F532_5658;
	R5010[21] = (char *(*)()) F529_5658;
	R5010[22] = (char *(*)()) F539_5658;
	R5010[23] = (char *(*)()) F532_5658;
}

char *(*R5022[24])();
void R5022_init () {
	R5022[0] = (char *(*)()) F529_5673;
	R5022[1] = (char *(*)()) F530_5673;
	R5022[2] = (char *(*)()) F531_5673;
	R5022[3] = (char *(*)()) F532_5673;
	R5022[4] = (char *(*)()) F533_5673;
	R5022[5] = (char *(*)()) F534_5673;
	R5022[6] = (char *(*)()) F535_5673;
	R5022[7] = (char *(*)()) F536_5673;
	R5022[8] = (char *(*)()) F537_5673;
	R5022[9] = (char *(*)()) F538_5673;
	R5022[10] = (char *(*)()) F539_5673;
	R5022[11] = (char *(*)()) F540_5673;
	R5022[12] = (char *(*)()) F541_5673;
	R5022[13] = (char *(*)()) F542_5673;
	R5022[14] = (char *(*)()) F543_5673;
	{long i; for (i = 15; i < 17; i++) R5022[i] = (char *(*)()) F529_5673;}
	{long i; for (i = 17; i < 19; i++) R5022[i] = (char *(*)()) F532_5673;}
	R5022[19] = (char *(*)()) F534_5673;
	R5022[20] = (char *(*)()) F532_5673;
	R5022[21] = (char *(*)()) F529_5673;
	R5022[22] = (char *(*)()) F539_5673;
	R5022[23] = (char *(*)()) F532_5673;
}

char *(*R5027[24])();
void R5027_init () {
	R5027[0] = (char *(*)()) F529_5678;
	R5027[1] = (char *(*)()) F530_5678;
	R5027[2] = (char *(*)()) F531_5678;
	R5027[3] = (char *(*)()) F532_5678;
	R5027[4] = (char *(*)()) F533_5678;
	R5027[5] = (char *(*)()) F534_5678;
	R5027[6] = (char *(*)()) F535_5678;
	R5027[7] = (char *(*)()) F536_5678;
	R5027[8] = (char *(*)()) F537_5678;
	R5027[9] = (char *(*)()) F538_5678;
	R5027[10] = (char *(*)()) F539_5678;
	R5027[11] = (char *(*)()) F540_5678;
	R5027[12] = (char *(*)()) F541_5678;
	R5027[13] = (char *(*)()) F542_5678;
	R5027[14] = (char *(*)()) F543_5678;
	{long i; for (i = 15; i < 17; i++) R5027[i] = (char *(*)()) F529_5678;}
	{long i; for (i = 17; i < 19; i++) R5027[i] = (char *(*)()) F532_5678;}
	R5027[19] = (char *(*)()) F534_5678;
	R5027[20] = (char *(*)()) F532_5678;
	R5027[21] = (char *(*)()) F550_5689;
	R5027[22] = (char *(*)()) F551_5689;
	R5027[23] = (char *(*)()) F552_5689;
}

char *(*R5029[24])();
void R5029_init () {
	R5029[0] = (char *(*)()) F529_5681;
	R5029[1] = (char *(*)()) F530_5681;
	R5029[2] = (char *(*)()) F531_5681;
	R5029[3] = (char *(*)()) F532_5681;
	R5029[4] = (char *(*)()) F533_5681;
	R5029[5] = (char *(*)()) F534_5681;
	R5029[6] = (char *(*)()) F535_5681;
	R5029[7] = (char *(*)()) F536_5681;
	R5029[8] = (char *(*)()) F537_5681;
	R5029[9] = (char *(*)()) F538_5681;
	R5029[10] = (char *(*)()) F539_5681;
	R5029[11] = (char *(*)()) F540_5681;
	R5029[12] = (char *(*)()) F541_5681;
	R5029[13] = (char *(*)()) F542_5681;
	R5029[14] = (char *(*)()) F543_5681;
	{long i; for (i = 15; i < 17; i++) R5029[i] = (char *(*)()) F529_5681;}
	{long i; for (i = 17; i < 19; i++) R5029[i] = (char *(*)()) F532_5681;}
	R5029[19] = (char *(*)()) F534_5681;
	R5029[20] = (char *(*)()) F532_5681;
	R5029[21] = (char *(*)()) F529_5681;
	R5029[22] = (char *(*)()) F539_5681;
	R5029[23] = (char *(*)()) F532_5681;
}

char *(*R5031[443])();
void R5031_init () {
	R5031[0] = (char *(*)()) F585_5763;
	R5031[1] = (char *(*)()) F586_5763_5031;
	R5031[2] = (char *(*)()) F587_5763_5031;
	R5031[3] = (char *(*)()) F588_5763_5031;
	R5031[4] = (char *(*)()) F589_5763_5031;
	R5031[5] = (char *(*)()) F590_5763_5031;
	R5031[6] = (char *(*)()) F591_5763_5031;
	R5031[7] = (char *(*)()) F592_5763_5031;
	R5031[8] = (char *(*)()) F593_5763_5031;
	R5031[9] = (char *(*)()) F594_5763_5031;
	R5031[10] = (char *(*)()) F595_5763_5031;
	R5031[11] = (char *(*)()) F596_5763_5031;
	R5031[12] = (char *(*)()) F597_5763_5031;
	R5031[13] = (char *(*)()) F598_5763_5031;
	R5031[14] = (char *(*)()) F599_5763_5031;
	R5031[15] = (char *(*)()) F585_5763;
	R5031[16] = (char *(*)()) F586_5763_5031;
	R5031[17] = (char *(*)()) F587_5763_5031;
	R5031[18] = (char *(*)()) F588_5763_5031;
	R5031[19] = (char *(*)()) F589_5763_5031;
	R5031[20] = (char *(*)()) F590_5763_5031;
	R5031[21] = (char *(*)()) F591_5763_5031;
	R5031[22] = (char *(*)()) F592_5763_5031;
	R5031[23] = (char *(*)()) F593_5763_5031;
	R5031[24] = (char *(*)()) F594_5763_5031;
	R5031[25] = (char *(*)()) F595_5763_5031;
	R5031[26] = (char *(*)()) F596_5763_5031;
	R5031[27] = (char *(*)()) F597_5763_5031;
	R5031[28] = (char *(*)()) F598_5763_5031;
	R5031[29] = (char *(*)()) F599_5763_5031;
	R5031[30] = (char *(*)()) F585_5763;
	R5031[31] = (char *(*)()) F586_5763_5031;
	R5031[32] = (char *(*)()) F587_5763_5031;
	R5031[33] = (char *(*)()) F588_5763_5031;
	R5031[34] = (char *(*)()) F589_5763_5031;
	R5031[35] = (char *(*)()) F590_5763_5031;
	R5031[36] = (char *(*)()) F591_5763_5031;
	R5031[37] = (char *(*)()) F592_5763_5031;
	R5031[38] = (char *(*)()) F593_5763_5031;
	R5031[39] = (char *(*)()) F594_5763_5031;
	R5031[40] = (char *(*)()) F595_5763_5031;
	R5031[41] = (char *(*)()) F596_5763_5031;
	R5031[42] = (char *(*)()) F597_5763_5031;
	R5031[43] = (char *(*)()) F598_5763_5031;
	R5031[44] = (char *(*)()) F599_5763_5031;
	R5031[45] = (char *(*)()) F585_5763;
	R5031[46] = (char *(*)()) F586_5763_5031;
	R5031[47] = (char *(*)()) F587_5763_5031;
	R5031[48] = (char *(*)()) F588_5763_5031;
	R5031[49] = (char *(*)()) F589_5763_5031;
	R5031[50] = (char *(*)()) F590_5763_5031;
	R5031[51] = (char *(*)()) F591_5763_5031;
	R5031[52] = (char *(*)()) F592_5763_5031;
	R5031[53] = (char *(*)()) F593_5763_5031;
	R5031[54] = (char *(*)()) F594_5763_5031;
	R5031[55] = (char *(*)()) F595_5763_5031;
	R5031[56] = (char *(*)()) F596_5763_5031;
	R5031[57] = (char *(*)()) F597_5763_5031;
	R5031[58] = (char *(*)()) F598_5763_5031;
	R5031[59] = (char *(*)()) F599_5763_5031;
	R5031[60] = (char *(*)()) F585_5763;
	R5031[61] = (char *(*)()) F594_5763_5031;
	R5031[62] = (char *(*)()) F588_5763_5031;
	R5031[63] = (char *(*)()) F585_5763;
	R5031[64] = (char *(*)()) F594_5763_5031;
	R5031[65] = (char *(*)()) F588_5763_5031;
	R5031[66] = (char *(*)()) F585_5763;
	R5031[82] = (char *(*)()) F667_6240;
	R5031[83] = (char *(*)()) F668_6240_5031;
	R5031[84] = (char *(*)()) F669_6240_5031;
	R5031[85] = (char *(*)()) F670_6240_5031;
	R5031[86] = (char *(*)()) F671_6240_5031;
	R5031[87] = (char *(*)()) F672_6240_5031;
	R5031[88] = (char *(*)()) F673_6240_5031;
	R5031[89] = (char *(*)()) F674_6240_5031;
	R5031[90] = (char *(*)()) F675_6240_5031;
	R5031[91] = (char *(*)()) F676_6240_5031;
	R5031[92] = (char *(*)()) F677_6240_5031;
	R5031[93] = (char *(*)()) F678_6240_5031;
	R5031[94] = (char *(*)()) F679_6240_5031;
	R5031[95] = (char *(*)()) F680_6240_5031;
	R5031[96] = (char *(*)()) F681_6240_5031;
	R5031[97] = (char *(*)()) F669_6240_5031;
	R5031[116] = (char *(*)()) F701_6584;
	R5031[117] = (char *(*)()) F702_6584_5031;
	R5031[118] = (char *(*)()) F703_6584_5031;
	R5031[119] = (char *(*)()) F704_6584_5031;
	R5031[120] = (char *(*)()) F705_6584_5031;
	R5031[121] = (char *(*)()) F706_6584_5031;
	R5031[122] = (char *(*)()) F707_6584_5031;
	R5031[123] = (char *(*)()) F708_6584_5031;
	R5031[124] = (char *(*)()) F709_6584_5031;
	R5031[125] = (char *(*)()) F710_6584_5031;
	R5031[126] = (char *(*)()) F711_6584_5031;
	R5031[127] = (char *(*)()) F712_6584_5031;
	R5031[128] = (char *(*)()) F713_6584_5031;
	R5031[129] = (char *(*)()) F714_6584_5031;
	R5031[130] = (char *(*)()) F715_6584_5031;
	R5031[131] = (char *(*)()) F701_6584;
	R5031[132] = (char *(*)()) F710_6584_5031;
	R5031[133] = (char *(*)()) F704_6584_5031;
	R5031[134] = (char *(*)()) F701_6584;
	R5031[135] = (char *(*)()) F704_6584_5031;
	R5031[136] = (char *(*)()) F701_6584;
	R5031[137] = (char *(*)()) F704_6584_5031;
	R5031[138] = (char *(*)()) F701_6584;
	R5031[139] = (char *(*)()) F704_6584_5031;
	{long i; for (i = 140; i < 142; i++) R5031[i] = (char *(*)()) F701_6584;}
	{long i; for (i = 147; i < 166; i++) R5031[i] = (char *(*)()) F701_6584;}
	R5031[170] = (char *(*)()) F755_6948;
	R5031[171] = (char *(*)()) F756_6948_5031;
	R5031[172] = (char *(*)()) F757_6948_5031;
	R5031[173] = (char *(*)()) F758_6948_5031;
	R5031[174] = (char *(*)()) F759_6948_5031;
	R5031[175] = (char *(*)()) F760_6948_5031;
	R5031[176] = (char *(*)()) F761_6948_5031;
	R5031[177] = (char *(*)()) F762_6948_5031;
	R5031[178] = (char *(*)()) F763_6948_5031;
	R5031[179] = (char *(*)()) F764_6948_5031;
	R5031[180] = (char *(*)()) F765_6948_5031;
	R5031[181] = (char *(*)()) F766_6948_5031;
	R5031[182] = (char *(*)()) F767_6948_5031;
	R5031[183] = (char *(*)()) F768_6948_5031;
	R5031[184] = (char *(*)()) F769_6948_5031;
	R5031[257] = (char *(*)()) F842_8513;
	{long i; for (i = 338; i < 340; i++) R5031[i] = (char *(*)()) F923_10400_5031;}
	R5031[341] = (char *(*)()) F926_10609_5031;
	R5031[344] = (char *(*)()) F929_10720_5031;
	R5031[381] = (char *(*)()) F966_11521;
	{long i; for (i = 385; i < 391; i++) R5031[i] = (char *(*)()) F966_11521;}
	R5031[416] = (char *(*)()) F701_6584;
	{long i; for (i = 430; i < 443; i++) R5031[i] = (char *(*)()) F966_11521;}
}
static EIF_REFERENCE F586_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F586_5763(Current, arg1);
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
static EIF_REFERENCE F587_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F587_5763(Current, arg1);
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
static EIF_REFERENCE F588_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F588_5763(Current, arg1);
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
static EIF_REFERENCE F589_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F589_5763(Current, arg1);
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
static EIF_REFERENCE F590_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F590_5763(Current, arg1);
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
static EIF_REFERENCE F591_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F591_5763(Current, arg1);
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
static EIF_REFERENCE F592_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F592_5763(Current, arg1);
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
static EIF_REFERENCE F593_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F593_5763(Current, arg1);
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
static EIF_REFERENCE F594_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F594_5763(Current, arg1);
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
static EIF_REFERENCE F595_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F595_5763(Current, arg1);
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
static EIF_REFERENCE F596_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F596_5763(Current, arg1);
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
static EIF_REFERENCE F597_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F597_5763(Current, arg1);
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
static EIF_REFERENCE F598_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F598_5763(Current, arg1);
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
static EIF_REFERENCE F599_5763_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F599_5763(Current, arg1);
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
static EIF_REFERENCE F668_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F668_6240(Current, arg1);
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
static EIF_REFERENCE F669_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F669_6240(Current, arg1);
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
static EIF_REFERENCE F670_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F670_6240(Current, arg1);
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
static EIF_REFERENCE F671_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F671_6240(Current, arg1);
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
static EIF_REFERENCE F672_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F672_6240(Current, arg1);
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
static EIF_REFERENCE F673_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F673_6240(Current, arg1);
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
static EIF_REFERENCE F674_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F674_6240(Current, arg1);
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
static EIF_REFERENCE F675_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F675_6240(Current, arg1);
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
static EIF_REFERENCE F676_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F676_6240(Current, arg1);
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
static EIF_REFERENCE F677_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F677_6240(Current, arg1);
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
static EIF_REFERENCE F678_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F678_6240(Current, arg1);
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
static EIF_REFERENCE F679_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F679_6240(Current, arg1);
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
static EIF_REFERENCE F680_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F680_6240(Current, arg1);
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
static EIF_REFERENCE F681_6240_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F681_6240(Current, arg1);
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
static EIF_REFERENCE F702_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F702_6584(Current, arg1);
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
static EIF_REFERENCE F703_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F703_6584(Current, arg1);
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
static EIF_REFERENCE F704_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F704_6584(Current, arg1);
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
static EIF_REFERENCE F705_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F705_6584(Current, arg1);
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
static EIF_REFERENCE F706_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F706_6584(Current, arg1);
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
static EIF_REFERENCE F707_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F707_6584(Current, arg1);
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
static EIF_REFERENCE F708_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F708_6584(Current, arg1);
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
static EIF_REFERENCE F709_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F709_6584(Current, arg1);
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
static EIF_REFERENCE F710_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F710_6584(Current, arg1);
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
static EIF_REFERENCE F711_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F711_6584(Current, arg1);
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
static EIF_REFERENCE F712_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F712_6584(Current, arg1);
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
static EIF_REFERENCE F713_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F713_6584(Current, arg1);
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
static EIF_REFERENCE F714_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F714_6584(Current, arg1);
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
static EIF_REFERENCE F715_6584_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F715_6584(Current, arg1);
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
static EIF_REFERENCE F756_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F756_6948(Current, arg1);
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
static EIF_REFERENCE F757_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F757_6948(Current, arg1);
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
static EIF_REFERENCE F758_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F758_6948(Current, arg1);
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
static EIF_REFERENCE F759_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F759_6948(Current, arg1);
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
static EIF_REFERENCE F760_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F760_6948(Current, arg1);
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
static EIF_REFERENCE F761_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F761_6948(Current, arg1);
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
static EIF_REFERENCE F762_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F762_6948(Current, arg1);
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
static EIF_REFERENCE F763_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F763_6948(Current, arg1);
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
static EIF_REFERENCE F764_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F764_6948(Current, arg1);
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
static EIF_REFERENCE F765_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F765_6948(Current, arg1);
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
static EIF_REFERENCE F766_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F766_6948(Current, arg1);
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
static EIF_REFERENCE F767_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F767_6948(Current, arg1);
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
static EIF_REFERENCE F768_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F768_6948(Current, arg1);
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
static EIF_REFERENCE F769_6948_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F769_6948(Current, arg1);
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
static EIF_REFERENCE F923_10400_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F923_10400(Current, arg1);
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
static EIF_REFERENCE F926_10609_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F926_10609(Current, arg1);
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
static EIF_REFERENCE F929_10720_5031 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F929_10720(Current, arg1);
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

char *(*R5032[445])();
void R5032_init () {
	{long i; for (i = 0; i < 2; i++) R5032[i] = (char *(*)()) F583_5722;}
	R5032[2] = (char *(*)()) F585_5766;
	R5032[3] = (char *(*)()) F586_5766;
	R5032[4] = (char *(*)()) F587_5766;
	R5032[5] = (char *(*)()) F588_5766;
	R5032[6] = (char *(*)()) F589_5766;
	R5032[7] = (char *(*)()) F590_5766;
	R5032[8] = (char *(*)()) F591_5766;
	R5032[9] = (char *(*)()) F592_5766;
	R5032[10] = (char *(*)()) F593_5766;
	R5032[11] = (char *(*)()) F594_5766;
	R5032[12] = (char *(*)()) F595_5766;
	R5032[13] = (char *(*)()) F596_5766;
	R5032[14] = (char *(*)()) F597_5766;
	R5032[15] = (char *(*)()) F598_5766;
	R5032[16] = (char *(*)()) F599_5766;
	R5032[17] = (char *(*)()) F585_5766;
	R5032[18] = (char *(*)()) F586_5766;
	R5032[19] = (char *(*)()) F587_5766;
	R5032[20] = (char *(*)()) F588_5766;
	R5032[21] = (char *(*)()) F589_5766;
	R5032[22] = (char *(*)()) F590_5766;
	R5032[23] = (char *(*)()) F591_5766;
	R5032[24] = (char *(*)()) F592_5766;
	R5032[25] = (char *(*)()) F593_5766;
	R5032[26] = (char *(*)()) F594_5766;
	R5032[27] = (char *(*)()) F595_5766;
	R5032[28] = (char *(*)()) F596_5766;
	R5032[29] = (char *(*)()) F597_5766;
	R5032[30] = (char *(*)()) F598_5766;
	R5032[31] = (char *(*)()) F599_5766;
	R5032[32] = (char *(*)()) F585_5766;
	R5032[33] = (char *(*)()) F586_5766;
	R5032[34] = (char *(*)()) F587_5766;
	R5032[35] = (char *(*)()) F588_5766;
	R5032[36] = (char *(*)()) F589_5766;
	R5032[37] = (char *(*)()) F590_5766;
	R5032[38] = (char *(*)()) F591_5766;
	R5032[39] = (char *(*)()) F592_5766;
	R5032[40] = (char *(*)()) F593_5766;
	R5032[41] = (char *(*)()) F594_5766;
	R5032[42] = (char *(*)()) F595_5766;
	R5032[43] = (char *(*)()) F596_5766;
	R5032[44] = (char *(*)()) F597_5766;
	R5032[45] = (char *(*)()) F598_5766;
	R5032[46] = (char *(*)()) F599_5766;
	R5032[47] = (char *(*)()) F585_5766;
	R5032[48] = (char *(*)()) F586_5766;
	R5032[49] = (char *(*)()) F587_5766;
	R5032[50] = (char *(*)()) F588_5766;
	R5032[51] = (char *(*)()) F589_5766;
	R5032[52] = (char *(*)()) F590_5766;
	R5032[53] = (char *(*)()) F591_5766;
	R5032[54] = (char *(*)()) F592_5766;
	R5032[55] = (char *(*)()) F593_5766;
	R5032[56] = (char *(*)()) F594_5766;
	R5032[57] = (char *(*)()) F595_5766;
	R5032[58] = (char *(*)()) F596_5766;
	R5032[59] = (char *(*)()) F597_5766;
	R5032[60] = (char *(*)()) F598_5766;
	R5032[61] = (char *(*)()) F599_5766;
	R5032[62] = (char *(*)()) F585_5766;
	R5032[63] = (char *(*)()) F594_5766;
	R5032[64] = (char *(*)()) F588_5766;
	R5032[65] = (char *(*)()) F585_5766;
	R5032[66] = (char *(*)()) F594_5766;
	R5032[67] = (char *(*)()) F588_5766;
	R5032[68] = (char *(*)()) F585_5766;
	R5032[84] = (char *(*)()) F667_6249;
	R5032[85] = (char *(*)()) F668_6249;
	R5032[86] = (char *(*)()) F669_6249;
	R5032[87] = (char *(*)()) F670_6249;
	R5032[88] = (char *(*)()) F671_6249;
	R5032[89] = (char *(*)()) F672_6249;
	R5032[90] = (char *(*)()) F673_6249;
	R5032[91] = (char *(*)()) F674_6249;
	R5032[92] = (char *(*)()) F675_6249;
	R5032[93] = (char *(*)()) F676_6249;
	R5032[94] = (char *(*)()) F677_6249;
	R5032[95] = (char *(*)()) F678_6249;
	R5032[96] = (char *(*)()) F679_6249;
	R5032[97] = (char *(*)()) F680_6249;
	R5032[98] = (char *(*)()) F681_6249;
	R5032[99] = (char *(*)()) F669_6249;
	R5032[109] = (char *(*)()) F692_6451;
	R5032[110] = (char *(*)()) F693_6451;
	R5032[111] = (char *(*)()) F694_6451;
	R5032[112] = (char *(*)()) F695_6451;
	R5032[113] = (char *(*)()) F696_6451;
	R5032[114] = (char *(*)()) F697_6451;
	R5032[115] = (char *(*)()) F692_6451;
	R5032[116] = (char *(*)()) F694_6451;
	R5032[117] = (char *(*)()) F692_6451;
	R5032[118] = (char *(*)()) F585_5766;
	R5032[119] = (char *(*)()) F586_5766;
	R5032[120] = (char *(*)()) F587_5766;
	R5032[121] = (char *(*)()) F588_5766;
	R5032[122] = (char *(*)()) F589_5766;
	R5032[123] = (char *(*)()) F590_5766;
	R5032[124] = (char *(*)()) F591_5766;
	R5032[125] = (char *(*)()) F592_5766;
	R5032[126] = (char *(*)()) F593_5766;
	R5032[127] = (char *(*)()) F594_5766;
	R5032[128] = (char *(*)()) F595_5766;
	R5032[129] = (char *(*)()) F596_5766;
	R5032[130] = (char *(*)()) F597_5766;
	R5032[131] = (char *(*)()) F598_5766;
	R5032[132] = (char *(*)()) F599_5766;
	R5032[133] = (char *(*)()) F585_5766;
	R5032[134] = (char *(*)()) F594_5766;
	R5032[135] = (char *(*)()) F588_5766;
	R5032[136] = (char *(*)()) F585_5766;
	R5032[137] = (char *(*)()) F588_5766;
	R5032[138] = (char *(*)()) F585_5766;
	R5032[139] = (char *(*)()) F588_5766;
	R5032[140] = (char *(*)()) F585_5766;
	R5032[141] = (char *(*)()) F588_5766;
	{long i; for (i = 142; i < 144; i++) R5032[i] = (char *(*)()) F585_5766;}
	{long i; for (i = 149; i < 168; i++) R5032[i] = (char *(*)()) F585_5766;}
	R5032[172] = (char *(*)()) F755_6955;
	R5032[173] = (char *(*)()) F756_6955;
	R5032[174] = (char *(*)()) F757_6955;
	R5032[175] = (char *(*)()) F758_6955;
	R5032[176] = (char *(*)()) F759_6955;
	R5032[177] = (char *(*)()) F760_6955;
	R5032[178] = (char *(*)()) F761_6955;
	R5032[179] = (char *(*)()) F762_6955;
	R5032[180] = (char *(*)()) F763_6955;
	R5032[181] = (char *(*)()) F764_6955;
	R5032[182] = (char *(*)()) F765_6955;
	R5032[183] = (char *(*)()) F766_6955;
	R5032[184] = (char *(*)()) F767_6955;
	R5032[185] = (char *(*)()) F768_6955;
	R5032[186] = (char *(*)()) F769_6955;
	R5032[259] = (char *(*)()) F842_8546;
	R5032[338] = (char *(*)()) F921_10351;
	{long i; for (i = 340; i < 342; i++) R5032[i] = (char *(*)()) F921_10351;}
	{long i; for (i = 342; i < 344; i++) R5032[i] = (char *(*)()) F925_10574;}
	R5032[345] = (char *(*)()) F921_10351;
	R5032[346] = (char *(*)()) F925_10574;
	R5032[383] = (char *(*)()) F585_5766;
	{long i; for (i = 387; i < 393; i++) R5032[i] = (char *(*)()) F585_5766;}
	R5032[418] = (char *(*)()) F585_5766;
	{long i; for (i = 432; i < 445; i++) R5032[i] = (char *(*)()) F585_5766;}
}

char *(*R5033[445])();
void R5033_init () {
	{long i; for (i = 0; i < 2; i++) R5033[i] = (char *(*)()) F583_5718;}
	R5033[2] = (char *(*)()) F585_5771;
	R5033[3] = (char *(*)()) F586_5771;
	R5033[4] = (char *(*)()) F587_5771;
	R5033[5] = (char *(*)()) F588_5771;
	R5033[6] = (char *(*)()) F589_5771;
	R5033[7] = (char *(*)()) F590_5771;
	R5033[8] = (char *(*)()) F591_5771;
	R5033[9] = (char *(*)()) F592_5771;
	R5033[10] = (char *(*)()) F593_5771;
	R5033[11] = (char *(*)()) F594_5771;
	R5033[12] = (char *(*)()) F595_5771;
	R5033[13] = (char *(*)()) F596_5771;
	R5033[14] = (char *(*)()) F597_5771;
	R5033[15] = (char *(*)()) F598_5771;
	R5033[16] = (char *(*)()) F599_5771;
	R5033[17] = (char *(*)()) F585_5771;
	R5033[18] = (char *(*)()) F586_5771;
	R5033[19] = (char *(*)()) F587_5771;
	R5033[20] = (char *(*)()) F588_5771;
	R5033[21] = (char *(*)()) F589_5771;
	R5033[22] = (char *(*)()) F590_5771;
	R5033[23] = (char *(*)()) F591_5771;
	R5033[24] = (char *(*)()) F592_5771;
	R5033[25] = (char *(*)()) F593_5771;
	R5033[26] = (char *(*)()) F594_5771;
	R5033[27] = (char *(*)()) F595_5771;
	R5033[28] = (char *(*)()) F596_5771;
	R5033[29] = (char *(*)()) F597_5771;
	R5033[30] = (char *(*)()) F598_5771;
	R5033[31] = (char *(*)()) F599_5771;
	R5033[32] = (char *(*)()) F585_5771;
	R5033[33] = (char *(*)()) F586_5771;
	R5033[34] = (char *(*)()) F587_5771;
	R5033[35] = (char *(*)()) F588_5771;
	R5033[36] = (char *(*)()) F589_5771;
	R5033[37] = (char *(*)()) F590_5771;
	R5033[38] = (char *(*)()) F591_5771;
	R5033[39] = (char *(*)()) F592_5771;
	R5033[40] = (char *(*)()) F593_5771;
	R5033[41] = (char *(*)()) F594_5771;
	R5033[42] = (char *(*)()) F595_5771;
	R5033[43] = (char *(*)()) F596_5771;
	R5033[44] = (char *(*)()) F597_5771;
	R5033[45] = (char *(*)()) F598_5771;
	R5033[46] = (char *(*)()) F599_5771;
	R5033[47] = (char *(*)()) F585_5771;
	R5033[48] = (char *(*)()) F586_5771;
	R5033[49] = (char *(*)()) F587_5771;
	R5033[50] = (char *(*)()) F588_5771;
	R5033[51] = (char *(*)()) F589_5771;
	R5033[52] = (char *(*)()) F590_5771;
	R5033[53] = (char *(*)()) F591_5771;
	R5033[54] = (char *(*)()) F592_5771;
	R5033[55] = (char *(*)()) F593_5771;
	R5033[56] = (char *(*)()) F594_5771;
	R5033[57] = (char *(*)()) F595_5771;
	R5033[58] = (char *(*)()) F596_5771;
	R5033[59] = (char *(*)()) F597_5771;
	R5033[60] = (char *(*)()) F598_5771;
	R5033[61] = (char *(*)()) F599_5771;
	R5033[62] = (char *(*)()) F585_5771;
	R5033[63] = (char *(*)()) F594_5771;
	R5033[64] = (char *(*)()) F588_5771;
	R5033[65] = (char *(*)()) F585_5771;
	R5033[66] = (char *(*)()) F594_5771;
	R5033[67] = (char *(*)()) F588_5771;
	R5033[68] = (char *(*)()) F585_5771;
	R5033[84] = (char *(*)()) F667_6255;
	R5033[85] = (char *(*)()) F668_6255;
	R5033[86] = (char *(*)()) F669_6255;
	R5033[87] = (char *(*)()) F670_6255;
	R5033[88] = (char *(*)()) F671_6255;
	R5033[89] = (char *(*)()) F672_6255;
	R5033[90] = (char *(*)()) F673_6255;
	R5033[91] = (char *(*)()) F674_6255;
	R5033[92] = (char *(*)()) F675_6255;
	R5033[93] = (char *(*)()) F676_6255;
	R5033[94] = (char *(*)()) F677_6255;
	R5033[95] = (char *(*)()) F678_6255;
	R5033[96] = (char *(*)()) F679_6255;
	R5033[97] = (char *(*)()) F680_6255;
	R5033[98] = (char *(*)()) F681_6255;
	R5033[99] = (char *(*)()) F669_6255;
	R5033[109] = (char *(*)()) F692_6468;
	R5033[110] = (char *(*)()) F693_6468;
	R5033[111] = (char *(*)()) F694_6468;
	R5033[112] = (char *(*)()) F695_6468;
	R5033[113] = (char *(*)()) F696_6468;
	R5033[114] = (char *(*)()) F697_6468;
	R5033[115] = (char *(*)()) F692_6468;
	R5033[116] = (char *(*)()) F694_6468;
	R5033[117] = (char *(*)()) F692_6468;
	R5033[118] = (char *(*)()) F701_6605;
	R5033[119] = (char *(*)()) F702_6605;
	R5033[120] = (char *(*)()) F703_6605;
	R5033[121] = (char *(*)()) F704_6605;
	R5033[122] = (char *(*)()) F705_6605;
	R5033[123] = (char *(*)()) F706_6605;
	R5033[124] = (char *(*)()) F707_6605;
	R5033[125] = (char *(*)()) F708_6605;
	R5033[126] = (char *(*)()) F709_6605;
	R5033[127] = (char *(*)()) F710_6605;
	R5033[128] = (char *(*)()) F711_6605;
	R5033[129] = (char *(*)()) F712_6605;
	R5033[130] = (char *(*)()) F713_6605;
	R5033[131] = (char *(*)()) F714_6605;
	R5033[132] = (char *(*)()) F715_6605;
	R5033[133] = (char *(*)()) F701_6605;
	R5033[134] = (char *(*)()) F710_6605;
	R5033[135] = (char *(*)()) F704_6605;
	R5033[136] = (char *(*)()) F701_6605;
	R5033[137] = (char *(*)()) F704_6605;
	R5033[138] = (char *(*)()) F701_6605;
	R5033[139] = (char *(*)()) F704_6605;
	R5033[140] = (char *(*)()) F701_6605;
	R5033[141] = (char *(*)()) F704_6605;
	{long i; for (i = 142; i < 144; i++) R5033[i] = (char *(*)()) F701_6605;}
	{long i; for (i = 149; i < 168; i++) R5033[i] = (char *(*)()) F701_6605;}
	R5033[172] = (char *(*)()) F755_6962;
	R5033[173] = (char *(*)()) F756_6962;
	R5033[174] = (char *(*)()) F757_6962;
	R5033[175] = (char *(*)()) F758_6962;
	R5033[176] = (char *(*)()) F759_6962;
	R5033[177] = (char *(*)()) F760_6962;
	R5033[178] = (char *(*)()) F761_6962;
	R5033[179] = (char *(*)()) F762_6962;
	R5033[180] = (char *(*)()) F763_6962;
	R5033[181] = (char *(*)()) F764_6962;
	R5033[182] = (char *(*)()) F765_6962;
	R5033[183] = (char *(*)()) F766_6962;
	R5033[184] = (char *(*)()) F767_6962;
	R5033[185] = (char *(*)()) F768_6962;
	R5033[186] = (char *(*)()) F769_6962;
	R5033[259] = (char *(*)()) F842_8540;
	R5033[338] = (char *(*)()) F920_10247;
	{long i; for (i = 340; i < 344; i++) R5033[i] = (char *(*)()) F920_10247;}
	{long i; for (i = 345; i < 347; i++) R5033[i] = (char *(*)()) F920_10247;}
	R5033[383] = (char *(*)()) F585_5771;
	{long i; for (i = 387; i < 393; i++) R5033[i] = (char *(*)()) F585_5771;}
	R5033[418] = (char *(*)()) F701_6605;
	{long i; for (i = 432; i < 445; i++) R5033[i] = (char *(*)()) F585_5771;}
}

char *(*R5062[443])();
void R5062_init () {
	R5062[0] = (char *(*)()) F585_5760;
	R5062[1] = (char *(*)()) F586_5760_5062;
	R5062[2] = (char *(*)()) F587_5760_5062;
	R5062[3] = (char *(*)()) F588_5760_5062;
	R5062[4] = (char *(*)()) F589_5760_5062;
	R5062[5] = (char *(*)()) F590_5760_5062;
	R5062[6] = (char *(*)()) F591_5760_5062;
	R5062[7] = (char *(*)()) F592_5760_5062;
	R5062[8] = (char *(*)()) F593_5760_5062;
	R5062[9] = (char *(*)()) F594_5760_5062;
	R5062[10] = (char *(*)()) F595_5760_5062;
	R5062[11] = (char *(*)()) F596_5760_5062;
	R5062[12] = (char *(*)()) F597_5760_5062;
	R5062[13] = (char *(*)()) F598_5760_5062;
	R5062[14] = (char *(*)()) F599_5760_5062;
	R5062[15] = (char *(*)()) F585_5760;
	R5062[16] = (char *(*)()) F586_5760_5062;
	R5062[17] = (char *(*)()) F587_5760_5062;
	R5062[18] = (char *(*)()) F588_5760_5062;
	R5062[19] = (char *(*)()) F589_5760_5062;
	R5062[20] = (char *(*)()) F590_5760_5062;
	R5062[21] = (char *(*)()) F591_5760_5062;
	R5062[22] = (char *(*)()) F592_5760_5062;
	R5062[23] = (char *(*)()) F593_5760_5062;
	R5062[24] = (char *(*)()) F594_5760_5062;
	R5062[25] = (char *(*)()) F595_5760_5062;
	R5062[26] = (char *(*)()) F596_5760_5062;
	R5062[27] = (char *(*)()) F597_5760_5062;
	R5062[28] = (char *(*)()) F598_5760_5062;
	R5062[29] = (char *(*)()) F599_5760_5062;
	R5062[30] = (char *(*)()) F585_5760;
	R5062[31] = (char *(*)()) F586_5760_5062;
	R5062[32] = (char *(*)()) F587_5760_5062;
	R5062[33] = (char *(*)()) F588_5760_5062;
	R5062[34] = (char *(*)()) F589_5760_5062;
	R5062[35] = (char *(*)()) F590_5760_5062;
	R5062[36] = (char *(*)()) F591_5760_5062;
	R5062[37] = (char *(*)()) F592_5760_5062;
	R5062[38] = (char *(*)()) F593_5760_5062;
	R5062[39] = (char *(*)()) F594_5760_5062;
	R5062[40] = (char *(*)()) F595_5760_5062;
	R5062[41] = (char *(*)()) F596_5760_5062;
	R5062[42] = (char *(*)()) F597_5760_5062;
	R5062[43] = (char *(*)()) F598_5760_5062;
	R5062[44] = (char *(*)()) F599_5760_5062;
	R5062[45] = (char *(*)()) F585_5760;
	R5062[46] = (char *(*)()) F586_5760_5062;
	R5062[47] = (char *(*)()) F587_5760_5062;
	R5062[48] = (char *(*)()) F588_5760_5062;
	R5062[49] = (char *(*)()) F589_5760_5062;
	R5062[50] = (char *(*)()) F590_5760_5062;
	R5062[51] = (char *(*)()) F591_5760_5062;
	R5062[52] = (char *(*)()) F592_5760_5062;
	R5062[53] = (char *(*)()) F593_5760_5062;
	R5062[54] = (char *(*)()) F594_5760_5062;
	R5062[55] = (char *(*)()) F595_5760_5062;
	R5062[56] = (char *(*)()) F596_5760_5062;
	R5062[57] = (char *(*)()) F597_5760_5062;
	R5062[58] = (char *(*)()) F598_5760_5062;
	R5062[59] = (char *(*)()) F599_5760_5062;
	R5062[60] = (char *(*)()) F645_6020;
	R5062[61] = (char *(*)()) F646_6020_5062;
	R5062[62] = (char *(*)()) F647_6020_5062;
	R5062[63] = (char *(*)()) F645_6020;
	R5062[64] = (char *(*)()) F646_6020_5062;
	R5062[65] = (char *(*)()) F647_6020_5062;
	R5062[66] = (char *(*)()) F645_6020;
	R5062[116] = (char *(*)()) F701_6587;
	R5062[117] = (char *(*)()) F702_6587_5062;
	R5062[118] = (char *(*)()) F703_6587_5062;
	R5062[119] = (char *(*)()) F704_6587_5062;
	R5062[120] = (char *(*)()) F705_6587_5062;
	R5062[121] = (char *(*)()) F706_6587_5062;
	R5062[122] = (char *(*)()) F707_6587_5062;
	R5062[123] = (char *(*)()) F708_6587_5062;
	R5062[124] = (char *(*)()) F709_6587_5062;
	R5062[125] = (char *(*)()) F710_6587_5062;
	R5062[126] = (char *(*)()) F711_6587_5062;
	R5062[127] = (char *(*)()) F712_6587_5062;
	R5062[128] = (char *(*)()) F713_6587_5062;
	R5062[129] = (char *(*)()) F714_6587_5062;
	R5062[130] = (char *(*)()) F715_6587_5062;
	R5062[131] = (char *(*)()) F701_6587;
	R5062[132] = (char *(*)()) F710_6587_5062;
	R5062[133] = (char *(*)()) F704_6587_5062;
	R5062[134] = (char *(*)()) F701_6587;
	R5062[135] = (char *(*)()) F704_6587_5062;
	R5062[136] = (char *(*)()) F701_6587;
	R5062[137] = (char *(*)()) F704_6587_5062;
	R5062[138] = (char *(*)()) F701_6587;
	R5062[139] = (char *(*)()) F704_6587_5062;
	{long i; for (i = 140; i < 142; i++) R5062[i] = (char *(*)()) F701_6587;}
	{long i; for (i = 147; i < 166; i++) R5062[i] = (char *(*)()) F701_6587;}
	R5062[381] = (char *(*)()) F585_5760;
	{long i; for (i = 385; i < 391; i++) R5062[i] = (char *(*)()) F585_5760;}
	R5062[416] = (char *(*)()) F701_6587;
	{long i; for (i = 430; i < 443; i++) R5062[i] = (char *(*)()) F585_5760;}
}
static EIF_REFERENCE F586_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F586_5760(Current);
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
static EIF_REFERENCE F587_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F587_5760(Current);
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
static EIF_REFERENCE F588_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F588_5760(Current);
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
static EIF_REFERENCE F589_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F589_5760(Current);
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
static EIF_REFERENCE F590_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F590_5760(Current);
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
static EIF_REFERENCE F591_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F591_5760(Current);
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
static EIF_REFERENCE F592_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F592_5760(Current);
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
static EIF_REFERENCE F593_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F593_5760(Current);
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
static EIF_REFERENCE F594_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F594_5760(Current);
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
static EIF_REFERENCE F595_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F595_5760(Current);
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
static EIF_REFERENCE F596_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F596_5760(Current);
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
static EIF_REFERENCE F597_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F597_5760(Current);
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
static EIF_REFERENCE F598_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F598_5760(Current);
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
static EIF_REFERENCE F599_5760_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F599_5760(Current);
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
static EIF_REFERENCE F646_6020_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F646_6020(Current);
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
static EIF_REFERENCE F647_6020_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F647_6020(Current);
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
static EIF_REFERENCE F702_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F702_6587(Current);
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
static EIF_REFERENCE F703_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F703_6587(Current);
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
static EIF_REFERENCE F704_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F704_6587(Current);
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
static EIF_REFERENCE F705_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F705_6587(Current);
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
static EIF_REFERENCE F706_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F706_6587(Current);
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
static EIF_REFERENCE F707_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F707_6587(Current);
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
static EIF_REFERENCE F708_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F708_6587(Current);
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
static EIF_REFERENCE F709_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F709_6587(Current);
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
static EIF_REFERENCE F710_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F710_6587(Current);
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
static EIF_REFERENCE F711_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F711_6587(Current);
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
static EIF_REFERENCE F712_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F712_6587(Current);
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
static EIF_REFERENCE F713_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F713_6587(Current);
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
static EIF_REFERENCE F714_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F714_6587(Current);
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
static EIF_REFERENCE F715_6587_5062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F715_6587(Current);
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

char *(*R5063[443])();
void R5063_init () {
	R5063[0] = (char *(*)()) F585_5769;
	R5063[1] = (char *(*)()) F586_5769;
	R5063[2] = (char *(*)()) F587_5769;
	R5063[3] = (char *(*)()) F588_5769;
	R5063[4] = (char *(*)()) F589_5769;
	R5063[5] = (char *(*)()) F590_5769;
	R5063[6] = (char *(*)()) F591_5769;
	R5063[7] = (char *(*)()) F592_5769;
	R5063[8] = (char *(*)()) F593_5769;
	R5063[9] = (char *(*)()) F594_5769;
	R5063[10] = (char *(*)()) F595_5769;
	R5063[11] = (char *(*)()) F596_5769;
	R5063[12] = (char *(*)()) F597_5769;
	R5063[13] = (char *(*)()) F598_5769;
	R5063[14] = (char *(*)()) F599_5769;
	R5063[15] = (char *(*)()) F585_5769;
	R5063[16] = (char *(*)()) F586_5769;
	R5063[17] = (char *(*)()) F587_5769;
	R5063[18] = (char *(*)()) F588_5769;
	R5063[19] = (char *(*)()) F589_5769;
	R5063[20] = (char *(*)()) F590_5769;
	R5063[21] = (char *(*)()) F591_5769;
	R5063[22] = (char *(*)()) F592_5769;
	R5063[23] = (char *(*)()) F593_5769;
	R5063[24] = (char *(*)()) F594_5769;
	R5063[25] = (char *(*)()) F595_5769;
	R5063[26] = (char *(*)()) F596_5769;
	R5063[27] = (char *(*)()) F597_5769;
	R5063[28] = (char *(*)()) F598_5769;
	R5063[29] = (char *(*)()) F599_5769;
	R5063[30] = (char *(*)()) F585_5769;
	R5063[31] = (char *(*)()) F586_5769;
	R5063[32] = (char *(*)()) F587_5769;
	R5063[33] = (char *(*)()) F588_5769;
	R5063[34] = (char *(*)()) F589_5769;
	R5063[35] = (char *(*)()) F590_5769;
	R5063[36] = (char *(*)()) F591_5769;
	R5063[37] = (char *(*)()) F592_5769;
	R5063[38] = (char *(*)()) F593_5769;
	R5063[39] = (char *(*)()) F594_5769;
	R5063[40] = (char *(*)()) F595_5769;
	R5063[41] = (char *(*)()) F596_5769;
	R5063[42] = (char *(*)()) F597_5769;
	R5063[43] = (char *(*)()) F598_5769;
	R5063[44] = (char *(*)()) F599_5769;
	R5063[45] = (char *(*)()) F585_5769;
	R5063[46] = (char *(*)()) F586_5769;
	R5063[47] = (char *(*)()) F587_5769;
	R5063[48] = (char *(*)()) F588_5769;
	R5063[49] = (char *(*)()) F589_5769;
	R5063[50] = (char *(*)()) F590_5769;
	R5063[51] = (char *(*)()) F591_5769;
	R5063[52] = (char *(*)()) F592_5769;
	R5063[53] = (char *(*)()) F593_5769;
	R5063[54] = (char *(*)()) F594_5769;
	R5063[55] = (char *(*)()) F595_5769;
	R5063[56] = (char *(*)()) F596_5769;
	R5063[57] = (char *(*)()) F597_5769;
	R5063[58] = (char *(*)()) F598_5769;
	R5063[59] = (char *(*)()) F599_5769;
	R5063[60] = (char *(*)()) F645_6039;
	R5063[61] = (char *(*)()) F646_6039;
	R5063[62] = (char *(*)()) F647_6039;
	R5063[63] = (char *(*)()) F645_6039;
	R5063[64] = (char *(*)()) F646_6039;
	R5063[65] = (char *(*)()) F647_6039;
	R5063[66] = (char *(*)()) F645_6039;
	R5063[116] = (char *(*)()) F701_6608;
	R5063[117] = (char *(*)()) F702_6608;
	R5063[118] = (char *(*)()) F703_6608;
	R5063[119] = (char *(*)()) F704_6608;
	R5063[120] = (char *(*)()) F705_6608;
	R5063[121] = (char *(*)()) F706_6608;
	R5063[122] = (char *(*)()) F707_6608;
	R5063[123] = (char *(*)()) F708_6608;
	R5063[124] = (char *(*)()) F709_6608;
	R5063[125] = (char *(*)()) F710_6608;
	R5063[126] = (char *(*)()) F711_6608;
	R5063[127] = (char *(*)()) F712_6608;
	R5063[128] = (char *(*)()) F713_6608;
	R5063[129] = (char *(*)()) F714_6608;
	R5063[130] = (char *(*)()) F715_6608;
	R5063[131] = (char *(*)()) F701_6608;
	R5063[132] = (char *(*)()) F710_6608;
	R5063[133] = (char *(*)()) F704_6608;
	R5063[134] = (char *(*)()) F701_6608;
	R5063[135] = (char *(*)()) F704_6608;
	R5063[136] = (char *(*)()) F701_6608;
	R5063[137] = (char *(*)()) F704_6608;
	R5063[138] = (char *(*)()) F701_6608;
	R5063[139] = (char *(*)()) F704_6608;
	{long i; for (i = 140; i < 142; i++) R5063[i] = (char *(*)()) F701_6608;}
	{long i; for (i = 147; i < 166; i++) R5063[i] = (char *(*)()) F701_6608;}
	R5063[381] = (char *(*)()) F966_11533;
	{long i; for (i = 385; i < 391; i++) R5063[i] = (char *(*)()) F966_11533;}
	R5063[416] = (char *(*)()) F701_6608;
	{long i; for (i = 430; i < 443; i++) R5063[i] = (char *(*)()) F966_11533;}
}

char *(*R5064[443])();
void R5064_init () {
	R5064[0] = (char *(*)()) F585_5770;
	R5064[1] = (char *(*)()) F586_5770;
	R5064[2] = (char *(*)()) F587_5770;
	R5064[3] = (char *(*)()) F588_5770;
	R5064[4] = (char *(*)()) F589_5770;
	R5064[5] = (char *(*)()) F590_5770;
	R5064[6] = (char *(*)()) F591_5770;
	R5064[7] = (char *(*)()) F592_5770;
	R5064[8] = (char *(*)()) F593_5770;
	R5064[9] = (char *(*)()) F594_5770;
	R5064[10] = (char *(*)()) F595_5770;
	R5064[11] = (char *(*)()) F596_5770;
	R5064[12] = (char *(*)()) F597_5770;
	R5064[13] = (char *(*)()) F598_5770;
	R5064[14] = (char *(*)()) F599_5770;
	R5064[15] = (char *(*)()) F585_5770;
	R5064[16] = (char *(*)()) F586_5770;
	R5064[17] = (char *(*)()) F587_5770;
	R5064[18] = (char *(*)()) F588_5770;
	R5064[19] = (char *(*)()) F589_5770;
	R5064[20] = (char *(*)()) F590_5770;
	R5064[21] = (char *(*)()) F591_5770;
	R5064[22] = (char *(*)()) F592_5770;
	R5064[23] = (char *(*)()) F593_5770;
	R5064[24] = (char *(*)()) F594_5770;
	R5064[25] = (char *(*)()) F595_5770;
	R5064[26] = (char *(*)()) F596_5770;
	R5064[27] = (char *(*)()) F597_5770;
	R5064[28] = (char *(*)()) F598_5770;
	R5064[29] = (char *(*)()) F599_5770;
	R5064[30] = (char *(*)()) F585_5770;
	R5064[31] = (char *(*)()) F586_5770;
	R5064[32] = (char *(*)()) F587_5770;
	R5064[33] = (char *(*)()) F588_5770;
	R5064[34] = (char *(*)()) F589_5770;
	R5064[35] = (char *(*)()) F590_5770;
	R5064[36] = (char *(*)()) F591_5770;
	R5064[37] = (char *(*)()) F592_5770;
	R5064[38] = (char *(*)()) F593_5770;
	R5064[39] = (char *(*)()) F594_5770;
	R5064[40] = (char *(*)()) F595_5770;
	R5064[41] = (char *(*)()) F596_5770;
	R5064[42] = (char *(*)()) F597_5770;
	R5064[43] = (char *(*)()) F598_5770;
	R5064[44] = (char *(*)()) F599_5770;
	R5064[45] = (char *(*)()) F585_5770;
	R5064[46] = (char *(*)()) F586_5770;
	R5064[47] = (char *(*)()) F587_5770;
	R5064[48] = (char *(*)()) F588_5770;
	R5064[49] = (char *(*)()) F589_5770;
	R5064[50] = (char *(*)()) F590_5770;
	R5064[51] = (char *(*)()) F591_5770;
	R5064[52] = (char *(*)()) F592_5770;
	R5064[53] = (char *(*)()) F593_5770;
	R5064[54] = (char *(*)()) F594_5770;
	R5064[55] = (char *(*)()) F595_5770;
	R5064[56] = (char *(*)()) F596_5770;
	R5064[57] = (char *(*)()) F597_5770;
	R5064[58] = (char *(*)()) F598_5770;
	R5064[59] = (char *(*)()) F599_5770;
	R5064[60] = (char *(*)()) F645_6040;
	R5064[61] = (char *(*)()) F646_6040;
	R5064[62] = (char *(*)()) F647_6040;
	R5064[63] = (char *(*)()) F645_6040;
	R5064[64] = (char *(*)()) F646_6040;
	R5064[65] = (char *(*)()) F647_6040;
	R5064[66] = (char *(*)()) F645_6040;
	R5064[116] = (char *(*)()) F701_6613;
	R5064[117] = (char *(*)()) F702_6613;
	R5064[118] = (char *(*)()) F703_6613;
	R5064[119] = (char *(*)()) F704_6613;
	R5064[120] = (char *(*)()) F705_6613;
	R5064[121] = (char *(*)()) F706_6613;
	R5064[122] = (char *(*)()) F707_6613;
	R5064[123] = (char *(*)()) F708_6613;
	R5064[124] = (char *(*)()) F709_6613;
	R5064[125] = (char *(*)()) F710_6613;
	R5064[126] = (char *(*)()) F711_6613;
	R5064[127] = (char *(*)()) F712_6613;
	R5064[128] = (char *(*)()) F713_6613;
	R5064[129] = (char *(*)()) F714_6613;
	R5064[130] = (char *(*)()) F715_6613;
	R5064[131] = (char *(*)()) F701_6613;
	R5064[132] = (char *(*)()) F710_6613;
	R5064[133] = (char *(*)()) F704_6613;
	R5064[134] = (char *(*)()) F701_6613;
	R5064[135] = (char *(*)()) F704_6613;
	R5064[136] = (char *(*)()) F701_6613;
	R5064[137] = (char *(*)()) F704_6613;
	R5064[138] = (char *(*)()) F701_6613;
	R5064[139] = (char *(*)()) F704_6613;
	{long i; for (i = 140; i < 142; i++) R5064[i] = (char *(*)()) F701_6613;}
	{long i; for (i = 147; i < 166; i++) R5064[i] = (char *(*)()) F701_6613;}
	R5064[381] = (char *(*)()) F966_11531;
	{long i; for (i = 385; i < 391; i++) R5064[i] = (char *(*)()) F966_11531;}
	R5064[416] = (char *(*)()) F701_6613;
	{long i; for (i = 430; i < 443; i++) R5064[i] = (char *(*)()) F966_11531;}
}

char *(*R5065[7])();
void R5065_init () {
	R5065[0] = (char *(*)()) F645_6030;
	R5065[1] = (char *(*)()) F646_6030;
	R5065[2] = (char *(*)()) F647_6030;
	R5065[3] = (char *(*)()) F645_6030;
	R5065[4] = (char *(*)()) F646_6030;
	R5065[5] = (char *(*)()) F647_6030;
	R5065[6] = (char *(*)()) F645_6030;
}

char *(*R5066[7])();
void R5066_init () {
	R5066[0] = (char *(*)()) F645_6031;
	R5066[1] = (char *(*)()) F646_6031;
	R5066[2] = (char *(*)()) F647_6031;
	R5066[3] = (char *(*)()) F645_6031;
	R5066[4] = (char *(*)()) F646_6031;
	R5066[5] = (char *(*)()) F647_6031;
	R5066[6] = (char *(*)()) F645_6031;
}

char *(*R5071[443])();
void R5071_init () {
	R5071[0] = (char *(*)()) F274_4466;
	R5071[1] = (char *(*)()) F275_4466_5071;
	R5071[2] = (char *(*)()) F276_4466_5071;
	R5071[3] = (char *(*)()) F277_4466_5071;
	R5071[4] = (char *(*)()) F279_4466_5071;
	R5071[5] = (char *(*)()) F278_4466_5071;
	R5071[6] = (char *(*)()) F280_4466_5071;
	R5071[7] = (char *(*)()) F282_4466_5071;
	R5071[8] = (char *(*)()) F283_4466_5071;
	R5071[9] = (char *(*)()) F284_4466_5071;
	R5071[10] = (char *(*)()) F285_4466_5071;
	R5071[11] = (char *(*)()) F281_4466_5071;
	R5071[12] = (char *(*)()) F286_4466_5071;
	R5071[13] = (char *(*)()) F287_4466_5071;
	R5071[14] = (char *(*)()) F288_4466_5071;
	R5071[15] = (char *(*)()) F274_4466;
	R5071[16] = (char *(*)()) F275_4466_5071;
	R5071[17] = (char *(*)()) F276_4466_5071;
	R5071[18] = (char *(*)()) F277_4466_5071;
	R5071[19] = (char *(*)()) F279_4466_5071;
	R5071[20] = (char *(*)()) F278_4466_5071;
	R5071[21] = (char *(*)()) F280_4466_5071;
	R5071[22] = (char *(*)()) F282_4466_5071;
	R5071[23] = (char *(*)()) F283_4466_5071;
	R5071[24] = (char *(*)()) F284_4466_5071;
	R5071[25] = (char *(*)()) F285_4466_5071;
	R5071[26] = (char *(*)()) F281_4466_5071;
	R5071[27] = (char *(*)()) F286_4466_5071;
	R5071[28] = (char *(*)()) F287_4466_5071;
	R5071[29] = (char *(*)()) F288_4466_5071;
	R5071[30] = (char *(*)()) F274_4466;
	R5071[31] = (char *(*)()) F275_4466_5071;
	R5071[32] = (char *(*)()) F276_4466_5071;
	R5071[33] = (char *(*)()) F277_4466_5071;
	R5071[34] = (char *(*)()) F279_4466_5071;
	R5071[35] = (char *(*)()) F278_4466_5071;
	R5071[36] = (char *(*)()) F280_4466_5071;
	R5071[37] = (char *(*)()) F282_4466_5071;
	R5071[38] = (char *(*)()) F283_4466_5071;
	R5071[39] = (char *(*)()) F284_4466_5071;
	R5071[40] = (char *(*)()) F285_4466_5071;
	R5071[41] = (char *(*)()) F281_4466_5071;
	R5071[42] = (char *(*)()) F286_4466_5071;
	R5071[43] = (char *(*)()) F287_4466_5071;
	R5071[44] = (char *(*)()) F288_4466_5071;
	R5071[45] = (char *(*)()) F274_4466;
	R5071[46] = (char *(*)()) F275_4466_5071;
	R5071[47] = (char *(*)()) F276_4466_5071;
	R5071[48] = (char *(*)()) F277_4466_5071;
	R5071[49] = (char *(*)()) F279_4466_5071;
	R5071[50] = (char *(*)()) F278_4466_5071;
	R5071[51] = (char *(*)()) F280_4466_5071;
	R5071[52] = (char *(*)()) F282_4466_5071;
	R5071[53] = (char *(*)()) F283_4466_5071;
	R5071[54] = (char *(*)()) F284_4466_5071;
	R5071[55] = (char *(*)()) F285_4466_5071;
	R5071[56] = (char *(*)()) F281_4466_5071;
	R5071[57] = (char *(*)()) F286_4466_5071;
	R5071[58] = (char *(*)()) F287_4466_5071;
	R5071[59] = (char *(*)()) F288_4466_5071;
	R5071[60] = (char *(*)()) F274_4466;
	R5071[61] = (char *(*)()) F284_4466_5071;
	R5071[62] = (char *(*)()) F277_4466_5071;
	R5071[63] = (char *(*)()) F274_4466;
	R5071[64] = (char *(*)()) F284_4466_5071;
	R5071[65] = (char *(*)()) F277_4466_5071;
	R5071[66] = (char *(*)()) F274_4466;
	R5071[116] = (char *(*)()) F274_4466;
	R5071[117] = (char *(*)()) F275_4466_5071;
	R5071[118] = (char *(*)()) F276_4466_5071;
	R5071[119] = (char *(*)()) F277_4466_5071;
	R5071[120] = (char *(*)()) F279_4466_5071;
	R5071[121] = (char *(*)()) F278_4466_5071;
	R5071[122] = (char *(*)()) F280_4466_5071;
	R5071[123] = (char *(*)()) F282_4466_5071;
	R5071[124] = (char *(*)()) F283_4466_5071;
	R5071[125] = (char *(*)()) F284_4466_5071;
	R5071[126] = (char *(*)()) F285_4466_5071;
	R5071[127] = (char *(*)()) F281_4466_5071;
	R5071[128] = (char *(*)()) F286_4466_5071;
	R5071[129] = (char *(*)()) F287_4466_5071;
	R5071[130] = (char *(*)()) F288_4466_5071;
	R5071[131] = (char *(*)()) F274_4466;
	R5071[132] = (char *(*)()) F284_4466_5071;
	R5071[133] = (char *(*)()) F277_4466_5071;
	R5071[134] = (char *(*)()) F274_4466;
	R5071[135] = (char *(*)()) F277_4466_5071;
	R5071[136] = (char *(*)()) F274_4466;
	R5071[137] = (char *(*)()) F277_4466_5071;
	R5071[138] = (char *(*)()) F274_4466;
	R5071[139] = (char *(*)()) F277_4466_5071;
	{long i; for (i = 140; i < 142; i++) R5071[i] = (char *(*)()) F274_4466;}
	{long i; for (i = 147; i < 166; i++) R5071[i] = (char *(*)()) F274_4466;}
	R5071[381] = (char *(*)()) F274_4466;
	{long i; for (i = 385; i < 391; i++) R5071[i] = (char *(*)()) F274_4466;}
	R5071[416] = (char *(*)()) F274_4466;
	{long i; for (i = 430; i < 443; i++) R5071[i] = (char *(*)()) F274_4466;}
}
static EIF_INTEGER_32 F275_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F275_4466(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F276_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F276_4466(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F277_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F277_4466(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F279_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F279_4466(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_INTEGER_32 F278_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F278_4466(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F280_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F280_4466(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F282_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F282_4466(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F283_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F283_4466(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F284_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F284_4466(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_INTEGER_32 F285_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F285_4466(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F281_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F281_4466(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F286_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F286_4466(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F287_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F287_4466(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F288_4466_5071 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F288_4466(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5072[443])();
void R5072_init () {
	R5072[0] = (char *(*)()) F274_4465;
	R5072[1] = (char *(*)()) F275_4465_5072;
	R5072[2] = (char *(*)()) F276_4465_5072;
	R5072[3] = (char *(*)()) F277_4465_5072;
	R5072[4] = (char *(*)()) F279_4465_5072;
	R5072[5] = (char *(*)()) F278_4465_5072;
	R5072[6] = (char *(*)()) F280_4465_5072;
	R5072[7] = (char *(*)()) F282_4465_5072;
	R5072[8] = (char *(*)()) F283_4465_5072;
	R5072[9] = (char *(*)()) F284_4465_5072;
	R5072[10] = (char *(*)()) F285_4465_5072;
	R5072[11] = (char *(*)()) F281_4465_5072;
	R5072[12] = (char *(*)()) F286_4465_5072;
	R5072[13] = (char *(*)()) F287_4465_5072;
	R5072[14] = (char *(*)()) F288_4465_5072;
	R5072[15] = (char *(*)()) F274_4465;
	R5072[16] = (char *(*)()) F275_4465_5072;
	R5072[17] = (char *(*)()) F276_4465_5072;
	R5072[18] = (char *(*)()) F277_4465_5072;
	R5072[19] = (char *(*)()) F279_4465_5072;
	R5072[20] = (char *(*)()) F278_4465_5072;
	R5072[21] = (char *(*)()) F280_4465_5072;
	R5072[22] = (char *(*)()) F282_4465_5072;
	R5072[23] = (char *(*)()) F283_4465_5072;
	R5072[24] = (char *(*)()) F284_4465_5072;
	R5072[25] = (char *(*)()) F285_4465_5072;
	R5072[26] = (char *(*)()) F281_4465_5072;
	R5072[27] = (char *(*)()) F286_4465_5072;
	R5072[28] = (char *(*)()) F287_4465_5072;
	R5072[29] = (char *(*)()) F288_4465_5072;
	R5072[30] = (char *(*)()) F274_4465;
	R5072[31] = (char *(*)()) F275_4465_5072;
	R5072[32] = (char *(*)()) F276_4465_5072;
	R5072[33] = (char *(*)()) F277_4465_5072;
	R5072[34] = (char *(*)()) F279_4465_5072;
	R5072[35] = (char *(*)()) F278_4465_5072;
	R5072[36] = (char *(*)()) F280_4465_5072;
	R5072[37] = (char *(*)()) F282_4465_5072;
	R5072[38] = (char *(*)()) F283_4465_5072;
	R5072[39] = (char *(*)()) F284_4465_5072;
	R5072[40] = (char *(*)()) F285_4465_5072;
	R5072[41] = (char *(*)()) F281_4465_5072;
	R5072[42] = (char *(*)()) F286_4465_5072;
	R5072[43] = (char *(*)()) F287_4465_5072;
	R5072[44] = (char *(*)()) F288_4465_5072;
	R5072[45] = (char *(*)()) F274_4465;
	R5072[46] = (char *(*)()) F275_4465_5072;
	R5072[47] = (char *(*)()) F276_4465_5072;
	R5072[48] = (char *(*)()) F277_4465_5072;
	R5072[49] = (char *(*)()) F279_4465_5072;
	R5072[50] = (char *(*)()) F278_4465_5072;
	R5072[51] = (char *(*)()) F280_4465_5072;
	R5072[52] = (char *(*)()) F282_4465_5072;
	R5072[53] = (char *(*)()) F283_4465_5072;
	R5072[54] = (char *(*)()) F284_4465_5072;
	R5072[55] = (char *(*)()) F285_4465_5072;
	R5072[56] = (char *(*)()) F281_4465_5072;
	R5072[57] = (char *(*)()) F286_4465_5072;
	R5072[58] = (char *(*)()) F287_4465_5072;
	R5072[59] = (char *(*)()) F288_4465_5072;
	R5072[60] = (char *(*)()) F274_4465;
	R5072[61] = (char *(*)()) F284_4465_5072;
	R5072[62] = (char *(*)()) F277_4465_5072;
	R5072[63] = (char *(*)()) F274_4465;
	R5072[64] = (char *(*)()) F284_4465_5072;
	R5072[65] = (char *(*)()) F277_4465_5072;
	R5072[66] = (char *(*)()) F274_4465;
	R5072[116] = (char *(*)()) F274_4465;
	R5072[117] = (char *(*)()) F275_4465_5072;
	R5072[118] = (char *(*)()) F276_4465_5072;
	R5072[119] = (char *(*)()) F277_4465_5072;
	R5072[120] = (char *(*)()) F279_4465_5072;
	R5072[121] = (char *(*)()) F278_4465_5072;
	R5072[122] = (char *(*)()) F280_4465_5072;
	R5072[123] = (char *(*)()) F282_4465_5072;
	R5072[124] = (char *(*)()) F283_4465_5072;
	R5072[125] = (char *(*)()) F284_4465_5072;
	R5072[126] = (char *(*)()) F285_4465_5072;
	R5072[127] = (char *(*)()) F281_4465_5072;
	R5072[128] = (char *(*)()) F286_4465_5072;
	R5072[129] = (char *(*)()) F287_4465_5072;
	R5072[130] = (char *(*)()) F288_4465_5072;
	R5072[131] = (char *(*)()) F274_4465;
	R5072[132] = (char *(*)()) F284_4465_5072;
	R5072[133] = (char *(*)()) F277_4465_5072;
	R5072[134] = (char *(*)()) F274_4465;
	R5072[135] = (char *(*)()) F277_4465_5072;
	R5072[136] = (char *(*)()) F274_4465;
	R5072[137] = (char *(*)()) F277_4465_5072;
	R5072[138] = (char *(*)()) F274_4465;
	R5072[139] = (char *(*)()) F277_4465_5072;
	{long i; for (i = 140; i < 142; i++) R5072[i] = (char *(*)()) F274_4465;}
	{long i; for (i = 147; i < 166; i++) R5072[i] = (char *(*)()) F274_4465;}
	R5072[381] = (char *(*)()) F274_4465;
	{long i; for (i = 385; i < 391; i++) R5072[i] = (char *(*)()) F274_4465;}
	R5072[416] = (char *(*)()) F274_4465;
	{long i; for (i = 430; i < 443; i++) R5072[i] = (char *(*)()) F274_4465;}
}
static EIF_BOOLEAN F275_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F275_4465(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F276_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F276_4465(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F277_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F277_4465(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F279_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F279_4465(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F278_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F278_4465(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F280_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F280_4465(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F282_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F282_4465(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F283_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F283_4465(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F284_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F284_4465(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F285_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F285_4465(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F281_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F281_4465(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F286_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F286_4465(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F287_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F287_4465(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F288_4465_5072 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F288_4465(Current, *(EIF_INTEGER_16 *)arg1);
}

char *(*R5091[7])();
void R5091_init () {
	R5091[0] = (char *(*)()) F645_6042;
	R5091[1] = (char *(*)()) F646_6042_5091;
	R5091[2] = (char *(*)()) F647_6042_5091;
	R5091[3] = (char *(*)()) F645_6042;
	R5091[4] = (char *(*)()) F646_6042_5091;
	R5091[5] = (char *(*)()) F647_6042_5091;
	R5091[6] = (char *(*)()) F645_6042;
}
static void F646_6042_5091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F646_6042(Current, *(EIF_BOOLEAN *)arg1);
}
static void F647_6042_5091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F647_6042(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5092[301])();
void R5092_init () {
	R5092[0] = (char *(*)()) F701_6620;
	R5092[1] = (char *(*)()) F702_6620_5092;
	R5092[2] = (char *(*)()) F703_6620_5092;
	R5092[3] = (char *(*)()) F704_6620_5092;
	R5092[4] = (char *(*)()) F705_6620_5092;
	R5092[5] = (char *(*)()) F706_6620_5092;
	R5092[6] = (char *(*)()) F707_6620_5092;
	R5092[7] = (char *(*)()) F708_6620_5092;
	R5092[8] = (char *(*)()) F709_6620_5092;
	R5092[9] = (char *(*)()) F710_6620_5092;
	R5092[10] = (char *(*)()) F711_6620_5092;
	R5092[11] = (char *(*)()) F712_6620_5092;
	R5092[12] = (char *(*)()) F713_6620_5092;
	R5092[13] = (char *(*)()) F714_6620_5092;
	R5092[14] = (char *(*)()) F715_6620_5092;
	R5092[15] = (char *(*)()) F701_6620;
	R5092[16] = (char *(*)()) F710_6620_5092;
	R5092[17] = (char *(*)()) F704_6620_5092;
	R5092[18] = (char *(*)()) F719_6681;
	R5092[19] = (char *(*)()) F720_6681_5092;
	R5092[20] = (char *(*)()) F719_6681;
	R5092[21] = (char *(*)()) F720_6681_5092;
	R5092[22] = (char *(*)()) F719_6681;
	R5092[23] = (char *(*)()) F720_6681_5092;
	{long i; for (i = 24; i < 26; i++) R5092[i] = (char *(*)()) F719_6681;}
	{long i; for (i = 31; i < 50; i++) R5092[i] = (char *(*)()) F719_6681;}
	R5092[300] = (char *(*)()) F719_6681;
}
static void F702_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F702_6620(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F703_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F703_6620(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F704_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F704_6620(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F705_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F705_6620(Current, *(EIF_POINTER *)arg1);
}
static void F706_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F706_6620(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F707_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F707_6620(Current, *(EIF_REAL_64 *)arg1);
}
static void F708_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F708_6620(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F709_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F709_6620(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F710_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F710_6620(Current, *(EIF_BOOLEAN *)arg1);
}
static void F711_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F711_6620(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F712_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F712_6620(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F713_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F713_6620(Current, *(EIF_REAL_32 *)arg1);
}
static void F714_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F714_6620(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F715_6620_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F715_6620(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F720_6681_5092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F720_6681(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5097[7])();
void R5097_init () {
	R5097[0] = (char *(*)()) F645_6051;
	R5097[1] = (char *(*)()) F646_6051;
	R5097[2] = (char *(*)()) F647_6051;
	R5097[3] = (char *(*)()) F645_6051;
	R5097[4] = (char *(*)()) F646_6051;
	R5097[5] = (char *(*)()) F647_6051;
	R5097[6] = (char *(*)()) F645_6051;
}

char *(*R5136[398])();
void R5136_init () {
	R5136[0] = (char *(*)()) F600_5831;
	R5136[1] = (char *(*)()) F601_5831;
	R5136[2] = (char *(*)()) F602_5831;
	R5136[3] = (char *(*)()) F603_5831;
	R5136[4] = (char *(*)()) F604_5831;
	R5136[5] = (char *(*)()) F605_5831;
	R5136[6] = (char *(*)()) F606_5831;
	R5136[7] = (char *(*)()) F607_5831;
	R5136[8] = (char *(*)()) F608_5831;
	R5136[9] = (char *(*)()) F609_5831;
	R5136[10] = (char *(*)()) F610_5831;
	R5136[11] = (char *(*)()) F611_5831;
	R5136[12] = (char *(*)()) F612_5831;
	R5136[13] = (char *(*)()) F613_5831;
	R5136[14] = (char *(*)()) F614_5831;
	R5136[15] = (char *(*)()) F600_5831;
	R5136[16] = (char *(*)()) F609_5831;
	R5136[17] = (char *(*)()) F603_5831;
	R5136[18] = (char *(*)()) F600_5831;
	R5136[19] = (char *(*)()) F609_5831;
	R5136[20] = (char *(*)()) F603_5831;
	R5136[21] = (char *(*)()) F600_5831;
	R5136[71] = (char *(*)()) F600_5831;
	R5136[72] = (char *(*)()) F601_5831;
	R5136[73] = (char *(*)()) F602_5831;
	R5136[74] = (char *(*)()) F603_5831;
	R5136[75] = (char *(*)()) F604_5831;
	R5136[76] = (char *(*)()) F605_5831;
	R5136[77] = (char *(*)()) F606_5831;
	R5136[78] = (char *(*)()) F607_5831;
	R5136[79] = (char *(*)()) F608_5831;
	R5136[80] = (char *(*)()) F609_5831;
	R5136[81] = (char *(*)()) F610_5831;
	R5136[82] = (char *(*)()) F611_5831;
	R5136[83] = (char *(*)()) F612_5831;
	R5136[84] = (char *(*)()) F613_5831;
	R5136[85] = (char *(*)()) F614_5831;
	R5136[86] = (char *(*)()) F600_5831;
	R5136[87] = (char *(*)()) F609_5831;
	R5136[88] = (char *(*)()) F603_5831;
	R5136[89] = (char *(*)()) F600_5831;
	R5136[90] = (char *(*)()) F603_5831;
	R5136[91] = (char *(*)()) F600_5831;
	R5136[92] = (char *(*)()) F603_5831;
	R5136[93] = (char *(*)()) F600_5831;
	R5136[94] = (char *(*)()) F603_5831;
	{long i; for (i = 95; i < 97; i++) R5136[i] = (char *(*)()) F600_5831;}
	{long i; for (i = 102; i < 121; i++) R5136[i] = (char *(*)()) F600_5831;}
	R5136[336] = (char *(*)()) F600_5831;
	{long i; for (i = 340; i < 346; i++) R5136[i] = (char *(*)()) F600_5831;}
	R5136[371] = (char *(*)()) F600_5831;
	{long i; for (i = 385; i < 398; i++) R5136[i] = (char *(*)()) F600_5831;}
}

char *(*R5148[7])();
void R5148_init () {
	R5148[0] = (char *(*)()) F645_6055;
	R5148[1] = (char *(*)()) F646_6055_5148;
	R5148[2] = (char *(*)()) F647_6055_5148;
	R5148[3] = (char *(*)()) F645_6055;
	R5148[4] = (char *(*)()) F646_6055_5148;
	R5148[5] = (char *(*)()) F647_6055_5148;
	R5148[6] = (char *(*)()) F645_6055;
}
static EIF_REFERENCE F646_6055_5148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F646_6055(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F647_6055_5148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F647_6055(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R5149[7])();
void R5149_init () {
	R5149[0] = (char *(*)()) F645_6056;
	R5149[1] = (char *(*)()) F646_6056;
	R5149[2] = (char *(*)()) F647_6056;
	R5149[3] = (char *(*)()) F645_6056;
	R5149[4] = (char *(*)()) F646_6056;
	R5149[5] = (char *(*)()) F647_6056;
	R5149[6] = (char *(*)()) F645_6056;
}

char *(*R5152[7])();
void R5152_init () {
	R5152[0] = (char *(*)()) F645_6059;
	R5152[1] = (char *(*)()) F646_6059;
	R5152[2] = (char *(*)()) F647_6059;
	R5152[3] = (char *(*)()) F645_6059;
	R5152[4] = (char *(*)()) F646_6059;
	R5152[5] = (char *(*)()) F647_6059;
	R5152[6] = (char *(*)()) F645_6059;
}

char *(*R5153[7])();
void R5153_init () {
	R5153[0] = (char *(*)()) F645_6060;
	R5153[1] = (char *(*)()) F646_6060;
	R5153[2] = (char *(*)()) F647_6060;
	R5153[3] = (char *(*)()) F645_6060;
	R5153[4] = (char *(*)()) F646_6060;
	R5153[5] = (char *(*)()) F647_6060;
	R5153[6] = (char *(*)()) F645_6060;
}

char *(*R5154[7])();
void R5154_init () {
	R5154[0] = (char *(*)()) F645_6061;
	R5154[1] = (char *(*)()) F646_6061;
	R5154[2] = (char *(*)()) F647_6061;
	R5154[3] = (char *(*)()) F645_6061;
	R5154[4] = (char *(*)()) F646_6061;
	R5154[5] = (char *(*)()) F647_6061;
	R5154[6] = (char *(*)()) F645_6061;
}

char *(*R5159[3])();
void R5159_init () {
	R5159[0] = (char *(*)()) F645_6018;
	R5159[1] = (char *(*)()) F646_6018_5159;
	R5159[2] = (char *(*)()) F647_6018_5159;
}
static EIF_REFERENCE F646_6018_5159 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F647_6018_5159 (EIF_REFERENCE Current)
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

char *(*R5160[3])();
void R5160_init () {
	R5160[0] = (char *(*)()) F645_6049;
	R5160[1] = (char *(*)()) F646_6049;
	R5160[2] = (char *(*)()) F647_6049;
}

char *(*R5198[350])();
void R5198_init () {
	R5198[0] = (char *(*)()) F652_6227;
	R5198[1] = (char *(*)()) F653_6227;
	R5198[2] = (char *(*)()) F654_6227;
	R5198[3] = (char *(*)()) F655_6227;
	R5198[4] = (char *(*)()) F656_6227;
	R5198[5] = (char *(*)()) F657_6227;
	R5198[6] = (char *(*)()) F658_6227;
	R5198[7] = (char *(*)()) F659_6227;
	R5198[8] = (char *(*)()) F660_6227;
	R5198[9] = (char *(*)()) F661_6227;
	R5198[10] = (char *(*)()) F662_6227;
	R5198[11] = (char *(*)()) F663_6227;
	R5198[12] = (char *(*)()) F664_6227;
	R5198[13] = (char *(*)()) F665_6227;
	R5198[14] = (char *(*)()) F666_6227;
	R5198[15] = (char *(*)()) F652_6227;
	R5198[16] = (char *(*)()) F653_6227;
	R5198[17] = (char *(*)()) F654_6227;
	R5198[18] = (char *(*)()) F655_6227;
	R5198[19] = (char *(*)()) F656_6227;
	R5198[20] = (char *(*)()) F657_6227;
	R5198[21] = (char *(*)()) F658_6227;
	R5198[22] = (char *(*)()) F659_6227;
	R5198[23] = (char *(*)()) F660_6227;
	R5198[24] = (char *(*)()) F661_6227;
	R5198[25] = (char *(*)()) F662_6227;
	R5198[26] = (char *(*)()) F663_6227;
	R5198[27] = (char *(*)()) F664_6227;
	R5198[28] = (char *(*)()) F665_6227;
	R5198[29] = (char *(*)()) F666_6227;
	R5198[30] = (char *(*)()) F654_6227;
	R5198[49] = (char *(*)()) F652_6227;
	R5198[50] = (char *(*)()) F653_6227;
	R5198[51] = (char *(*)()) F654_6227;
	R5198[52] = (char *(*)()) F655_6227;
	R5198[53] = (char *(*)()) F656_6227;
	R5198[54] = (char *(*)()) F657_6227;
	R5198[55] = (char *(*)()) F658_6227;
	R5198[56] = (char *(*)()) F659_6227;
	R5198[57] = (char *(*)()) F660_6227;
	R5198[58] = (char *(*)()) F661_6227;
	R5198[59] = (char *(*)()) F662_6227;
	R5198[60] = (char *(*)()) F663_6227;
	R5198[61] = (char *(*)()) F664_6227;
	R5198[62] = (char *(*)()) F665_6227;
	R5198[63] = (char *(*)()) F666_6227;
	R5198[64] = (char *(*)()) F652_6227;
	R5198[65] = (char *(*)()) F661_6227;
	R5198[66] = (char *(*)()) F655_6227;
	R5198[67] = (char *(*)()) F652_6227;
	R5198[68] = (char *(*)()) F655_6227;
	R5198[69] = (char *(*)()) F652_6227;
	R5198[70] = (char *(*)()) F655_6227;
	R5198[71] = (char *(*)()) F652_6227;
	R5198[72] = (char *(*)()) F655_6227;
	{long i; for (i = 73; i < 75; i++) R5198[i] = (char *(*)()) F652_6227;}
	{long i; for (i = 80; i < 99; i++) R5198[i] = (char *(*)()) F652_6227;}
	{long i; for (i = 121; i < 123; i++) R5198[i] = (char *(*)()) F654_6227;}
	{long i; for (i = 271; i < 273; i++) R5198[i] = (char *(*)()) F659_6227;}
	R5198[274] = (char *(*)()) F663_6227;
	R5198[349] = (char *(*)()) F652_6227;
}

char *(*R5199[350])();
void R5199_init () {
	R5199[0] = (char *(*)()) F652_6228;
	R5199[1] = (char *(*)()) F653_6228_5199;
	R5199[2] = (char *(*)()) F654_6228_5199;
	R5199[3] = (char *(*)()) F655_6228_5199;
	R5199[4] = (char *(*)()) F656_6228_5199;
	R5199[5] = (char *(*)()) F657_6228_5199;
	R5199[6] = (char *(*)()) F658_6228_5199;
	R5199[7] = (char *(*)()) F659_6228_5199;
	R5199[8] = (char *(*)()) F660_6228_5199;
	R5199[9] = (char *(*)()) F661_6228_5199;
	R5199[10] = (char *(*)()) F662_6228_5199;
	R5199[11] = (char *(*)()) F663_6228_5199;
	R5199[12] = (char *(*)()) F664_6228_5199;
	R5199[13] = (char *(*)()) F665_6228_5199;
	R5199[14] = (char *(*)()) F666_6228_5199;
	R5199[15] = (char *(*)()) F652_6228;
	R5199[16] = (char *(*)()) F653_6228_5199;
	R5199[17] = (char *(*)()) F654_6228_5199;
	R5199[18] = (char *(*)()) F655_6228_5199;
	R5199[19] = (char *(*)()) F656_6228_5199;
	R5199[20] = (char *(*)()) F657_6228_5199;
	R5199[21] = (char *(*)()) F658_6228_5199;
	R5199[22] = (char *(*)()) F659_6228_5199;
	R5199[23] = (char *(*)()) F660_6228_5199;
	R5199[24] = (char *(*)()) F661_6228_5199;
	R5199[25] = (char *(*)()) F662_6228_5199;
	R5199[26] = (char *(*)()) F663_6228_5199;
	R5199[27] = (char *(*)()) F664_6228_5199;
	R5199[28] = (char *(*)()) F665_6228_5199;
	R5199[29] = (char *(*)()) F666_6228_5199;
	R5199[30] = (char *(*)()) F654_6228_5199;
	R5199[49] = (char *(*)()) F652_6228;
	R5199[50] = (char *(*)()) F653_6228_5199;
	R5199[51] = (char *(*)()) F654_6228_5199;
	R5199[52] = (char *(*)()) F655_6228_5199;
	R5199[53] = (char *(*)()) F656_6228_5199;
	R5199[54] = (char *(*)()) F657_6228_5199;
	R5199[55] = (char *(*)()) F658_6228_5199;
	R5199[56] = (char *(*)()) F659_6228_5199;
	R5199[57] = (char *(*)()) F660_6228_5199;
	R5199[58] = (char *(*)()) F661_6228_5199;
	R5199[59] = (char *(*)()) F662_6228_5199;
	R5199[60] = (char *(*)()) F663_6228_5199;
	R5199[61] = (char *(*)()) F664_6228_5199;
	R5199[62] = (char *(*)()) F665_6228_5199;
	R5199[63] = (char *(*)()) F666_6228_5199;
	R5199[64] = (char *(*)()) F652_6228;
	R5199[65] = (char *(*)()) F661_6228_5199;
	R5199[66] = (char *(*)()) F655_6228_5199;
	R5199[67] = (char *(*)()) F652_6228;
	R5199[68] = (char *(*)()) F655_6228_5199;
	R5199[69] = (char *(*)()) F652_6228;
	R5199[70] = (char *(*)()) F655_6228_5199;
	R5199[71] = (char *(*)()) F652_6228;
	R5199[72] = (char *(*)()) F655_6228_5199;
	{long i; for (i = 73; i < 75; i++) R5199[i] = (char *(*)()) F652_6228;}
	{long i; for (i = 80; i < 99; i++) R5199[i] = (char *(*)()) F652_6228;}
	{long i; for (i = 121; i < 123; i++) R5199[i] = (char *(*)()) F654_6228_5199;}
	{long i; for (i = 271; i < 273; i++) R5199[i] = (char *(*)()) F659_6228_5199;}
	R5199[274] = (char *(*)()) F663_6228_5199;
	R5199[349] = (char *(*)()) F652_6228;
}
static void F653_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F653_6228(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F654_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F654_6228(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F655_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F655_6228(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F656_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F656_6228(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F657_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F657_6228(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F658_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F658_6228(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F659_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F659_6228(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F660_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F660_6228(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F661_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F661_6228(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F662_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F662_6228(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F663_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F663_6228(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F664_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F664_6228(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F665_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F665_6228(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F666_6228_5199 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F666_6228(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}

char *(*R5204[350])();
void R5204_init () {
	R5204[0] = (char *(*)()) F652_6233;
	R5204[1] = (char *(*)()) F653_6233;
	R5204[2] = (char *(*)()) F654_6233;
	R5204[3] = (char *(*)()) F655_6233;
	R5204[4] = (char *(*)()) F656_6233;
	R5204[5] = (char *(*)()) F657_6233;
	R5204[6] = (char *(*)()) F658_6233;
	R5204[7] = (char *(*)()) F659_6233;
	R5204[8] = (char *(*)()) F660_6233;
	R5204[9] = (char *(*)()) F661_6233;
	R5204[10] = (char *(*)()) F662_6233;
	R5204[11] = (char *(*)()) F663_6233;
	R5204[12] = (char *(*)()) F664_6233;
	R5204[13] = (char *(*)()) F665_6233;
	R5204[14] = (char *(*)()) F666_6233;
	R5204[15] = (char *(*)()) F652_6233;
	R5204[16] = (char *(*)()) F653_6233;
	R5204[17] = (char *(*)()) F654_6233;
	R5204[18] = (char *(*)()) F655_6233;
	R5204[19] = (char *(*)()) F656_6233;
	R5204[20] = (char *(*)()) F657_6233;
	R5204[21] = (char *(*)()) F658_6233;
	R5204[22] = (char *(*)()) F659_6233;
	R5204[23] = (char *(*)()) F660_6233;
	R5204[24] = (char *(*)()) F661_6233;
	R5204[25] = (char *(*)()) F662_6233;
	R5204[26] = (char *(*)()) F663_6233;
	R5204[27] = (char *(*)()) F664_6233;
	R5204[28] = (char *(*)()) F665_6233;
	R5204[29] = (char *(*)()) F666_6233;
	R5204[30] = (char *(*)()) F654_6233;
	R5204[49] = (char *(*)()) F652_6233;
	R5204[50] = (char *(*)()) F653_6233;
	R5204[51] = (char *(*)()) F654_6233;
	R5204[52] = (char *(*)()) F655_6233;
	R5204[53] = (char *(*)()) F656_6233;
	R5204[54] = (char *(*)()) F657_6233;
	R5204[55] = (char *(*)()) F658_6233;
	R5204[56] = (char *(*)()) F659_6233;
	R5204[57] = (char *(*)()) F660_6233;
	R5204[58] = (char *(*)()) F661_6233;
	R5204[59] = (char *(*)()) F662_6233;
	R5204[60] = (char *(*)()) F663_6233;
	R5204[61] = (char *(*)()) F664_6233;
	R5204[62] = (char *(*)()) F665_6233;
	R5204[63] = (char *(*)()) F666_6233;
	R5204[64] = (char *(*)()) F652_6233;
	R5204[65] = (char *(*)()) F661_6233;
	R5204[66] = (char *(*)()) F655_6233;
	R5204[67] = (char *(*)()) F652_6233;
	R5204[68] = (char *(*)()) F655_6233;
	R5204[69] = (char *(*)()) F652_6233;
	R5204[70] = (char *(*)()) F655_6233;
	R5204[71] = (char *(*)()) F652_6233;
	R5204[72] = (char *(*)()) F655_6233;
	{long i; for (i = 73; i < 75; i++) R5204[i] = (char *(*)()) F652_6233;}
	{long i; for (i = 80; i < 99; i++) R5204[i] = (char *(*)()) F652_6233;}
	{long i; for (i = 121; i < 123; i++) R5204[i] = (char *(*)()) F654_6233;}
	{long i; for (i = 271; i < 273; i++) R5204[i] = (char *(*)()) F659_6233;}
	R5204[274] = (char *(*)()) F663_6233;
	R5204[349] = (char *(*)()) F652_6233;
}


#ifdef __cplusplus
}
#endif
