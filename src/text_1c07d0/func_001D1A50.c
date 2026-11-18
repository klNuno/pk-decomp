/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D1A50_0 {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_001D1A50_0;

u8 *func_001387B0(unk_func_001D1A50_0 *);
void func_00150ED0(u8 *);
void func_00153920(u8 *, s32, u8 *);

void func_001D1A50(unk_func_001D1A50_0 *arg0, s32 arg1) {
    s32 temp0;
    s32 temp1;
    u8 *temp2;
    u8 *temp3;
    u8 *temp4;
    u8 *temp5;

    if (arg0->unk_0C & 0x80) {
        temp0 = 1;
    } else {
        temp0 = 0;
    }
    if (temp0 == 0) {
        temp2 = (u8 *)arg0 + 0xE0;
        func_00153920(temp2, arg1, temp2);
        func_00150ED0(temp2);
        temp3 = (u8 *)arg0 + 0x80;
        func_00153920(temp3, arg1, temp3);
        func_00150ED0(temp3);
        if (arg0->unk_0C & 4) {
            temp1 = 1;
        } else {
            temp1 = 0;
        }
        if (temp1 != 0) {
            temp4 = func_001387B0(arg0) + 0xB0;
            func_00153920(temp4, arg1, temp4);
            func_00150ED0(temp4);
            temp5 = func_001387B0(arg0) + 0x110;
            func_00153920(temp5, arg1, temp5);
            func_00150ED0(temp5);
        }
    }
}
