/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} unk_func_001B7570_0;

void func_001B7570(u8 arg0, unk_func_001B7570_0 *arg1, s32 arg2) {
    switch (arg0) {
    case 0:
        arg1->unk_30 = arg2;
        break;
    case 3:
        arg1->unk_3C = arg2;
        break;
    case 2:
        arg1->unk_34 = arg2;
        break;
    case 1:
        arg1->unk_38 = arg2;
        break;
    }
}
