/* profile: o0_301 */
#include "common.h"

void func_00280350(s32, f32);
s32 func_002803B0(s32, f32);
s32 func_002804C0(s32, f32);
s32 func_002807E0(s32, s32, s32);
s32 func_00280F10();
s32 func_00281990();
s32 func_00281A50();
void func_00281A90();
s32 func_00281B30();
extern s32 D_007B006C[];
extern s32 D_007B0070[];
extern s32 D_007B0074[];
extern s32 D_007B0078[];

s32 func_00280BC0(void) {
    s32 r;
    s32 i;

    func_00281A90();
    if (func_002803B0(D_007B006C[0], 400.0f) == 5) {
        if (func_00281990() == 0) {
            return 1;
        }
        if (func_00281A50() != 0) {
            if ((r = func_002807E0(0x18, 0, 0x78)) != 100) {
                return 0;
            }
            return 1;
        }
        if (func_00281990() == 0 || func_00281A50() != 0) {
            return 1;
        }
        func_00280350(D_007B0070[0], 400.0f);
        switch (func_00281B30()) {
        case 0:
            for (i = 0; i < 50; i++) {
                func_00280350(D_007B0074[0], 450.0f);
            }
            return 1;
        case 1:
            if (func_00281990() != 0) {
                return 1;
            }
            if (func_002804C0(D_007B0078[0], 400.0f) == 1) {
                return 1;
            }
            if (func_00280F10() == 2) {
                return 0;
            }
            break;
        }
    } else {
        if (func_00281990() == 0) {
            return 1;
        }
        if (func_00281A50() != 0) {
            if ((r = func_002807E0(0x18, 0, 0x78)) != 100) {
                return 0;
            }
            return 1;
        }
        func_00281A90();
    }
    return 0;
}
