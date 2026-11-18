#include "common.h"

typedef struct unk_func_00176B70_1 {
    u8 pad_00[0x1C];
    void *unk_1C;
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
} unk_func_00176B70_1;

typedef struct unk_func_00176B70_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00176B70_1 **unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
    u8 pad_24[0x14];
    void *unk_38;
    s16 unk_3C;
} unk_func_00176B70_0;

void func_00119548(void *);
void func_0016CF70(s32);
void func_0018C650();
void func_0018C6E0();
extern s32 D_0035FC5C;
extern s32 D_0035FE28;

void func_00176B70(unk_func_00176B70_0 *arg0, s32 arg1) {
    u32 i;
    unk_func_00176B70_1 *temp_s4;

    if (arg0 == NULL) {
        return;
    }
    if (D_0035FC5C != 0) {
        func_0018C650();
    } else if (D_0035FE28 != 0) {
        func_0018C6E0();
    }
    if (arg1 != 0) {
        return;
    }
    i = 0;
    if (arg0->unk_3C > 0) {
        func_00119548(arg0->unk_38);
        arg0->unk_38 = NULL;
        arg0->unk_3C = 0;
    }
    for (i = 0; i < arg0->unk_22; i++) {
        if (arg0->unk_0C[i] == 1) {
            temp_s4 = arg0->unk_10[i];
            if (temp_s4 != NULL) {
                func_0016CF70(temp_s4->unk_2C);
                temp_s4->unk_2C = 0;
                temp_s4->unk_20 = 0;
                if (temp_s4->unk_1C != NULL) {
                    func_00119548(temp_s4->unk_1C);
                    temp_s4->unk_1C = NULL;
                }
            }
        }
    }
}
