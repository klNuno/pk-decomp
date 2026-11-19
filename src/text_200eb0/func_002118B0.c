/* profile: o0_p */
#include "common.h"

typedef struct unk_func_002118B0_0 {
    struct unk_func_002118B0_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
    s32 unk_10;
} unk_func_002118B0_0;

typedef struct unk_func_002118B0_1 {
    unk_func_002118B0_0 *unk_00;
} unk_func_002118B0_1;

typedef struct unk_func_002118B0_2 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_002118B0_2;

s32 fn_p_stEvalTree(s32, s32, unk_func_002118B0_2 *);

s32 func_002118B0(s32 arg0, s32 arg1, unk_func_002118B0_2 *arg2) {
    unk_func_002118B0_0 *node;
    unk_func_002118B0_0 *cur;
    unk_func_002118B0_0 *found;
    s32 i;
    s32 key;
    s32 result;
    unk_func_002118B0_1 *list;
    unk_func_002118B0_0 *first;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    list = (unk_func_002118B0_1 *)arg2->unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    key = arg2->unk_00;
    i = -1;
    found = NULL;
    i = 0;
    node = list->unk_00;
    first = node;
    while (node != NULL) {
        if (node->unk_0C == key) {
            found = node;
            break;
        }
        i++;
        node = node->unk_00;
        cur = node;
        (void)cur;
    }
    result = 0;
    if (found != NULL) {
        result = found->unk_10;
    }
    arg2->unk_00 = result;
    arg2->unk_0C = 0x2C;
    return arg1;
}
