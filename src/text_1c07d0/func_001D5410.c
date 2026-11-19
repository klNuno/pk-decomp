/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D5410_3 {
    struct unk_func_001D5410_3 *unk_00;
    u8 pad_04[8];
    s32 *unk_0C;
} unk_func_001D5410_3;

typedef struct unk_func_001D5410_2 {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_func_001D5410_2;

typedef struct unk_func_001D5410_1 {
    u8 pad_00[0x14];
    unk_func_001D5410_2 *unk_14;
    u8 pad_18[0x140];
    unk_func_001D5410_3 *unk_158;
} unk_func_001D5410_1;

typedef struct unk_func_001D5410_0 {
    unk_func_001D5410_1 *unk_00;
} unk_func_001D5410_0;

unk_func_001D5410_0 *HIE_fn_hGetSuperObjectObject(s32);

s32 func_001D5410(s32 arg0, s32 arg1) {
    s32 *temp0;
    s32 temp1;
    unk_func_001D5410_3 *temp2;
    unk_func_001D5410_3 *temp3;
    unk_func_001D5410_1 *temp4;
    unk_func_001D5410_3 *temp5;

    temp4 = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
    temp1 = 0;
    temp0 = &temp4->unk_14->unk_18[arg1];
    temp1 = 0;
    temp1 = 0;
    temp5 = temp3 = temp4->unk_158;
    while (temp3 != NULL) {
        if (temp3->unk_0C == temp0) {
            return 1;
        }
        temp1++;
        temp2 = temp3 = temp3->unk_00;
        (void)temp2;
    }
    return 0;
}
