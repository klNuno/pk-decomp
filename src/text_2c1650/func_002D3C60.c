#include "common.h"

typedef struct unk_func_002D3C60_0 {
    s32 unk_00;
    void *unk_04;
} unk_func_002D3C60_0;

void func_002CDB60();
void *func_00304C50();
void func_002D3D50();
void func_002CD300();
void func_002CDC10();
void func_002D40D0();
void c4sdk_malloc();
void func_002D0A20();

s32 func_002D3C60(u8 *arg0, s32 arg1) {
    u8 sp48[8];
    unk_func_002D3C60_0 sp50;
    s32 sp5C;
    u8 *sp60;
    s32 sp64;
    void *volatile sp68;
    s32 sp6C;
    void *p;
    s32 ret;

    func_002CDB60(&sp5C, arg1, &sp64);
    if ((p = func_00304C50(0x14)) != NULL) {
        sp68 = p;
        func_002D3D50(p);
        *(u8 **)((u8 *)sp68 + 0xC) = arg0 + 0x10;
        func_002CDB60((u8 *)sp68 + 0x10, arg1, &sp6C);
        func_002CD300(&sp6C, -1);
        p = sp68;
    }
    func_002CDC10(&sp50, &sp5C);
    sp50.unk_04 = p;
    func_002D40D0(sp48, arg0, &sp50);
    c4sdk_malloc(&sp50, 0);
    func_002D0A20(&sp60, arg0, &sp5C);
    ret = *(s32 *)(sp60 + 0x10);
    c4sdk_malloc(&sp5C, 0);
    return ret;
}
