#include "common.h"

typedef struct {
    u8 pad_00[4];
} unk_func_002F99F0_0;

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 pad_08[0x14];
    unk_func_002F99F0_0 unk_1C;
    u8 pad_20[0xC];
    void *unk_2C;
    void *unk_30;
    s32 unk_34;
} unk_func_002F99F0_1;

void func_002D2BB0();
void func_002F9AC0();
void func_002F9BE0();
void func_002F9EF0();
void func_003048F0();
extern u8 D_0035E9F0[];

unk_func_002F99F0_1 *func_002F99F0(unk_func_002F99F0_1 *arg0, s16 arg1) {
    unk_func_002F99F0_0 *temp;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E9F0;
        if (arg0->unk_2C != NULL) {
            func_002D2BB0(arg0->unk_2C);
            arg0->unk_2C = NULL;
            arg0->unk_04 = 0;
        }
        if (arg0->unk_30 != NULL) {
            func_002D2BB0(arg0->unk_30);
            arg0->unk_30 = NULL;
        }
        if (arg0->unk_34 != 0) {
            func_003048F0(arg0->unk_34, func_002F9BE0);
            arg0->unk_34 = 0;
        }
        func_002F9EF0(&arg0->unk_1C);
        temp = &arg0->unk_1C;
        if (temp != NULL) {
            if (temp != NULL && temp != NULL) {
                func_002F9AC0(temp, -1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
