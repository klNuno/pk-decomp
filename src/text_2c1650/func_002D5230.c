#include "common.h"

typedef struct unk_func_002D5230_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002D5230_0;

typedef struct unk_func_002D5230_1 {
    u8 pad_00[0x10];
    unk_func_002D5230_0 *unk_10;
} unk_func_002D5230_1;

typedef struct unk_func_002D5230_2 {
    s32 unk_00;
    unk_func_002D5230_0 *unk_04;
} unk_func_002D5230_2;

typedef struct unk_func_002D5230_3 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D5230_3;

void func_002D5500(unk_func_002D5230_1 **, s32, s32 *);
s32 func_002D51B0(s32);
void func_002D5340(unk_func_002D5230_1 **, s32);
unk_func_002D5230_0 *func_002D2BC0(s32);
unk_func_002D5230_0 *func_002D5BF0(unk_func_002D5230_0 *, s32, s32);
void func_002D5660(unk_func_002D5230_3 *, s32, unk_func_002D5230_2 *);

unk_func_002D5230_0 *func_002D5230(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002D5230_0 *p = 0;

    if (arg1 != -3 && arg1 != -2 && arg1 != -1) {
        {
            unk_func_002D5230_1 *sp74;
            unk_func_002D5230_1 *sp78;
            s32 sp7C = arg1;
            unk_func_002D5230_1 *it;

            func_002D5500(&sp78, arg0, &sp7C);
            it = sp78;
            func_002D5340(&sp74, func_002D51B0(arg0));
            if (it != sp74) {
                p = it->unk_10;
            }
        }
        if (p != 0) {
            if (p->unk_14 != arg2) {
                p->unk_14 = arg2;
            }
        } else {
            unk_func_002D5230_0 *v = func_002D2BC0(0x18);
            if (v != 0) {
                v = func_002D5BF0(v, arg1, arg2);
            }
            p = v;
            if (p != 0) {
                unk_func_002D5230_3 sp60;
                unk_func_002D5230_2 sp68;
                sp68.unk_00 = arg1;
                sp68.unk_04 = p;
                func_002D5660(&sp60, arg0, &sp68);
            }
        }
    }
    return p;
}
