#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04[4];
} unk_func_002E9930_0;

void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);

unk_func_002E9930_0 *func_002E9930(unk_func_002E9930_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != NULL) {
            c4sdk_malloc(arg0->unk_04, 0);
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
