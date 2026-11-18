/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F3160_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F3160_0;

typedef struct unk_func_001F3160_1 {
    u8 pad_00[0x20];
    u32 unk_20;
} unk_func_001F3160_1;

typedef struct unk_func_001F3160_2 {
    u8 pad_00[4];
    unk_func_001F3160_1 *unk_04;
    u8 pad_08[8];
    s32 unk_10;
} unk_func_001F3160_2;

extern u32 D_005AB800[];
unk_func_001F3160_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_00155EC0(void *, unk_func_001F3160_0 *);
void *func_001979C0(s32);
s32 func_001E6A60(s32, s32);
unk_func_001F3160_0 *func_001E6EC0(u8, s32);
void func_001F2180(s32, void *, unk_func_001F3160_0 *, unk_func_001F3160_0 *, u32, u32);
void func_001FD890(s32, unk_func_001F3160_0 *);
void func_001FD930(s32, unk_func_001F3160_0 *, unk_func_001F3160_0 *);

s32 func_001F3160(s32 arg0) {
    s32 temp;
    unk_func_001F3160_0 sp50;
    unk_func_001F3160_0 sp60;
    unk_func_001F3160_0 sp70;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    if (D_005AB800[0] >= (u32)(func_001E6A60(5, arg0) + func_001E6A60(3, arg0))) {
        func_001FD890(arg0, func_001E6EC0(1, arg0));
        sp60.unk_00 = func_001E6EC0(2, arg0)->unk_00 - func_001E6EC0(0, arg0)->unk_00;
        sp60.unk_04 = func_001E6EC0(2, arg0)->unk_04 - func_001E6EC0(0, arg0)->unk_04;
        sp60.unk_08 = func_001E6EC0(2, arg0)->unk_08 - func_001E6EC0(0, arg0)->unk_08;
        sp60.unk_00 += func_001E6EC0(1, arg0)->unk_00;
        sp60.unk_04 += func_001E6EC0(1, arg0)->unk_04;
        sp60.unk_08 += func_001E6EC0(1, arg0)->unk_08;
        sp50.unk_00 = 0.0f;
        sp50.unk_04 = 0.0f;
        sp50.unk_08 = 1.0f;
        func_001FD930(arg0, &sp60, &sp50);
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= 0xFFFF7FFF;
        return 4;
    }

    func_00155EC0((void *)func_001979C0(arg0), &sp70);
    ((s32 *)&sp50)[0] = ((s32 *)func_001E6EC0(1, arg0))[0];
    ((s32 *)&sp50)[1] = ((s32 *)func_001E6EC0(1, arg0))[1];
    ((s32 *)&sp50)[2] = ((s32 *)func_001E6EC0(1, arg0))[2];
    func_001F2180(arg0, (void *)func_001E6EC0(0, arg0), &sp50, &sp70,
                  (u32)func_001E6A60(3, arg0), (u32)func_001E6A60(4, arg0));
    func_001FD890(arg0, &sp50);
    sp60.unk_00 = func_001E6EC0(2, arg0)->unk_00 - func_001E6EC0(0, arg0)->unk_00;
    sp60.unk_04 = func_001E6EC0(2, arg0)->unk_04 - func_001E6EC0(0, arg0)->unk_04;
    sp60.unk_08 = func_001E6EC0(2, arg0)->unk_08 - func_001E6EC0(0, arg0)->unk_08;
    sp60.unk_00 += sp50.unk_00;
    sp60.unk_04 += sp50.unk_04;
    sp60.unk_08 += sp50.unk_08;
    sp50.unk_00 = 0.0f;
    sp50.unk_04 = 0.0f;
    sp50.unk_08 = 1.0f;
    func_001FD930(arg0, &sp60, &sp50);
    return 1;
}
