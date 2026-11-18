#include "common.h"

void func_002CDA90();
void func_002D2BB0();
void func_002F3E70();
extern char D_0035E7C0[];

typedef struct {
    void *unk_0;
    u8 pad_4[0x10];
    u8 unk_14[1];
} unk_func_002F2130_0;

unk_func_002F2130_0 *func_002F2130(unk_func_002F2130_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_0 = D_0035E7C0;
        if (arg0->unk_14 != NULL) {
            func_002CDA90(arg0->unk_14, 0);
        }
        func_002F3E70(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
