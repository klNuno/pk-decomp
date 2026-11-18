#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
} unk_func_002CBA60_0;

typedef struct {
    u8 pad_00[0x1C];
    f32 unk_1C;
    u8 pad_20[0x10];
    u8 unk_30[0x10];
} unk_func_002CBA60_1;

typedef struct {
    u8 pad_00[0x174];
    u32 unk_174;
    u8 pad_178[0x56A6];
    u8 unk_581E;
    u8 unk_581F;
    u8 pad_5820[0x20];
    u8 unk_5840[0x390];
    u8 unk_5BD0[0x20];
    unk_func_002CBA60_1 unk_5BF0;
    u8 pad_5C30[0x64];
    s32 unk_5C94;
    u8 pad_5C98[0xEEC];
    u32 *unk_6B84;
    u8 pad_6B88[0x44];
    unk_func_002CBA60_0 *unk_6BCC;
    void *unk_6BD0;
} unk_func_002CBA60_2;

void func_001019F0(void *, void *);
void func_00101B10(void *, void *, void *);
void func_00101B40(void *, void *, void *);
void func_00101BA0(void *, const void *);
extern f32 D_003416C0[];

void func_002CBA60(unk_func_002CBA60_2 *arg0) {
    u32 sp90[4];
    u32 spA0[4];
    u32 spB0[4];
    unk_func_002CBA60_1 *temp0;
    u32 *temp1;
    s32 i;
    u8 *temp3;
    s32 temp4;
    unk_func_002CBA60_0 *temp6;
    u32 temp7;
    s32 temp8;
    u8 *temp9;
    s32 temp11;
    s32 j;
    u8 *temp10;

    temp7 = arg0->unk_174;
    temp1 = arg0->unk_6B84;
    arg0->unk_581E = 0;
    arg0->unk_581F = 0;
    temp0 = &arg0->unk_5BF0;
    if (arg0->unk_174 & 0x200) {
        temp8 = arg0->unk_5C94;
        temp3 = arg0->unk_5840;
        if (temp8 == 0x1200 || temp8 == 0x1602) {
            func_00101BA0(arg0->unk_6BCC, arg0->unk_5BD0);
            func_00101BA0(arg0->unk_6BD0, temp0->unk_30);
        } else {
            func_00101B40(arg0->unk_6BCC, arg0->unk_5BD0, temp0);
            if (arg0->unk_5C94 != 0x1600) {
                temp6 = arg0->unk_6BCC;
                func_00101B10(temp6, temp0->unk_30, temp6);
            }
        }
        for (i = 0, temp4 = 0; i < 4; i++, temp3 += 0x70, temp4 += 0x10) {
            if (temp7 & (1U << i)) {
                temp8 = arg0->unk_5C94;
                if (temp8 == 0x1200 || temp8 == 0x1602) {
                    temp6 = arg0->unk_6BCC;
                    func_00101B10(temp6, temp3, temp6);
                } else {
                    temp6 = arg0->unk_6BCC;
                    func_00101B40(sp90, temp3, temp0);
                    func_00101B10(temp6, sp90, temp6);
                }
                temp8 = arg0->unk_5C94;
                if (temp8 == 0x1201 || temp8 == 0x1602) {
                    func_00101BA0((u8 *)temp1 + temp4 + 0x10, temp3 + 0x10);
                } else {
                    func_00101B40((u8 *)temp1 + temp4 + 0x10, (u8 *)temp0 + 0x10, temp3 + 0x10);
                }
                func_00101BA0((u8 *)temp1 + temp4 + 0x50, temp3 + 0x30);
            } else {
                temp10 = (u8 *)temp1 + temp4;
                func_00101BA0(temp10 + 0x10, D_003416C0);
                func_00101BA0(temp10 + 0x50, D_003416C0);
            }
        }
    } else {
        temp6 = arg0->unk_6BCC;
        temp9 = arg0->unk_5840;
        func_00101B40(spA0, arg0->unk_5BD0, temp0);
        func_00101B10(temp6, spA0, temp0->unk_30);
        for (j = 0, temp11 = 0; j < 4; j++, temp9 += 0x70, temp11 += 0x10) {
            if (temp7 & (1U << j)) {
                temp6 = arg0->unk_6BCC;
                func_00101B40(spB0, temp0, temp9);
                func_00101B10(temp6, spB0, temp6);
                temp10 = (u8 *)temp1 + temp11;
                func_00101B40(temp10 + 0x10, (u8 *)temp0 + 0x10, temp9 + 0x10);
                func_00101BA0(temp10 + 0x50, temp9 + 0x30);
            } else {
                temp10 = (u8 *)temp1 + temp11;
                func_00101BA0(temp10 + 0x50, D_003416C0);
                func_00101BA0(temp10 + 0x10, D_003416C0);
            }
        }
    }
    arg0->unk_6BCC->unk_0C = temp0->unk_1C;
    func_001019F0(temp1 + 0x14, temp1 + 0x14);
    temp1[1] = 0;
    temp1[0] = 0;
    temp1[2] = 0x01000404;
    temp1[3] = 0x6C08000C;
    arg0->unk_6B84 += 0x24;
}
