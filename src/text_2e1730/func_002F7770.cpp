#include "common.h"

class unk_func_002F7770_2 {
public:
    virtual void unk_08(void *, s32, s32);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48(u8);
};

typedef struct unk_func_002F7770_0 {
    u8 pad_00[0x24];
    u8 unk_24;
    u8 pad_25[0x23];
    u8 unk_48[8];
    void *unk_50;
    unk_func_002F7770_2 *unk_54;
} unk_func_002F7770_0;

typedef struct unk_func_002F7770_5 {
    u8 pad_00[2];
    u16 unk_02;
    s32 unk_04;
} unk_func_002F7770_5;

class unk_func_002F7770_4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    u8 pad_04[0x28];
    unk_func_002F7770_5 *unk_2C;
    u8 pad_30[8];
    unk_func_002F7770_2 *unk_38;
};

typedef struct unk_func_002F7770_7 {
    u8 pad_00[0x20];
} unk_func_002F7770_7;

extern "C" {
s32 func_002F7B50(void *);
unk_func_002F7770_4 *func_002FAB40(s32);
void *func_002D2BC0(s32);
s32 func_002F6850(unk_func_002F7770_4 *);
s32 func_002F6860(unk_func_002F7770_4 *);
unk_func_002F7770_2 *func_00306080(void *, s32, u16, s32, u8);
void func_0030AB00(unk_func_002F7770_7 *, s32, s32, s32);
void *func_00304C50(s32);
void *func_00305A20(void *, s32);
void func_00305DA0(unk_func_002F7770_2 *);
void func_00304B00(void *);
void func_0030AA20(unk_func_002F7770_7 *, s32);

}

extern "C" void func_002F7770(unk_func_002F7770_0 *arg0) {
    unk_func_002F7770_4 *res;
    void *mem;
    unk_func_002F7770_5 *info;
    unk_func_002F7770_7 sp50;
    void *obj;

    res = func_002FAB40(func_002F7B50(arg0->unk_48));
    arg0->unk_54 = res->unk_38;
    if (arg0->unk_54 != NULL) {
        res->unk_38 = 0;
        arg0->unk_54->unk_48(arg0->unk_24);
        return;
    }
    mem = func_002D2BC0(0x14);
    if (mem != NULL) {
        info = res->unk_2C;
        mem = func_00306080(mem, func_002F6860(res), info->unk_02, info->unk_04, arg0->unk_24);
    }
    arg0->unk_54 = (unk_func_002F7770_2 *)mem;
    func_0030AB00(&sp50, 1, func_002F6850(res), func_002F6860(res));
    obj = func_00304C50(0xC);
    if (obj != NULL) {
        obj = func_00305A20(obj, (s32)&sp50);
    }
    arg0->unk_50 = obj;
    arg0->unk_54->unk_08(arg0->unk_50, 0, 0);
    func_00305DA0(arg0->unk_54);
    res->unk_18();
    func_00304B00(arg0->unk_50);
    arg0->unk_50 = 0;
    func_0030AA20(&sp50, -1);
}
