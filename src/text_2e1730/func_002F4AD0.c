#include "common.h"

typedef struct unk_func_002F4AD0_0 {
    u8 pad_00[0x14];
    struct unk_func_002F4AD0_0 *unk_14;
} unk_func_002F4AD0_0;

s32 func_002F4AD0(unk_func_002F4AD0_0 *arg0, unk_func_002F4AD0_0 *arg1) {
    while (arg0 != NULL) {
        if (arg0 == arg1) {
            return 1;
        }
        arg0 = arg0->unk_14;
    }
    return 0;
}
