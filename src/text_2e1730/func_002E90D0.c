#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04[0x4];
} unk_func_002E90D0_0;

void func_002E9180(unk_func_002E90D0_0 *, s32);
void func_002E91D0(void *, s32);
s32 *func_002E9220(void *);
void func_002E96F0(unk_func_002E90D0_0 *, s32);
void func_00304B00(unk_func_002E90D0_0 *);

unk_func_002E90D0_0 *func_002E90D0(unk_func_002E90D0_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0 != NULL) {
            if (*func_002E9220(arg0->unk_04) != 0) {
                func_002E96F0(arg0, *func_002E9220(arg0->unk_04));
            }
            if (arg0->unk_04 != NULL) {
                func_002E91D0(arg0->unk_04, 0);
            }
            if (arg0 != NULL) {
                func_002E9180(arg0, 0);
            }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
