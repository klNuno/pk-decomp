#include "common.h"

typedef struct unk_func_002EEBC0_0 {
    void *unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[0x3];
    u8 unk_1C[0xC];
    u8 unk_28[0x10];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    s32 unk_44;
} unk_func_002EEBC0_0;

unk_func_002EEBC0_0 *func_002D2BC0(s32);
void func_002F21B0(void *);
void func_002EF180(void *, void *, void *);
void func_002EEB70(void *, s32);
void func_002EEC90(void *, void *);
s32 fs_roGetInst__Q24usnd16CGlobalVarAccessFv(void);
extern u8 D_0035E730[];
extern f32 D_007BF250[];
extern f32 D_007BF254[];
extern f32 D_007BF258[];

unk_func_002EEBC0_0 *func_002EEBC0(void) {
    unk_func_002EEBC0_0 *temp_v0;
    u8 sp10[4];
    unk_func_002EEBC0_0 *volatile sp14;
    u8 sp18[4];
    u8 sp1C[4];

    temp_v0 = func_002D2BC0(0x48);
    if (temp_v0 != 0) {
        sp14 = temp_v0;
        func_002F21B0(temp_v0);
        sp14->unk_00 = D_0035E730;
        sp14->unk_18 = 1;
        func_002EF180(sp14->unk_1C, sp1C, sp18);
        func_002EEB70(sp18, -1);
        func_002EEC90(sp14->unk_28, sp10);
        sp14->unk_38 = D_007BF250[0];
        sp14->unk_3C = D_007BF254[0];
        sp14->unk_40 = D_007BF258[0];
        sp14->unk_44 = 0;
        sp14->unk_44 = fs_roGetInst__Q24usnd16CGlobalVarAccessFv();
        temp_v0 = sp14;
    }
    return temp_v0;
}
