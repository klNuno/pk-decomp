/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2E4];
    u8 unk_2E4;
    u8 pad_2E5[0x43];
} unk_func_0024CD50_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CD50_1;

typedef struct {
    s32 unk_00;
    unk_func_0024CD50_1 *unk_04;
} unk_func_0024CD50_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_002548B0(unk_func_0024CD50_0 *);
extern unk_func_0024CD50_2 *D_003601D8;
extern unk_func_0024CD50_0 D_006173A0[];

s32 func_0024CD50(s32 arg0, s32 arg1) {
    unk_func_0024CD50_0 *temp_s0;

    D_003601D8 = (unk_func_0024CD50_2 *)HIE_fn_hGetSuperObjectObject(arg0)[4];
    temp_s0 = &D_006173A0[D_003601D8->unk_04->unk_74];
    func_002548B0(temp_s0);
    temp_s0->unk_2E4 = 3;
    return arg1;
}
