#include "common.h"

typedef struct unk_func_00300490_0 {
    void *unk_00;
    u8 pad_04[0x4];
    u8 unk_08[1];
} unk_func_00300490_0;

void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035EAB0[];
extern u8 D_0035EBF0[];
extern u8 D_0035EC10[];
extern u8 D_0035EC90[];

unk_func_00300490_0 *func_00300490(unk_func_00300490_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EC10;
        if (arg0 != NULL) {
            arg0->unk_00 = D_0035EBF0;
            if (arg0 != NULL) {
                arg0->unk_00 = D_0035EAB0;
                if (arg0 != NULL) {
                    arg0->unk_00 = D_0035EC90;
                    func_002CD2A0(arg0->unk_08, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
