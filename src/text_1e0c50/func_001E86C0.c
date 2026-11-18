/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001E86C0_0 {
    u8 pad_00[0x66];
    u8 unk_66;
    u8 unk_67;
} unk_func_001E86C0_0;

typedef struct unk_func_001E86C0_1 {
    unk_func_001E86C0_0 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
} unk_func_001E86C0_1;

unk_func_001E86C0_0 *func_001E8620(u8 **, u8);
void *memset(void *, s32, u32);
extern u8 D_00360120;
extern u8 D_00360124;

unk_func_001E86C0_1 *func_001E86C0(u8 **arg0, u8 arg1) {
    unk_func_001E86C0_1 *ret;
    unk_func_001E86C0_0 *node;
    u8 i;
    unk_func_001E86C0_0 *prev;
    unk_func_001E86C0_0 *first;

    ret = NULL;
    node = NULL;
    if (arg1 != 0) {
        ret = (unk_func_001E86C0_1 *)*arg0;
        memset(*arg0, 0, 8);
        *arg0 = *arg0 + 8;
    } else {
        return NULL;
    }
    ret->unk_04 = arg1;
    ret->unk_00 = func_001E8620(arg0, arg1);
    ret->unk_05 = 0;
    ret->unk_06 = 0;
    for (i = 0, node = ret->unk_00, first = node; i < arg1; i++, prev = node, node = prev + 1) {
        node->unk_66 = D_00360120;
        node->unk_67 = D_00360124;
    }
    return ret;
}
