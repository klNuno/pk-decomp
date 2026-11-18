#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} unk_func_0030B400_0;

s32 func_00307B30(s32, s32, s32, s32);
void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 (*D_00360824)(s32, s32, s32, s32);
extern s32 D_0036082C;

s32 func_0030B400(unk_func_0030B400_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret = 0;

    func_00308BE0(D_0036082C);
    switch (arg0->unk_10) {
    case 0:
        ret = D_00360824(arg0->unk_0C, arg1, arg2, arg3);
        break;
    case 1:
        ret = func_00307B30(arg0->unk_0C, arg1, arg2, arg3);
        break;
    }
    func_00308B80(D_0036082C);
    return ret;
}
