#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} unk_func_00316850_0;

typedef struct {
    s32 unk_00;
    unk_func_00316850_0 *unk_04;
    void *unk_08;
} unk_func_00316850_1;

void *malloc();
void *memset();
extern u8 D_0035F1F8[];

unk_func_00316850_1 *func_00316850(unk_func_00316850_1 *arg0, s32 arg1) {
    arg0->unk_08 = D_0035F1F8;
    if (arg1 != 0) {
        arg0->unk_00 = arg1;
        arg0->unk_04 = malloc(arg0->unk_00 * sizeof(unk_func_00316850_0));
        memset(arg0->unk_04, 0, arg0->unk_00 * sizeof(unk_func_00316850_0));
    } else {
        arg0->unk_00 = 0;
        arg0->unk_04 = 0;
    }
    return arg0;
}
