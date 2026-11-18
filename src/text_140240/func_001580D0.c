#include "common.h"

typedef struct unk_func_001580D0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001580D0_0;

extern unk_func_001580D0_0 *D_0035F968;
u8 func_0015A7C0(s32);

u8 func_001580D0(unk_func_001580D0_0 *arg0) {
    u8 temp;

    D_0035F968 = arg0 + 1;
    if (func_0015A7C0(D_0035F968->unk_00) == 1) {
        temp = 1;
    } else {
        temp = 0;
    }
    D_0035F968++;
    return temp;
}
