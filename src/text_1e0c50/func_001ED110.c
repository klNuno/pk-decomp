/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001ED110_0 {
    u8 unk_00;
    u8 pad_01[3];
    void **unk_04;
} unk_func_001ED110_0;

void func_001EC3E0(unk_func_001ED110_0 *, s32);

void func_001ED110(unk_func_001ED110_0 *arg0, unk_func_001ED110_0 *arg1) {
    void *temp;
    u8 j;
    u8 count;
    u8 i;

    count = arg0->unk_00;
    for (i = 0; i < arg1->unk_00; i++) {
        temp = arg1->unk_04[i];
        for (j = 0; j < count && arg0->unk_04[j] != temp; j++) {
        }
        if (arg0->unk_04[j] != temp) {
            func_001EC3E0(arg0, (s32)temp);
        }
    }
}
