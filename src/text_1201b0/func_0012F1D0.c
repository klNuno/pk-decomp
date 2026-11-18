#include "common.h"

typedef struct unk_func_0012F1D0_1 {
    u8 pad_00[0xE8];
    s32 unk_E8;
} unk_func_0012F1D0_1;

typedef struct unk_func_0012F1D0_0 {
    u8 pad_00[0x4];
    unk_func_0012F1D0_1 **unk_04;
    u8 pad_08[0x24];
    s32 unk_2C;
    u8 pad_30[0x18];
    f32 unk_48;
} unk_func_0012F1D0_0;

void func_0012C4B0(void);
void func_0012C500(void);
f32 func_00167A50(void);
void func_00167A70(f32);
void func_0016AF30(s32, s32, s32);
void func_00176550(s32);
f32 func_00193410(void);
void func_00196020(s32, s32, s32);
s32 func_001BFB20(unk_func_0012F1D0_0 *);
extern s16 D_0035F8D4;
extern s32 D_0035F8D8;
extern s16 D_00364E80[];

void func_0012F1D0(s32 arg0, unk_func_0012F1D0_0 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 flags2;
    u8 restore;
    f32 old;
    f32 scale;
    f32 t;
    s32 tmp;

    flags2 = 0;
    restore = 0;
    tmp = (*arg1->unk_04)->unk_E8;
    D_0035F8D8 = tmp;
    func_00196020(arg4, D_00364E80[D_0035F8D4], tmp);
    func_0012C500();
    if (func_001BFB20(arg1) & 0x200000) {
        old = func_00167A50();
        scale = arg1->unk_48;
        t = func_00193410();
        func_00167A70(t * scale);
        restore = 1;
        arg3 &= 0xFFFBFFF7;
    } else if (!(arg1->unk_2C & 8)) {
        arg3 &= 0xFFFBFFF7;
        old = func_00167A50();
        func_00167A70(arg1->unk_48);
        restore = 1;
    } else {
        old = func_00167A50();
        func_00167A70(255.0f);
        restore = 1;
        flags2 = 0xF7FC0000;
    }
    func_00176550(arg4);
    func_0016AF30(arg0, arg4, arg3 | flags2);
    if (restore) {
        func_00167A70(old);
    }
    func_0012C4B0();
}
