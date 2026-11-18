#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u8 pad_30[4];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
} unk_func_002DA7C0_0;

extern s32 D_007BEB20[];
extern s32 D_007BEB24[];
extern s32 D_007BEB28[];
extern s32 D_007BEB2C[];
extern s32 D_007BEB30[];
extern s32 D_007BEB34[];
extern s32 D_007BEB38[];
extern s32 D_007BEB3C[];
extern s32 D_007BEB40[];
extern s32 D_007BEB44[];
extern s32 D_007BEB48[];
extern s32 D_007BEB4C[];
extern s32 D_007BEB54[];
extern s32 D_007BEB58[];
extern s32 D_007BEB5C[];
extern s32 D_007BEB60[];

u8 func_002DA7C0(s32 arg0, unk_func_002DA7C0_0 *arg1) {
    u8 ret;

    ret = 0;
    if (arg1 != NULL) {
        ret = 1;
        D_007BEB20[0] = arg1->unk_00;
        D_007BEB24[0] = arg1->unk_04;
        D_007BEB28[0] = arg1->unk_08;
        D_007BEB2C[0] = arg1->unk_0C;
        D_007BEB30[0] = arg1->unk_10;
        D_007BEB34[0] = arg1->unk_14;
        D_007BEB38[0] = arg1->unk_18;
        D_007BEB3C[0] = arg1->unk_1C;
        D_007BEB40[0] = arg1->unk_20;
        D_007BEB44[0] = arg1->unk_24;
        D_007BEB48[0] = arg1->unk_28;
        D_007BEB4C[0] = arg1->unk_2C;
        D_007BEB54[0] = arg1->unk_34;
        D_007BEB58[0] = arg1->unk_38;
        D_007BEB5C[0] = arg1->unk_3C;
        D_007BEB60[0] = arg1->unk_40;
    }
    return ret;
}
