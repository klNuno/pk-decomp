/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001ECD90_0 {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001ECD90_0;

void func_001EC3E0(s32, s32);

void func_001ECD90(s32 arg0, unk_func_001ECD90_0 *arg1, unk_func_001ECD90_0 *arg2) {
    u8 j;
    s32 item;
    u8 i;

    for (i = 0; i < arg1->unk_00; i++) {
        func_001EC3E0(arg0, arg1->unk_04[i]);
    }
    for (i = 0; i < arg2->unk_00; i++) {
        item = arg2->unk_04[i];
        for (j = 0; j < arg1->unk_00 && arg1->unk_04[j] != (item = item); j++) {
        }
        if (arg1->unk_04[j] != (item = item)) {
            func_001EC3E0(arg0, item);
        }
    }
}
