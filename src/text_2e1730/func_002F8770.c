#include "common.h"

typedef struct unk_func_002F8770_0 {
    void *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
} unk_func_002F8770_0;

void func_00305AB0();
void func_002D2BB0();
extern u8 D_0035EDE0[];
extern u8 D_0035EDF4[];

unk_func_002F8770_0 *func_002F8770(unk_func_002F8770_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EDE0;
        arg0->unk_08 = D_0035EDF4;
        func_00305AB0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
