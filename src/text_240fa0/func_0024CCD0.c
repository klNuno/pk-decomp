/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2E4];
    u8 unk_2E4;
    u8 pad_2E5[0x43];
} unk_func_0024CCD0_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CCD0_1;

typedef struct {
    s32 unk_00;
    unk_func_0024CCD0_1 *unk_04;
} unk_func_0024CCD0_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_00251570(unk_func_0024CCD0_0 *);
extern unk_func_0024CCD0_2 *D_003601D8;
extern unk_func_0024CCD0_0 D_006173A0[];

s32 func_0024CCD0(s32 arg0, s32 arg1, s32 *arg2) {
    D_003601D8 = (unk_func_0024CCD0_2 *)HIE_fn_hGetSuperObjectObject(arg0)[4];
    arg2[0] = func_00251570(&D_006173A0[D_003601D8->unk_04->unk_74]);
    arg2[3] = 6;
    return arg1;
}
