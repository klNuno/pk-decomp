/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F4730_0;

typedef struct {
    u8 pad_00[0x74];
    u8 unk_74;
} unk_func_001F4730_1;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C[3];
    u8 pad_18[0x5A];
    u16 unk_72;
} unk_func_001F4730_2;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001F4730_1 *unk_08;
    unk_func_001F4730_2 *unk_0C;
} unk_func_001F4730_3;

s32 func_001B4C90(unk_func_001F4730_2 *);
s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0019C730(s32);
s32 func_001ACF40(s32, s32);
s32 func_001979C0(s32);
void func_00155EC0(s32, unk_func_001F4730_0 *);
void func_001B5980(unk_func_001F4730_1 *, f32, unk_func_001F4730_0 *);
void func_001553C0(f32 *, s32, f32 *);
extern f32 D_005AD8B8[];

void func_001F4730(unk_func_001F4730_3 *arg0, s32 arg1, unk_func_001F4730_0 *arg2, unk_func_001F4730_0 *arg3) {
    u8 temp;
    f32 vec[3];

    if (arg1 == 0) {
        arg2->unk_08 = arg2->unk_04 = arg2->unk_00 = 0.0f;
        arg3->unk_08 = arg3->unk_04 = arg3->unk_00 = 0.0f;
        return;
    }
    temp = (u8)func_001B4C90(arg0->unk_0C);
    if (temp != 0xFF) {
        arg1 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg1)), (u16)temp);
    }
    func_00155EC0(func_001979C0(arg1), arg3);
    if ((arg0->unk_08->unk_74 & 2) || (arg0->unk_0C->unk_72 & 2) || (temp == 0xFF && HIE_fn_hGetSuperObjectObject(arg1)[2] == 0) || temp != 0xFF) {
        ((s32 *)arg2)[0] = ((s32 *)arg3)[0];
        ((s32 *)arg2)[1] = ((s32 *)arg3)[1];
        ((s32 *)arg2)[2] = ((s32 *)arg3)[2];
    } else {
        func_001B5980(arg0->unk_08, D_005AD8B8[0], arg2);
    }
    ((s32 *)vec)[0] = ((s32 *)arg0->unk_0C->unk_0C)[0];
    ((s32 *)vec)[1] = ((s32 *)arg0->unk_0C->unk_0C)[1];
    ((s32 *)vec)[2] = ((s32 *)arg0->unk_0C->unk_0C)[2];
    func_001553C0(vec, func_001979C0(arg1), vec);
    arg2->unk_00 = arg2->unk_00 + vec[0];
    arg2->unk_04 = arg2->unk_04 + vec[1];
    arg2->unk_08 = arg2->unk_08 + vec[2];
    arg3->unk_00 = arg3->unk_00 + vec[0];
    arg3->unk_04 = arg3->unk_04 + vec[1];
    arg3->unk_08 = arg3->unk_08 + vec[2];
}
