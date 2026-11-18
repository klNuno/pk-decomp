/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E0A10_0 {
    void *unk_00;
    u8 *unk_04;
    u8 unk_08[4];
} unk_func_002E0A10_0;

typedef struct unk_func_002E0A10_1 {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u32 unk_1C;
    u8 pad_20[0x20];
    s32 unk_40;
} unk_func_002E0A10_1;

extern "C" {
void *func_002D2BC0(u32);
void func_002D2B90(void *, s32, u32);
bool func_002DE8A0(void *, unk_func_002E0A10_1 *, u8 *, s32);

bool func_002E0A10(unk_func_002E0A10_0 *arg0, unk_func_002E0A10_1 *arg1, u8 *arg2, s32 arg3) {
    bool result = true;

    if (arg1->unk_1C != 0) {
        arg0->unk_00 = func_002D2BC0(arg1->unk_1C);
        if (arg0->unk_00 != 0) {
            func_002D2B90(arg0->unk_00, 0, arg1->unk_1C);
        } else {
            result = false;
        }
    } else {
        arg0->unk_00 = 0;
    }
    if (arg1->unk_18 != 0) {
        arg0->unk_04 = arg2 + (arg1->unk_40 + arg1->unk_14 * 16);
    } else {
        arg0->unk_04 = 0;
    }
    if (result) {
        result = func_002DE8A0(arg0->unk_08, arg1, arg2, arg3);
    }
    return result;
}
}
