#include "common.h"

typedef struct unk_func_00303340_0 {
    u8 pad_00[0xC];
    u8 *unk_0C;
} unk_func_00303340_0;

unk_func_00303340_0 *func_00302D70();

void func_00303340(u8 *arg0, u8 *arg1) {
    if (arg0[0x1C] != 0) {
        func_00302D70(arg0, arg1 + 4)->unk_0C = arg1;
    }
}
