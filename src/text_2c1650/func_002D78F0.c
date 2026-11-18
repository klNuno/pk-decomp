#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D78F0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D78F0_1;

void func_002D7CE0(unk_func_002D78F0_0 **, s32, s32 *);
s32 func_002CF7D0(s32);
void func_002D79C0(unk_func_002D78F0_0 **, s32);
s32 func_002D2BC0(s32);
s32 func_002D88E0(s32, s32, s32);
void func_002D8030(void *, s32, unk_func_002D78F0_1 *);

s32 func_002D78F0(s32 arg0, s32 arg1) {
    u8 sp50[8];
    unk_func_002D78F0_1 pair;
    unk_func_002D78F0_0 *end;
    unk_func_002D78F0_0 *it;
    s32 key;
    s32 ret;
    s32 p;
    unk_func_002D78F0_0 *node;

    ret = 0;
    key = arg1;
    func_002D7CE0(&it, arg0, &key);
    node = it;
    func_002D79C0(&end, func_002CF7D0(arg0));
    if (node != end) {
        ret = node->unk_10;
    }
    if (ret == 0) {
        s32 q;

        if ((p = q = func_002D2BC0(0x20)) != 0) {
            p = func_002D88E0(q, arg1, arg0);
        }
        if (p != 0) {
            pair.unk_00 = arg1;
            pair.unk_04 = p;
            func_002D8030(sp50, arg0, &pair);
            ret = p;
        }
    }
    return ret;
}
