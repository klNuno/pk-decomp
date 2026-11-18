#include "common.h"

typedef struct unk_func_002F3E70_0 {
    void *unk_00;
} unk_func_002F3E70_0;

s32 func_00303380();
void func_00303270(s32, void *);
void func_002F4D10(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035E800[];
extern u8 D_0035E830[];

unk_func_002F3E70_0 *func_002F3E70(unk_func_002F3E70_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E800;
        func_00303270(func_00303380(), arg0);
        if (arg0 != NULL) {
            arg0->unk_00 = D_0035E830;
            func_002F4D10(arg0, 0);
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
