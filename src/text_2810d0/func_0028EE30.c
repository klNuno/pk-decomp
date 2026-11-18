#include "common.h"

extern u8 D_007B7B8E[];
extern u8 D_007B7F30[];
extern u8 D_007B7F31[];
extern u8 D_007B7F54[];

void func_0028EE30(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0xF00:
        D_007B7F54[0] = arg1 != 0;
        break;
    case 0xB51:
        D_007B7F30[0] = arg1 != 0;
        break;
    case 0xB52:
        D_007B7F31[0] = arg1 != 0;
        break;
    }
    D_007B7B8E[0] = 1;
}
