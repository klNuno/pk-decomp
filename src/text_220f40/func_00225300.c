/* profile: o0_301 */
#include "common.h"

typedef union {
    u8 unk_00;
    s16 unk_00_s16;
    s32 unk_00_s32;
    u8 pad_00[0x10];
} unk_func_00225300_0;

s32 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
s32 func_001A7060();
void func_001AB530();
void func_001C5410();
void func_001D2910();
extern s32 D_0035FC60;
extern s32 D_0035FC64;
extern s16 D_00360194;
extern s32 D_003608C0;
extern s32 D_003608C4;

s32 *func_00225300(s32 arg0, s32 *arg1) {
    unk_func_00225300_0 sp40;
    s32 op;
    u8 a;
    s32 b;

    op = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    switch (op) {
    case 0x6C:
        a = sp40.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        func_001AB530(arg0, a, sp40.unk_00);
        return arg1;
    case 0x6D:
        if (arg0 == D_003608C4) {
            D_0035FC60 = func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0));
        }
        if (arg0 == D_003608C0) {
            D_0035FC64 = func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0));
        }
        func_001D2910(*HIE_fn_hGetSuperObjectObject(arg0), sp40.unk_00_s32);
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        if (arg0 == D_003608C4) {
            D_00360194 = sp40.unk_00_s16;
        }
        if (arg0 == D_003608C0) {
            b = func_001A7060(*HIE_fn_hGetSuperObjectObject(arg0));
            func_001C5410(b);
        }
        return arg1;
    default:
        return arg1;
    }
}
