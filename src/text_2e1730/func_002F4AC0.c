#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void (*unk_0C)();
} unk_func_002F4AC0_0;

void func_002F4AC0(unk_func_002F4AC0_0 *arg0) {
    arg0->unk_0C();
}
