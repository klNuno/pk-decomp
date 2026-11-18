#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} unk_func_0030B4C0_0;

s32 func_00307A90(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 (*D_00360828)(s32);
extern s32 D_0036082C;

s32 func_0030B4C0(unk_func_0030B4C0_0 *arg0) {
    s32 ret;

    ret = 0;
    func_00308BE0(D_0036082C);
    switch (arg0->unk_10) {
    case 0:
        ret = D_00360828(arg0->unk_0C);
        break;
    case 1:
        ret = func_00307A90(arg0->unk_0C);
        break;
    }
    func_00308B80(D_0036082C);
    return ret;
}
