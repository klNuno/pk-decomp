#include "common.h"

typedef struct unk_func_00305FA0_0 {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_00305FA0_0;

void func_002D2BB0(void *);
void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400();
extern u8 D_0035E910[];
extern u8 D_0035E950[];
extern u8 D_0035EE40[];
extern u8 D_0035EE90[];

unk_func_00305FA0_0 *func_00305FA0(unk_func_00305FA0_0 *arg0, s16 arg1) {
    s32 temp;
    s32 *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EE40;
        func_00305800();
        temp = func_0030D400();
        p = func_0030D3F0(temp);
        *p = arg0->unk_08;
        func_0030D0F0(0x22, temp, 4, 0, 0, 1, 0);
        func_003057D0();
        if (arg0 != NULL) {
            arg0->unk_00 = D_0035EE90;
            if (arg0 != NULL) {
                arg0->unk_00 = D_0035E950;
                if (arg0 != NULL) {
                    arg0->unk_00 = D_0035E910;
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
