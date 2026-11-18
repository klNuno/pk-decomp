/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2E4];
    u8 unk_2E4;
    u8 pad_2E5[0x328 - 0x2E5];
} unk_func_0024CB50_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CB50_1;

typedef struct {
    u8 pad_00[4];
    unk_func_0024CB50_1 *unk_04;
} unk_func_0024CB50_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_0024CB50_2 *unk_10;
} unk_func_0024CB50_3;

unk_func_0024CB50_3 *HIE_fn_hGetSuperObjectObject();
void func_0024DF70();
extern unk_func_0024CB50_2 *D_003601D8;
extern unk_func_0024CB50_0 D_006173A0[];

s32 func_0024CB50(s32 arg0, s32 arg1) {
    unk_func_0024CB50_0 *temp;

    D_003601D8 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    temp = &D_006173A0[D_003601D8->unk_04->unk_74];
    func_0024DF70(temp);
    temp->unk_2E4 = 1;
    return arg1;
}
