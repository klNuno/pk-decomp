#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00133A50_0;

s32 func_0031A320(unk_func_00133A50_0 *);

void func_00133A50(s32 *arg0) {
    unk_func_00133A50_0 temp;

    temp.unk_08 = 1;
    temp.unk_04 = 1;
    arg0[0] = func_0031A320(&temp);
    arg0[1] = -1;
    arg0[2] = 0;
}
