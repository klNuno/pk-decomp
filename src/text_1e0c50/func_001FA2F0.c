/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FA2F0_0 {
    u8 pad_00[0x74];
    s32 unk_74;
    u8 pad_78;
    u8 unk_79;
} unk_func_001FA2F0_0;

typedef struct unk_func_001FA2F0_1 {
    u8 pad_00[4];
    unk_func_001FA2F0_0 *unk_04;
    unk_func_001FA2F0_0 *unk_08;
    unk_func_001FA2F0_0 *unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
} unk_func_001FA2F0_1;

void func_001B4D70();

void func_001FA2F0(unk_func_001FA2F0_1 *arg0, s32 arg1, u8 arg2) {
    unk_func_001FA2F0_0 *a;
    unk_func_001FA2F0_0 *b;

    if (arg1 == 1) {
        func_001B4D70(arg0);
        a = arg0->unk_0C;
        b = a;
    } else {
        a = arg0->unk_04;
        if (arg0->unk_74 & 1) {
            b = arg0->unk_0C;
        } else {
            b = a;
        }
    }
    if (b->unk_79 != arg2) {
        a->unk_79 = arg2;
        if (arg2 == 0) {
            a->unk_74 = -1;
        }
        if (arg1 != 1) {
            if (arg2 == 0) {
                arg0->unk_08->unk_74 = -1;
                arg0->unk_0C->unk_74 = -1;
            }
            arg0->unk_08->unk_79 = arg2;
            arg0->unk_0C->unk_79 = arg2;
        }
    }
}
