#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002D6380_0;

void func_002D6FD0();
void func_00304B00();

unk_func_002D6380_0 *func_002D6380(unk_func_002D6380_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != 0) {
            func_002D6FD0(arg0, arg0->unk_04);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
