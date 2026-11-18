/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F2EF0_0;

typedef struct {
    u8 pad_00[0x20];
    u32 unk_20;
} unk_func_001F2EF0_1;

typedef struct {
    u8 pad_00[4];
    unk_func_001F2EF0_1 *unk_04;
    u8 pad_08[8];
    s32 unk_10;
} unk_func_001F2EF0_2;

extern u32 D_005AB800[];
unk_func_001F2EF0_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_00155EC0(void *, unk_func_001F2EF0_0 *);
void *func_001979C0(s32);
s32 func_001E6A60(s32, s32);
unk_func_001F2EF0_0 *func_001E6EC0(u8, s32);
void func_001F2180(s32, void *, unk_func_001F2EF0_0 *, unk_func_001F2EF0_0 *, u32, u32);
void func_001FD890(s32, unk_func_001F2EF0_0 *);
void func_001FD930(s32, void *, unk_func_001F2EF0_0 *);

s32 func_001F2EF0(s32 arg0) {
    s32 temp;
    unk_func_001F2EF0_0 unk_40;
    unk_func_001F2EF0_0 unk_50;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    if (D_005AB800[0] >= (u32)(func_001E6A60(5, arg0) + func_001E6A60(3, arg0))) {
        func_001FD890(arg0, func_001E6EC0(1, arg0));
        unk_40.unk_00 = 0.0f;
        unk_40.unk_04 = 0.0f;
        unk_40.unk_08 = 1.0f;
        func_001FD930(arg0, (void *)func_001E6EC0(2, arg0), &unk_40);
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= 0xFFFF7FFF;
        return 4;
    }

    func_00155EC0((void *)func_001979C0(arg0), &unk_50);
    ((s32 *)&unk_40)[0] = ((s32 *)func_001E6EC0(1, arg0))[0];
    ((s32 *)&unk_40)[1] = ((s32 *)func_001E6EC0(1, arg0))[1];
    ((s32 *)&unk_40)[2] = ((s32 *)func_001E6EC0(1, arg0))[2];
    func_001F2180(arg0, (void *)func_001E6EC0(0, arg0), &unk_40, &unk_50,
                  (u32)func_001E6A60(3, arg0), (u32)func_001E6A60(4, arg0));
    func_001FD890(arg0, &unk_40);
    unk_40.unk_00 = 0.0f;
    unk_40.unk_04 = 0.0f;
    unk_40.unk_08 = 1.0f;
    func_001FD930(arg0, (void *)func_001E6EC0(2, arg0), &unk_40);
    return 1;
}
