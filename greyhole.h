/* ------------------------------------------------------------
name: "greyhole"
Code generated with Faust 2.68.6 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#include <math.h>
#include "dsp.h"
#include <stdint.h>
#include <stdlib.h>

static int imydspSIG0Wave0[1302] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919,7927,7933,7937,7949,7951,7963,7993,8009,8011,8017,8039,8053,8059,8069,8081,8087,8089,8093,8101,8111,8117,8123,8147,8161,8167,8171,8179,8191,8209,8219,8221,8231,8233,8237,8243,8263,8269,8273,8287,8291,8293,8297,8311,8317,8329,8353,8363,8369,8377,8387,8389,8419,8423,8429,8431,8443,8447,8461,8467,8501,8513,8521,8527,8537,8539,8543,8563,8573,8581,8597,8599,8609,8623,8627,8629,8641,8647,8663,8669,8677,8681,8689,8693,8699,8707,8713,8719,8731,8737,8741,8747,8753,8761,8779,8783,8803,8807,8819,8821,8831,8837,8839,8849,8861,8863,8867,8887,8893,8923,8929,8933,8941,8951,8963,8969,8971,8999,9001,9007,9011,9013,9029,9041,9043,9049,9059,9067,9091,9103,9109,9127,9133,9137,9151,9157,9161,9173,9181,9187,9199,9203,9209,9221,9227,9239,9241,9257,9277,9281,9283,9293,9311,9319,9323,9337,9341,9343,9349,9371,9377,9391,9397,9403,9413,9419,9421,9431,9433,9437,9439,9461,9463,9467,9473,9479,9491,9497,9511,9521,9533,9539,9547,9551,9587,9601,9613,9619,9623,9629,9631,9643,9649,9661,9677,9679,9689,9697,9719,9721,9733,9739,9743,9749,9767,9769,9781,9787,9791,9803,9811,9817,9829,9833,9839,9851,9857,9859,9871,9883,9887,9901,9907,9923,9929,9931,9941,9949,9967,9973,10007,10009,10037,10039,10061,10067,10069,10079,10091,10093,10099,10103,10111,10133,10139,10141,10151,10159,10163,10169,10177,10181,10193,10211,10223,10243,10247,10253,10259,10267,10271,10273,10289,10301,10303,10313,10321,10331,10333,10337,10343,10357,10369,10391,10399,10427,10429,10433,10453,10457,10459,10463,10477,10487,10499,10501,10513,10529,10531,10559,10567,10589,10597,10601,10607,10613,10627,10631,10639,10651,10657,10663,10667};
typedef struct {
	int imydspSIG0Wave0_idx;
} mydspSIG0;

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)calloc(1, sizeof(mydspSIG0)); }
static void deletemydspSIG0(mydspSIG0* dsp) { free(dsp); }

int getNumInputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 1;
}

static void instanceInitmydspSIG0(mydspSIG0* dsp, int sample_rate) {
	dsp->imydspSIG0Wave0_idx = 0;
}

static void fillmydspSIG0(mydspSIG0* dsp, int count, int* table) {
	/* C99 loop */
	{
		int i1;
		for (i1 = 0; i1 < count; i1 = i1 + 1) {
			table[i1] = imydspSIG0Wave0[dsp->imydspSIG0Wave0_idx];
			dsp->imydspSIG0Wave0_idx = (1 + dsp->imydspSIG0Wave0_idx) % 1302;
		}
	}
}

static int itbl0mydspSIG0[1302];

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	int iVec0[2];
	int iConst0;
	float fConst1;
	float fRec6[2];
	float fVec1[2];
	int iConst2;
	float fConst3;
	float fRec10[2];
	int iConst4;
	float fConst5;
	float fRec14[2];
	int iConst6;
	float fConst7;
	float fRec21[2];
	int iConst8;
	float fConst9;
	float fRec25[2];
	int iConst10;
	float fConst11;
	float fRec29[2];
	int iConst12;
	float fConst13;
	float fRec36[2];
	int iConst14;
	float fConst15;
	float fRec40[2];
	int iConst16;
	float fConst17;
	float fRec44[2];
	float fVec2[2];
	int fSampleRate;
	float fConst18;
	float fVec3[2];
	float fConst19;
	int iVec4[2];
	float fRec48[2];
	float fRec49[2];
	int IOTA0;
	float fVec5[131072];
	float fConst20;
	float fRec50[2];
	float fRec51[2];
	float fRec52[2];
	float fRec53[2];
	float fVec6[16384];
	int iConst21;
	float fConst22;
	float fRec54[2];
	float fVec7[2];
	float fRec47[2];
	float fRec45[2];
	float fVec8[131072];
	float fVec9[16384];
	int iConst23;
	float fConst24;
	float fRec56[2];
	float fVec10[2];
	float fRec55[2];
	float fRec46[2];
	float fVec11[16384];
	float fVec12[2];
	float fRec43[2];
	float fRec41[2];
	float fVec13[16384];
	int iConst25;
	float fConst26;
	float fRec58[2];
	float fVec14[2];
	float fRec57[2];
	float fRec42[2];
	float fVec15[16384];
	float fVec16[2];
	float fRec39[2];
	float fRec37[2];
	float fVec17[16384];
	int iConst27;
	float fConst28;
	float fRec60[2];
	float fVec18[2];
	float fRec59[2];
	float fRec38[2];
	float fVec19[16384];
	float fVec20[2];
	float fRec35[2];
	float fRec33[2];
	float fVec21[16384];
	int iConst29;
	float fConst30;
	float fRec62[2];
	float fVec22[2];
	float fRec61[2];
	float fRec34[2];
	float fVec23[16384];
	int iConst31;
	float fConst32;
	float fRec63[2];
	float fVec24[2];
	float fRec32[2];
	float fRec30[2];
	float fVec25[16384];
	int iConst33;
	float fConst34;
	float fRec65[2];
	float fVec26[2];
	float fRec64[2];
	float fRec31[2];
	float fVec27[16384];
	float fVec28[2];
	float fRec28[2];
	float fRec26[2];
	float fVec29[16384];
	int iConst35;
	float fConst36;
	float fRec67[2];
	float fVec30[2];
	float fRec66[2];
	float fRec27[2];
	float fVec31[16384];
	float fVec32[2];
	float fRec24[2];
	float fRec22[2];
	float fVec33[16384];
	int iConst37;
	float fConst38;
	float fRec69[2];
	float fVec34[2];
	float fRec68[2];
	float fRec23[2];
	float fVec35[16384];
	float fVec36[2];
	float fRec20[2];
	float fRec18[2];
	float fVec37[16384];
	int iConst39;
	float fConst40;
	float fRec71[2];
	float fVec38[2];
	float fRec70[2];
	float fRec19[2];
	float fVec39[16384];
	int iConst41;
	float fConst42;
	float fRec72[2];
	float fVec40[2];
	float fRec17[2];
	float fRec15[2];
	float fVec41[16384];
	int iConst43;
	float fConst44;
	float fRec74[2];
	float fVec42[2];
	float fRec73[2];
	float fRec16[2];
	float fVec43[16384];
	float fVec44[2];
	float fRec13[2];
	float fRec11[2];
	float fVec45[16384];
	int iConst45;
	float fConst46;
	float fRec76[2];
	float fVec46[2];
	float fRec75[2];
	float fRec12[2];
	float fVec47[16384];
	float fVec48[2];
	float fRec9[2];
	float fRec7[2];
	float fVec49[16384];
	int iConst47;
	float fConst48;
	float fRec78[2];
	float fVec50[2];
	float fRec77[2];
	float fRec8[2];
	float fVec51[16384];
	float fVec52[2];
	float fRec5[2];
	float fRec3[2];
	float fVec53[16384];
	int iConst49;
	float fConst50;
	float fRec80[2];
	float fVec54[2];
	float fRec79[2];
	float fRec4[2];
	float fRec0[1024];
	float fRec1[1024];
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "delays.lib/fdelay1a:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelay4:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelayltv:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "1.1.0");
	m->declare(m->metaInterface, "filename", "greyhole.dsp");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/nlf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/nlf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/nlf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/version", "1.3.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.7.0");
	m->declare(m->metaInterface, "name", "greyhole");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/version", "1.4.0");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
	m->declare(m->metaInterface, "reverbs.lib/greyhole:author", "Julian Parker, bug fixes and minor interface changes by Till Bovermann");
	m->declare(m->metaInterface, "reverbs.lib/greyhole:license", "GPL2+");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "1.2.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "1.5.0");
}

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}

void classInitmydsp(int sample_rate) {
	mydspSIG0* sig0 = newmydspSIG0();
	instanceInitmydspSIG0(sig0, sample_rate);
	fillmydspSIG0(sig0, 1302, itbl0mydspSIG0);
	deletemydspSIG0(sig0);
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->iVec0[l0] = 0;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec6[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fVec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec10[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec14[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec21[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec25[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec29[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec36[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec40[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec44[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fVec2[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fVec3[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->iVec4[l13] = 0;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec48[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec49[l15] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 131072; l16 = l16 + 1) {
			dsp->fVec5[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec50[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec51[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec52[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec53[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 16384; l21 = l21 + 1) {
			dsp->fVec6[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec54[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fVec7[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec47[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec45[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 131072; l26 = l26 + 1) {
			dsp->fVec8[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 16384; l27 = l27 + 1) {
			dsp->fVec9[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec56[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fVec10[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec55[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec46[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 16384; l32 = l32 + 1) {
			dsp->fVec11[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fVec12[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec43[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec41[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 16384; l36 = l36 + 1) {
			dsp->fVec13[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec58[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fVec14[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec57[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec42[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 16384; l41 = l41 + 1) {
			dsp->fVec15[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fVec16[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec39[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec37[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 16384; l45 = l45 + 1) {
			dsp->fVec17[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec60[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fVec18[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec59[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec38[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 16384; l50 = l50 + 1) {
			dsp->fVec19[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fVec20[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec35[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec33[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 16384; l54 = l54 + 1) {
			dsp->fVec21[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec62[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fVec22[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec61[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec34[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 16384; l59 = l59 + 1) {
			dsp->fVec23[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec63[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fVec24[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec32[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec30[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 16384; l64 = l64 + 1) {
			dsp->fVec25[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec65[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fVec26[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec64[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec31[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 16384; l69 = l69 + 1) {
			dsp->fVec27[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fVec28[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec28[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec26[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 16384; l73 = l73 + 1) {
			dsp->fVec29[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec67[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fVec30[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec66[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec27[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 16384; l78 = l78 + 1) {
			dsp->fVec31[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fVec32[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec24[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec22[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 16384; l82 = l82 + 1) {
			dsp->fVec33[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec69[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fVec34[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec68[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec23[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 16384; l87 = l87 + 1) {
			dsp->fVec35[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fVec36[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec20[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec18[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 16384; l91 = l91 + 1) {
			dsp->fVec37[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec71[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fVec38[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec70[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec19[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 16384; l96 = l96 + 1) {
			dsp->fVec39[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec72[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fVec40[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fRec17[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec15[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 16384; l101 = l101 + 1) {
			dsp->fVec41[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec74[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fVec42[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec73[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec16[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 16384; l106 = l106 + 1) {
			dsp->fVec43[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fVec44[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 2; l108 = l108 + 1) {
			dsp->fRec13[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec11[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 16384; l110 = l110 + 1) {
			dsp->fVec45[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 2; l111 = l111 + 1) {
			dsp->fRec76[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fVec46[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 2; l113 = l113 + 1) {
			dsp->fRec75[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 2; l114 = l114 + 1) {
			dsp->fRec12[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 16384; l115 = l115 + 1) {
			dsp->fVec47[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fVec48[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 2; l117 = l117 + 1) {
			dsp->fRec9[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec7[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 16384; l119 = l119 + 1) {
			dsp->fVec49[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 2; l120 = l120 + 1) {
			dsp->fRec78[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 2; l121 = l121 + 1) {
			dsp->fVec50[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 2; l122 = l122 + 1) {
			dsp->fRec77[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 2; l123 = l123 + 1) {
			dsp->fRec8[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 16384; l124 = l124 + 1) {
			dsp->fVec51[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 2; l125 = l125 + 1) {
			dsp->fVec52[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fRec5[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 2; l127 = l127 + 1) {
			dsp->fRec3[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 16384; l128 = l128 + 1) {
			dsp->fVec53[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 2; l129 = l129 + 1) {
			dsp->fRec80[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 2; l130 = l130 + 1) {
			dsp->fVec54[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 2; l131 = l131 + 1) {
			dsp->fRec79[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 2; l132 = l132 + 1) {
			dsp->fRec4[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 1024; l133 = l133 + 1) {
			dsp->fRec0[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 1024; l134 = l134 + 1) {
			dsp->fRec1[l134] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->iConst0 = itbl0mydspSIG0[48];
	dsp->fConst1 = 0.0001f * (float)(dsp->iConst0);
	dsp->iConst2 = itbl0mydspSIG0[61];
	dsp->fConst3 = 0.0001f * (float)(dsp->iConst2);
	dsp->iConst4 = itbl0mydspSIG0[74];
	dsp->fConst5 = 0.0001f * (float)(dsp->iConst4);
	dsp->iConst6 = itbl0mydspSIG0[29];
	dsp->fConst7 = 0.0001f * (float)(dsp->iConst6);
	dsp->iConst8 = itbl0mydspSIG0[42];
	dsp->fConst9 = 0.0001f * (float)(dsp->iConst8);
	dsp->iConst10 = itbl0mydspSIG0[55];
	dsp->fConst11 = 0.0001f * (float)(dsp->iConst10);
	dsp->iConst12 = itbl0mydspSIG0[10];
	dsp->fConst13 = 0.0001f * (float)(dsp->iConst12);
	dsp->iConst14 = itbl0mydspSIG0[23];
	dsp->fConst15 = 0.0001f * (float)(dsp->iConst14);
	dsp->iConst16 = itbl0mydspSIG0[36];
	dsp->fConst17 = 0.0001f * (float)(dsp->iConst16);
	dsp->fConst18 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst19 = 3.1415927f / dsp->fConst18;
	dsp->fConst20 = floorf(fminf(65533.0f, 0.2f * dsp->fConst18));
	dsp->iConst21 = itbl0mydspSIG0[49];
	dsp->fConst22 = 0.0001f * (float)(dsp->iConst21);
	dsp->iConst23 = itbl0mydspSIG0[59];
	dsp->fConst24 = 0.0001f * (float)(dsp->iConst23);
	dsp->iConst25 = itbl0mydspSIG0[46];
	dsp->fConst26 = 0.0001f * (float)(dsp->iConst25);
	dsp->iConst27 = itbl0mydspSIG0[33];
	dsp->fConst28 = 0.0001f * (float)(dsp->iConst27);
	dsp->iConst29 = itbl0mydspSIG0[20];
	dsp->fConst30 = 0.0001f * (float)(dsp->iConst29);
	dsp->iConst31 = itbl0mydspSIG0[68];
	dsp->fConst32 = 0.0001f * (float)(dsp->iConst31);
	dsp->iConst33 = itbl0mydspSIG0[78];
	dsp->fConst34 = 0.0001f * (float)(dsp->iConst33);
	dsp->iConst35 = itbl0mydspSIG0[65];
	dsp->fConst36 = 0.0001f * (float)(dsp->iConst35);
	dsp->iConst37 = itbl0mydspSIG0[52];
	dsp->fConst38 = 0.0001f * (float)(dsp->iConst37);
	dsp->iConst39 = itbl0mydspSIG0[39];
	dsp->fConst40 = 0.0001f * (float)(dsp->iConst39);
	dsp->iConst41 = itbl0mydspSIG0[87];
	dsp->fConst42 = 0.0001f * (float)(dsp->iConst41);
	dsp->iConst43 = itbl0mydspSIG0[97];
	dsp->fConst44 = 0.0001f * (float)(dsp->iConst43);
	dsp->iConst45 = itbl0mydspSIG0[84];
	dsp->fConst46 = 0.0001f * (float)(dsp->iConst45);
	dsp->iConst47 = itbl0mydspSIG0[71];
	dsp->fConst48 = 0.0001f * (float)(dsp->iConst47);
	dsp->iConst49 = itbl0mydspSIG0[58];
	dsp->fConst50 = 0.0001f * (float)(dsp->iConst49);
}

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "greyhole");
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			int iTemp0 = 1 - dsp->iVec0[1];
			dsp->fRec6[0] = 0.9999f * (dsp->fRec6[1] + (float)(iTemp0 * dsp->iConst0)) + dsp->fConst1;
			float fTemp1 = dsp->fRec6[0] + -1.49999f;
			float fTemp2 = floorf(fTemp1);
			float fTemp3 = fTemp2 + (2.0f - dsp->fRec6[0]);
			float fTemp4 = dsp->fRec6[0] - fTemp2;
			dsp->fVec1[0] = 0.5f;
			float fTemp5 = dsp->fVec1[1] + 0.5f;
			float fTemp6 = 0.5f * fTemp5;
			float fTemp7 = cosf(fTemp6);
			dsp->fRec10[0] = 0.9999f * (dsp->fRec10[1] + (float)(iTemp0 * dsp->iConst2)) + dsp->fConst3;
			float fTemp8 = dsp->fRec10[0] + -1.49999f;
			float fTemp9 = floorf(fTemp8);
			float fTemp10 = fTemp9 + (2.0f - dsp->fRec10[0]);
			float fTemp11 = dsp->fRec10[0] - fTemp9;
			dsp->fRec14[0] = 0.9999f * (dsp->fRec14[1] + (float)(iTemp0 * dsp->iConst4)) + dsp->fConst5;
			float fTemp12 = dsp->fRec14[0] + -1.49999f;
			float fTemp13 = floorf(fTemp12);
			float fTemp14 = fTemp13 + (2.0f - dsp->fRec14[0]);
			float fTemp15 = dsp->fRec14[0] - fTemp13;
			float fTemp16 = sinf(fTemp6);
			float fTemp17 = -0.5f * fTemp5;
			float fTemp18 = cosf(fTemp17);
			dsp->fRec21[0] = 0.9999f * (dsp->fRec21[1] + (float)(iTemp0 * dsp->iConst6)) + dsp->fConst7;
			float fTemp19 = dsp->fRec21[0] + -1.49999f;
			float fTemp20 = floorf(fTemp19);
			float fTemp21 = fTemp20 + (2.0f - dsp->fRec21[0]);
			float fTemp22 = dsp->fRec21[0] - fTemp20;
			dsp->fRec25[0] = 0.9999f * (dsp->fRec25[1] + (float)(iTemp0 * dsp->iConst8)) + dsp->fConst9;
			float fTemp23 = dsp->fRec25[0] + -1.49999f;
			float fTemp24 = floorf(fTemp23);
			float fTemp25 = fTemp24 + (2.0f - dsp->fRec25[0]);
			float fTemp26 = dsp->fRec25[0] - fTemp24;
			dsp->fRec29[0] = 0.9999f * (dsp->fRec29[1] + (float)(iTemp0 * dsp->iConst10)) + dsp->fConst11;
			float fTemp27 = dsp->fRec29[0] + -1.49999f;
			float fTemp28 = floorf(fTemp27);
			float fTemp29 = fTemp28 + (2.0f - dsp->fRec29[0]);
			float fTemp30 = dsp->fRec29[0] - fTemp28;
			float fTemp31 = sinf(fTemp17);
			dsp->fRec36[0] = 0.9999f * (dsp->fRec36[1] + (float)(iTemp0 * dsp->iConst12)) + dsp->fConst13;
			float fTemp32 = dsp->fRec36[0] + -1.49999f;
			float fTemp33 = floorf(fTemp32);
			float fTemp34 = fTemp33 + (2.0f - dsp->fRec36[0]);
			float fTemp35 = dsp->fRec36[0] - fTemp33;
			dsp->fRec40[0] = 0.9999f * (dsp->fRec40[1] + (float)(iTemp0 * dsp->iConst14)) + dsp->fConst15;
			float fTemp36 = dsp->fRec40[0] + -1.49999f;
			float fTemp37 = floorf(fTemp36);
			float fTemp38 = fTemp37 + (2.0f - dsp->fRec40[0]);
			float fTemp39 = dsp->fRec40[0] - fTemp37;
			dsp->fRec44[0] = 0.9999f * (dsp->fRec44[1] + (float)(iTemp0 * dsp->iConst16)) + dsp->fConst17;
			float fTemp40 = dsp->fRec44[0] + -1.49999f;
			float fTemp41 = floorf(fTemp40);
			float fTemp42 = fTemp41 + (2.0f - dsp->fRec44[0]);
			float fTemp43 = dsp->fRec44[0] - fTemp41;
			dsp->fVec2[0] = 0.7f;
			float fTemp44 = dsp->fVec2[1] + 0.7f;
			dsp->fVec3[0] = dsp->fConst18;
			float fTemp45 = dsp->fConst18 + dsp->fVec3[1];
			dsp->iVec4[0] = 2;
			float fTemp46 = dsp->fConst19 * (float)(dsp->iVec4[1] + 2);
			float fTemp47 = sinf(fTemp46);
			float fTemp48 = cosf(fTemp46);
			dsp->fRec48[0] = dsp->fRec49[1] * fTemp47 + dsp->fRec48[1] * fTemp48;
			dsp->fRec49[0] = (float)(iTemp0) + dsp->fRec49[1] * fTemp48 - fTemp47 * dsp->fRec48[1];
			float fTemp49 = 5.6689343e-05f * fTemp45 * (dsp->fRec48[0] + 1.0f);
			float fTemp50 = fTemp49 + 8.500005f;
			float fTemp51 = floorf(fTemp50);
			float fTemp52 = fTemp49 + (7.0f - fTemp51);
			float fTemp53 = fTemp49 + (8.0f - fTemp51);
			int iTemp54 = (int)(fTemp50);
			float fTemp55 = fTemp49 + (9.0f - fTemp51);
			float fTemp56 = fTemp49 + (1e+01f - fTemp51);
			float fTemp57 = fTemp56 * fTemp55;
			float fTemp58 = fTemp57 * fTemp53;
			float fTemp59 = (fTemp49 + (6.0f - fTemp51)) * (fTemp52 * (fTemp53 * (0.041666668f * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp54)) + 1)) & 1023] * fTemp55 - 0.16666667f * fTemp56 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp54 + 1)) + 1)) & 1023]) + 0.25f * fTemp57 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp54 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp58 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp54 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp58 * fTemp52 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp54 + 4)) + 1)) & 1023];
			dsp->fVec5[dsp->IOTA0 & 131071] = fTemp59;
			float fTemp60 = ((dsp->fRec50[1] != 0.0f) ? (((dsp->fRec51[1] > 0.0f) & (dsp->fRec51[1] < 1.0f)) ? dsp->fRec50[1] : 0.0f) : (((dsp->fRec51[1] == 0.0f) & (dsp->fConst20 != dsp->fRec52[1])) ? 4.5351473e-05f : (((dsp->fRec51[1] == 1.0f) & (dsp->fConst20 != dsp->fRec53[1])) ? -4.5351473e-05f : 0.0f)));
			dsp->fRec50[0] = fTemp60;
			dsp->fRec51[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec51[1] + fTemp60));
			dsp->fRec52[0] = (((dsp->fRec51[1] >= 1.0f) & (dsp->fRec53[1] != dsp->fConst20)) ? dsp->fConst20 : dsp->fRec52[1]);
			dsp->fRec53[0] = (((dsp->fRec51[1] <= 0.0f) & (dsp->fRec52[1] != dsp->fConst20)) ? dsp->fConst20 : dsp->fRec53[1]);
			int iTemp61 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec52[0])));
			float fTemp62 = dsp->fVec5[(dsp->IOTA0 - iTemp61) & 131071];
			int iTemp63 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec53[0])));
			float fTemp64 = (float)(input1[i0]) + 0.5f * fTemp44 * (fTemp62 + dsp->fRec51[0] * (dsp->fVec5[(dsp->IOTA0 - iTemp63) & 131071] - fTemp62));
			float fTemp65 = fTemp7 * fTemp64 - fTemp16 * dsp->fRec34[1];
			float fTemp66 = fTemp7 * fTemp65 - fTemp16 * dsp->fRec38[1];
			float fTemp67 = fTemp7 * fTemp66 - fTemp16 * dsp->fRec42[1];
			dsp->fVec6[dsp->IOTA0 & 16383] = fTemp16 * dsp->fRec46[1] - fTemp7 * fTemp67;
			dsp->fRec54[0] = 0.9999f * (dsp->fRec54[1] + (float)(iTemp0 * dsp->iConst21)) + dsp->fConst22;
			float fTemp68 = dsp->fRec54[0] + -1.49999f;
			float fTemp69 = dsp->fVec6[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp68)))) & 16383];
			dsp->fVec7[0] = fTemp69;
			float fTemp70 = floorf(fTemp68);
			dsp->fRec47[0] = dsp->fVec7[1] - (fTemp70 + (2.0f - dsp->fRec54[0])) * (dsp->fRec47[1] - fTemp69) / (dsp->fRec54[0] - fTemp70);
			dsp->fRec45[0] = dsp->fRec47[0];
			float fTemp71 = 5.6689343e-05f * fTemp45 * (dsp->fRec49[0] + 1.0f);
			float fTemp72 = fTemp71 + 8.500005f;
			float fTemp73 = floorf(fTemp72);
			float fTemp74 = fTemp71 + (7.0f - fTemp73);
			float fTemp75 = fTemp71 + (8.0f - fTemp73);
			int iTemp76 = (int)(fTemp72);
			float fTemp77 = fTemp71 + (9.0f - fTemp73);
			float fTemp78 = fTemp71 + (1e+01f - fTemp73);
			float fTemp79 = fTemp78 * fTemp77;
			float fTemp80 = fTemp79 * fTemp75;
			float fTemp81 = (fTemp71 + (6.0f - fTemp73)) * (fTemp74 * (fTemp75 * (0.041666668f * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp76)) + 1)) & 1023] * fTemp77 - 0.16666667f * fTemp78 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 1)) + 1)) & 1023]) + 0.25f * fTemp79 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp80 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp80 * fTemp74 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 4)) + 1)) & 1023];
			dsp->fVec8[dsp->IOTA0 & 131071] = fTemp81;
			float fTemp82 = dsp->fVec8[(dsp->IOTA0 - iTemp61) & 131071];
			float fTemp83 = (float)(input0[i0]) + 0.5f * (fTemp82 + dsp->fRec51[0] * (dsp->fVec8[(dsp->IOTA0 - iTemp63) & 131071] - fTemp82)) * fTemp44;
			float fTemp84 = fTemp83 * fTemp7 - fTemp16 * dsp->fRec33[1];
			float fTemp85 = fTemp7 * fTemp84 - fTemp16 * dsp->fRec37[1];
			float fTemp86 = fTemp7 * fTemp85 - fTemp16 * dsp->fRec41[1];
			dsp->fVec9[dsp->IOTA0 & 16383] = fTemp7 * fTemp86 - fTemp16 * dsp->fRec45[1];
			dsp->fRec56[0] = 0.9999f * (dsp->fRec56[1] + (float)(iTemp0 * dsp->iConst23)) + dsp->fConst24;
			float fTemp87 = dsp->fRec56[0] + -1.49999f;
			float fTemp88 = dsp->fVec9[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp87)))) & 16383];
			dsp->fVec10[0] = fTemp88;
			float fTemp89 = floorf(fTemp87);
			dsp->fRec55[0] = dsp->fVec10[1] - (fTemp89 + (2.0f - dsp->fRec56[0])) * (dsp->fRec55[1] - fTemp88) / (dsp->fRec56[0] - fTemp89);
			dsp->fRec46[0] = dsp->fRec55[0];
			dsp->fVec11[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec46[1] + fTemp16 * fTemp67;
			float fTemp90 = dsp->fVec11[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp40)))) & 16383];
			dsp->fVec12[0] = fTemp90;
			dsp->fRec43[0] = -(dsp->fRec43[1] * fTemp42 / fTemp43 + fTemp42 * fTemp90 / fTemp43 + dsp->fVec12[1]);
			dsp->fRec41[0] = dsp->fRec43[0];
			dsp->fVec13[dsp->IOTA0 & 16383] = dsp->fRec45[1] * fTemp7 + fTemp16 * fTemp86;
			dsp->fRec58[0] = 0.9999f * (dsp->fRec58[1] + (float)(iTemp0 * dsp->iConst25)) + dsp->fConst26;
			float fTemp91 = dsp->fRec58[0] + -1.49999f;
			float fTemp92 = dsp->fVec13[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp91)))) & 16383];
			dsp->fVec14[0] = fTemp92;
			float fTemp93 = floorf(fTemp91);
			dsp->fRec57[0] = dsp->fVec14[1] - (fTemp93 + (2.0f - dsp->fRec58[0])) * (dsp->fRec57[1] - fTemp92) / (dsp->fRec58[0] - fTemp93);
			dsp->fRec42[0] = dsp->fRec57[0];
			dsp->fVec15[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec42[1] + fTemp16 * fTemp66;
			float fTemp94 = dsp->fVec15[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp36)))) & 16383];
			dsp->fVec16[0] = fTemp94;
			dsp->fRec39[0] = -(dsp->fRec39[1] * fTemp38 / fTemp39 + fTemp38 * fTemp94 / fTemp39 + dsp->fVec16[1]);
			dsp->fRec37[0] = dsp->fRec39[0];
			dsp->fVec17[dsp->IOTA0 & 16383] = dsp->fRec41[1] * fTemp7 + fTemp16 * fTemp85;
			dsp->fRec60[0] = 0.9999f * (dsp->fRec60[1] + (float)(iTemp0 * dsp->iConst27)) + dsp->fConst28;
			float fTemp95 = dsp->fRec60[0] + -1.49999f;
			float fTemp96 = dsp->fVec17[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp95)))) & 16383];
			dsp->fVec18[0] = fTemp96;
			float fTemp97 = floorf(fTemp95);
			dsp->fRec59[0] = dsp->fVec18[1] - (fTemp97 + (2.0f - dsp->fRec60[0])) * (dsp->fRec59[1] - fTemp96) / (dsp->fRec60[0] - fTemp97);
			dsp->fRec38[0] = dsp->fRec59[0];
			dsp->fVec19[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec38[1] + fTemp16 * fTemp65;
			float fTemp98 = dsp->fVec19[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp32)))) & 16383];
			dsp->fVec20[0] = fTemp98;
			dsp->fRec35[0] = -(dsp->fRec35[1] * fTemp34 / fTemp35 + fTemp34 * fTemp98 / fTemp35 + dsp->fVec20[1]);
			dsp->fRec33[0] = dsp->fRec35[0];
			dsp->fVec21[dsp->IOTA0 & 16383] = dsp->fRec37[1] * fTemp7 + fTemp16 * fTemp84;
			dsp->fRec62[0] = 0.9999f * (dsp->fRec62[1] + (float)(iTemp0 * dsp->iConst29)) + dsp->fConst30;
			float fTemp99 = dsp->fRec62[0] + -1.49999f;
			float fTemp100 = dsp->fVec21[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp99)))) & 16383];
			dsp->fVec22[0] = fTemp100;
			float fTemp101 = floorf(fTemp99);
			dsp->fRec61[0] = dsp->fVec22[1] - (fTemp101 + (2.0f - dsp->fRec62[0])) * (dsp->fRec61[1] - fTemp100) / (dsp->fRec62[0] - fTemp101);
			dsp->fRec34[0] = dsp->fRec61[0];
			float fTemp102 = fTemp7 * dsp->fRec34[1] + fTemp16 * fTemp64;
			float fTemp103 = fTemp18 * fTemp102 - fTemp31 * dsp->fRec19[1];
			float fTemp104 = fTemp18 * fTemp103 - fTemp31 * dsp->fRec23[1];
			float fTemp105 = fTemp18 * fTemp104 - fTemp31 * dsp->fRec27[1];
			dsp->fVec23[dsp->IOTA0 & 16383] = fTemp31 * dsp->fRec31[1] - fTemp18 * fTemp105;
			dsp->fRec63[0] = 0.9999f * (dsp->fRec63[1] + (float)(iTemp0 * dsp->iConst31)) + dsp->fConst32;
			float fTemp106 = dsp->fRec63[0] + -1.49999f;
			float fTemp107 = dsp->fVec23[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp106)))) & 16383];
			dsp->fVec24[0] = fTemp107;
			float fTemp108 = floorf(fTemp106);
			dsp->fRec32[0] = dsp->fVec24[1] - (fTemp108 + (2.0f - dsp->fRec63[0])) * (dsp->fRec32[1] - fTemp107) / (dsp->fRec63[0] - fTemp108);
			dsp->fRec30[0] = dsp->fRec32[0];
			float fTemp109 = dsp->fRec33[1] * fTemp7 + fTemp16 * fTemp83;
			float fTemp110 = fTemp109 * fTemp18 - fTemp31 * dsp->fRec18[1];
			float fTemp111 = fTemp18 * fTemp110 - fTemp31 * dsp->fRec22[1];
			float fTemp112 = fTemp18 * fTemp111 - fTemp31 * dsp->fRec26[1];
			dsp->fVec25[dsp->IOTA0 & 16383] = fTemp18 * fTemp112 - dsp->fRec30[1] * fTemp31;
			dsp->fRec65[0] = 0.9999f * (dsp->fRec65[1] + (float)(iTemp0 * dsp->iConst33)) + dsp->fConst34;
			float fTemp113 = dsp->fRec65[0] + -1.49999f;
			float fTemp114 = dsp->fVec25[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp113)))) & 16383];
			dsp->fVec26[0] = fTemp114;
			float fTemp115 = floorf(fTemp113);
			dsp->fRec64[0] = dsp->fVec26[1] - (fTemp115 + (2.0f - dsp->fRec65[0])) * (dsp->fRec64[1] - fTemp114) / (dsp->fRec65[0] - fTemp115);
			dsp->fRec31[0] = dsp->fRec64[0];
			dsp->fVec27[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec31[1] + fTemp31 * fTemp105;
			float fTemp116 = dsp->fVec27[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp27)))) & 16383];
			dsp->fVec28[0] = fTemp116;
			dsp->fRec28[0] = -(dsp->fRec28[1] * fTemp29 / fTemp30 + fTemp29 * fTemp116 / fTemp30 + dsp->fVec28[1]);
			dsp->fRec26[0] = dsp->fRec28[0];
			dsp->fVec29[dsp->IOTA0 & 16383] = dsp->fRec30[1] * fTemp18 + fTemp31 * fTemp112;
			dsp->fRec67[0] = 0.9999f * (dsp->fRec67[1] + (float)(iTemp0 * dsp->iConst35)) + dsp->fConst36;
			float fTemp117 = dsp->fRec67[0] + -1.49999f;
			float fTemp118 = dsp->fVec29[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp117)))) & 16383];
			dsp->fVec30[0] = fTemp118;
			float fTemp119 = floorf(fTemp117);
			dsp->fRec66[0] = dsp->fVec30[1] - (fTemp119 + (2.0f - dsp->fRec67[0])) * (dsp->fRec66[1] - fTemp118) / (dsp->fRec67[0] - fTemp119);
			dsp->fRec27[0] = dsp->fRec66[0];
			dsp->fVec31[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec27[1] + fTemp31 * fTemp104;
			float fTemp120 = dsp->fVec31[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp23)))) & 16383];
			dsp->fVec32[0] = fTemp120;
			dsp->fRec24[0] = -(dsp->fRec24[1] * fTemp25 / fTemp26 + fTemp25 * fTemp120 / fTemp26 + dsp->fVec32[1]);
			dsp->fRec22[0] = dsp->fRec24[0];
			dsp->fVec33[dsp->IOTA0 & 16383] = dsp->fRec26[1] * fTemp18 + fTemp31 * fTemp111;
			dsp->fRec69[0] = 0.9999f * (dsp->fRec69[1] + (float)(iTemp0 * dsp->iConst37)) + dsp->fConst38;
			float fTemp121 = dsp->fRec69[0] + -1.49999f;
			float fTemp122 = dsp->fVec33[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp121)))) & 16383];
			dsp->fVec34[0] = fTemp122;
			float fTemp123 = floorf(fTemp121);
			dsp->fRec68[0] = dsp->fVec34[1] - (fTemp123 + (2.0f - dsp->fRec69[0])) * (dsp->fRec68[1] - fTemp122) / (dsp->fRec69[0] - fTemp123);
			dsp->fRec23[0] = dsp->fRec68[0];
			dsp->fVec35[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec23[1] + fTemp31 * fTemp103;
			float fTemp124 = dsp->fVec35[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp19)))) & 16383];
			dsp->fVec36[0] = fTemp124;
			dsp->fRec20[0] = -(dsp->fRec20[1] * fTemp21 / fTemp22 + fTemp21 * fTemp124 / fTemp22 + dsp->fVec36[1]);
			dsp->fRec18[0] = dsp->fRec20[0];
			dsp->fVec37[dsp->IOTA0 & 16383] = dsp->fRec22[1] * fTemp18 + fTemp31 * fTemp110;
			dsp->fRec71[0] = 0.9999f * (dsp->fRec71[1] + (float)(iTemp0 * dsp->iConst39)) + dsp->fConst40;
			float fTemp125 = dsp->fRec71[0] + -1.49999f;
			float fTemp126 = dsp->fVec37[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp125)))) & 16383];
			dsp->fVec38[0] = fTemp126;
			float fTemp127 = floorf(fTemp125);
			dsp->fRec70[0] = dsp->fVec38[1] - (fTemp127 + (2.0f - dsp->fRec71[0])) * (dsp->fRec70[1] - fTemp126) / (dsp->fRec71[0] - fTemp127);
			dsp->fRec19[0] = dsp->fRec70[0];
			float fTemp128 = fTemp18 * dsp->fRec19[1] + fTemp31 * fTemp102;
			float fTemp129 = fTemp7 * fTemp128 - fTemp16 * dsp->fRec4[1];
			float fTemp130 = fTemp7 * fTemp129 - fTemp16 * dsp->fRec8[1];
			float fTemp131 = fTemp7 * fTemp130 - fTemp16 * dsp->fRec12[1];
			dsp->fVec39[dsp->IOTA0 & 16383] = fTemp16 * dsp->fRec16[1] - fTemp7 * fTemp131;
			dsp->fRec72[0] = 0.9999f * ((float)(dsp->iConst41 * iTemp0) + dsp->fRec72[1]) + dsp->fConst42;
			float fTemp132 = dsp->fRec72[0] + -1.49999f;
			float fTemp133 = dsp->fVec39[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp132)))) & 16383];
			dsp->fVec40[0] = fTemp133;
			float fTemp134 = floorf(fTemp132);
			dsp->fRec17[0] = dsp->fVec40[1] - (fTemp134 + (2.0f - dsp->fRec72[0])) * (dsp->fRec17[1] - fTemp133) / (dsp->fRec72[0] - fTemp134);
			dsp->fRec15[0] = dsp->fRec17[0];
			float fTemp135 = dsp->fRec18[1] * fTemp18 + fTemp31 * fTemp109;
			float fTemp136 = fTemp7 * fTemp135 - fTemp16 * dsp->fRec3[1];
			float fTemp137 = fTemp7 * fTemp136 - fTemp16 * dsp->fRec7[1];
			float fTemp138 = fTemp7 * fTemp137 - fTemp16 * dsp->fRec11[1];
			dsp->fVec41[dsp->IOTA0 & 16383] = fTemp7 * fTemp138 - dsp->fRec15[1] * fTemp16;
			dsp->fRec74[0] = 0.9999f * (dsp->fRec74[1] + (float)(iTemp0 * dsp->iConst43)) + dsp->fConst44;
			float fTemp139 = dsp->fRec74[0] + -1.49999f;
			float fTemp140 = dsp->fVec41[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp139)))) & 16383];
			dsp->fVec42[0] = fTemp140;
			float fTemp141 = floorf(fTemp139);
			dsp->fRec73[0] = dsp->fVec42[1] - (fTemp141 + (2.0f - dsp->fRec74[0])) * (dsp->fRec73[1] - fTemp140) / (dsp->fRec74[0] - fTemp141);
			dsp->fRec16[0] = dsp->fRec73[0];
			dsp->fVec43[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec16[1] + fTemp16 * fTemp131;
			float fTemp142 = dsp->fVec43[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp12)))) & 16383];
			dsp->fVec44[0] = fTemp142;
			dsp->fRec13[0] = -(dsp->fRec13[1] * fTemp14 / fTemp15 + fTemp14 * fTemp142 / fTemp15 + dsp->fVec44[1]);
			dsp->fRec11[0] = dsp->fRec13[0];
			dsp->fVec45[dsp->IOTA0 & 16383] = dsp->fRec15[1] * fTemp7 + fTemp16 * fTemp138;
			dsp->fRec76[0] = 0.9999f * (dsp->fRec76[1] + (float)(iTemp0 * dsp->iConst45)) + dsp->fConst46;
			float fTemp143 = dsp->fRec76[0] + -1.49999f;
			float fTemp144 = dsp->fVec45[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp143)))) & 16383];
			dsp->fVec46[0] = fTemp144;
			float fTemp145 = floorf(fTemp143);
			dsp->fRec75[0] = dsp->fVec46[1] - (fTemp145 + (2.0f - dsp->fRec76[0])) * (dsp->fRec75[1] - fTemp144) / (dsp->fRec76[0] - fTemp145);
			dsp->fRec12[0] = dsp->fRec75[0];
			dsp->fVec47[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec12[1] + fTemp16 * fTemp130;
			float fTemp146 = dsp->fVec47[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp8)))) & 16383];
			dsp->fVec48[0] = fTemp146;
			dsp->fRec9[0] = -(dsp->fRec9[1] * fTemp10 / fTemp11 + fTemp10 * fTemp146 / fTemp11 + dsp->fVec48[1]);
			dsp->fRec7[0] = dsp->fRec9[0];
			dsp->fVec49[dsp->IOTA0 & 16383] = dsp->fRec11[1] * fTemp7 + fTemp16 * fTemp137;
			dsp->fRec78[0] = 0.9999f * (dsp->fRec78[1] + (float)(iTemp0 * dsp->iConst47)) + dsp->fConst48;
			float fTemp147 = dsp->fRec78[0] + -1.49999f;
			float fTemp148 = dsp->fVec49[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp147)))) & 16383];
			dsp->fVec50[0] = fTemp148;
			float fTemp149 = floorf(fTemp147);
			dsp->fRec77[0] = dsp->fVec50[1] - (fTemp149 + (2.0f - dsp->fRec78[0])) * (dsp->fRec77[1] - fTemp148) / (dsp->fRec78[0] - fTemp149);
			dsp->fRec8[0] = dsp->fRec77[0];
			dsp->fVec51[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec8[1] + fTemp16 * fTemp129;
			float fTemp150 = dsp->fVec51[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp1)))) & 16383];
			dsp->fVec52[0] = fTemp150;
			dsp->fRec5[0] = -(dsp->fRec5[1] * fTemp3 / fTemp4 + fTemp3 * fTemp150 / fTemp4 + dsp->fVec52[1]);
			dsp->fRec3[0] = dsp->fRec5[0];
			dsp->fVec53[dsp->IOTA0 & 16383] = dsp->fRec7[1] * fTemp7 + fTemp16 * fTemp136;
			dsp->fRec80[0] = 0.9999f * (dsp->fRec80[1] + (float)(iTemp0 * dsp->iConst49)) + dsp->fConst50;
			float fTemp151 = dsp->fRec80[0] + -1.49999f;
			float fTemp152 = dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp151)))) & 16383];
			dsp->fVec54[0] = fTemp152;
			float fTemp153 = floorf(fTemp151);
			dsp->fRec79[0] = dsp->fVec54[1] - (fTemp153 + (2.0f - dsp->fRec80[0])) * (dsp->fRec79[1] - fTemp152) / (dsp->fRec80[0] - fTemp153);
			dsp->fRec4[0] = dsp->fRec79[0];
			float fRec2 = dsp->fRec3[1] * fTemp7 + fTemp16 * fTemp135;
			dsp->fRec0[dsp->IOTA0 & 1023] = fRec2;
			float fRec81 = fTemp7 * dsp->fRec4[1] + fTemp16 * fTemp128;
			dsp->fRec1[dsp->IOTA0 & 1023] = fRec81;
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[dsp->IOTA0 & 1023]);
			output1[i0] = (FAUSTFLOAT)(dsp->fRec1[dsp->IOTA0 & 1023]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->iVec4[1] = dsp->iVec4[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fVec46[1] = dsp->fVec46[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec48[1] = dsp->fVec48[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fVec50[1] = dsp->fVec50[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec52[1] = dsp->fVec52[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fVec54[1] = dsp->fVec54[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec4[1] = dsp->fRec4[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
