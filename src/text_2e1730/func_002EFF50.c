#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    u8 unk_5C;
    u8 pad_5D[0x1F];
    u8 unk_7C;
    u8 unk_7D;
    u8 pad_7E[6];
    u8 unk_84;
    u8 pad_85[0x23];
    u8 unk_A8;
    u8 pad_A9[3];
    u8 unk_AC[1];
} unk_func_002EFF50_0;

void func_002ECB20();
void func_002EC780();

void func_002EFF50(unk_func_002EFF50_0 *arg0) {
    func_002ECB20(arg0->unk_AC);
    if (arg0->unk_7D != 0) {
        arg0->unk_84 = 0;
        func_002EC780(arg0->unk_AC);
        arg0->unk_5C = 0;
        arg0->unk_A8 = 0;
        arg0->unk_7C = 0;
    }
}
