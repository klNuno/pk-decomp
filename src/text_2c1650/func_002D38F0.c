#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    u8 *unk_44;
    u8 pad_48[0x800];
    u8 *unk_848;
} unk_func_002D38F0_0;

u8 *func_0011D008(u8 *, s32);

u8 *func_002D38F0(unk_func_002D38F0_0 *arg0) {
    u8 *ret;
    u8 *a = func_0011D008(arg0->unk_848, 10);
    u8 *b = func_0011D008(arg0->unk_848, 13);


    ret = NULL;
    if (a != arg0->unk_848 && b != arg0->unk_848) {
    if (a == NULL && b == NULL) {
        ret = arg0->unk_44;
    } else if (a == NULL) {
        ret = b;
    } else if (b == NULL) {
        ret = a;
    } else {
        ret = a < b ? a : b;
    }
    ret = ret < arg0->unk_44 ? ret : arg0->unk_44;
    }
    return ret;
}
