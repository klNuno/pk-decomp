#include "common.h"

class unk_func_003068F0_1 {
public:
    virtual void unk_vf08(s32);
};

typedef struct unk_func_003068F0_0 {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    u8 pad_0C[0x10];
    unk_func_003068F0_1 *unk_1C;
} unk_func_003068F0_0;

extern "C" {
void func_002D2BB0(void *);
void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400();
extern u8 D_0035E910[];
extern u8 D_0035E950[];
extern u8 D_0035EE90[];
extern u8 D_0035EEE0[];

unk_func_003068F0_0 *func_003068F0(unk_func_003068F0_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        s32 temp;
        arg0->unk_00 = D_0035EEE0;
        if (arg0->unk_1C == 0) {
            if (arg0->unk_1C != 0) {
                arg0->unk_1C->unk_vf08(1);
            }
            arg0->unk_1C = 0;
        }
        func_00305800();
        temp = func_0030D400();
        {
            s32 *temp2 = func_0030D3F0(temp);
            *temp2 = arg0->unk_08;
        }
        func_0030D0F0(0x52, temp, 4, 0, 0, 0, arg0->unk_08);
        func_003057D0();
        if (arg0 != 0) {
            arg0->unk_00 = D_0035EE90;
            if (arg0 != 0) {
                arg0->unk_00 = D_0035E950;
                if (arg0 != 0) {
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
}
