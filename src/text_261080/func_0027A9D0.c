#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0xA0];
    s32 unk_A8;
} unk_func_0027A9D0_0;

s32 func_00108DD0();
s32 func_00108EE8();
void func_00108F08();
void func_0011B418();
void func_002774E0();
void func_002788A0();
void func_00278C30();
extern char D_0034F260[];
extern char D_0034F280[];
extern s32 D_0036036C;

s32 func_0027A9D0(unk_func_0027A9D0_0 *arg0) {
    s32 temp;
    s32 temp2;

    temp2 = 1;
    while (!func_00108EE8(arg0)) {
        if (arg0->unk_A8 == 1) {
            temp2 = -1;
            func_0011B418(D_0034F260);
            break;
        }
        temp = (D_0036036C + 0x3F) & ~0x3F;
        if (func_00108DD0(arg0, temp, 0x5A0) < 0) {
            func_002788A0(D_0034F280);
        }
        func_002774E0(temp, arg0->unk_00, arg0->unk_04);
        func_00278C30();
    }
    func_00108F08(arg0);
    return temp2;
}
