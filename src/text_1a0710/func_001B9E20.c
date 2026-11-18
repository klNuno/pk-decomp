/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B9E20_0;

typedef struct {
    u8 pad_00[0x60];
} unk_func_001B9E20_1;

typedef struct {
    u8 pad_00[0x30];
    void *unk_30;
} unk_func_001B9E20_2;

typedef struct {
    u8 pad_00[0x1C];
    unk_func_001B9E20_2 *unk_1C;
} unk_func_001B9E20_3;

extern unk_func_001B9E20_3 *HIE_fn_hGetSuperObjectObject(void *);
extern void func_00155C70(unk_func_001B9E20_1 *);
extern void func_00155E80(unk_func_001B9E20_1 *, const unk_func_001B9E20_0 *);
extern void func_00155EC0(const unk_func_001B9E20_1 *, unk_func_001B9E20_0 *);
extern void func_00155FA0(unk_func_001B9E20_1 *, unk_func_001B9E20_1 *);
extern void func_00165700(void *, f32, f32);
extern void func_00165710(void *, const unk_func_001B9E20_1 *);
extern void func_001940E0(void *, const unk_func_001B9E20_0 *, s32);
extern s32 func_001971C0(void *);
extern unk_func_001B9E20_1 *func_001979C0(void *);
extern void func_001AFC20(unk_func_001B9E20_1 *, f32);
extern void func_001AFDD0(unk_func_001B9E20_1 *, f32);
extern void func_001AFF80(unk_func_001B9E20_1 *, f32);
extern f32 func_001B8660(unk_func_001B9E20_2 *);
extern f32 func_001B86E0(unk_func_001B9E20_2 *);
extern void func_001B8700(unk_func_001B9E20_2 *, f32);
extern f32 func_001B8730(unk_func_001B9E20_2 *);
extern f32 func_001B8750(unk_func_001B9E20_2 *);
extern void func_001B8770(unk_func_001B9E20_2 *, f32);
extern f32 func_001B87A0(unk_func_001B9E20_2 *);
extern s32 func_001B97E0(unk_func_001B9E20_2 *);
extern void *func_001B9A50(unk_func_001B9E20_2 *);
extern s32 func_001B9B50(unk_func_001B9E20_2 *);
extern s32 func_001B9BC0(unk_func_001B9E20_2 *);
extern unk_func_001B9E20_0 *func_001B9BE0(unk_func_001B9E20_2 *);
extern void func_001B9C00(unk_func_001B9E20_2 *, f32 *, f32 *, f32 *);
extern f32 func_001B9C50(void *);
extern void *memcpy(void *, const void *, u32);
extern f32 D_0035F564;
extern u8 D_0035FFC0;
extern f32 D_0035FFC4;
extern f32 D_0035FFC8;
extern f32 D_0035FFCC;

#define UNK_1C(arg) \
    ((func_001971C0(arg) != 2 ? (unk_func_001B9E20_3 *)0 : HIE_fn_hGetSuperObjectObject(arg))->unk_1C)

void func_001B9E20(void *arg0) {
    unk_func_001B9E20_1 spA0;
    unk_func_001B9E20_1 sp100;
    unk_func_001B9E20_1 sp160;
    unk_func_001B9E20_0 sp1C0;
    unk_func_001B9E20_0 sp1D0;
    unk_func_001B9E20_0 sp1E0;
    unk_func_001B9E20_1 *sp1F0;
    f32 sp1F4;

    if (UNK_1C(arg0) != NULL && func_001B97E0(UNK_1C(arg0))) {
        sp1F4 = func_001B9C50(arg0);
        sp1F0 = func_001979C0(arg0);
        func_00155FA0(&spA0, sp1F0);
        memcpy(&sp1E0, (const void *)func_001B9BE0(UNK_1C(arg0)), sizeof(sp1E0));
        func_00155C70(&sp100);
        func_00155E80(&sp100, &sp1E0);
        func_001AFF80(&sp100, sp1F4);
        func_00155EC0(&sp100, &sp1E0);
        func_00155EC0(sp1F0, &sp1D0);
        sp1D0.unk_00 += sp1E0.unk_00;
        sp1D0.unk_04 += sp1E0.unk_04;
        sp1D0.unk_08 += sp1E0.unk_08;
        func_001B9C00(UNK_1C(arg0), &D_0035FFC4, &D_0035FFC8, &D_0035FFCC);
        func_001AFF80(&spA0, D_0035FFCC);
        func_001AFC20(&spA0, D_0035FFC4);
        if (D_0035FFC8) {
            func_001AFDD0(&spA0, D_0035FFC8);
        }
        func_00155E80(&spA0, &sp1D0);
        if (D_0035FFC0) {
            sp1C0.unk_00 = -1.0f;
            sp1C0.unk_04 = 0.0f;
            sp1C0.unk_08 = 0.0f;
            func_00155C70(&sp160);
            func_00155E80(&sp160, &sp1C0);
            func_001AFC20(&sp160, D_0035FFC4);
            func_001AFDD0(&sp160, D_0035FFC8);
            func_001AFF80(&sp160, D_0035FFCC);
        }
        if (func_001B9B50(UNK_1C(arg0))) {
            D_0035FFC8 = func_001B8730(UNK_1C(arg0));
            func_001AFF80(&spA0, D_0035FFC8);
            if (D_0035FFC0) {
                func_001AFF80(&sp160, D_0035FFC8);
            }
            func_00155E80(&spA0, &sp1D0);
            D_0035FFC8 += func_001B86E0(UNK_1C(arg0));
            if (!(D_0035FFC8 <= 6.2831855f)) {
                D_0035FFC8 = 0.0f;
            }
            func_001B8700(UNK_1C(arg0), D_0035FFC8);
        }
        if (func_001B9BC0(UNK_1C(arg0))) {
            D_0035FFC4 = func_001B8660(UNK_1C(arg0));
            D_0035F564 = func_001B8750(UNK_1C(arg0));
            D_0035FFC4 += D_0035F564;
            if (!(D_0035FFC4 <= func_001B87A0(UNK_1C(arg0))) || D_0035FFC4 < 0.0f) {
                D_0035F564 = -D_0035F564;
                D_0035FFC4 += 2.0f * D_0035F564;
            }
            func_001B8770(UNK_1C(arg0), D_0035F564);
            func_00165700(func_001B9A50(UNK_1C(arg0)), 0.0f, D_0035FFC4);
        }
        func_00165710(func_001B9A50(UNK_1C(arg0)), &spA0);
        if (D_0035FFC0) {
            func_00155EC0(&sp160, &sp1C0);
            sp1C0.unk_00 += func_001B9BE0(UNK_1C(arg0))->unk_00;
            sp1C0.unk_04 += func_001B9BE0(UNK_1C(arg0))->unk_04;
            sp1C0.unk_08 += func_001B9BE0(UNK_1C(arg0))->unk_08;
            func_001940E0(UNK_1C(arg0)->unk_30, &sp1C0, 1);
        }
    }
}
