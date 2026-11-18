/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
} unk_001EB990_0;

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[1];
    u8 unk_06;
} unk_001EB990_1;

typedef struct {
    u8 pad_00[0x10];
    unk_001EB990_1 *unk_10;
} unk_001EB990_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_001EB990_3;

u8 func_001E70A0(unk_001EB990_2 *, u8, unk_001EB990_0 *);
u8 func_001E71B0(unk_001EB990_2 *);
void func_001E73E0(unk_001EB990_2 *, u8, unk_001EB990_0 *);
void func_001E7540(unk_001EB990_2 *, u8);
unk_001EB990_0 *func_001EB7B0(unk_001EB990_0 *);
u8 func_001EB8C0(void *, s32);
unk_001EB990_0 *func_001EB910(void *, unk_001EB990_0 *, s32, unk_001EB990_3 *);
void func_001EDBB0(s32, void *);
extern u8 D_0036012C;
extern unk_001EB990_0 *D_00360130;
extern u8 D_00360138;
extern u8 D_0036013C;
extern unk_001EB990_2 *D_00360140;

unk_001EB990_0 *func_001EB990(void *arg0, unk_001EB990_0 *arg1, unk_001EB990_3 *arg2) {
    s32 temp0;
    unk_001EB990_0 *temp1;
    unk_001EB990_0 *temp2 = D_0036012C != 0 ? D_00360130 : arg1;

    if ((D_00360140->unk_10->unk_06 = func_001E70A0(D_00360140, D_0036013C, temp2)) < D_00360140->unk_10->unk_04) {
        temp0 = arg1->unk_00;
        if (arg1->unk_04) {
            arg1 += arg1->unk_04;
        } else {
            temp1 = arg1;
            arg1 = func_001EB7B0(arg1 + 1);
            temp1->unk_04 = arg1 - temp1;
        }
        arg2->unk_00 = func_001EB8C0(arg0, temp0);
        arg2->unk_0C = 0x14;
        D_00360138 = 1;
        return arg1;
    }
    func_001E7540(D_00360140, D_0036013C);
    if ((D_00360140->unk_10->unk_06 = func_001E71B0(D_00360140)) < D_00360140->unk_10->unk_04) {
        func_001E73E0(D_00360140, D_0036013C, arg1);
        temp0 = arg1->unk_00;
        arg1++;
        D_00360138 = 1;
        return func_001EB910(arg0, arg1, temp0, arg2);
    }
    func_001EDBB0(0x18, 0);
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x14;
    return 0;
}
