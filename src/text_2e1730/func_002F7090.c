#include "common.h"

typedef struct unk_func_002F7090_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} unk_func_002F7090_0;

void func_002F72B0();

void func_002F7090(unk_func_002F7090_0 *arg0) {
    if (arg0->unk_04 != 0) {
        func_002F72B0(arg0, arg0->unk_04);
        arg0->unk_00 = 0;
        arg0->unk_04 = 0;
        arg0->unk_0C = &arg0->unk_04;
    }
}
