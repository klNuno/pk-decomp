#include "common.h"

void func_00307A60(s32);
void func_0030E260(void *);
extern u8 D_0035F7AC;
extern u8 D_003607E8;
extern s32 D_003607EC;
extern u8 D_007C81D0[];
extern s32 D_007C9208[];
extern s32 D_007C9218[];
extern u8 D_007C9220[];
extern s32 D_007C9240[];

void func_00309E60(void) {
    if (D_003607E8 != 0) {
        if (D_0035F7AC == 0) {
            func_0030E260(D_007C81D0);
        } else {
            D_003607E8 = 0;
            if (D_007C9220[0] != 0 && D_003607EC != 0) {
                D_007C9240[D_007C9208[0]]--;
                D_007C9208[0] = -1;
                D_007C9218[0] = 0;
                D_007C9220[0] = 0;
            } else if (D_007C9208[0] != -1) {
                func_00307A60(D_007C9208[0]);
                D_007C9218[0] = 0;
                D_007C9208[0] = -1;
            }
        }
        D_003607E8 = 0;
    }
}
