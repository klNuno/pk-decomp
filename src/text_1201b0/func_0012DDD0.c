#include "common.h"

typedef struct unk_func_0012DDD0_0 unk_func_0012DDD0_0;

typedef struct {
    u8 pad_00[8];
    unk_func_0012DDD0_0 *unk_08;
    unk_func_0012DDD0_0 *unk_0C;
    s32 unk_10;
} unk_func_0012DDD0_1;

struct unk_func_0012DDD0_0 {
    u8 pad_00[0x14];
    unk_func_0012DDD0_0 *unk_14;
    unk_func_0012DDD0_0 *unk_18;
    unk_func_0012DDD0_1 *unk_1C;
};

void func_0012DDD0(unk_func_0012DDD0_0 *arg0) {
    if (arg0->unk_14 != NULL) {
        arg0->unk_14->unk_18 = arg0->unk_18;
    }
    if (arg0->unk_18 != NULL) {
        arg0->unk_18->unk_14 = arg0->unk_14;
    }
    if (arg0->unk_1C != NULL) {
        arg0->unk_1C->unk_10--;
        if (arg0->unk_1C->unk_08 == arg0) {
            arg0->unk_1C->unk_08 = arg0->unk_14;
        }
        if (arg0->unk_1C->unk_0C == arg0) {
            arg0->unk_1C->unk_0C = arg0->unk_18;
        }
    }
    arg0->unk_14 = NULL;
    arg0->unk_18 = NULL;
    arg0->unk_1C = NULL;
}
