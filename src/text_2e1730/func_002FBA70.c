#include "common.h"

typedef struct unk_func_002FBA70_1 {
    u8 unk_00;
} unk_func_002FBA70_1;

typedef struct unk_func_002FBA70_0 {
    void *unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 unk_24;
    u8 pad_25[0x3];
    u8 unk_28[0x8];
    u8 unk_30;
    u8 pad_31[0x3];
    u8 unk_34[0x10];
    u8 unk_44;
    u8 unk_45;
    u8 pad_46[0x2];
    u8 unk_48[0x4];
} unk_func_002FBA70_0;

extern u8 D_0035EA30[];
void func_002F21B0(unk_func_002FBA70_0 *);
void func_002F52E0(u8 *);
void func_002FC140(u8 *, unk_func_002FBA70_1 *, s32 *);
void func_002FBB30(s32 *, s32);
void func_002FBC20(u8 *);

unk_func_002FBA70_0 *func_002FBA70(unk_func_002FBA70_0 *volatile arg0) {
    unk_func_002FBA70_1 a;
    s32 alloc;
    unk_func_002FBA70_1 b;

    func_002F21B0(arg0);
    arg0->unk_00 = D_0035EA30;
    arg0->unk_18 = 0;
    arg0->unk_1C = 1.0f;
    arg0->unk_20 = 0.5f;
    arg0->unk_24 = 0;
    func_002F52E0(arg0->unk_28);
    arg0->unk_30 = 0;
    b = a;
    func_002FC140(arg0->unk_34, &b, &alloc);
    func_002FBB30(&alloc, -1);
    arg0->unk_44 = 1;
    arg0->unk_45 = 1;
    func_002FBC20(arg0->unk_48);
    return arg0;
}
