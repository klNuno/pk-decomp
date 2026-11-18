/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x14];
} unk_func_00308170_0;

s32 func_0031A120();
s32 func_0031A140();
void func_003082F0();
extern s32 D_003607CC;
extern s32 D_00367370;
extern u8 D_007BF9C0[];

s32 func_00308170(s32 arg0, s32 arg1) {
    unk_func_00308170_0 param;

    param.unk_04 = func_003082F0;
    param.unk_08 = D_007BF9C0;
    param.unk_0C = 0x4000;
    param.unk_10 = &D_00367370;
    param.unk_14 = arg0;
    D_003607CC = func_0031A120(&param);
    if (func_0031A140(D_003607CC, arg1) < 0) {
        return -1;
    }
    return D_003607CC;
}
