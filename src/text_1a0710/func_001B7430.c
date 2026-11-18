/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_001B7430_0;

s32 func_001B7430(u8 arg0, unk_func_001B7430_0 *arg1) {
    switch (arg0) {
    case 0:
        return arg1->unk_20;
    case 3:
        return arg1->unk_28;
    case 2:
        return arg1->unk_24;
    case 1:
        return arg1->unk_2C;
    }
    return 0;
}
