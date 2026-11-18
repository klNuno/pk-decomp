/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001F4BF0_0;

typedef struct {
    u8 pad_00[0x28];
    unk_001F4BF0_0 unk_28;
} unk_001F4BF0_1;

typedef struct {
    unk_001F4BF0_0 unk_00;
    u8 pad_0C[0x5C];
    void *unk_68;
    void *unk_6C;
    u8 pad_70[2];
    u16 unk_72;
} unk_001F4BF0_2;

typedef struct {
    u8 pad_00[8];
    unk_001F4BF0_1 *unk_08;
    unk_001F4BF0_2 *unk_0C;
    u8 pad_10[0x40];
    unk_001F4BF0_0 unk_50;
    u8 pad_5C[0x44];
    unk_001F4BF0_0 unk_A0;
} unk_001F4BF0_3;

s32 func_001B4C90(unk_001F4BF0_2 *);
void **HIE_fn_hGetSuperObjectObject(void *);
void *func_0019C730(void *);
void *func_001ACF40(void *, u16);
void *func_001979C0(void *);
void func_001553C0(unk_001F4BF0_0 *, void *, unk_001F4BF0_0 *);

void func_001F4BF0(unk_001F4BF0_3 *arg0)
{
    unk_001F4BF0_0 temp;
    void *unk_00;
    u8 unk_04;

    if (arg0->unk_0C->unk_72 & 0x1000) {
        ((s32 *)&arg0->unk_A0)[0] = ((s32 *)&arg0->unk_08->unk_28)[0];
        ((s32 *)&arg0->unk_A0)[1] = ((s32 *)&arg0->unk_08->unk_28)[1];
        ((s32 *)&arg0->unk_A0)[2] = ((s32 *)&arg0->unk_08->unk_28)[2];
    } else if (!arg0->unk_0C->unk_68) {
        arg0->unk_A0.unk_08 = arg0->unk_A0.unk_04 = arg0->unk_A0.unk_00 = 0.0f;
    } else if (arg0->unk_0C->unk_6C) {
        ((s32 *)&arg0->unk_A0)[0] = ((s32 *)&arg0->unk_50)[0];
        ((s32 *)&arg0->unk_A0)[1] = ((s32 *)&arg0->unk_50)[1];
        ((s32 *)&arg0->unk_A0)[2] = ((s32 *)&arg0->unk_50)[2];
    } else {
        unk_00 = arg0->unk_0C->unk_68;
        if ((unk_04 = (u8)func_001B4C90(arg0->unk_0C)) != 0xFF) {
            unk_00 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(unk_00)), (u16)(u32)unk_04);
        }
        ((s32 *)&temp)[0] = ((s32 *)&arg0->unk_0C->unk_00)[0];
        ((s32 *)&temp)[1] = ((s32 *)&arg0->unk_0C->unk_00)[1];
        ((s32 *)&temp)[2] = ((s32 *)&arg0->unk_0C->unk_00)[2];
        func_001553C0(&temp, func_001979C0(unk_00), &temp);
        arg0->unk_A0.unk_00 = arg0->unk_50.unk_00 + temp.unk_00;
        arg0->unk_A0.unk_04 = arg0->unk_50.unk_04 + temp.unk_04;
        arg0->unk_A0.unk_08 = arg0->unk_50.unk_08 + temp.unk_08;
        arg0->unk_A0.unk_00 = arg0->unk_50.unk_00 + temp.unk_00;
        arg0->unk_A0.unk_04 = arg0->unk_50.unk_04 + temp.unk_04;
        arg0->unk_A0.unk_08 = arg0->unk_50.unk_08 + temp.unk_08;
    }
}
