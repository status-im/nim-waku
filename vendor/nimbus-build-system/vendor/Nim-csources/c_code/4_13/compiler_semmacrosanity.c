/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

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
#undef powerpc
#undef unix
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct TNimType TNimType;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct TNimNode TNimNode;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct tyTuple_XOVT24GHXwqiEj5GCsEGCA tyTuple_XOVT24GHXwqiEj5GCsEGCA;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* dup;
};
struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sink;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
struct tyTuple_XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ {
  RootObj Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA {
tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, skipTypes_pLCdCGDuirMe9cspwviV9aVA)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw*, ithField_dVbj6zm1IqxrJtEDcHXhiQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI* field);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lastSon_esDJA7239bJDiq4UrX9aHCjg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, globalError_GarD0CQJ5aQhoHekHYinVQ_2)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, internalError_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errMsg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__k53Ge4e9cDjc7y9c5uML7sPQ)(tyTuple_XOVT24GHXwqiEj5GCsEGCA x);
N_LIB_PRIVATE N_NIMCALL(void, annotateType_7COu9arEnQ1XMww311ztLAg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t);
N_LIB_PRIVATE N_NIMCALL(NI, len_gG7hUAX9cA629ahMLVL3xN4w_2)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* n);
static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*, elemType_46gPaVDDGhiU69b2oKDJZuA_2)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t);
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_2, "ithField", 8);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_3, "ithField(record case branch)", 28);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_4, "invalid field at index ", 23);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_6, "semmacrosanity.nim", 18);
NIM_CONST tyTuple_XOVT24GHXwqiEj5GCsEGCA TM_gkmEeaIyT0wHpJzs9ciIEJg_5 = {((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_6),
((NI) 51)}
;
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_7, "() must have a tuple type", 25);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_8, "[] must have some form of array type", 36);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_9, "{} must have the set type", 25);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_10, "float literal must have some float type", 39);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_11, "integer literal must have some int type", 39);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_12, "string literal must be of some string type", 42);
STRING_LITERAL(TM_gkmEeaIyT0wHpJzs9ciIEJg_13, "nil literal must be of some pointer type", 40);

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kindU.S6.sons == 0)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		T6_ = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
		result = T6_;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw*, ithField_dVbj6zm1IqxrJtEDcHXhiQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI* field) {
	tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* result;
{	result = (tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result = NIM_NIL;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp_ = (NI)(T3_ - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					result = ithField_dVbj6zm1IqxrJtEDcHXhiQ((*n).kindU.S6.sons->data[i], field);
					{
						if (!!((result == NIM_NIL))) goto LA8_;
						goto BeforeRet_;
					}
					LA8_: ;
					res += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		{
			if (!!(((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3)))) goto LA13_;
			internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_2));
		}
		LA13_: ;
		result = ithField_dVbj6zm1IqxrJtEDcHXhiQ((*n).kindU.S6.sons->data[((NI) 0)], field);
		{
			if (!!((result == NIM_NIL))) goto LA17_;
			goto BeforeRet_;
		}
		LA17_: ;
		{
			NI i_2;
			NI colontmp__2;
			NI T20_;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			T20_ = (NI)0;
			T20_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(n);
			colontmp__2 = (NI)(T20_ - ((NI) 1));
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA22;
					i_2 = res_2;
					switch ((*(*n).kindU.S6.sons->data[i_2]).kind) {
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T24_;
						T24_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
						T24_ = lastSon_esDJA7239bJDiq4UrX9aHCjg((*n).kindU.S6.sons->data[i_2]);
						result = ithField_dVbj6zm1IqxrJtEDcHXhiQ(T24_, field);
						{
							if (!!((result == NIM_NIL))) goto LA27_;
							goto BeforeRet_;
						}
						LA27_: ;
					}
					break;
					default:
					{
						internalError_MXmtqrCmYwtOPkDCFgUWKQ((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_3));
					}
					break;
					}
					res_2 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		{
			if (!((*field) == ((NI) 0))) goto LA33_;
			result = (*n).kindU.S4.sym;
		}
		goto LA31_;
		LA33_: ;
		{
			(*field) -= ((NI) 1);
		}
		LA31_: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
		if (T3_) goto LA4_;
		T3_ = ((*n).kindU.S6.sons == 0);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA5_: ;
	{
		NI T8_;
		T8_ = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
		result = T8_;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, annotateType_7COu9arEnQ1XMww311ztLAg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t) {
	tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* x;
	x = skipTypes_pLCdCGDuirMe9cspwviV9aVA(t, IL64(36099165764233488));
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
	{
		tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* x_2;
		x_2 = skipTypes_pLCdCGDuirMe9cspwviV9aVA(t, IL64(36239903266220304));
		asgnRefNoCycle((void**) (&(*n).typ), t);
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			i_2 = ((NI) 1);
			{
				while (1) {
					NI j;
					tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* field;
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					j = (NI)(i - ((NI) 1));
					field = ithField_dVbj6zm1IqxrJtEDcHXhiQ((*x_2).n, (&j));
					{
						NimStringDesc* T9_;
						NimStringDesc* T10_;
						if (!(field == 0)) goto LA7_;
						T9_ = (NimStringDesc*)0;
						T10_ = (NimStringDesc*)0;
						T10_ = nimIntToStr(i);
						T9_ = rawNewString(T10_->Sup.len + 23);
appendString(T9_, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_4));
appendString(T9_, T10_);
						globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, T9_);
					}
					goto LA5_;
					LA7_: ;
					{
						{
							NimStringDesc* T16_;
							if (!!(((*(*n).kindU.S6.sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 34)))) goto LA14_;
							T16_ = (NimStringDesc*)0;
							T16_ = dollar__k53Ge4e9cDjc7y9c5uML7sPQ(TM_gkmEeaIyT0wHpJzs9ciIEJg_5);
							internalError_5XY9cUy7hZmUusM38U9cYYdw(T16_);
						}
						LA14_: ;
						annotateType_7COu9arEnQ1XMww311ztLAg((*(*n).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)], (*field).typ);
					}
					LA5_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 37):
	{
		{
			if (!((*x).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 18))) goto LA20_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_3;
				NI colontmp__2;
				NI i_4;
				i_3 = (NI)0;
				colontmp__2 = (NI)0;
				colontmp__2 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
				i_4 = ((NI) 0);
				{
					while (1) {
						if (!(i_4 < colontmp__2)) goto LA24;
						i_3 = i_4;
						{
							NI T27_;
							NimStringDesc* T30_;
							NimStringDesc* T31_;
							T27_ = (NI)0;
							T27_ = len_gG7hUAX9cA629ahMLVL3xN4w_2(x);
							if (!(T27_ <= i_3)) goto LA28_;
							T30_ = (NimStringDesc*)0;
							T31_ = (NimStringDesc*)0;
							T31_ = nimIntToStr(i_3);
							T30_ = rawNewString(T31_->Sup.len + 23);
appendString(T30_, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_4));
appendString(T30_, T31_);
							globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, T30_);
						}
						goto LA25_;
						LA28_: ;
						{
							annotateType_7COu9arEnQ1XMww311ztLAg((*n).kindU.S6.sons->data[i_3], (*x).sons->data[i_3]);
						}
						LA25_: ;
						i_4 += ((NI) 1);
					} LA24: ;
				}
			}
		}
		goto LA18_;
		LA20_: ;
		{
			NIM_BOOL T34_;
			T34_ = (NIM_BOOL)0;
			T34_ = ((*x).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 25));
			if (!(T34_)) goto LA35_;
			T34_ = ((*x).callConv == ((tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA) 8));
			LA35_: ;
			if (!T34_) goto LA36_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA18_;
		LA36_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_7));
		}
		LA18_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 41):
	{
		{
			if (!((151060480 &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA42_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* m;
				m = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_5;
					NI colontmp__3;
					NI i_6;
					i_5 = (NI)0;
					colontmp__3 = (NI)0;
					colontmp__3 = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
					i_6 = ((NI) 0);
					{
						while (1) {
							tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* T48_;
							if (!(i_6 < colontmp__3)) goto LA47;
							i_5 = i_6;
							m = (*n).kindU.S6.sons->data[i_5];
							T48_ = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
							T48_ = elemType_46gPaVDDGhiU69b2oKDJZuA_2(x);
							annotateType_7COu9arEnQ1XMww311ztLAg(m, T48_);
							i_6 += ((NI) 1);
						} LA47: ;
					}
				}
			}
		}
		goto LA40_;
		LA42_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_8));
		}
		LA40_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39):
	{
		{
			if (!((524288 &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA53_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* m_2;
				m_2 = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_7;
					NI colontmp__4;
					NI i_8;
					i_7 = (NI)0;
					colontmp__4 = (NI)0;
					colontmp__4 = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
					i_8 = ((NI) 0);
					{
						while (1) {
							tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* T59_;
							if (!(i_8 < colontmp__4)) goto LA58;
							i_7 = i_8;
							m_2 = (*n).kindU.S6.sons->data[i_7];
							T59_ = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
							T59_ = elemType_46gPaVDDGhiU69b2oKDJZuA_2(x);
							annotateType_7COu9arEnQ1XMww311ztLAg(m_2, T59_);
							i_8 += ((NI) 1);
						} LA58: ;
					}
				}
			}
		}
		goto LA51_;
		LA53_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_9));
		}
		LA51_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 19):
	{
		{
			if (!((IL64(1030792151040) &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA64_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA62_;
		LA64_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_10));
		}
		LA62_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			if (!((IL64(35182224621574) &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA70_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA68_;
		LA70_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_11));
		}
		LA68_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		{
			if (!((805306368 &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA76_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA74_;
		LA76_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_12));
		}
		LA74_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		{
			if (!((IL64(1125900835880960) &((NU64)1<<((NU)((*x).kind)&63U)))!=0)) goto LA82_;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA80_;
		LA82_: ;
		{
			globalError_GarD0CQJ5aQhoHekHYinVQ_2((*n).info, ((NimStringDesc*) &TM_gkmEeaIyT0wHpJzs9ciIEJg_13));
		}
		LA80_: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit000)(void) {
}
