#include "common.h"

typedef struct unk_func_00158070_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00158070_0;

extern unk_func_00158070_0 *D_0035F968;
u8 func_0015A780(s32);

u8 func_00158070(unk_func_00158070_0 *arg0) {
    u8 temp;

    D_0035F968 = arg0 + 1;
    if (func_0015A780(D_0035F968->unk_00) == 1) {
        temp = 1;
    } else {
        temp = 0;
    }
    D_0035F968++;
    return temp;
}
