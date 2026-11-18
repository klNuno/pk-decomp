/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D54E0_0 {
    struct unk_func_001D54E0_0 *unk_00;
    u8 pad_04[8];
    s32 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
} unk_func_001D54E0_0;

typedef struct {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_func_001D54E0_1;

typedef struct {
    u8 pad_00[0x14];
    unk_func_001D54E0_1 *unk_14;
    u8 pad_18[0x140];
    unk_func_001D54E0_0 *unk_158;
} unk_func_001D54E0_2;

unk_func_001D54E0_2 **HIE_fn_hGetSuperObjectObject(s32);

void func_001D54E0(s32 arg0, s32 arg1) {
    unk_func_001D54E0_0 *p;
    unk_func_001D54E0_0 *next;
    s32 i;
    s32 *target;
    unk_func_001D54E0_2 *obj;
    unk_func_001D54E0_0 *first;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    i = 0;
    target = &obj->unk_14->unk_18[arg1];
    i = 0;
    i = 0;
    p = obj->unk_158;
    first = p;
    while (p != NULL) {
        if (p->unk_0C == target) {
            p->unk_1C = 1;
            return;
        }
        i++;
        next = p = p->unk_00;
        (void)next;
    }
}
