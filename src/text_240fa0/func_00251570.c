/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00251570_0;

typedef struct {
    u8 pad_00[0xC8];
    s8 *unk_C8;
    u8 pad_CC[0x38];
    s32 unk_104;
    u8 pad_108[0xAC];
    u8 unk_1B4[0xC];
    unk_func_00251570_0 unk_1C0;
    u8 pad_1CC[0x48];
    f32 unk_214[3];
    unk_func_00251570_0 *unk_220;
    u8 pad_224[0x28];
    f32 unk_24C;
    u8 pad_250[0x40];
    s32 unk_290;
    u8 pad_294[0x28];
    s32 unk_2BC;
} unk_func_00251570_1;

f32 func_001E60E0(f32);
void func_0024D860(void *, s32, s32, s32, f32);
void func_0024F1E0(unk_func_00251570_1 *);
void func_0024FFE0(unk_func_00251570_1 *);
void func_00250130(unk_func_00251570_1 *);
void func_00250770(unk_func_00251570_1 *);
void func_00250BB0(void *, unk_func_00251570_1 *, s32);
void func_002517E0(unk_func_00251570_1 *);
void func_00251E00(unk_func_00251570_1 *);
void func_00251FE0(unk_func_00251570_1 *);
void func_00252040(unk_func_00251570_1 *);
void func_002522B0(unk_func_00251570_1 *);
void func_00252570(unk_func_00251570_1 *);
void func_002538F0(unk_func_00251570_1 *);
void func_002539D0(unk_func_00251570_1 *);
void func_00253D20(unk_func_00251570_1 *);
void func_00254080(unk_func_00251570_1 *);
void func_00254350(unk_func_00251570_1 *);
void func_00257450(f32 *, s32);
extern void *D_003601D8;
extern s32 D_003601EC;
extern s32 D_003601F0;

s32 func_00251570(unk_func_00251570_1 *arg0) {
    f32 temp;

    func_00250130(arg0);
    if (*arg0->unk_C8 && arg0->unk_2BC == 0) {
        return 3;
    }
    func_0024FFE0(arg0);
    func_00250770(arg0);
    func_00257450(arg0->unk_214, arg0->unk_104);
    func_00254350(arg0);
    func_00254080(arg0);
    func_0024F1E0(arg0);
    func_00253D20(arg0);
    if (arg0->unk_290 == 0) {
        func_002539D0(arg0);
    }
    func_002538F0(arg0);
    func_00250BB0(arg0->unk_1B4, arg0, (u32)0);
    func_00252570(arg0);
    func_002522B0(arg0);
    func_00252040(arg0);
    func_00251FE0(arg0);
    func_00251E00(arg0);
    temp = 3.5f * func_001E60E0(arg0->unk_24C / 10.0f);
    if (!(temp <= 3.5f) || D_003601F0 != 0 || D_003601EC != 0) {
        temp = 3.5f;
    } else if (temp < 1.0f) {
        temp = 1.0f;
    }
    func_0024D860(D_003601D8, 0x23E, (u32)0, 1, temp);
    func_002517E0(arg0);
    ((unk_func_00251570_0 *)((u8 *)arg0 + 0x1C0))->unk_00 = arg0->unk_220->unk_00;
    ((unk_func_00251570_0 *)((u8 *)arg0 + 0x1C0))->unk_04 = arg0->unk_220->unk_04;
    ((unk_func_00251570_0 *)((u8 *)arg0 + 0x1C0))->unk_08 = arg0->unk_220->unk_08;
    return 0;
}
