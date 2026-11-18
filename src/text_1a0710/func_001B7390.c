/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B7390_0 {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_001B7390_0;

void func_001B7390(u8 arg0, unk_func_001B7390_0 *arg1, s32 arg2) {
    switch (arg0) {
    case 0:
        arg1->unk_20 = arg2;
        break;
    case 3:
        arg1->unk_28 = arg2;
        break;
    case 2:
        arg1->unk_24 = arg2;
        break;
    case 1:
        arg1->unk_2C = arg2;
        break;
    }
}
