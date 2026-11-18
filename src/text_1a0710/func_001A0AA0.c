/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001A0AA0_0;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001A0AA0_1;

typedef struct {
    u8 pad_00[12];
    s32 unk_0C;
} unk_func_001A0AA0_2;

unk_func_001A0AA0_1 *HIE_fn_hGetSuperObjectObject(s32);
void func_00155810(unk_func_001A0AA0_0 *, s32, unk_func_001A0AA0_0 *);
void func_00155E80(s32, unk_func_001A0AA0_0 *);
void func_00155EC0(s32, unk_func_001A0AA0_0 *);
u8 func_0015A7C0(s32);
s32 func_001979A0(s32);
s32 func_001979C0(s32);
void func_001AFC20(s32, f32);
void func_001AFF80(s32, f32);
unk_func_001A0AA0_2 *func_001B84B0(s32);
extern f32 D_0035F524;
extern s32 D_005AB6C4[];
extern s32 D_005AB6C8[];
extern s32 D_005AB6CC[];
extern s32 D_005AB6D0[];
extern s32 D_005AB6D4[];
extern s32 D_005AB6D8[];
extern s32 D_005AB6DC[];
extern s32 D_005AB6E0[];
extern s32 D_005AB6E4[];
extern s32 D_005AB6E8[];
extern s32 D_005AB6EC[];
extern s32 D_005AB6F0[];

u8 func_001A0AA0(s32 arg0) {
    unk_func_001A0AA0_0 sp30;
    unk_func_001A0AA0_0 sp40;
    unk_func_001A0AA0_0 sp50;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    u8 temp_s0;
    s32 temp_s1;

    sp6C = 0.15f;
    temp_s0 = 1;
    sp64 = 0.0f;
    sp60 = 0.0f;
    sp50.unk_00 = 0.0f;
    sp50.unk_04 = 0.0f;
    sp50.unk_08 = 0.0f;
    sp68 = D_0035F524;
    if (func_0015A7C0(D_005AB6EC[0]) == 1) {
        sp6C *= 2.0f;
        sp68 = 2.0f * D_0035F524;
    } else if (func_0015A7C0(D_005AB6F0[0]) == 1) {
        sp6C /= 2.0f;
        sp68 = D_0035F524 / 2.0f;
    }
    if (func_0015A7C0(D_005AB6C4[0]) == 1) {
        sp40.unk_00 = 0.0f;
        sp40.unk_04 = -sp68;
        sp40.unk_08 = 0.0f;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    if (func_0015A7C0(D_005AB6C8[0]) == 1) {
        sp40.unk_00 = 0.0f;
        sp40.unk_04 = sp68;
        sp40.unk_08 = 0.0f;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    if (func_0015A7C0(D_005AB6E4[0]) == 1) {
        sp40.unk_00 = sp68;
        sp40.unk_04 = 0.0f;
        sp40.unk_08 = 0.0f;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    if (func_0015A7C0(D_005AB6E8[0]) == 1) {
        sp40.unk_00 = -sp68;
        sp40.unk_04 = 0.0f;
        sp40.unk_08 = 0.0f;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    if (func_0015A7C0(D_005AB6D4[0]) == 1) {
        sp64 += sp6C;
    }
    if (func_0015A7C0(D_005AB6D8[0]) == 1) {
        sp64 -= sp6C;
    }
    if (func_0015A7C0(D_005AB6DC[0]) == 1) {
        sp60 += sp6C;
    }
    if (func_0015A7C0(D_005AB6E0[0]) == 1) {
        sp60 -= sp6C;
    }
    if (func_0015A7C0(D_005AB6D0[0]) == 1) {
        sp40.unk_00 = 0.0f;
        sp40.unk_04 = 0.0f;
        sp40.unk_08 = -sp68;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    if (func_0015A7C0(D_005AB6CC[0]) == 1) {
        sp40.unk_00 = 0.0f;
        sp40.unk_04 = 0.0f;
        sp40.unk_08 = sp68;
        sp50.unk_00 = sp40.unk_00 + sp50.unk_00;
        sp50.unk_04 = sp40.unk_04 + sp50.unk_04;
        sp50.unk_08 = sp40.unk_08 + sp50.unk_08;
    }
    func_001AFF80(func_001979A0(arg0), sp64);
    func_001AFC20(func_001979A0(arg0), sp60);
    func_00155EC0(func_001979A0(arg0), &sp30);
    func_00155810(&sp50, func_001979A0(arg0), &sp50);
    sp30.unk_00 += sp50.unk_00;
    sp30.unk_04 += sp50.unk_04;
    sp30.unk_08 += sp50.unk_08;
    func_00155E80(func_001979A0(arg0), &sp30);
    func_00155E80(func_001979C0(arg0), &sp30);
    temp_s1 = (func_001B84B0(HIE_fn_hGetSuperObjectObject(arg0)->unk_08)->unk_0C |= 0x80);
    func_001B84B0(HIE_fn_hGetSuperObjectObject(arg0)->unk_08)->unk_0C = temp_s1;
    return temp_s0;
}
