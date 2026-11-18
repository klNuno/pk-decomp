/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x328];
} unk_func_0024CDD0_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CDD0_1;

typedef struct {
    u8 pad_00[4];
    unk_func_0024CDD0_1 *unk_04;
} unk_func_0024CDD0_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_0024CDD0_2 *unk_10;
} unk_func_0024CDD0_3;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0024CDD0_4;

unk_func_0024CDD0_3 *HIE_fn_hGetSuperObjectObject();
u8 func_00254ED0();
extern unk_func_0024CDD0_2 *D_003601D8;
extern unk_func_0024CDD0_0 D_006173A0[];

s32 func_0024CDD0(s32 arg0, s32 arg1, unk_func_0024CDD0_4 *arg2) {
    D_003601D8 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    arg2->unk_00 = func_00254ED0(&D_006173A0[D_003601D8->unk_04->unk_74]);
    arg2->unk_0C = 6;
    return arg1;
}
