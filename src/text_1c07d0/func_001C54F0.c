/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C54F0_0 {
    s32 unk_00;
    u8 pad_04[4];
    struct unk_func_001C54F0_0 *unk_08;
} unk_func_001C54F0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_0019A290(s32, s32);
s32 func_0019B200(s32);
unk_func_001C54F0_0 *func_0019E2C0(s32);
void func_001AE100(s32, f32);
f32 func_001B5EF0(s32);
s32 func_001C2550(s32);

void func_001C54F0(s32 arg0) {
    f32 sp5C;
    u8 flag;
    s32 obj;
    unk_func_001C54F0_0 *node;
    s32 cur;

    sp5C = func_001B5EF0(arg0);
    flag = (u8)((func_0019B200(arg0) & 8) == 8);
    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    node = func_0019E2C0(obj);
    while (node != NULL) {
        cur = node->unk_00;
        if ((func_001C2550(cur) & 0x10000) != 0x10000) {
            func_001AE100(cur, sp5C);
            if (flag) {
                func_0019A290(cur, func_0019B200(cur) | 8);
            }
        }
        node = node->unk_08;
    }
}
