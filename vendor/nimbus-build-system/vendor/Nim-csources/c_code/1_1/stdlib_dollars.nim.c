/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple_kN8up2W6YKc5YA9avn5mV5w tyTuple_kN8up2W6YKc5YA9avn5mV5w;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple_kN8up2W6YKc5YA9avn5mV5w {
NimStringDesc* Field0;
NI Field1;
NI Field2;
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted_45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted_Eys2fLM61EBlquSM8n9cIsw)(NimStringDesc** s, NI x);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_2, "(", 1);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_3, ", ", 2);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_4, "filename", 8);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_5, ": ", 2);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_6, "line", 4);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_7, "column", 6);
STRING_LITERAL(TM_n49a9aYp5BrbXv9a6OCpJYm0g_8, ")", 1);

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__r38WafKlW80RkvoZTcia4Q)(tyTuple_kN8up2W6YKc5YA9avn5mV5w x) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_2));
	firstElement = NIM_TRUE;
	{
		if (!!(firstElement)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA3_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_4));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_5));
	addQuoted_45fPtFhY4FavRaYwDhRfuA((&result), x.Field0);
	firstElement = NIM_FALSE;
	{
		if (!!(firstElement)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA7_: ;
	result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_6));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_5));
	addQuoted_Eys2fLM61EBlquSM8n9cIsw((&result), x.Field1);
	firstElement = NIM_FALSE;
	{
		if (!!(firstElement)) goto LA11_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA11_: ;
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_7));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_5));
	addQuoted_Eys2fLM61EBlquSM8n9cIsw((&result), x.Field2);
	firstElement = NIM_FALSE;
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM_n49a9aYp5BrbXv9a6OCpJYm0g_8));
	return result;
}