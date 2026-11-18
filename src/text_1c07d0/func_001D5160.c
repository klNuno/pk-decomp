/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D5160_0 {
    struct unk_func_001D5160_0 *unk_00;
    u8 pad_04[0x8];
    s32 *unk_0C;
    u8 pad_10[0x8];
    u32 unk_18;
} unk_func_001D5160_0;

typedef struct unk_func_001D5160_1 {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_func_001D5160_1;

typedef struct unk_func_001D5160_2 {
    u8 pad_00[0x14];
    unk_func_001D5160_1 *unk_14;
    u8 pad_18[0x140];
    unk_func_001D5160_0 *unk_158;
} unk_func_001D5160_2;

unk_func_001D5160_2 **HIE_fn_hGetSuperObjectObject(s32);

void func_001D5160(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_001D5160_2 *obj;
    s32 *p;
    s32 i;
    unk_func_001D5160_0 *elem;
    unk_func_001D5160_0 *next;
    unk_func_001D5160_0 *temp;
    unk_func_001D5160_0 *a;
    u32 m1;
    u32 m2;
    unk_func_001D5160_0 *b;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    i = 0;
    p = obj->unk_14->unk_18 + arg1;
    i = 0;
    i = 0;
    elem = obj->unk_158;
    if (elem != NULL) {
        temp = elem->unk_00;
    } else {
        temp = NULL;
    }
    a = next = temp;
    for (; elem != NULL;
         i++, elem = next, b = next = (elem != NULL ? elem->unk_00 : NULL), (void)b) {
        if (elem->unk_0C == p) {
            if (arg3 == 0) {
                m1 = 1U << arg2;
                m1 = ~m1;
                elem->unk_18 &= m1;
            } else {
                m2 = 1U << arg2;
                elem->unk_18 |= m2;
            }
        }
    }
}
