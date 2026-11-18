/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    u16 unk_08;
    u16 unk_0A;
} unk_001CA0A0_0;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_001CA0A0_1;

typedef struct {
    u8 pad_00[0x170];
    unk_001CA0A0_1 *unk_170;
} unk_001CA0A0_2;

typedef struct {
    u8 pad_00[0x164];
    unk_001CA0A0_2 *unk_164;
} unk_001CA0A0_3;

unk_001CA0A0_3 **HIE_fn_hGetSuperObjectObject(s32);
void func_00155EC0();
s32 func_001979C0(s32);
s32 func_0019C730(void *);
s32 func_001ACF40(s32, u16);
s32 func_001BFB20(s32);
void func_001BFB60(s32, s32);
void func_001C6520(s32);
u8 func_001CA3D0(unk_001CA0A0_0 *);
s32 func_001CA3F0(unk_001CA0A0_0 *);
u8 func_001CA450(unk_001CA0A0_0 *);
s32 func_001CA470(unk_001CA0A0_0 *);
void func_001D4A90(void *, u8, ...);
void func_002CFB70(s32, s32, s32, s32, s32, u8, s32);
extern s32 D_0035F538;
extern s32 D_0035F53C;

void func_001CA0A0(unk_001CA0A0_0 *arg0, s32 arg1, s32 arg2) {
    unk_001CA0A0_3 *temp0;
    s32 temp1;
    u8 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    u8 temp8;
    s32 temp9;
    s32 temp10;
    union { s32 unk_00; s8 unk_01; } temp11;
    struct { u32 unk_00[3]; } temp12;

    switch (func_001CA3D0(arg0)) {
    case 0:
        temp7 = arg2;
        if (arg0->unk_0A) {
            temp1 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg2)), arg0->unk_08);
            if (temp1 == 0) {
                temp1 = -1;
            }
        } else {
            temp1 = -1;
        }
        temp4 = D_0035F538;
        temp9 = func_001CA3F0(arg0);
        temp8 = func_001CA450(arg0);
        temp10 = 0;
        temp5 = func_001CA470(arg0);
        if (temp5 != -3) {
            temp4 = D_0035F53C;
        }
        func_002CFB70(temp5, temp7, temp1, temp4, temp9, temp8, temp10);
        break;
    case 2:
        temp0 = *HIE_fn_hGetSuperObjectObject(arg2);
        if (temp0->unk_164 != 0 && temp0->unk_164->unk_170 != 0) {
            temp0->unk_164->unk_170->unk_1C = func_001CA3F0(arg0);
        }
        break;
    case 3:
        temp11.unk_00 = func_001CA3F0(arg0);
        temp2 = (u8)(temp11.unk_01 & 0xFF);
        if (temp2 < 6) {
            break;
        }
        if (temp2 < 14) {
            temp6 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg2)), arg0->unk_08);
            if (temp6 != 0) {
                temp3 = func_001BFB20(arg2);
                if (!(temp3 & 2)) {
                    func_001BFB60(arg2, temp3 | 2);
                    func_001C6520(arg2);
                    func_001BFB60(arg2, temp3);
                }
                func_00155EC0(func_001979C0(temp6), &temp12);
                func_001D4A90(*HIE_fn_hGetSuperObjectObject(arg2), (u8)(temp2 - 6), 1, &temp12);
            }
        }
        break;
    }
}
