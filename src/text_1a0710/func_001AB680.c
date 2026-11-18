/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AB680_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001AB680_1;

typedef struct unk_func_001AB680_0 {
    unk_func_001AB680_1 unk_00;
    f32 unk_10;
} unk_func_001AB680_0;

void func_001AB680(unk_func_001AB680_0 **arg0, unk_func_001AB680_0 **arg1, u16 arg2, u16 arg3) {
    if (arg0 == 0 || arg1 == 0) {
        return;
    }
    (*arg0)[arg2] = (*arg1)[arg3];
}
