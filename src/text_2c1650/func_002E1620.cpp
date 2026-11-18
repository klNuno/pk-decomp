#include "common.h"

class unk_func_002E1620_0 {
public:
    virtual s32 unk_vf08(s32);
};

class unk_func_002E1620_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24(s32);
};

typedef struct unk_func_002E1620_2 {
    u8 pad_00[4];
    unk_func_002E1620_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    s32 unk_1C;
    u8 pad_20[4];
    u8 *unk_24;
    u8 pad_28[0xC];
    unk_func_002E1620_1 *unk_34;
    s32 unk_38;
} unk_func_002E1620_2;

typedef struct unk_func_002E1620_3 {
    u8 pad_00[4];
} unk_func_002E1620_3;

extern "C" {
extern char D_0035B940[];

void func_002CDB60(unk_func_002E1620_3 *, char *, unk_func_002E1620_3 *);
void func_002DD020(unk_func_002E1620_2 *, unk_func_002E1620_3 *);
void c4sdk_malloc(unk_func_002E1620_3 *, s32);

void func_002E1620(unk_func_002E1620_2 *arg0) {
    s32 off;
    s32 val;
    u8 *base;

    arg0->unk_10 += 4;
    if (arg0->unk_10 & 3) {
        arg0->unk_10 += 4 - (arg0->unk_10 & 3);
    }
    base = arg0->unk_24;
    off = arg0->unk_10;
    if (*(s32 *)(base + off) == 0x11) {
        val = *(s32 *)(base + (off + 4));
        arg0->unk_10 = off + 8;
        val = arg0->unk_04->unk_vf08(arg0->unk_1C + val);
        arg0->unk_34->unk_vf24(arg0->unk_38);
        *(s32 *)(arg0->unk_18 + arg0->unk_0C) = val;
        arg0->unk_0C += 8;
    } else {
        unk_func_002E1620_3 str;
        unk_func_002E1620_3 alloc;

        func_002CDB60(&str, D_0035B940, &alloc);
        func_002DD020(arg0, &str);
        arg0->unk_10 += 8;
        c4sdk_malloc(&str, 0);
    }
}
}
