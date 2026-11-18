#include "common.h"

typedef struct unk_func_002E7240_0 {
    void *unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[0x3];
    u8 unk_1C[0xF0];
    u8 unk_10C[0xC];
    s32 unk_118;
} unk_func_002E7240_0;

unk_func_002E7240_0 *func_002D2BC0(s32);
void func_002E5730(void *);
void func_002E7710(void *);
void func_002F21B0(void *);
extern u8 D_0035E610[];

unk_func_002E7240_0 *func_002E7240(void) {
    unk_func_002E7240_0 *temp_v0;
    unk_func_002E7240_0 *volatile sp1C;

    temp_v0 = func_002D2BC0(0x11C);
    if (temp_v0 != 0) {
        sp1C = temp_v0;
        func_002F21B0(temp_v0);
        sp1C->unk_00 = D_0035E610;
        sp1C->unk_18 = 0;
        func_002E5730(sp1C->unk_1C);
        func_002E7710(sp1C->unk_10C);
        sp1C->unk_118 = 0;
        temp_v0 = sp1C;
    }
    return temp_v0;
}
