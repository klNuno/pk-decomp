/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00[3];
} unk_func_001F3630_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F3630_1;

typedef struct {
    u8 pad_00[0x20];
    u32 unk_20;
} unk_func_001F3630_2;

typedef struct {
    u8 pad_00[4];
    unk_func_001F3630_2 *unk_04;
    u8 pad_08[8];
    void *unk_10;
} unk_func_001F3630_3;

extern u32 D_005AB800[];

unk_func_001F3630_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001E6A60(s32, s32);
unk_func_001F3630_0 *func_001E6EC0(s32, s32);
void func_001E6D30(s32, s32, unk_func_001F3630_0 *);
void func_001F2180(s32, unk_func_001F3630_0 *, unk_func_001F3630_0 *, unk_func_001F3630_0 *, s32, s32);
void func_001FD930(s32, unk_func_001F3630_0 *, unk_func_001F3630_1 *);

s32 func_001F3630(s32 arg0)
{
    unk_func_001F3630_0 sp40;
    unk_func_001F3630_1 sp50;
    unk_func_001F3630_0 sp60;
    void *temp;
    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    if (D_005AB800[0] >= (u32)(func_001E6A60(5, arg0) + func_001E6A60(3, arg0))) {
        sp50.unk_00 = 0.0f;
        sp50.unk_04 = 0.0f;
        sp50.unk_08 = 1.0f;
        func_001FD930(arg0, func_001E6EC0(2, arg0), &sp50);
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= ~0x8000u;
        return 4;
    }
    (*(s32 (*)[3])&sp60)[0] = func_001E6EC0(0, arg0)->unk_00[0];
    (*(s32 (*)[3])&sp60)[1] = func_001E6EC0(0, arg0)->unk_00[1];
    (*(s32 (*)[3])&sp60)[2] = func_001E6EC0(0, arg0)->unk_00[2];
    (*(s32 (*)[3])&sp40)[0] = func_001E6EC0(2, arg0)->unk_00[0];
    (*(s32 (*)[3])&sp40)[1] = func_001E6EC0(2, arg0)->unk_00[1];
    (*(s32 (*)[3])&sp40)[2] = func_001E6EC0(2, arg0)->unk_00[2];
    func_001F2180(arg0, func_001E6EC0(1, arg0), &sp40, &sp60, func_001E6A60(3, arg0), func_001E6A60(4, arg0));
    sp50.unk_00 = 0.0f;
    sp50.unk_04 = 0.0f;
    sp50.unk_08 = 1.0f;
    func_001FD930(arg0, &sp40, &sp50);
    func_001E6D30(0, arg0, &sp40);
    return 1;
}
