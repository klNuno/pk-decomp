/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001B0670_0 {
    s32 unk_00;
    u8 pad_04[0x10];
    void *unk_14;
} unk_func_001B0670_0;

typedef struct unk_func_001B0670_1 {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x24];
} unk_func_001B0670_1;

typedef struct unk_func_001B0670_2 {
    u32 unk_00;
    u8 pad_04[4];
} unk_func_001B0670_2;

typedef struct unk_func_001B0670_3 {
    unk_func_001B0670_2 *unk_00;
} unk_func_001B0670_3;

unk_func_001B0670_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001B0670_1 *func_00197860(s32);
u8 *func_00199130(s32);
u8 func_001B0960(void *);
unk_func_001B0670_3 *func_001B6BB0(u8, s32);
void func_001B7390(u8, void *, s32);

#define UNK_CALL(n)                                     \
    temp = func_001B6BB0(n, arg0);                      \
    if (temp != NULL) {                                 \
        temp2 = &temp->unk_00[temp4];                   \
        temp6 = 0;                                      \
        func_001B7390(n, temp3, (s32)temp2->unk_00);    \
    } else {                                            \
        func_001B7390(n, temp3, 0);                     \
    }

void func_001B0670(s32 arg0)
{
    unk_func_001B0670_3 *temp = NULL;
    unk_func_001B0670_2 *temp2;
    void *temp3;
    s16 temp4;
    unk_func_001B0670_1 *temp5;
    s32 temp6;
    unk_func_001B0670_1 **temp7;
    s32 temp8;

    temp3 = HIE_fn_hGetSuperObjectObject(arg0)->unk_14;
    if (temp3 == NULL) {
        return;
    }
    temp5 = func_00197860(HIE_fn_hGetSuperObjectObject(arg0)->unk_00);
    if (temp5->unk_50 != NULL && func_001B0960(temp5->unk_50) == 1) {
        return;
    }
    temp7 = (unk_func_001B0670_1 **)(func_00199130(HIE_fn_hGetSuperObjectObject(arg0)->unk_00) + 0x10);
    temp4 = (s16)(temp5 - *temp7);
    temp8 = 0;
    UNK_CALL(0)
    UNK_CALL(2)
    UNK_CALL(3)
    UNK_CALL(1)
}
