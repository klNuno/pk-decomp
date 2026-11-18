/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F3D40_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001F3D40_0;

typedef struct unk_func_001F3D40_1 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_001F3D40_1;

typedef struct unk_func_001F3D40_2 {
    u8 pad_00[4];
    unk_func_001F3D40_1 *unk_04;
    u8 pad_08[8];
    s32 unk_10;
} unk_func_001F3D40_2;

typedef struct unk_func_001F3D40_3 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F3D40_3;

extern u32 D_005AB800[];

unk_func_001F3D40_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001E6A60(s32, s32);
s32 func_001979C0(s32);
void func_00155EC0(s32, unk_func_001F3D40_0 *);
void func_00150060(s32, unk_func_001F3D40_0 *, unk_func_001F3D40_0 *, unk_func_001F3D40_0 *);
unk_func_001F3D40_0 *func_001E6EC0(s32, s32);
f32 func_001E66A0(s32, s32);
void func_001F2580(s32, unk_func_001F3D40_0 *, unk_func_001F3D40_0 *, unk_func_001F3D40_0 *, unk_func_001F3D40_0 *, f32, s32, s32);
void func_001FD930(s32, unk_func_001F3D40_0 *, unk_func_001F3D40_3 *);
void func_001E6D30(s32, s32, unk_func_001F3D40_0 *);

s32 func_001F3D40(s32 arg0) {
    s32 obj;
    s32 unused;
    unk_func_001F3D40_0 sp60;
    unk_func_001F3D40_0 sp70;
    unk_func_001F3D40_3 sp80;
    unk_func_001F3D40_0 sp90;

    unused = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    if (D_005AB800[0] >= func_001E6A60(5, arg0) + func_001E6A60(3, arg0)) {
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= 0xFFFF7FFF;
        return 4;
    }
    func_00155EC0(func_001979C0(arg0), &sp60);
    obj = func_001979C0(arg0);
    func_00150060(obj, &sp70, &sp70, &sp90);
    ((unk_func_001F3D40_0 *)&sp70)->unk_00 = func_001E6EC0(1, arg0)->unk_00;
    ((unk_func_001F3D40_0 *)&sp70)->unk_04 = func_001E6EC0(1, arg0)->unk_04;
    ((unk_func_001F3D40_0 *)&sp70)->unk_08 = func_001E6EC0(1, arg0)->unk_08;
    func_001F2580(arg0, &sp70, &sp60, &sp90, func_001E6EC0(0, arg0), func_001E66A0(2, arg0), func_001E6A60(3, arg0), func_001E6A60(4, arg0));
    sp80.unk_00 = 0.0f;
    sp80.unk_04 = 0.0f;
    sp80.unk_08 = 1.0f;
    func_001FD930(arg0, &sp70, &sp80);
    func_001E6D30(0, arg0, &sp70);
    return 1;
}
