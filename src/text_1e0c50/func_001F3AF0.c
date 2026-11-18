/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F3AF0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} unk_func_001F3AF0_0;

typedef struct unk_func_001F3AF0_1 {
    u8 pad_00[0x20];
    u32 unk_20;
} unk_func_001F3AF0_1;

typedef struct unk_func_001F3AF0_2 {
    u8 pad_00[4];
    unk_func_001F3AF0_1 *unk_04;
    u8 pad_08[8];
    s32 unk_10;
} unk_func_001F3AF0_2;

unk_func_001F3AF0_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_00150060(s32, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *);
void func_00155EC0(s32, unk_func_001F3AF0_0 *);
s32 func_001979C0(s32);
f32 func_001E66A0(s32, s32);
s32 func_001E6A60(s32, s32);
unk_func_001F3AF0_0 *func_001E6EC0(s32, s32);
void func_001F2580(s32, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *, f32, s32, s32);
void func_001FD890(s32, unk_func_001F3AF0_0 *);
void func_001FD930(s32, unk_func_001F3AF0_0 *, unk_func_001F3AF0_0 *);
extern u32 D_005AB800[];

s32 func_001F3AF0(s32 arg0) {
    s32 s0;
    s32 s1;
    unk_func_001F3AF0_0 sp60;
    unk_func_001F3AF0_0 sp70;
    unk_func_001F3AF0_0 sp80;

    s1 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    if (D_005AB800[0] >= func_001E6A60(5, arg0) + func_001E6A60(3, arg0)) {
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= ~0x8000;
        return 4;
    }
    func_00155EC0(func_001979C0(arg0), &sp70);
    s0 = func_001979C0(arg0);
    func_00150060(s0, &sp80, &sp60, &sp60);
    ((s32 *)&sp60)[0] = ((s32 *)func_001E6EC0(0, arg0))[0];
    ((s32 *)&sp60)[1] = ((s32 *)func_001E6EC0(0, arg0))[1];
    ((s32 *)&sp60)[2] = ((s32 *)func_001E6EC0(0, arg0))[2];
    func_001F2580(arg0, &sp60, func_001E6EC0(1, arg0), &sp80, &sp70, func_001E66A0(2, arg0), func_001E6A60(3, arg0), func_001E6A60(4, arg0));
    func_001FD890(arg0, &sp60);
    sp60.unk_00 = 0.0f;
    sp60.unk_04 = 0.0f;
    sp60.unk_08 = 1.0f;
    func_001FD930(arg0, func_001E6EC0(1, arg0), &sp60);
    return 1;
}
