#include "common.h"

typedef struct unk_func_002E84E0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002E84E0_0;

void func_002E88C0(unk_func_002E84E0_0 *, s32);
void func_002E85D0(s32 *, s16);
void func_002E8580(unk_func_002E84E0_0 *, s16);
void func_00304B00(unk_func_002E84E0_0 *);

unk_func_002E84E0_0 *func_002E84E0(unk_func_002E84E0_0 *arg0, s16 arg1) {
    s32 *temp_a0;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0->unk_04 != 0) {
                func_002E88C0(arg0, arg0->unk_04);
            }
            temp_a0 = &arg0->unk_04;
            if (temp_a0 != NULL) {
                if (temp_a0 != NULL) {
                    func_002E85D0(temp_a0, 0);
                }
            }
            if (arg0 != NULL) {
                if (arg0 != NULL) {
                    func_002E8580(arg0, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
