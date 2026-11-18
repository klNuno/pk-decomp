/* profile: opt_300 */
#include "common.h"

class unk_func_002F83C0_0 {
public:
    virtual void unk_vf08(...);
};

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x40];
} unk_func_002F83C0_1;

typedef struct {
    u8 pad_00[0x10];
} unk_func_002F83C0_2;

struct unk_func_002F83C0_3 : unk_func_002F83C0_1, unk_func_002F83C0_2 {
    s32 unk_74;
    unk_func_002F83C0_0 *unk_78;
    s32 unk_7C;
    unk_func_002F83C0_0 *unk_80;
    u8 pad_84[4];
    s32 unk_88;
    u8 pad_8C[4];
    s32 unk_90;
};

extern "C" {
void func_002FC440(...);
void func_002FC630(...);
void func_00308B80(...);
void func_00308BE0(...);
void func_0030F0D0(...);
void func_0030F0E0(...);

void func_002F83C0(unk_func_002F83C0_3 *arg0, s32 arg1, void *arg2);
}

void func_002F83C0(unk_func_002F83C0_3 *arg0, s32 arg1, void *arg2) {
    unk_func_002F83C0_3 *temp;

    switch (arg1) {
    case 0x16:
        func_002FC440(arg0, arg2);
        return;
    case 0x3E8:
        break;
    case 0x3E9:
        if (arg0->unk_90 != 0) {
            func_00308BE0(arg0->unk_90);
        }
        if (arg0->unk_90 != 0) {
            func_00308B80(arg0->unk_90);
        }
        break;
    case 0x3EA:
        temp = *(unk_func_002F83C0_3 **)arg2;
        temp->unk_20 = arg0->unk_20;
        temp->unk_1C = arg0->unk_1C;
        temp->unk_0C = arg0->unk_0C;
        temp->unk_10 = arg0->unk_10;
        temp->unk_14 = arg0->unk_14;
        temp->unk_18 = arg0->unk_18;
        temp->unk_78 = arg0->unk_78;
        temp->unk_78->unk_vf08(temp->unk_74, 0, 0);
        func_0030F0E0(temp->unk_78, 0);
        temp->unk_88 = arg0->unk_88;
        if (temp->unk_80 != 0) {
            func_0030F0D0(temp->unk_78, (unk_func_002F83C0_2 *)temp, 0);
        }
        arg0->unk_20 = 0;
        arg0->unk_1C = 0;
        arg0->unk_88 = 0;
        arg0->unk_78 = 0;
        break;
    case 0x3EB:
        temp = *(unk_func_002F83C0_3 **)arg2;
        if (arg0->unk_80 != 0) {
            arg0->unk_80->unk_vf08();
        }
        arg0->unk_80 = (unk_func_002F83C0_0 *)temp;
        arg0->unk_7C = 0;
        if (arg0->unk_78 != 0) {
            func_0030F0D0(arg0->unk_78, (unk_func_002F83C0_2 *)arg0, 0);
        }
        break;
    case 1:
        if (arg0->unk_80 != 0) {
            arg0->unk_80->unk_vf08();
            arg0->unk_80 = 0;
        }
        func_002FC630(arg0, 1, arg2);
        break;
    default:
        func_002FC630(arg0, arg1, arg2);
        break;
    }
}
