/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_func_001A36C0_0;

extern s32 D_005AB780[];
extern unk_func_001A36C0_0 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 func_00197E90(s32);
extern void func_001A30D0(s32);
extern void func_001A39D0(s32);
extern void func_001A3AB0(s32);
extern void func_001A3B80(void);
extern void func_001A3BE0(u8);
extern s32 func_001A7D60(s32);
extern s32 func_001A7D80(void);
extern s32 func_001A7D90(s32);
extern s32 func_001BE470(s32);

void func_001A36C0(void) {
    u8 i;
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    u8 temp4;
    u8 temp5;

    temp5 = 0;
    temp4 = 0;
    for (temp3 = func_001A7D80(), i = 0; temp3 != 0; temp3 = func_001A7D90(temp3), ++i) {
        temp1 = func_001A7D60(temp3);
        temp2 = func_001BE470(HIE_fn_hGetSuperObjectObject(temp1)->unk_20);
        if (temp2 != D_005AB780[i]) {
            temp5 = 1;
        }
        if (D_005AB780[i] == 0) {
            temp4 = 1;
        }
    }
    if (temp4) {
        func_001A30D0(0);
    }
    if (temp4 || temp5) {
        for (temp0 = func_001A7D80(), i = 0; temp0 != 0; temp0 = func_001A7D90(temp0), ++i) {
            temp1 = func_001A7D60(temp0);
            temp2 = func_001BE470(HIE_fn_hGetSuperObjectObject(temp1)->unk_20);
            if (temp2 != D_005AB780[i]) {
                if (D_005AB780[i] != 0) {
                    func_001A39D0(D_005AB780[i]);
                }
                D_005AB780[i] = temp2;
            }
        }
        for (temp0 = func_001A7D80(), i = 0; temp0 != 0;) {
            temp1 = func_001A7D60(temp0);
            if (func_00197E90(HIE_fn_hGetSuperObjectObject(temp1)->unk_04) != 0) {
                temp0 = func_001A7D90(temp0);
                ++i;
            } else {
                func_001A3AB0(D_005AB780[i]);
                temp0 = func_001A7D90(temp0);
                ++i;
            }
        }
        func_001A3BE0(temp4);
        func_001A3B80();
    }
}
