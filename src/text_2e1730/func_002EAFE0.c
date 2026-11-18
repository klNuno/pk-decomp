#include "common.h"

typedef struct unk_func_002EAFE0_0 {
    void *unk_00;
    u8 pad_04[0x28];
    u8 unk_2C[0x4];
} unk_func_002EAFE0_0;

void func_002D2BB0(void *);
void func_002E73A0(void *, s32);
void func_002F2130(void *, s32);
extern u8 D_0035E670[];

unk_func_002EAFE0_0 *func_002EAFE0(unk_func_002EAFE0_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->unk_00 = D_0035E670;
        func_002E73A0(arg0->unk_2C, -1);
        func_002F2130(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
