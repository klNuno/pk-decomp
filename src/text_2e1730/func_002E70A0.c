#include "common.h"

typedef struct unk_func_002E70A0_0 {
    void *unk_00;
    u8 pad_04[0x18];
    u8 unk_1C[0x60];
    u8 unk_7C[0x90];
    u8 unk_10C[0xC];
    void *unk_118;
} unk_func_002E70A0_0;

void func_002D2BB0(void *);
void func_002E5790(void *, s32);
void func_002E7170(void *, s32);
void func_002F2130(void *, s32);
extern u8 D_0035E610[];

unk_func_002E70A0_0 *func_002E70A0(unk_func_002E70A0_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E610;
        if (arg0->unk_118 != NULL) {
            func_002D2BB0(arg0->unk_118);
        }
        arg0->unk_118 = NULL;
        if (arg0->unk_10C != NULL) {
            if (arg0->unk_10C != NULL) {
                if (arg0->unk_10C != NULL) {
                    func_002E7170(arg0->unk_10C, 0);
                }
            }
        }
        if (arg0->unk_1C != NULL) {
            if (arg0->unk_7C != NULL) {
                if (arg0->unk_7C != NULL) {
                    func_002E5790(arg0->unk_7C, 0);
                }
            }
        }
        func_002F2130(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
