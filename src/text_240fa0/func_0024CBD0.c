/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2E4];
    u8 unk_2E4;
    u8 pad_2E5[0x43];
} unk_func_0024CBD0_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CBD0_2;

typedef struct {
    u8 pad_00[0x4];
    unk_func_0024CBD0_2 *unk_04;
} unk_func_0024CBD0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_0024CBD0_1 *unk_10;
} unk_func_0024CBD0_3;

unk_func_0024CBD0_3 *HIE_fn_hGetSuperObjectObject();
u8 func_0024E360();
extern unk_func_0024CBD0_1 *D_003601D8;
extern unk_func_0024CBD0_0 D_006173A0[];

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0024CBD0_4;

s32 func_0024CBD0(s32 arg0, s32 arg1, unk_func_0024CBD0_4 *arg2) {
    D_003601D8 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    arg2->unk_00 = func_0024E360(&D_006173A0[D_003601D8->unk_04->unk_74]);
    arg2->unk_0C = 6;
    return arg1;
}
