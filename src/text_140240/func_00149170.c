#include "common.h"

typedef struct unk_func_00149170_0 {
    s32 unk_00;
    u8 pad_04[0x10];
    struct unk_func_00149170_0 *unk_14;
} unk_func_00149170_0;

typedef struct {
    u8 pad_00[8];
    unk_func_00149170_0 *unk_08;
} unk_func_00149170_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00149170_2;

typedef struct {
    u8 pad_00[0xE0];
    u8 unk_E0;
} unk_func_00149170_3;

s32 func_00139040(s32);
void func_001488E0(unk_func_00149170_2 *, unk_func_00149170_0 *, s32, s32, u8 *);
unk_func_00149170_2 *func_001B8580(unk_func_00149170_0 *);

void func_00149170(unk_func_00149170_3 *arg0, unk_func_00149170_1 *arg1, s32 arg2, s32 arg3) {
    u8 *temp_s2 = &arg0->unk_E0;
    unk_func_00149170_0 *p;
    unk_func_00149170_2 *temp_v0;

    for (p = arg1->unk_08; p != NULL; p = p->unk_14) {
        if (p->unk_00 == 2) {
            temp_v0 = func_001B8580(p);
            if (temp_v0 != NULL && temp_v0->unk_04 != 0 && func_00139040(temp_v0->unk_04) == 1) {
                func_001488E0(temp_v0, p, arg2, arg3, temp_s2);
            }
        }
    }
}
