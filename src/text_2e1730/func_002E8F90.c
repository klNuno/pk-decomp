#include "common.h"

typedef struct unk_func_002E8F90_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_002E8F90_0;

void func_002E96F0(unk_func_002E8F90_0 *, s32);
void func_002E9080(s32 *, s16);
void func_002E9030(unk_func_002E8F90_0 *, s16);
void func_00304B00(unk_func_002E8F90_0 *);

unk_func_002E8F90_0 *func_002E8F90(unk_func_002E8F90_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0->unk_04 != 0) {
                func_002E96F0(arg0, arg0->unk_04);
            }
            {
                s32 *p = &arg0->unk_04;

                if (p != NULL && p != NULL) {
                    func_002E9080(p, 0);
                }
            }
            if (arg0 != NULL && arg0 != NULL) {
                func_002E9030(arg0, 0);
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
