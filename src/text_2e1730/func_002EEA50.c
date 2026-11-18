#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[3];
    u8 unk_1C[0xC];
    u8 unk_28[0x10];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    s32 unk_44;
} unk_func_002EEA50_0;

typedef struct {
    u8 unk_00;
} unk_func_002EEA50_1;

s32 fs_roGetInst__Q24usnd16CGlobalVarAccessFv();
void func_002EEB20(unk_func_002EEA50_1 *, s32);
void func_002EF180(u8 *, unk_func_002EEA50_1 *, unk_func_002EEA50_1 *);
void func_002EF670(u8 *, unk_func_002EEA50_1 *, unk_func_002EEA50_1 *);
void func_002F21B0(unk_func_002EEA50_0 *);
extern u8 D_0035E730[];
extern f32 D_007BF250[];
extern f32 D_007BF254[];
extern f32 D_007BF258[];

unk_func_002EEA50_0 *func_002EEA50(unk_func_002EEA50_0 *volatile arg0) {
    unk_func_002EEA50_1 sp1C;
    unk_func_002EEA50_1 sp20;
    unk_func_002EEA50_1 sp24;
    unk_func_002EEA50_1 sp28;
    unk_func_002EEA50_1 sp2C;

    func_002F21B0(arg0);
    arg0->unk_00 = D_0035E730;
    arg0->unk_18 = 1;
    func_002EF180(arg0->unk_1C, &sp24, &sp20);
    sp2C = sp1C;
    func_002EF670(arg0->unk_28, &sp2C, &sp28);
    func_002EEB20(&sp28, -1);
    arg0->unk_38 = D_007BF250[0];
    arg0->unk_3C = D_007BF254[0];
    arg0->unk_40 = D_007BF258[0];
    arg0->unk_44 = 0;
    arg0->unk_44 = fs_roGetInst__Q24usnd16CGlobalVarAccessFv();
    return arg0;
}
