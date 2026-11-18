/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
} unk_func_001A7A90_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001A7A90_1 unk_0C;
    u8 pad_10[0x14];
    s32 unk_24;
} unk_func_001A7A90_0;

extern "C" {
s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_001A7010(unk_func_001A7A90_0 *, s32);
void func_001A7A40(s32, unk_func_001A7A90_0 *);
void func_001A7B70(s32, s32);
void func_001A7BA0(s32, s32);
s32 func_002CF8F0(s32, s32, s32, unk_func_001A7A90_1, s32, s32);
extern s32 D_0035F53C;

void func_001A7A90(s32 arg0, unk_func_001A7A90_0 *arg1) {
    unk_func_001A7A90_1 temp;
    s32 res;

    func_001A7A40(*HIE_fn_hGetSuperObjectObject(arg0), arg1);
    func_001A7BA0(*HIE_fn_hGetSuperObjectObject(arg0), 0);
    func_001A7B70(*HIE_fn_hGetSuperObjectObject(arg0), 0);
    temp = arg1->unk_0C;
    res = func_002CF8F0(arg0, -1, D_0035F53C, temp, 0, 0);
    func_001A7010(arg1, res);
    arg1->unk_24 = -1;
}
}
