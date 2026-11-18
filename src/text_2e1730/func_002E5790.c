#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_002E5790_0;

void func_002E58D0(unk_func_002E5790_0 *, s32);
void func_002E5830(s32 *, s32);
void func_002E5880(unk_func_002E5790_0 *, s32);
void func_00304B00(unk_func_002E5790_0 *);

unk_func_002E5790_0 *func_002E5790(unk_func_002E5790_0 *arg0, s16 arg1) {
    s32 *q;

    if (arg0 != 0) {
        if (arg0 != 0) {
            if (arg0->unk_04 != 0) {
                func_002E58D0(arg0, arg0->unk_04);
            }
            q = &arg0->unk_04;
            if (q != 0 && q != 0) {
                func_002E5830(q, 0);
            }
            if (arg0 != 0 && arg0 != 0) {
                func_002E5880(arg0, 0);
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
