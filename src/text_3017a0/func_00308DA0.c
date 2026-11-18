#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} unk_func_00308DA0_0;

s32 func_002D28E0(void *, s64, s32);

s32 func_00308DA0(unk_func_00308DA0_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unk_08 == NULL) {
        return 0;
    }
    switch (arg2) {
    case 0:
        return func_002D28E0(arg0->unk_08, arg1, 0);
    case 1:
        return func_002D28E0(arg0->unk_08, arg1, 2);
    case 2:
        return func_002D28E0(arg0->unk_08, arg1, 1);
    }
    return 0;
}
