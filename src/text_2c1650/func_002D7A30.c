#include "common.h"

typedef struct unk_func_002D7A30_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
} unk_func_002D7A30_0;

typedef struct unk_func_002D7A30_1 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    unk_func_002D7A30_0 unk_1C;
    void *unk_58;
} unk_func_002D7A30_1;

typedef struct unk_func_002D7A30_2 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D7A30_2;

typedef struct unk_func_002D7A30_3 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D7A30_3;

typedef struct unk_func_002D7A30_4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002D7A30_4;

extern u8 D_0035E4F8[];
s32 func_002D2BC0();
void func_002D7C00();
void func_002D7CE0();
void func_002D8030();
void func_002D8100();
s32 func_002D88E0();

unk_func_002D7A30_1 *func_002D7A30(unk_func_002D7A30_1 *volatile arg0, s32 arg1, s32 arg2, s32 arg3, unk_func_002D7A30_0 *arg4) {
    unk_func_002D7A30_3 pair;
    unk_func_002D7A30_4 res;
    s32 b;
    s32 a;
    unk_func_002D7A30_2 *end;
    unk_func_002D7A30_2 *it;
    s32 key;
    unk_func_002D7A30_2 *f;
    s32 val;
    s32 p;

    arg0->unk_58 = D_0035E4F8;
    func_002D8100(arg0, &a, &b);
    val = 0;
    arg0->unk_10 = arg1;
    arg0->unk_14 = arg2;
    arg0->unk_18 = arg3;
    arg0->unk_1C.unk_00 = arg4->unk_00;
    arg0->unk_1C.unk_04 = arg4->unk_04;
    arg0->unk_1C.unk_08 = arg4->unk_08;
    arg0->unk_1C.unk_0C = arg4->unk_0C;
    arg0->unk_1C.unk_10 = arg4->unk_10;
    arg0->unk_1C.unk_14 = arg4->unk_14;
    arg0->unk_1C.unk_18 = arg4->unk_18;
    arg0->unk_1C.unk_1C = arg4->unk_1C;
    arg0->unk_1C.unk_20 = arg4->unk_20;
    arg0->unk_1C.unk_24 = arg4->unk_24;
    arg0->unk_1C.unk_28 = arg4->unk_28;
    arg0->unk_1C.unk_2C = arg4->unk_2C;
    arg0->unk_1C.unk_30 = arg4->unk_30;
    arg0->unk_1C.unk_34 = arg4->unk_34;
    arg0->unk_1C.unk_38 = arg4->unk_38;
    key = -1;
    func_002D7CE0(&it, arg0, &key);
    f = it;
    func_002D7C00(&end, arg0);
    if (f != end) {
        val = f->unk_10;
    }
    if (val == 0) {
        p = func_002D2BC0(0x20);
        if (p != 0) {
            p = func_002D88E0(p, -1, arg0);
        }
        if (p != 0) {
            pair.unk_04 = p;
            pair.unk_00 = -1;
            func_002D8030(&res, arg0, &pair);
        }
    }
    return arg0;
}
